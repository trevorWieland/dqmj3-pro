#include "pattern_file_owner_locale.h"

static const PatternOwnerLocaleServices *active_locale;

int pattern_owner_bind_locale(const PatternOwnerLocaleServices *services)
{
    if (services == (void *)0 || services->read_region == (void *)0 ||
        services->read_language == (void *)0 || services->read_failure == (void *)0)
        return 0;
    active_locale = services;
    return 1;
}

static unsigned int current_region(void)
{
    unsigned char region = 0;
    active_locale->read_region(active_locale->context, &region);
    return region;
}

unsigned int fn_00453b34(void)
{
    unsigned char language = 0;
    int result = active_locale->read_language(active_locale->context, &language);
    if (result < 0)
        active_locale->read_failure(active_locale->context, result);
    unsigned int region = current_region();
    unsigned int allowed;
    unsigned int fallback;
    switch (region) {
    case 0: allowed = 1; fallback = 0; break;
    case 1: allowed = 0x226; fallback = 1; break;
    case 2: allowed = 0x73e; fallback = 1; break;
    case 4: allowed = 0x40; fallback = 6; break;
    case 5: allowed = 0x80; fallback = 7; break;
    case 6: allowed = 0x800; fallback = 11; break;
    default: return language;
    }
    unsigned int bit = language < 32 ? 1u << language : 0;
    return (allowed & bit) != 0 ? language : fallback;
}

static void two_files(unsigned char *files, int *count, unsigned char primary, unsigned char fallback)
{
    files[0] = primary;
    files[1] = fallback;
    ++*count;
}

void fn_004c46e8(void *owner, unsigned char *files, int *count, unsigned int selection_input)
{
    (void)owner;
    (void)selection_input;
    *count = 1;
    switch (current_region()) {
    case 0:
        if (fn_00453b34() == 0) {
            files[0] = 0;
            return;
        }
        break;
    case 1:
        switch (fn_00453b34()) {
        case 1: files[0] = 1; return;
        case 2: two_files(files, count, 2, 1); return;
        case 5: two_files(files, count, 3, 1); return;
        case 9: two_files(files, count, 14, 1); return;
        }
        break;
    case 2:
        switch (fn_00453b34()) {
        case 1: files[0] = 4; return;
        case 2: two_files(files, count, 5, 4); return;
        case 3: two_files(files, count, 6, 4); return;
        case 4: two_files(files, count, 7, 4); return;
        case 5: two_files(files, count, 8, 4); return;
        case 8: two_files(files, count, 9, 4); return;
        case 9: two_files(files, count, 12, 4); return;
        case 10: two_files(files, count, 13, 4); return;
        }
        break;
    case 4:
        if (fn_00453b34() == 6) {
            files[0] = 11;
            return;
        }
        break;
    case 5:
        if (fn_00453b34() == 7) {
            files[0] = 10;
            return;
        }
        break;
    case 6:
        switch (fn_00453b34()) {
        case 1: files[0] = 16; return;
        case 11: files[0] = 15; return;
        }
        break;
    }
    *count = 0;
}
