#include "pattern_file_view.h"

static void apply_line(FixedArena *arena, PatternFileRuleView *rule, unsigned int *flags,
    const unsigned short *pattern, unsigned int length, const unsigned short *const *candidates, unsigned int count)
{
    if (arena != (void *)0)
        pattern_process_candidates(arena, &rule->pattern, flags, pattern, length, candidates, count);
    else
        fn_004c3c20(&rule->pattern, flags, pattern, length, candidates, count);
}

static unsigned int read_file_rules(FixedArena *arena, PatternFileRuleView *rule, unsigned int *flags,
    PatternRuleStream *stream, const unsigned short *const *candidates, unsigned int count)
{
    const unsigned int missing_candidate = 0xe0e0ebf6u;
    const unsigned int read_error = 0xd820ebecu;
    const unsigned int format_error = 0xf820ebf0u;
    const unsigned short *normalized[16];
    for (unsigned int index = 0; index < 16; ++index)
        normalized[index] = rule->candidate_storage + index * 64;
    for (unsigned int index = 0; index < count; ++index) {
        if (candidates[index] == (void *)0)
            return missing_candidate;
        fn_004c446c(rule->candidate_storage + index * 64, 64, candidates[index]);
    }
    if (rule->pattern.opaque_prefix[26] == 0) {
        unsigned int bit = (unsigned char)rule->pattern.bit_index;
        unsigned int mask = bit < 32 ? 1u << bit : 0;
        for (unsigned int index = 0; index < count; ++index) {
            if (fn_004c4420(rule, normalized[index], 64))
                flags[index] |= mask;
        }
    }
    unsigned int bytes = stream->operations->byte_size(stream);
    if (bytes < 2 || ((bytes & 0x80000000u) == 0 && bytes > 0x4000))
        return read_error;
    if (stream->operations->read_bytes(stream, rule->file_buffer, bytes) != bytes)
        return read_error;
    if (rule->file_buffer[0] != 0xfeff)
        return format_error;
    unsigned int position = 1;
    unsigned int line_start = 1;
    if (bytes > 2) {
        do {
            unsigned short value = rule->file_buffer[position];
            if (value == 10) {
                ++position;
                apply_line(arena, rule, flags, rule->file_buffer + line_start,
                    position - line_start - 1, normalized, count);
                line_start = position;
            } else if (value == 0) {
                return format_error;
            }
            ++position;
        } while (bytes > position * 2);
        if (position - 1 == line_start)
            return 0;
    }
    apply_line(arena, rule, flags, rule->file_buffer + line_start, position - line_start,
        normalized, count);
    return 0;
}

unsigned int fn_004c4104(PatternFileRuleView *rule, unsigned int *flags, PatternRuleStream *stream,
    const unsigned short *const *candidates, unsigned int count)
{
    return read_file_rules((void *)0, rule, flags, stream, candidates, count);
}

unsigned int pattern_process_file_rules(FixedArena *arena, PatternFileRuleView *rule, unsigned int *flags,
    PatternRuleStream *stream, const unsigned short *const *candidates, unsigned int count)
{
    return read_file_rules(arena, rule, flags, stream, candidates, count);
}
