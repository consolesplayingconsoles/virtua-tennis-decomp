#!/usr/bin/env python3
"""Read-only lower-bound inventory of unfinished source naming.

Run from the repository root. Counts identify remaining work; a zero count
does not establish that every name has been correctly understood.
Generated temporaries are counted once per name per file, not per function.
"""
import re
from pathlib import Path


def main():
    functions = [line.split() for line in Path('functions.txt').read_text().splitlines()
                 if line.startswith('F ')]
    unnamed = [row for row in functions if row[3].startswith('FUN_')]
    generic_symbols = set()
    for filename in ('globals.txt', 'symbols.txt'):
        for line in Path(filename).read_text().splitlines():
            parts = line.split()
            if len(parts) == 2 and re.fullmatch(r'g_(?:0c|8c)[0-9a-f]+', parts[1], re.I):
                generic_symbols.add(parts[1])

    # Strip literals and comments together, so comment delimiters inside a
    # string cannot hide actual code from the inventory.
    noncode = re.compile(r'/\*.*?\*/|//[^\n]*|"(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'', re.S)
    alias_files = temporary_files = 0
    aliases = set()
    temporaries = 0
    source_globals = set()
    for path in sorted(Path('src').glob('*.c')):
        source = noncode.sub(' ', path.read_text())
        file_aliases = set(re.findall(r'\b(?:thunk_)?FUN_[0-9a-f]+\b', source, re.I))
        file_temporaries = set(re.findall(
            r'\b(?:[atuf]\d+|[vw]\d+_\d+|[RF]\d+|stk)\b', source))
        source_globals.update(re.findall(r'\bg_(?:0c|8c)[0-9a-f]+\b', source, re.I))
        aliases.update(file_aliases)
        alias_files += bool(file_aliases)
        temporary_files += bool(file_temporaries)
        temporaries += len(file_temporaries)

    print('Unidentified function entries: %d' % len(unnamed))
    for row in unnamed:
        print('  %s %s (%s bytes)' % (row[1], row[3], row[2]))
    print('Generic address-based globals in name tables: %d' % len(generic_symbols))
    print('Generic address-based globals referenced or declared in C: %d' % len(source_globals))
    print('Generic function aliases referenced or declared in C: %d in %d files' % (len(aliases), alias_files))
    print('Generated temporaries, file/name pairs (lower bound): %d in %d files' % (temporaries, temporary_files))
    print('Names require evidence; replacing placeholders mechanically does not complete relabeling.')


if __name__ == '__main__':
    main()
