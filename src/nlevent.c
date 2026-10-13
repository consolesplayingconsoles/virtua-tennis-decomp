/* The NAOMI library's event list (set_event, nlCloseEvent, nlExecuteEvent), under the names functions.txt gives them. Range 8C01092C-8C010B8A. */
#include "event.h"

void *nlMalloc(unsigned int size);
void nlFree(void *p);

Event *set_event(unsigned int size, EventFunc func)
{
    Event *e;

    if (size < 20)
        size = 20;
    if ((e = nlMalloc(size)) != 0) {
        if (gEventList.tail == 0)
            gEventList.head = e;
        else
            gEventList.tail->next = e;
        e->prev = gEventList.tail;
        e->next = 0;
        e->func = func;
        e->alloc = 0;
        e->name = str_set_event;
        gEventList.tail = e;
        gEventCount++;
    }
    return e;
}

void nlCloseEvent(Event *e)
{
    void **a, **an;

    if (e == 0)
        return;
    if (e->next == 0)
        gEventList.tail = e->prev;
    else
        e->next->prev = e->prev;
    if (e->prev == 0)
        gEventList.head = e->next;
    else
        e->prev->next = e->next;
    if (e == gEventList.nextRun)
        gEventList.nextRun = e->next;
    for (a = e->alloc; a; a = an) {
        an = *a;
        nlFree(a);
        gEventAllocCount--;
    }
    nlFree(e);
    gEventCount--;
}

void nlExecuteEvent(void)
{
    Event *e;

    gEventList.nextRun = gEventList.head;
    while ((e = gEventList.nextRun) != 0) {
        gEventList.nextRun = e->next;
        e->func(e);
    }
}
