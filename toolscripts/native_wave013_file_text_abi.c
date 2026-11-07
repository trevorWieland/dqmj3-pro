#include "../src/native/wave013/pattern_file_view.h"
#include "../src/native/wave013/pattern_character_maps.h"

const unsigned int pattern_text_layout_values[] = {
    sizeof(void *), sizeof(PatternRulePrefix), sizeof(PatternFileRuleView),
    __builtin_offsetof(PatternFileRuleView, pattern), __builtin_offsetof(PatternFileRuleView, file_buffer),
    __builtin_offsetof(PatternFileRuleView, candidate_storage), sizeof(PatternRuleStream),
    sizeof(PatternRuleStreamOperations), __builtin_offsetof(PatternRuleStreamOperations, byte_size),
    __builtin_offsetof(PatternRuleStreamOperations, read_bytes), sizeof(PatternCharacterPair),
    sizeof(pattern_small_kana)/sizeof(PatternCharacterPair),
    sizeof(pattern_halfwidth_voiced)/sizeof(PatternCharacterPair),
    sizeof(pattern_halfwidth_semivoiced)/sizeof(PatternCharacterPair),
    sizeof(pattern_halfwidth_single)/sizeof(PatternCharacterPair), sizeof(unsigned short)
};
