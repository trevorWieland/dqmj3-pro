#include "pattern_file_owner_services.h"

int fn_004c4068(PatternFileOwner *owner)
{
    const PatternFileOwnerServices *services = pattern_owner_services();
    if (services->resource_work_required(services->context) > 0x800)
        return (int)0xd820ebecu;
    int result = services->mount(services->context, 0x000400db00010302ull, owner->resource_work, 0x800);
    if (result >= 0) {
        owner->mounted = 1;
        result = 0;
    }
    return result;
}
