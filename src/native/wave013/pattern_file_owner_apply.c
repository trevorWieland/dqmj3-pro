#include "pattern_file_owner_services.h"
#include "pattern_file_owner_locale.h"

unsigned int fn_006d40e4(PatternFileOwner *owner, unsigned int *flags,
    const unsigned short *const *candidates, unsigned int count)
{
    if (owner->storage == (void *)0)
        return 0xd820ebf8u;
    if (flags == (void *)0 || candidates == (void *)0)
        return 0xe0e0ebf6u;
    return count <= 16 ? 0 : 0xe0e0ebecu;
}

static void file_path(unsigned short *path, unsigned char file)
{
    static const unsigned short prefix[] = {'n','g','w','o','r','d',':','/'};
    unsigned int position = 0;
    for (; position < sizeof(prefix) / sizeof(prefix[0]); ++position)
        path[position] = prefix[position];
    unsigned short digits[3];
    unsigned int count = 0;
    do {
        digits[count++] = (unsigned short)('0' + file % 10);
        file = (unsigned char)(file / 10);
    } while (file != 0);
    while (count != 0)
        path[position++] = digits[--count];
    path[position++] = '.';
    path[position++] = 't';
    path[position++] = 'x';
    path[position++] = 't';
    path[position] = 0;
}

static void release_file(const PatternFileOwnerServices *services, PatternOwnerOpenedFile *file)
{
    if (file->stream != (void *)0) {
        if (file->tagged != 0)
            services->failure(services->context, 0);
        services->release(services->context, file);
        file->stream = (void *)0;
    }
}

static unsigned int apply_file(FixedArena *arena, PatternFileOwner *owner, unsigned int *flags,
    PatternRuleStream *stream, const unsigned short *const *candidates, unsigned int count)
{
    PatternFileRuleView view = {0};
    view.pattern.opaque_prefix[26] = owner->bypass_at_sign;
    view.pattern.bit_index = (signed char)owner->file_id;
    view.pattern.scratch = owner->scratch;
    view.file_buffer = owner->file_buffer;
    view.candidate_storage = owner->candidate_storage;
    if (arena != (void *)0)
        return pattern_process_file_rules(arena, &view, flags, stream, candidates, count);
    return fn_004c4104(&view, flags, stream, candidates, count);
}

unsigned int pattern_owner_apply(FixedArena *arena, PatternFileOwner *owner, unsigned int *flags,
    unsigned int selection_input, const unsigned short *const *candidates, unsigned int count)
{
    unsigned int result = fn_006d40e4(owner, flags, candidates, count);
    if ((int)result < 0)
        return result;
    for (unsigned int index = 0; index < count; ++index)
        flags[index] = 0;
    unsigned char files[8];
    int file_count;
    fn_004c46e8(owner, files, &file_count, selection_input);
    const PatternFileOwnerServices *services = pattern_owner_services();
    for (int index = 0; index < file_count; ++index) {
        unsigned short path[64];
        file_path(path, files[index]);
        PatternOwnerOpenedFile file = {(void *)0, 0};
        int opened = services->open(services->context, path, &file);
        if (opened < 0) {
            release_file(services, &file);
            return (unsigned int)opened;
        }
        owner->file_id = files[index];
        result = apply_file(arena, owner, flags, file.stream, candidates, count);
        release_file(services, &file);
        if ((int)result < 0)
            return result;
    }
    return 0;
}

unsigned int fn_004c3e74(PatternFileOwner *owner, unsigned int *flags,
    unsigned int selection_input, const unsigned short *const *candidates, unsigned int count)
{
    return pattern_owner_apply((void *)0, owner, flags, selection_input, candidates, count);
}
