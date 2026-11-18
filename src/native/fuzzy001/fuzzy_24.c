/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 003ebc7c .. 004059a4.
 */
#include "decompiled.h"
#include "fuzzy_24.h"


void fn_003ebc7c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  puVar1[0x39] = 0;
  *puVar1 = DAT_00833c18;
  return;
}



void fn_003f01e4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  puVar1[2] = 0;
  *puVar1 = DAT_008347cc;
  *(undefined1 *)(puVar1 + 3) = 0xff;
  return;
}



void fn_003f2aa4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  puVar1[0x2c] = 0;
  *puVar1 = DAT_00834ce0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0xffffffff;
  puVar1[0x2f] = 0;
  return;
}



void fn_003f6e28(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0031aa80();
  *puVar1 = DAT_008354ec;
  return;
}



void fn_003f7a70(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0036bb80(*(undefined4 *)(param_1[0x2c] + 0x10));
  *(undefined4 *)(param_1[0x2c] + 0x10) = uVar1;
  (**(code **)(*param_1 + 0x13c))(param_1);
  fn_0068ab44(param_1,0x1000950);
  return;
}



void fn_003f7ab0(int *param_1)

{
  fn_0036bae4(*(undefined4 *)(param_1[0x2c] + 0x10),param_1[0x29],param_1 + 0x31);
                    /* WARNING: Could not recover jumptable at 0x003f7adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x124))(param_1);
  return;
}



void fn_003f7fdc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x2c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003f800c(iVar1,param_1);
  return;
}



void fn_003f8190(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x38,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003f81c0(iVar1,param_1);
  return;
}



void fn_003f8308(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x18,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003f8338(iVar1,param_1);
  return;
}



void fn_003f844c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(8,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003f847c(iVar1,param_1);
  return;
}



void fn_003f84a4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x28,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003f84d4(iVar1,param_1);
  return;
}



void fn_003f8520(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x564,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003f8554(iVar1,param_1);
  return;
}



void fn_003f9008(int param_1)

{
  if (*(char *)(param_1 + 0xf4) == '\x01') {
    fn_003f860c(param_1,0);
    fn_00689828(param_1,1);
    fn_00327a7c(*(undefined4 *)(param_1 + 0xd8));
    *(undefined1 *)(param_1 + 0xf4) = 0;
    fn_0068ab44(param_1,0x100094c);
    return;
  }
  return;
}



void fn_003facac(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xdc,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003fad58(iVar1,param_1);
  return;
}



void fn_003fbc8c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xa4,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003fbe64(iVar1,param_1);
  return;
}



void fn_003fbfe0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xb4,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003fc300(iVar1,param_1);
  return;
}



void fn_003fc524(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xa4,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003fc6fc(iVar1,param_1);
  return;
}



void fn_003fd00c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xa8,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003fd1b4(iVar1,param_1);
  return;
}



void fn_003fd394(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x80,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003fd47c(iVar1,param_1);
  return;
}



void fn_003fd94c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xbc,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003fdee8(iVar1,param_1);
  return;
}



void fn_003ff700(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xfc,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003ff840(iVar1,param_1);
  return;
}



void fn_003ff900(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003ff930(iVar1,param_1);
  return;
}



void fn_00400f58(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x1c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00400f88(iVar1,param_1);
  return;
}



void fn_00400fe0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x18,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00401010(iVar1,param_1);
  return;
}



void fn_0040174c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc0,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00401b70(iVar1,param_1);
  return;
}



int fn_004059a4(int param_1)

{
  return (int)*(short *)(DAT_008923f4 + param_1 * 6 + 2);
}

