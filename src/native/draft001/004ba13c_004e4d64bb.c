/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 004dc250 .. 004e4d64.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_004dc250(int param_1)

{
  undefined4 *puVar1;
  
  fn_004dc130();
  puVar1 = *(undefined4 **)(param_1 + 0x38);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    fn_00656b7c(puVar1);
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x30);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    fn_00656b7c(puVar1);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x34);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    fn_00656b7c(puVar1);
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x2c);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    fn_00656b7c(puVar1);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    fn_00656b7c(puVar1);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x24);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    fn_00656b7c(puVar1);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    fn_00656b7c(puVar1);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}



undefined1 fn_004de850(int param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x74) == '\x03') &&
     (cVar1 = *(char *)(param_1 + 0x60), (cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04')) {
    return 1;
  }
  return 0;
}



undefined1 fn_004de888(int param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x74) == '\x01') &&
     (cVar1 = *(char *)(param_1 + 0x60), (cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04')) {
    return 1;
  }
  return 0;
}



undefined1 fn_004debdc(int param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x74) == '\x04') &&
     (cVar1 = *(char *)(param_1 + 0x60), (cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04')) {
    return 1;
  }
  return 0;
}



void fn_004e1338(int param_1)

{
  fn_00158f40(param_1 + 0x10,0x18,*(ushort *)(param_1 + 0x42) & 0xff);
  return;
}



undefined4 fn_004e4d64(int param_1)

{
  fn_004ed158(*(undefined4 *)(param_1 + 0x14));
  return 0;
}

