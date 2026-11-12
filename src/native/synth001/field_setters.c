/*
 * Single-field setters.
 *
 * Recovered by pattern from the original image. Every instruction of each
 * function's original extent matches one shape and only one; the offsets,
 * widths and constants below are the ones those instructions encode.
 *
 * Each function below writes its second argument into one record field.
 *  The store width is the width the original instruction uses, so a
 *  halfword or byte field truncates the argument.
 *
 * A function is present only because compiling this exact source with the
 * measured compiler profile reproduced its original instructions byte for
 * byte. A candidate that did not match was deleted, not kept as a draft.
 */
#include "small_types.h"

void fn_00141334(u8 * record, u32 value) { *(u32 *)(record + 0x3c) = value + 0x8; }

void fn_0017b99c(u8 * record, u32 value) { *(u16 *)(record + 0x1fe) = value; }

void fn_0017b9a8(u8 * record, u32 value) { *(u16 *)(record + 0x200) = value; }

void fn_004e12f0(u8 * record, u32 value) { *(u32 *)(record + 0x1240) = value; }

void fn_0069377c(u8 * record, u32 value) { *(u16 *)(record + 0x16e) = value; }

void fn_00693ef4(u8 * record, u32 value) { *(u16 *)(record + 0x16e) = value; }
