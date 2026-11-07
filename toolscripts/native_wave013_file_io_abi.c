#include "native_wave013_file_io_fixture.h"

const unsigned int pattern_file_layout_values[] = {
    sizeof(void *), sizeof(PatternFileRuleView), __builtin_offsetof(PatternFileRuleView, file_buffer),
    __builtin_offsetof(PatternFileRuleView, candidate_storage), sizeof(PatternMemoryProvider),
    __builtin_offsetof(PatternMemoryProvider, stream), __builtin_offsetof(PatternMemoryProvider, data),
    __builtin_offsetof(PatternMemoryProvider, advertised_size), __builtin_offsetof(PatternMemoryProvider, size_calls),
    __builtin_offsetof(PatternMemoryProvider, read_calls), __builtin_offsetof(PatternMemoryProvider, last_request),
    __builtin_offsetof(PatternMemoryProvider, copied_bytes), __builtin_offsetof(PatternMemoryProvider, last_destination),
    sizeof(PatternRuleStream), sizeof(PatternRuleStreamOperations),
    __builtin_offsetof(PatternRuleStreamOperations, byte_size), __builtin_offsetof(PatternRuleStreamOperations, read_bytes),
    64 * sizeof(unsigned short), 16, 0x4000
};
