/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 002368ac .. 0024146c.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_002368ac(int param_1,undefined4 param_2,undefined4 param_3)

{
  fn_00236200(param_1 + 0x90);
  fn_0023591c(param_1,param_3);
  return;
}



int fn_00237090(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00661518();
  if (iVar1 == 0) {
    iVar1 = param_1;
  }
  return iVar1;
}



void fn_002397d4(undefined4 *param_1,undefined2 *param_2,undefined4 param_3)

{
  if (param_2 == (undefined2 *)0x0) {
    *param_1 = 0;
    return;
  }
  fn_00239824(param_1,*param_2,param_2[1],*(undefined1 *)(param_2 + 2),*(undefined1 *)(param_2 + 3)
               ,*(undefined1 *)((int)param_2 + 7),*(undefined1 *)((int)param_2 + 5),param_2 + 4,
               param_3,0);
  return;
}



void fn_0023d3f4(int param_1)

{
  fn_002a4bd0(*(undefined4 *)(param_1 + 8));
  return;
}



void fn_0023f068(int param_1)

{
  float in_s0;
  
  if (*(char *)(param_1 + 0x3c) != '\0') {
    in_s0 = -in_s0;
  }
  *(float *)(param_1 + 0x14) = in_s0;
  return;
}



void fn_0023f3a8(int param_1)

{
  if (*(char *)(param_1 + 0x40) != '\0') {
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}



void fn_0023f454(int param_1)

{
  if (*(char *)(param_1 + 0x40) == '\0') {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  return;
}



void fn_0024146c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_00176d68(param_2);
  fn_001969a4(*(undefined4 *)(param_1 + 0x24),uVar1);
  *(undefined4 *)(param_1 + 0x48) = param_2;
  uVar1 = fn_00176d68(param_2);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  return;
}

