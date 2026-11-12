/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 00551300 .. 00558e00.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_00551300(int *param_1,undefined4 param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0xc))(param_1,param_2,param_4);
  *(undefined4 *)(param_3 + 0xb0) = 0;
  *(int **)(param_3 + 0xc0) = param_1;
  if ((param_4 & 1) == 0) {
    fn_00560ac4(param_1,uVar1,param_3 + 4);
    return;
  }
  return;
}



void fn_00551540(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_28 [28];
  
  if (*(int *)(param_1 + 0x10) != 0) {
    fn_0054cc7c(auStack_28,param_2,param_1);
    (**(code **)(**(int **)(param_1 + 0x10) + 0x40))(*(int **)(param_1 + 0x10),auStack_28,param_3);
  }
  return;
}



void fn_00552f04(int param_1)

{
  int iVar1;
  
  fn_00195768(param_1 + 0xb8);
  iVar1 = *(int *)(param_1 + 0xa4);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x7c) = *(byte *)(iVar1 + 0x7c) & 0xf7;
  }
  return;
}



void fn_00553754(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xf8) != 0) {
    if (*(int *)(*(int *)(param_1 + 0xf8) + 0xc) != 0) {
      fn_0019fb94();
    }
    fn_0019fb94(*(undefined4 *)(param_1 + 0xf8));
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  if (*(int *)(param_1 + 0xa4) != 0) {
    fn_0019fb94();
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined2 *)(param_1 + 0xcc) = 0;
    *(undefined2 *)(param_1 + 0xce) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xfc);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
  }
  if (iVar1 != 0 && iVar2 != 0) {
    fn_0019fb94();
    *(undefined4 *)(*(int *)(param_1 + 0xfc) + 8) = 0;
  }
  return;
}



void fn_00555718(undefined1 *param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    fn_0019fb94();
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}



undefined1 * fn_0055590c(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x7f;
  param_1[7] = 0x40;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  fn_00158f40(param_1 + 0xb,2,0xffffffff);
  *(undefined2 *)(param_1 + 5) = 0;
  return param_1;
}



void fn_00557be0(int param_1,undefined1 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x50) = param_3;
  *(undefined1 *)(param_1 + 0x9d) = param_2;
  return;
}



void fn_00557e4c(int param_1)

{
  if (*(int *)(param_1 + 0x74) < *(int *)(param_1 + 0x70)) {
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
  }
  if (*(int *)(param_1 + 0x94) < *(int *)(param_1 + 0x90)) {
    *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
  }
  if (*(int *)(param_1 + 0xc4) < *(int *)(param_1 + 0xc0)) {
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
  }
  return;
}



void fn_00558a78(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = *(char *)(param_1 + 0x51) != '\0';
  cVar1 = '\0';
  if (bVar3) {
    cVar1 = *(char *)(param_1 + 0x50);
  }
  if (bVar3 && cVar1 != '\0') {
    iVar2 = *(int *)(param_1 + 0x34);
    if ((*(uint *)(iVar2 + 4) & 0xfffffffe) != 0) {
      if ((*(uint *)(iVar2 + 4) & 1) != 0) {
        fn_00146594();
      }
      fn_0015cf8c(*(uint *)(iVar2 + 4) & 0xfffffffe);
      *(undefined4 *)(iVar2 + 4) = 0;
    }
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  return;
}



void fn_00558e00(int param_1)

{
  fn_005579dc();
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined1 *)(param_1 + 0x120) = 1;
  *(undefined1 *)(param_1 + 0x121) = 0;
  return;
}

