/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 004119dc .. 00441e34.
 */
#include "decompiled.h"
#include "fuzzy_27.h"


void fn_004119dc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003b9cfc();
  puVar1[3] = 0;
  *puVar1 = DAT_008389f0;
  return;
}



void fn_00411a3c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = DAT_00838a08;
  *(undefined1 *)(puVar1 + 2) = 0;
  return;
}



void fn_0041b6e0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = DAT_00839a88;
  *(undefined1 *)(puVar1 + 0x2c) = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  return;
}



void fn_0041c0d4(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,DAT_007c7468,3);
  *puVar1 = DAT_00839d08;
  return;
}



void fn_0041c68c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  puVar1[0x39] = 0;
  *puVar1 = DAT_00839e20;
  *(undefined1 *)(puVar1 + 0x3a) = 0;
  puVar1[0x3b] = 0;
  return;
}



void fn_0041ddb0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003e734c();
  puVar1[0x40] = 0;
  *puVar1 = DAT_00839f68;
  return;
}



void fn_0041e1ec(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  puVar1[0x39] = 0;
  *puVar1 = DAT_0083a0cc;
  puVar1[0x3a] = 0;
  return;
}



void fn_00424eac(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00385b88();
  puVar1[0x27] = 0;
  *puVar1 = DAT_0083b18c;
  puVar1[0x28] = 0;
  return;
}



void fn_0042b888(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(DAT_00893138 + 8);
  for (piVar2 = *(int **)(DAT_00893138 + 4); piVar2 != piVar3; piVar2 = piVar2 + 1) {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x1c))(piVar1,param_1);
    }
  }
  return;
}



void fn_0042df94(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0036bb80(*(undefined4 *)(param_1[0x2c] + 0x10));
  *(undefined4 *)(param_1[0x2c] + 0x10) = uVar1;
  fn_0036bae4(uVar1,param_1[0x29],param_1 + 0x33);
  (**(code **)(*param_1 + 0x124))(param_1);
  fn_0068ab44(param_1,0x1000950);
  return;
}



void fn_0042e3ac(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0042e3dc(iVar1,param_1);
  return;
}



void fn_0042e580(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x28,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0042e7dc(iVar1,param_1);
  return;
}



void fn_0042e988(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x544,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0042ed0c(iVar1,param_1);
  return;
}



void fn_0042f1d0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x908,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0042f214(iVar1,param_1);
  return;
}



void fn_00436594(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x668,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00436798(iVar1,param_1);
  return;
}



void fn_0043a030(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x9c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0043a128(iVar1,param_1);
  return;
}



void fn_0043bbf0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0043bc88(iVar1,param_1);
  return;
}



void fn_0043c368(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x124,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0043c598(iVar1,param_1);
  return;
}



void fn_0043dea4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc0,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0043e3c8(iVar1,param_1);
  return;
}



void fn_0043e404(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0043e434(iVar1,param_1);
  return;
}



void fn_0043ff30(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x70,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0043ff64(iVar1,param_1);
  return;
}



void fn_00440070(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x74,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00440308(iVar1,param_1);
  return;
}



void fn_004405bc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x100,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00440b78(iVar1,param_1);
  return;
}



undefined4 * fn_00441b80(undefined4 param_1,undefined4 param_2,char *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,4);
  *puVar1 = DAT_0083dd14;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  (**(code **)(*(int *)puVar1[5] + 0xe0))((int *)puVar1[5],0);
  if (param_3 != (char *)0x0) {
    *(bool *)(puVar1 + 0x16) = *param_3 != '\0';
  }
  return puVar1;
}



void fn_00441e34(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x10);
  *puVar1 = DAT_0083dd3c;
  if (param_3 == (byte *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (uint)*param_3;
  }
  puVar1[0x16] = uVar2;
  return;
}

