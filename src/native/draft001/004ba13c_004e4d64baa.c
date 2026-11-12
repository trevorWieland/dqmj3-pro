/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 004d03bc .. 004d7bc8.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


undefined4 fn_004d03bc(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_004c6fb8(param_1 + 0x84,*(undefined4 *)(param_2 + 0x1c));
  if ((iVar1 == 0) || (iVar2 = fn_006da264(iVar1 + 4,param_2), iVar2 != 0)) {
    return 0;
  }
  fn_0050d1a0(param_3,iVar1 + 4);
  return 1;
}



undefined4 fn_004d54d8(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = *(int **)(param_1 + 8);
  if ((piVar1 == (int *)0x0) || (iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1,param_2), iVar2 == 0))
  {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    *(undefined4 *)(param_1 + 0x3c) = param_2;
  }
  return uVar3;
}



int fn_004d7bc8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x65c);
  iVar1 = (param_3 - *(int *)(param_1 + 0x668)) + *(int *)(param_1 + 0x678);
  if (iVar1 < 0) {
    iVar1 = iVar1 + iVar2;
  }
  else if (iVar2 <= iVar1) {
    iVar1 = iVar1 - iVar2;
  }
  return *(int *)(param_1 + 0x5b8) + (param_2 * iVar2 + iVar1) * 4;
}

