/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 00566718 .. 0058c9a0.
 */
#include "decompiled.h"
#include "fuzzy_33.h"


void fn_00566718(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005ab93c();
  puVar1[0x41] = 0;
  *puVar1 = DAT_0083f86c;
  return;
}



void fn_0056828c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x26);
  *puVar1 = DAT_0084004c;
  return;
}



void fn_00568ecc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x118,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00568f5c(iVar1,param_1);
  return;
}



void fn_0056929c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x118,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00569304(iVar1,param_1);
  return;
}



void fn_00569bfc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xac,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0056a220(iVar1,param_1);
  return;
}



void fn_0056a4d8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x14,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0056a508(iVar1,param_1);
  return;
}



void fn_0056a53c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x2c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0056a56c(iVar1,param_1);
  return;
}



void fn_0056a644(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0039571c();
  puVar1[3] = 0;
  *puVar1 = DAT_00840644;
  return;
}



void fn_0056a67c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x20,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0056a6cc(iVar1,param_1);
  return;
}



void fn_0056a710(int param_1)

{
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}



void fn_0056a720(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0056a750(iVar1,param_1);
  return;
}



void fn_0056f984(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x128,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0056fa30(iVar1,param_1);
  return;
}



void fn_005703dc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00570520(iVar1,param_1);
  return;
}



void fn_00570814(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xb4,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00570aac(iVar1,param_1);
  return;
}



void fn_00570d6c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xec,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00570fc8(iVar1,param_1);
  return;
}



void fn_00571f58(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x20,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00571f88(iVar1,param_1);
  return;
}



void fn_005720a0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar2 = *(undefined4 *)(iVar1 + 8);
  fn_0016a43c(uVar2,param_1[0x1a]);
                    /* WARNING: Subroutine does not return */
  fn_001482f4(uVar2,param_1[0x19]);
}



void fn_00572250(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x6c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00572280(iVar1,param_1);
  return;
}



void fn_00572f88(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xd4,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00573250(iVar1,param_1);
  return;
}



void fn_00573db4(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00311824(param_1,0xffffffff,0);
  *puVar1 = DAT_008412e8;
  return;
}



void fn_00579c3c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  *(int *)(param_1 + 0xc) = param_2;
  uVar1 = fn_001287d4(param_2 * 0x3c,DAT_00812c8c);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



void fn_00579cc4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x14,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00579cf4(iVar1,param_1);
  return;
}



void fn_0057a094(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0057a0c4(iVar1,param_1);
  return;
}



void fn_0057ac2c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x140,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0057af20(iVar1,param_1);
  return;
}



void fn_0057bdf8(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x24);
  *puVar1 = DAT_00841c14;
  return;
}



void fn_0057c700(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,6);
  *puVar1 = DAT_00841cb0;
  return;
}



void fn_0058c9a0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}

