#ifndef DQMJ3_WAVE013_FILE_OWNER_LOCALE_H
#define DQMJ3_WAVE013_FILE_OWNER_LOCALE_H

/* The system services this unit consumes; see platform/port/README.md. */
#include "../../../platform/port/system.h"

typedef struct PatternOwnerLocaleServices {
    int (*read_region)(void *context, unsigned char *region);
    int (*read_language)(void *context, unsigned char *language);
    void (*read_failure)(void *context, int result);
    void *context;
} PatternOwnerLocaleServices;

int pattern_owner_bind_locale(const PatternOwnerLocaleServices *services);
unsigned int fn_00453b34(void);
void fn_004c46e8(void *owner, unsigned char *files, int *count, unsigned int selection_input);

#endif
