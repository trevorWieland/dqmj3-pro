#include "vm_views.h"

void fn_0019e8c4(VmRefNode **head, VmRefNode *node)
{
    node->previous = 0;
    node->next = *head;
    if (*head) {
        (*head)->previous = node;
    }
    *head = node;
}
