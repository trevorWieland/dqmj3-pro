/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 00748844 .. 00767004.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


bool fn_00748844(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = fn_006ba284();
  iVar2 = fn_006ba274(param_1);
  uVar3 = iVar1 * iVar2 + param_2;
  if (((int)uVar3 < 0) ||
     ((uint)(*(int *)(param_1 + 0xf4) - *(int *)(param_1 + 0xf0) >> 4) <= uVar3)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xf0) + uVar3 * 0x10;
  }
  return *(int *)(iVar1 + 8) != 0;
}



bool fn_0074919c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = fn_006ba284();
  iVar2 = fn_006ba274(param_1);
  uVar3 = iVar1 * iVar2 + param_2;
  if (((int)uVar3 < 0) ||
     ((uint)(*(int *)(param_1 + 0xe0) - *(int *)(param_1 + 0xdc) >> 4) <= uVar3)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xdc) + uVar3 * 0x10;
  }
  return *(int *)(iVar1 + 8) != 0;
}



void fn_0074ccc0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 local_18;
  
  local_18 = *(undefined4 *)(param_2 + 0x14);
  fn_0015ef4c(param_1,&local_18,4);
  piVar2 = *(int **)(param_2 + 0x10);
  for (piVar1 = (int *)*piVar2; piVar1 != piVar2; piVar1 = (int *)*piVar1) {
    fn_0047fb68(param_1,piVar1 + 2);
  }
  return;
}



void fn_00760fb4(int param_1)

{
  fn_00251df0(*(undefined4 *)(param_1 + 0x110),0);
  *(undefined4 *)(param_1 + 0xe4) = 9;
  return;
}



void fn_00760fdc(int param_1)

{
  fn_005f6270(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x44));
  fn_005f6270(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x48));
  if (*(int *)(param_1 + 0x108) == 0) {
    return;
  }
  fn_005f6270();
  return;
}



undefined4 fn_00761074(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00251a3c(*(undefined4 *)(param_1 + 0x110));
  if (iVar1 == 0) {
    fn_00251a50(*(undefined4 *)(param_1 + 0x110));
    return 0;
  }
  fn_007617a8(param_1,*(undefined4 *)(param_1 + 0xd4));
  return 1;
}



void fn_007629cc(int param_1)

{
  fn_00251df0(*(undefined4 *)(param_1 + 0x130),0);
  *(undefined4 *)(param_1 + 0x104) = 9;
  return;
}



void fn_007629f4(int param_1)

{
  fn_005f6270(*(undefined4 *)(*(int *)(param_1 + 0x120) + 0x44));
  fn_005f6270(*(undefined4 *)(*(int *)(param_1 + 0x120) + 0x48));
  if (*(int *)(param_1 + 0x128) == 0) {
    return;
  }
  fn_005f6270();
  return;
}



undefined4 fn_00762a30(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00251a3c(*(undefined4 *)(param_1 + 0x130));
  if (iVar1 == 0) {
    fn_00251a50(*(undefined4 *)(param_1 + 0x130));
    return 0;
  }
  fn_007631a8(param_1,*(undefined4 *)(param_1 + 0xf4));
  return 1;
}



void fn_007655e4(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  do {
    fn_007655e4(param_1,*(undefined4 *)(param_2 + 0xc));
    iVar1 = *(int *)(param_2 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 4);
    *(int *)(param_1 + 4) = param_2;
    param_2 = iVar1;
  } while (iVar1 != 0);
  return;
}



void fn_00766190(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  do {
    fn_00766190(param_1,*(undefined4 *)(param_2 + 0xc));
    iVar1 = *(int *)(param_2 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 4);
    *(int *)(param_1 + 4) = param_2;
    param_2 = iVar1;
  } while (iVar1 != 0);
  return;
}



void fn_00766968(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  do {
    fn_00766968(param_1,*(undefined4 *)(param_2 + 0xc));
    iVar1 = *(int *)(param_2 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 4);
    *(int *)(param_1 + 4) = param_2;
    param_2 = iVar1;
  } while (iVar1 != 0);
  return;
}



void fn_00767004(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  do {
    fn_00767004(param_1,*(undefined4 *)(param_2 + 0xc));
    iVar1 = *(int *)(param_2 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 4);
    *(int *)(param_1 + 4) = param_2;
    param_2 = iVar1;
  } while (iVar1 != 0);
  return;
}

