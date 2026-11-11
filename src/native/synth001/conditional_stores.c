/*
 * Field stores guarded by a comparison.
 *
 * Recovered by pattern from the original image. Every instruction of each
 * function's original extent matches one shape and only one; the offsets,
 * widths and constants below are the ones those instructions encode.
 *
 * Each function below reads one field, compares it with a literal and stores
 *  the read value into another field only when they are equal. The comparison
 *  is the original conditional store instruction; the read value is stored,
 *  not the argument.
 *
 * A function is present only because compiling this exact source with the
 * measured compiler profile reproduced its original instructions byte for
 * byte. A candidate that did not match was deleted, not kept as a draft.
 */
#include "small_types.h"

void fn_0037cac0(u8 * record, u32 value) { u8 flag = *(const u8 *)(record); if (flag == 0x6u) *(u8 *)(record + 0x5) = value; }

void fn_0037cad0(u8 * record, u32 value) { u8 flag = *(const u8 *)(record); if (flag == 0x6u) *(u8 *)(record + 0x2) = value; }

void fn_0037cb0c(u8 * record, u32 value) { u8 flag = *(const u8 *)(record); if (flag == 0x6u) *(u8 *)(record + 0x7) = value; }

void fn_0037cb40(u8 * record, u32 value) { u8 flag = *(const u8 *)(record); if (flag == 0x6u) *(u8 *)(record + 0x6) = value; }

void fn_0037cb50(u8 * record, u32 value) { u8 flag = *(const u8 *)(record); if (flag == 0x6u) *(u8 *)(record + 0x4) = value; }

void fn_0037cb60(u8 * record, u32 value) { u8 flag = *(const u8 *)(record); if (flag == 0x6u) *(u8 *)(record + 0x3) = value; }

void fn_0037cb70(u8 * record, u32 value) { u8 flag = *(const u8 *)(record); if (flag == 0x6u) *(u8 *)(record + 0x13) = value; }

void fn_0037cbe0(u8 * record, u32 value) { u8 flag = *(const u8 *)(record); if (flag == 0x6u) *(u8 *)(record + 0x1) = value; }

void fn_0037cbf0(u8 * record, u32 value) { u8 flag = *(const u8 *)(record); if (flag == 0x6u) *(u8 *)(record + 0x8) = value; }
