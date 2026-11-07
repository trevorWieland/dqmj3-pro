#include "pattern_file_owner_game_services.h"

void fn_00246e68(PatternGameFilterOwner *filter)
{
    filter->owner = (void *)0;
}

int fn_00246e00(PatternGameFilterOwner *filter)
{
    if (filter->owner == (void *)0) {
        const PatternGameFilterServices *services = pattern_game_filter_services();
        PatternFileOwner *fresh = services->allocate_owner(services->context);
        if (fresh != (void *)0)
            fresh = fn_004c4358(fresh);
        PatternFileOwner *prior = filter->owner;
        if (prior != fresh) {
            if (prior != (void *)0)
                prior->operations->destroy(prior);
            filter->owner = fresh;
        }
        fn_004c3e08(filter->owner);
    }
    return 1;
}

void fn_00246e74(PatternGameFilterOwner *filter)
{
    if (filter->owner != (void *)0) {
        fn_004c42fc(filter->owner);
        PatternFileOwner *owner = filter->owner;
        if (owner != (void *)0) {
            owner->operations->destroy(owner);
            filter->owner = (void *)0;
        }
    }
}
