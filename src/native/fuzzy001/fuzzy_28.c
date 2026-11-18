/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 0042e3dc .. 005ab518.
 */
#include "decompiled.h"
#include "fuzzy_28.h"


void fn_0042e3dc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = DAT_0083bd4c;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined1 *)((int)puVar1 + 9) = 0;
  puVar1[3] = 0;
  return;
}



void fn_0043bc88(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0036e354(param_1,param_2,DAT_007c71ec,2);
  *puVar1 = DAT_0083cb88;
  return;
}



void fn_0043e3c8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  puVar1[0x2c] = 0;
  *puVar1 = DAT_0083d22c;
  puVar1[0x2d] = 0;
  *(undefined1 *)(puVar1 + 0x2e) = 0;
  puVar1[0x2f] = 0;
  return;
}



void fn_0043ff64(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = DAT_0083d6e0;
  puVar1[0x19] = *(undefined4 *)(param_2 + 8);
  return;
}



void fn_0044273c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00390794(param_1,param_2,0x21);
  *puVar1 = DAT_0083ddc8;
  return;
}



void fn_00443d68(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xa0,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00443e54(iVar1,param_1);
  return;
}



void fn_00443f4c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00746624();
  *puVar1 = DAT_0083e104;
  return;
}



void fn_00445058(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x118,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00445088(iVar1,param_1);
  return;
}



void fn_004452e8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x4c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00445318(iVar1,param_1);
  return;
}



void fn_004453a0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x14,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_004453d0(iVar1,param_1);
  return;
}



void fn_00445580(int param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 0xe15) = 0;
  fn_00301a9c(param_1 + 8,param_2,0xe08);
  *(undefined1 *)(param_1 + 0xe10) = 0;
  *(undefined1 *)(param_1 + 0xe12) = 0;
  *(undefined1 *)(param_1 + 0xe13) = 1;
  *(undefined1 *)(param_1 + 0xe14) = 1;
  *(undefined4 *)(param_1 + 0xe18) = 0;
  return;
}



void fn_004455bc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xe1c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_004455f0(iVar1,param_1);
  return;
}



void fn_00445670(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x1c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_004456a0(iVar1,param_1);
  return;
}



void fn_00445714(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xa08,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00445780(iVar1,param_1);
  return;
}



void fn_00445ed0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x2c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00445f18(iVar1,param_1);
  return;
}



void fn_00445fb8(void)

{
  fn_0066eb04(DAT_00898840);
  return;
}



void fn_00445fc8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00445ff8(iVar1,param_1);
  return;
}



void fn_00447a24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x100,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00448020(iVar1,param_1);
  return;
}



void fn_0044889c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xf0,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00448adc(iVar1,param_1);
  return;
}



void fn_00449240(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x104,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00449688(iVar1,param_1);
  return;
}



void fn_0044a30c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xf0,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0044a5d8(iVar1,param_1);
  return;
}



void fn_0044aad4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xaa0,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0044ab04(iVar1,param_1);
  return;
}



bool fn_0044c844(void)

{
  return DAT_0089a658 != 0;
}



undefined4 * fn_004525ec(undefined4 *param_1)

{
  *param_1 = DAT_008525f0;
  fn_0045246c(param_1);
  return param_1;
}



void fn_00454f8c(undefined4 *param_1)

{
  *param_1 = DAT_00852750;
  return;
}



void fn_00454ffc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00474168();
  *puVar1 = DAT_008527d0;
  return;
}



void fn_004569c8(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = DAT_00853388;
  iVar1 = fn_00170f54(param_1 + 10);
  fn_00455018(iVar1 + -0x28);
  return;
}



undefined4 fn_005ab518(int param_1)

{
  return *(undefined4 *)(DAT_007bd6d4 + *(int *)(*(int *)(param_1 + 0xe4) + 0x40) * 4);
}

