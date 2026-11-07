#include "pattern_tokens.h"

typedef struct PatternPropertyName {
    const unsigned short *name;
    unsigned int length;
} PatternPropertyName;

static const PatternPropertyName property_names[132] = {
    [4] = {u"Lower}", 6},
    [5] = {u"Upper}", 6},
    [6] = {u"ASCII}", 6},
    [7] = {u"Alpha}", 6},
    [8] = {u"Alnum}", 6},
    [9] = {u"Punct}", 6},
    [10] = {u"Graph}", 6},
    [11] = {u"Print}", 6},
    [12] = {u"Blank}", 6},
    [13] = {u"Cntrl}", 6},
    [14] = {u"XDigit}", 7},
    [15] = {u"InLatin-1Supplement}", 20},
    [16] = {u"InLatinExtended-A}", 18},
    [17] = {u"InIPAExtensions}", 16},
    [18] = {u"InSpacingModifierLetters}", 25},
    [19] = {u"InCombiningDiacriticalMarks}", 28},
    [20] = {u"InGreek}", 8},
    [21] = {u"InCyrillic}", 11},
    [22] = {u"InArmenian}", 11},
    [23] = {u"InHebrew}", 9},
    [24] = {u"InArabic}", 9},
    [25] = {u"InSyriac}", 9},
    [26] = {u"InThaana}", 9},
    [27] = {u"InDevanagari}", 13},
    [28] = {u"InBengali}", 10},
    [29] = {u"InGurmukhi}", 11},
    [30] = {u"InGujarati}", 11},
    [31] = {u"InOriya}", 8},
    [32] = {u"InTamil}", 8},
    [33] = {u"InTelugu}", 9},
    [34] = {u"InKannada}", 10},
    [35] = {u"InMalayalam}", 12},
    [36] = {u"InSinhala}", 10},
    [37] = {u"InThai}", 7},
    [38] = {u"InLao}", 6},
    [39] = {u"InTibetan}", 10},
    [40] = {u"InMyanmar}", 10},
    [41] = {u"InGeorgian}", 11},
    [42] = {u"InHangulJamo}", 13},
    [43] = {u"InEthiopic}", 11},
    [44] = {u"InCherokee}", 11},
    [45] = {u"InUnifiedCanadianAboriginalSyllabics}", 37},
    [46] = {u"InOgham}", 8},
    [47] = {u"InRunic}", 8},
    [48] = {u"InKhmer}", 8},
    [49] = {u"InMongolian}", 12},
    [50] = {u"InLatinExtendedAdditional}", 26},
    [51] = {u"InGreekExtended}", 16},
    [52] = {u"InGeneralPunctuation}", 21},
    [53] = {u"InSuperscriptsandSubscripts}", 28},
    [54] = {u"InCurrencySymbols}", 18},
    [55] = {u"InLetterlikeSymbols}", 20},
    [56] = {u"InNumberForms}", 14},
    [57] = {u"InArrows}", 9},
    [58] = {u"InMathematicalOperators}", 24},
    [59] = {u"InMiscellaneousTechnical}", 25},
    [60] = {u"InControlPictures}", 18},
    [61] = {u"InOpticalCharacterRecognition}", 30},
    [62] = {u"InEnclosedAlphanumerics}", 24},
    [63] = {u"InBoxDrawing}", 13},
    [64] = {u"InBlockElements}", 16},
    [65] = {u"InGeometricShapes}", 18},
    [66] = {u"InMiscellaneousSymbols}", 23},
    [67] = {u"InDingbats}", 11},
    [68] = {u"InBraillePatterns}", 18},
    [69] = {u"InCJKRadicalsSupplement}", 24},
    [70] = {u"InKangxiRadicals}", 17},
    [71] = {u"InIdeographicDescriptionCharacters}", 35},
    [72] = {u"InCJKSymbolsandPunctuation}", 27},
    [73] = {u"InHiragana}", 11},
    [74] = {u"InKatakana}", 11},
    [75] = {u"InBopomofo}", 11},
    [76] = {u"InHangulCompatibilityJamo}", 26},
    [77] = {u"InKanbun}", 9},
    [78] = {u"InBopomofoExtended}", 19},
    [79] = {u"InEnclosedCJKLettersandMonths}", 30},
    [80] = {u"InCJKCompatibility}", 19},
    [81] = {u"InCJKUnifiedIdeographsExtensionA}", 33},
    [82] = {u"InCJKUnifiedIdeographs}", 23},
    [83] = {u"InYiSyllables}", 14},
    [84] = {u"InYiRadicals}", 13},
    [85] = {u"InHangulSyllables}", 18},
    [86] = {u"InHighSurrogates}", 17},
    [87] = {u"InHighPrivateUseSurrogates}", 27},
    [88] = {u"InLowSurrogates}", 16},
    [89] = {u"InCJKCompatibilityIdeographs}", 29},
    [90] = {u"InAlphabeticPresentationForms}", 30},
    [91] = {u"InArabicPresentationForms-A}", 28},
    [92] = {u"InCombiningHalfMarks}", 21},
    [93] = {u"InCJKCompatibilityForms}", 24},
    [94] = {u"InSmallFormVariants}", 20},
    [95] = {u"InHalfwidthandFullwidthForms}", 29},
    [96] = {u"InSpecials}", 11},
    [97] = {u"IsL}", 4},
    [98] = {u"IsLl}", 5},
    [99] = {u"IsLu}", 5},
    [100] = {u"IsLt}", 5},
    [101] = {u"IsLm}", 5},
    [102] = {u"IsLo}", 5},
    [103] = {u"IsM}", 4},
    [104] = {u"IsMn}", 5},
    [105] = {u"IsMc}", 5},
    [106] = {u"IsMe}", 5},
    [107] = {u"IsZ}", 4},
    [108] = {u"IsZs}", 5},
    [109] = {u"IsZl}", 5},
    [110] = {u"IsZp}", 5},
    [111] = {u"IsS}", 4},
    [112] = {u"IsSm}", 5},
    [113] = {u"IsSc}", 5},
    [114] = {u"IsSk}", 5},
    [115] = {u"IsSo}", 5},
    [116] = {u"IsN}", 4},
    [117] = {u"IsNd}", 5},
    [118] = {u"IsNl}", 5},
    [119] = {u"IsNo}", 5},
    [120] = {u"IsP}", 4},
    [121] = {u"IsPd}", 5},
    [122] = {u"IsPs}", 5},
    [123] = {u"IsPe}", 5},
    [124] = {u"IsPc}", 5},
    [125] = {u"IsPo}", 5},
    [126] = {u"IsC}", 4},
    [127] = {u"IsCc}", 5},
    [128] = {u"IsCf}", 5},
    [129] = {u"IsCo}", 5},
    [130] = {u"IsCn}", 5},
    [131] = {u"IsCs}", 5},
};

int fn_001006b6(const unsigned short *left, const unsigned short *right, unsigned int length)
{
    while (length != 0) {
        unsigned int first = *left;
        unsigned int second = *right;
        if (first == 0 || first != second)
            return (int)first - (int)second;
        ++left;
        ++right;
        --length;
    }
    return 0;
}

unsigned int fn_004c3904(const unsigned short *text, unsigned int length, unsigned int *consumed)
{
    for (unsigned int index = 0; index < 132; ++index) {
        const PatternPropertyName *property = &property_names[index];
        if (property->name != (void *)0 && property->length <= length &&
            fn_001006b6(text, property->name, property->length) == 0) {
            *consumed = property->length;
            return index;
        }
    }
    return 0x85;
}
