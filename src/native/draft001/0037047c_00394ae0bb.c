/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 0038e30c .. 00394ae0.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_0038e30c(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    fn_0012d73c();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



void fn_0038ee34(int param_1,undefined4 param_2)

{
  fn_0039452c(*(undefined4 *)(param_1 + 0x1c),param_2,1);
  fn_00394550(*(undefined4 *)(param_1 + 0x1c),param_2,0xffffffff);
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x2c))(*(int **)(param_1 + 0x1c),param_2,0);
  fn_002cb420(*(undefined4 *)(param_1 + 0x1c),param_2,0);
  fn_002cbcb8(*(undefined4 *)(param_1 + 0x1c),param_2,0);
  return;
}



void fn_0039015c(int param_1)

{
  *(undefined1 *)(param_1 + 4) = 0xff;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}



bool fn_00391d84(int param_1)

{
  return param_1 == 1 || param_1 == 2;
}



void fn_0039439c(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 0xac);
  (**(code **)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  (**(code **)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



void fn_00394544(int param_1,undefined4 param_2)

{
  fn_002b1fa0(*(undefined4 *)(param_1 + 0x14),param_2,0);
  return;
}



void fn_003945c0(int param_1)

{
  fn_002b20a4(*(undefined4 *)(param_1 + 0x14));
  return;
}



void fn_00394ae0(int param_1,int param_2,undefined4 param_3)

{
  fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0x18) + param_2 * 4),param_3);
  return;
}

