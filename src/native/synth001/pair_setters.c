/*
 * Adjacent two-word setters.
 *
 * Recovered by pattern from the original image. Every instruction of each
 * function's original extent matches one shape and only one; the offsets,
 * widths and constants below are the ones those instructions encode.
 *
 * Each function below stores its second and third arguments into two
 *  adjacent words of the record. The original writes them with one
 *  store-multiple instruction; the offsets below are the base the
 *  original advances to.
 *
 * A function is present only because compiling this exact source with the
 * measured compiler profile reproduced its original instructions byte for
 * byte. A candidate that did not match was deleted, not kept as a draft.
 */
#include "small_types.h"

void fn_0010c8a4(u8 * record, u32 value, u32 second) { *(u32 *)(record + 0x28) = value; *(u32 *)(record + 0x2c) = second; }

void fn_0011050c(u8 * record, u32 value, u32 second) { *(u32 *)(record + 0x78) = value; *(u32 *)(record + 0x7c) = second; }

void fn_0014f550(u8 * record, u32 value, u32 second) { *(u32 *)(record + 0x18) = value; *(u32 *)(record + 0x1c) = second; }

void fn_0018c6d8(u8 * record, u32 value, u32 second) { *(u32 *)(record + 0x88) = value; *(u32 *)(record + 0x8c) = second; }

void fn_00327a18(u8 * record, u32 value, u32 second) { *(u32 *)(record + 0x74) = value; *(u32 *)(record + 0x78) = second; }

void fn_00389030(u8 * record, u32 value, u32 second) { *(u32 *)(record + 0x4) = value; *(u32 *)(record + 0x8) = second; }

void fn_00456160(u8 * record, u32 value, u32 second) { *(u32 *)(record + 0x48) = value; *(u32 *)(record + 0x4c) = second; }

void fn_004dede0(u8 * record, u32 value, u32 second) { *(u32 *)(record + 0x78) = value; *(u32 *)(record + 0x7c) = second; }

void fn_004ed130(u8 * record, u32 value, u32 second) { *(u32 *)(record + 0x8) = value; *(u32 *)(record + 0xc) = second; }

void fn_0051c658(u8 * record, u32 value, u32 second) { *(u32 *)(record + 0x18) = value; *(u32 *)(record + 0x1c) = second; }

void fn_005aeb78(u8 * record, u32 value, u32 second) { *(u32 *)(record + 0x10) = value; *(u32 *)(record + 0x14) = second; }

void fn_005b3308(u8 * record, u32 value, u32 second) { *(u32 *)(record + 0xc) = value; *(u32 *)(record + 0x10) = second; }
