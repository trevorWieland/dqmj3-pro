/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 001de26c .. 0020e3a4.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


undefined4 fn_001de26c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x48))(param_1);
  if ((iVar1 == 0) && (iVar1 = (**(code **)(*param_1 + 0x50))(param_1), iVar1 == 7)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



void fn_001e33e8(int param_1)

{
  if (*(int *)(param_1 + 0x30c) != -1) {
    *(int *)(param_1 + 0x308) = *(int *)(param_1 + 0x30c);
    *(undefined4 *)(param_1 + 0x30c) = 0xffffffff;
  }
  return;
}



bool fn_001e6e78(int param_1)

{
  return 0 < *(short *)(param_1 + 0x410);
}



void fn_001f068c(int param_1)

{
  fn_002dbe90(*(undefined4 *)(param_1 + 0xe80));
  *(undefined1 *)(param_1 + 0xf98) = 1;
  return;
}



void fn_001f1a40(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xf80) = param_2;
  *(undefined1 *)(param_1 + 0xf93) = 1;
  return;
}



void fn_001f2538(int param_1)

{
  fn_001ceb94();
  *(undefined1 *)(param_1 + 0xf91) = 0;
  *(undefined1 *)(param_1 + 0xf90) = 0;
  *(undefined1 *)(param_1 + 0xf92) = 0;
  *(undefined1 *)(param_1 + 0xf93) = 0;
  *(undefined1 *)(param_1 + 0xf95) = 0;
  return;
}



undefined1 fn_001f30b0(void)

{
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  iVar1 = fn_00228098();
  if (iVar1 != 0) {
    iVar1 = fn_00228098();
    uVar2 = *(undefined1 *)(iVar1 + 4);
  }
  return uVar2;
}



void fn_001f417c(undefined4 param_1,undefined4 param_2)

{
  fn_001f38e8(param_1,param_2,1);
  return;
}



void fn_001f7430(int param_1)

{
  fn_0028eac8(*(undefined4 *)(param_1 + 0xc));
  return;
}



void fn_001f74e4(int param_1)

{
  fn_0028e658(*(undefined4 *)(param_1 + 0x14));
  return;
}



void fn_001f74f8(int param_1)

{
  fn_0028e658(*(undefined4 *)(param_1 + 0x10));
  return;
}



void fn_001f751c(int param_1)

{
  fn_0028e658(*(undefined4 *)(param_1 + 0xc));
  return;
}



int fn_001f88e8(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  return param_2 + param_1 * 2 + param_3 * 2 + param_4 + param_5 + param_6;
}



void fn_001fa164(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  fn_0012d73c(*param_1);
  *param_1 = 0;
  return;
}



undefined4 * fn_001fa314(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  fn_0012d73c(*param_1);
  *param_1 = 0;
  return param_1;
}



void fn_001faa00(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  *(undefined1 *)(param_1 + 0x34) = 0;
  return;
}



void fn_00202dcc(undefined4 *param_1)

{
  (**(code **)*param_1)(param_1);
  fn_0019d680(param_1,0x78);
  return;
}



int fn_002032fc(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar2 + 1;
  if (0x13 < iVar2 + 1) {
    *(undefined4 *)(param_1 + 0x10) = 0x10;
  }
  uVar1 = fn_0016678c(param_1,0xd);
  bVar3 = uVar1 == 0;
  if (bVar3) {
    uVar1 = (uint)*(byte *)(param_1 + 0x38);
  }
  if (bVar3 && uVar1 == 0) {
    fn_0015a394(param_1,iVar2,param_2);
  }
  return iVar2;
}



int fn_00203390(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = iVar2 + 1;
  if (0x1f < iVar2 + 1) {
    *(undefined4 *)(param_1 + 0x18) = 0x18;
  }
  uVar1 = fn_0016678c(param_1,0xd);
  bVar3 = uVar1 == 0;
  if (bVar3) {
    uVar1 = (uint)*(byte *)(param_1 + 0x38);
  }
  if (bVar3 && uVar1 == 0) {
    fn_0015a394(param_1,iVar2,param_2);
  }
  return iVar2;
}



int fn_002033e8(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar2 + 1;
  if (0x17 < iVar2 + 1) {
    *(undefined4 *)(param_1 + 0x14) = 0x14;
  }
  uVar1 = fn_0016678c(param_1,0xd);
  bVar3 = uVar1 == 0;
  if (bVar3) {
    uVar1 = (uint)*(byte *)(param_1 + 0x38);
  }
  if (bVar3 && uVar1 == 0) {
    fn_0015a394(param_1,iVar2,param_2);
  }
  return iVar2;
}



void fn_002058a4(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  if (param_2 == 0) {
    uVar1 = fn_0017fde4();
    fn_0017fcfc(uVar1,1);
    return;
  }
  uVar1 = fn_0017fde4();
  fn_0017fc28(uVar1,1);
  return;
}



undefined1 fn_00205b58(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 4));
  iVar2 = fn_00183638(uVar1,0);
  return *(undefined1 *)(iVar2 + 3);
}



bool fn_0020ccb0(int param_1)

{
  return *(short *)(param_1 + 0x1c) == 0x18b;
}



void fn_0020ddfc(undefined4 param_1,undefined4 param_2)

{
  fn_005fe134(param_1,1,param_2);
  return;
}



undefined4 fn_0020de08(short *param_1)

{
  undefined4 uVar1;
  
  if ((*param_1 == 0) || ((ushort)param_1[1] < 0x32)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



void fn_0020e3a4(undefined4 param_1,undefined4 param_2)

{
  fn_005fe134(param_1,5,param_2);
  return;
}

