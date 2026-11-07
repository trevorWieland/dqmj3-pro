#ifndef DQMJ3_WAVE013_FILE_OWNER_GAME_SERVICES_H
#define DQMJ3_WAVE013_FILE_OWNER_GAME_SERVICES_H

#include "pattern_file_owner_game_view.h"

typedef struct PatternGameFilterServices {
    PatternFileOwner *(*allocate_owner)(void *context);
    void *context;
} PatternGameFilterServices;

int pattern_game_filter_bind_services(const PatternGameFilterServices *services);
const PatternGameFilterServices *pattern_game_filter_services(void);

#endif
