/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 002ccba8 .. 002d6360.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_002ccba8(int param_1)

{
  memory_zero_unaligned(param_1 + 0x1e,0x40);
  return;
}



void fn_002cf29c(int param_1)

{
  fn_00154ac8(param_1 + 0x25c);
  return;
}



void fn_002d16e4(int *param_1)

{
  param_1[2] = 0;
  (**(code **)(*param_1 + 0x14))(param_1);
  (**(code **)(*param_1 + 0x24))(param_1);
  fn_001433d8(param_1 + 6);
  param_1[1] = 0;
  (**(code **)(*param_1 + 0x1c))(param_1);
  if (param_1[5] != 0) {
    fn_0012d73c();
    param_1[5] = 0;
  }
  return;
}



void fn_002d2148(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1);
  if ((iVar1 == 0) && (iVar1 = fn_0069ef00(param_1[1]), iVar1 != 0)) {
    (**(code **)(*param_1 + 0x10))(param_1);
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}



void fn_002d30dc(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x14);
  return;
}



void fn_002d3f1c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



void fn_002d40b4(int param_1)

{
  if (*(int *)(param_1 + 0x90) == 0) {
    return;
  }
  fn_002b5570();
  return;
}



void fn_002d6360(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined1 *)(param_1 + 4) = 0x18;
  return;
}

