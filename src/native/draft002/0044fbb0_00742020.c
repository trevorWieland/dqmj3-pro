/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see docs/2026-11-11-corpus-drafting.md), compiled with
 * the measured original compiler profile (armcc 4.1 build 1454, --cpu=MPCore
 * --apcs=/interwork --c99 -O3 -Otime) and kept only because its placed bytes
 * equal the original extent byte for byte. Nothing here is fitted: a single
 * differing byte would have kept the function out of this file.
 *
 * Address range of this file's functions: 0044fbb0 .. 00742020.
 * Decompiler pseudo-types are explained in decompiled.h; every name these
 * functions call or address is declared in this unit's own header, because the
 * declaration a draft needs depends on what the unit itself defines.
 */

#include "decompiled.h"
#include "0044fbb0_00742020.h"
static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}



int * fn_0044fbb0(int *param_1)

{
  fn_0015e304();
  if (*param_1 != 0) {
    svc_0x23();
    *param_1 = 0;
  }
  return param_1;
}



int * fn_004549cc(int *param_1)

{
  if (*param_1 != 0) {
    svc_0x23();
    *param_1 = 0;
  }
  return param_1;
}



int fn_00473520(int param_1,int param_2)

{
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_2 + 0x14);
  *(undefined2 *)(param_1 + 0x16) = *(undefined2 *)(param_2 + 0x16);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  fn_00170fa4(param_1 + 0x28,param_2 + 0x28);
  return param_1;
}



void fn_0047fb68(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_10 [8];
  
  uVar1 = fn_006d0be8(param_2);
  fn_0013d3e8(auStack_10,uVar1);
  fn_0045f6f0(param_1,auStack_10);
  fn_00170f54(auStack_10);
  return;
}



void fn_004b2e68(int param_1,undefined4 param_2)

{
  fn_004b301c(param_1,1);
  *(undefined4 *)(param_1 + 0x24) = param_2;
  return;
}



void fn_004b2f04(undefined4 param_1)

{
  fn_004b301c(param_1,5);
  return;
}



void fn_004ecfd0(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  fn_00656b7c();
  return;
}



void fn_004ed464(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  return;
}



int * fn_00520cc4(int *param_1)

{
  if (*param_1 != 0) {
    svc_0x23();
    *param_1 = 0;
  }
  return param_1;
}



int fn_0052a300(int param_1)

{
  return param_1 * 0xc;
}



void fn_0056a4bc(int param_1)

{
  fn_003b9cc0();
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



int fn_005e19c8(int param_1)

{
  return *(int *)(param_1 + 4) + 0x164;
}



void fn_005f6270(int *param_1)

{
  int iVar1;
  
  if (*(int *)param_1[7] == 0) {
    (**(code **)(*param_1 + 8))(param_1);
    for (iVar1 = param_1[3]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
      fn_005f6270(iVar1);
    }
  }
  return;
}



void fn_00688d44(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *param_2;
    *(undefined4 *)(param_1 + 0xac) = uVar1;
    *(undefined4 *)(param_1 + 0xb0) = uVar1;
  }
  return;
}



void fn_006899f4(int param_1)

{
  fn_001f748c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18));
  return;
}



void fn_0069e464(int param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x4c) != '\0') {
    fn_0018d060(*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x50) = param_2;
  }
  return;
}



int fn_006ba274(int param_1)

{
  return *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2;
}



undefined4 fn_006e3464(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_006e3388(param_1,0x4000);
  return *(undefined4 *)(iVar1 + 8);
}



undefined4 fn_006e3490(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_006e3388(param_1,0x4000);
  return *(undefined4 *)(iVar1 + 4);
}



bool fn_006ebdf4(int param_1,byte param_2)

{
  return (*(byte *)(*(int *)(param_1 + 0x148) + 0x98) & param_2) != 0;
}



bool fn_006f7d68(int param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x4c) != '\0';
  if (bVar1) {
    param_1 = *(int *)(param_1 + 0x14);
  }
  return bVar1 && param_1 != 0;
}



void fn_00742020(int param_1,int param_2)

{
  *(bool *)(*(int *)(param_1 + 0x8c) + 0xa8) = param_2 != 0;
  return;
}

