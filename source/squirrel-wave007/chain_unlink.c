#include "array_release.h"

void fn_0024d73c(SqRef **head, SqRef *reference)
{
    if (reference->previous)
        reference->previous->next = reference->next;
    else
        *head = reference->next;
    if (reference->next)
        reference->next->previous = reference->previous;
    reference->next = 0;
    reference->previous = 0;
}
