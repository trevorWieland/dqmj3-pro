#include "pattern_nfa.h"

int pattern_nfa_primary(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end)
{
    switch (builder->cursor->kind) {
    case 0:
        return fn_004c1970(builder, result, start, end);
    case 1:
        return fn_004c15d4(builder, result, start, end);
    case 2:
        return fn_004c13f8(builder, result, start, end);
    case 3:
        return fn_004c1510(builder, result, start, end);
    case 4:
        return fn_004c1658(builder, result, start, end);
    case 5:
        return fn_004c15e4(builder, result, start, end);
    case 6:
        return fn_004c15e4(builder, result, start, end);
    case 7:
        return fn_004c1c5c(builder, result, start, end);
    case 8:
        return fn_004c1ba0(builder, result, start, end);
    case 9:
        return fn_004c1a9c(builder, result, start, end);
    case 10:
        return fn_004c1660(builder, result, start, end);
    case 11:
        return fn_004c1b08(builder, result, start, end);
    case 12:
        return fn_004c1b08(builder, result, start, end);
    case 13:
        return fn_004c1b08(builder, result, start, end);
    case 14:
        return fn_004c1b08(builder, result, start, end);
    case 15:
        return fn_004c1b08(builder, result, start, end);
    case 16:
        return fn_004c1b08(builder, result, start, end);
    case 17:
        return fn_004c1b10(builder, result, start, end);
    case 18:
        return fn_004c15d4(builder, result, start, end);
    default:
        return 8;
    }
}

int pattern_nfa_continuation(PatternNfaBuilder *builder, NfaState **result, NfaState **start, NfaState **end)
{
    switch (builder->cursor->kind) {
    case 0:
        return fn_004c116c(builder, result, start, end);
    case 1:
        return fn_004c116c(builder, result, start, end);
    case 2:
        return fn_004c116c(builder, result, start, end);
    case 3:
        return fn_004c116c(builder, result, start, end);
    case 4:
        return fn_004c116c(builder, result, start, end);
    case 5:
        return fn_004c116c(builder, result, start, end);
    case 6:
        return fn_004c116c(builder, result, start, end);
    case 7:
        return fn_004c116c(builder, result, start, end);
    case 8:
        return fn_004c116c(builder, result, start, end);
    case 9:
        return fn_004c116c(builder, result, start, end);
    case 10:
        return fn_004c116c(builder, result, start, end);
    case 11:
        return fn_004c14a8(builder, result, start, end);
    case 12:
        return fn_004c1674(builder, result, start, end);
    case 13:
        return fn_004c15ec(builder, result, start, end);
    case 14:
        return fn_004c16dc(builder, result, start, end);
    case 15:
        return fn_004c117c(builder, result, start, end);
    case 16:
        return fn_004c0dac(builder, result, start, end);
    case 17:
        return fn_004c116c(builder, result, start, end);
    case 18:
        return fn_004c116c(builder, result, start, end);
    default:
        return 8;
    }
}
