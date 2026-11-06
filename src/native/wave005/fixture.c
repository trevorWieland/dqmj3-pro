#include "vm_views.h"

typedef struct {
    VmRefNode node;
    VmU32 release_calls;
} FixtureNode;

void fixture_release(VmRefNode *node)
{
    ((FixtureNode *)node)->release_calls++;
}
