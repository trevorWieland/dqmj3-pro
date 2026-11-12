/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see docs/2026-11-11-corpus-drafting.md), compiled with
 * the measured original compiler profile (armcc 4.1 build 1454, --cpu=MPCore
 * --apcs=/interwork --c99 -O3 -Otime) and kept only because its placed bytes
 * equal the original extent byte for byte. Nothing here is fitted: a single
 * differing byte would have kept the function out of this file.
 *
 * Address range of this file's functions: 00123600 .. 0044faec.
 * Decompiler pseudo-types are explained in decompiled.h; every name these
 * functions call or address is declared in this unit's own header, because the
 * declaration a draft needs depends on what the unit itself defines.
 */

#include "decompiled.h"
#include "00123600_0044faec.h"
static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}



void fn_001a46b0(int param_1)

{
  if (*(char *)(param_1 + 0x98) != '\x04') {
    if ((*(int *)(param_1 + 0x1a8) != 0) && (*(char *)(param_1 + 0x13c) == '\0')) {
      fn_001a82f4(*(int *)(param_1 + 0x1a8),1);
    }
    *(undefined1 *)(param_1 + 0x98) = 4;
  }
  *(undefined1 *)(param_1 + 0x138) = 0;
  return;
}



void fn_0039e5ac(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    fn_00229d54(param_1 + uVar1 * 0xc + 0xb0,3);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 10);
  return;
}



void fn_00123600(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[3] = 0;
  param_1[1] = param_2;
  param_1[4] = 0;
  param_1[2] = param_2;
  return;
}



void fn_00127a7c(int param_1)

{
  if (*(char *)(param_1 + 0x28) == '\0') {
    fn_00141b28(param_1);
    *(undefined1 *)(param_1 + 0x28) = 1;
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  return;
}



void fn_0013c500(int param_1)

{
  fn_00123678();
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



void fn_0014f510(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}



bool fn_0016678c(int param_1,int param_2)

{
  return **(int **)(*(int *)(*(int *)(param_1 + 4) + 0x360) + param_2 * 4) != 0;
}



byte fn_001667b8(byte *param_1,uint param_2)

{
  return *param_1 >> (param_2 & 0xff) & 1;
}



bool fn_001667e0(ushort *param_1,ushort param_2)

{
  return (*param_1 & param_2) != 0;
}



int fn_0017fbdc(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 & 1) != 0) {
    iVar1 = 0x20;
  }
  if ((param_1 & 2) != 0) {
    iVar1 = iVar1 + 0xc;
  }
  if ((param_1 & 4) != 0) {
    iVar1 = iVar1 + 0xc;
  }
  if ((param_1 & 8) != 0) {
    iVar1 = iVar1 + 0xc;
  }
  return iVar1;
}



int fn_001a2388(int *param_1)

{
  return *param_1 + 0xc;
}



void fn_001a4698(int param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    *(undefined4 *)(param_1 + 0x1a4) = 0;
  }
  return;
}



void fn_001a82f4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x40) = param_2;
  uVar1 = fn_0018b794();
  fn_001a9c1c(uVar1,param_1);
  if ((*(int *)(param_1 + 0x40) == 1) && (iVar3 = 0, 0 < *(int *)(param_1 + 8))) {
    do {
      iVar2 = *(int *)(param_1 + iVar3 * 4);
      if (iVar2 != 0) {
        fn_001ac8ac(iVar2,1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 8));
  }
  return;
}



void fn_001a834c(int param_1,int param_2,undefined4 param_3,int param_4)

{
  fn_001ace58(*(undefined4 *)(param_1 + param_2 * 4),param_3);
  if (param_4 != 0) {
    *(undefined4 *)(param_1 + 0x1c) = param_3;
  }
  return;
}



void fn_00229d54(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      if (*(int *)(param_1 + iVar1 * 4) != 0) {
        fn_00688a74();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}



void fn_00236200(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  return;
}



bool fn_0028c2e8(void)

{
  int iVar1;
  
  iVar1 = fn_0028c0f0();
  return iVar1 != 0;
}



void fn_002b20a4(int param_1,byte param_2)

{
  *(byte *)(param_1 + 0x25) = param_2;
  *(byte *)(*(int *)(param_1 + 0x1c) + 0x44) =
       param_2 | *(byte *)(*(int *)(param_1 + 0x1c) + 0x44) & 0xfe;
  return;
}



void fn_002c74d8(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x7c) == '\x01') {
    iVar1 = *(int *)(param_1 + 0xf0);
    if (iVar1 != 0) {
      fn_002b1f48(iVar1,0);
      fn_002b1f0c(iVar1,1);
    }
    iVar1 = *(int *)(param_1 + 0xf4);
    if (iVar1 != 0) {
      fn_002b1f48(iVar1,0);
      fn_002b1f0c(iVar1,1);
      return;
    }
  }
  else {
    fn_002c6500(param_1);
    iVar1 = *(int *)(param_1 + 0xf4);
    if (iVar1 != 0) {
      fn_002b1f48(iVar1,1);
      fn_002b1f0c(iVar1,0);
      return;
    }
  }
  return;
}



void fn_002fecec(undefined4 param_1)

{
  fn_001287dc(param_1,4);
  return;
}



void fn_0037cb88(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return;
}



void fn_00385b60(int param_1)

{
  if (*(int *)(param_1 + 0x94) == 0) {
    return;
  }
  fn_0031c0e0();
  return;
}



void fn_003979d0(int param_1)

{
  fn_0059e16c(param_1 + 0xb0);
  fn_002c4100(param_1);
  return;
}



void fn_0039bcdc(int param_1)

{
  fn_00290aa4(*(undefined4 *)(param_1 + 0xa0));
  *(undefined4 *)(param_1 + 0x9c) = 0;
  return;
}



void fn_003f8258(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 1;
  return;
}



int * fn_0044fa90(int *param_1)

{
  if (*param_1 != 0) {
    svc_0x23();
    *param_1 = 0;
  }
  return param_1;
}



int * fn_0044fac4(int *param_1)

{
  if (*param_1 != 0) {
    svc_0x23();
    *param_1 = 0;
  }
  return param_1;
}



int * fn_0044faec(int *param_1)

{
  if (*param_1 != 0) {
    svc_0x23();
    *param_1 = 0;
  }
  return param_1;
}

/*
 * The comparison first read `(param_2 & 0xffffff) < *puVar1`, which makes armcc
 * compare the operand registers the other way round from the original. Swapping
 * the two sides to `*puVar1 > (param_2 & 0xffffff)` reproduces the original
 * `cmp r2,r1`; that swap is the only change the source-permutation search made.
 * See docs/2026-11-12-source-permutation-search.md.
 */
int fn_00176b18(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)(param_1 + *(int *)(param_1 + 0x34));
  if (*puVar1 > (param_2 & 0xffffff)) {
    iVar2 = (int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2];
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}
