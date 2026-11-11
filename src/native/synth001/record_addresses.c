/*
 * Record addresses advanced by a constant.
 *
 * Recovered by pattern from the original image. Every instruction of each
 * function's original extent matches one shape and only one; the offsets,
 * widths and constants below are the ones those instructions encode.
 *
 * Each function below returns the record address advanced by a constant.
 *
 * A function is present only because compiling this exact source with the
 * measured compiler profile reproduced its original instructions byte for
 * byte. A candidate that did not match was deleted, not kept as a draft.
 */
#include "small_types.h"

u8 * fn_0042e8e8(u8 * record) { return record + 0x33a; }

u8 * fn_005079bc(u8 * record) { return record + 0x101; }

u8 * fn_0066b1ac(u8 * record) { return record + 0x5a8; }

u8 * fn_0067058c(u8 * record) { return record + 0x53c; }

u8 * fn_006cd66c(u8 * record) { return record + 0x412c4; }

u8 * fn_006cd678(u8 * record) { return record + 0x90d0; }

u8 * fn_006cd6c4(u8 * record) { return record + 0x9608; }

u8 * fn_006cd710(u8 * record) { return record + 0x9940; }

u8 * fn_006cd894(u8 * record) { return record + 0x9994; }

u8 * fn_006cd9a4(u8 * record) { return record + 0x99d2; }

u8 * fn_006cd9cc(u8 * record) { return record + 0x79c4; }

u8 * fn_006cd9f0(u8 * record) { return record + 0x8798; }

u8 * fn_006cd9fc(u8 * record) { return record + 0x5b3a0; }

u8 * fn_006cda08(u8 * record) { return record + 0x90e8; }
