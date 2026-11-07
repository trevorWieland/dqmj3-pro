#include "pattern_file_owner_game_services.h"

static const PatternGameFilterServices *active_game_services;

int pattern_game_filter_bind_services(const PatternGameFilterServices *services)
{
    if (services == (void *)0 || services->allocate_owner == (void *)0)
        return 0;
    active_game_services = services;
    return 1;
}

const PatternGameFilterServices *pattern_game_filter_services(void)
{
    return active_game_services;
}
