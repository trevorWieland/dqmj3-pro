/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 005f79a4 .. 0060a170.
 */
#include "decompiled.h"
#include "fuzzy_44.h"


void fn_005f79a4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005aaac0();
  *puVar1 = DAT_0084dc2c;
  return;
}



void fn_005f8670(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005ab93c();
  puVar1[0x42] = 0;
  *puVar1 = DAT_0084dc58;
  return;
}



void fn_005f8f48(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  puVar1[2] = 0;
  *puVar1 = DAT_0084df2c;
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}



void fn_005f9670(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0043f144();
  *puVar1 = DAT_0084e068;
  *(undefined1 *)(puVar1 + 4) = 2;
  puVar1[5] = 0;
  return;
}



void fn_005fa4a8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003953b0();
  *puVar1 = DAT_0084e2a0;
  *(undefined1 *)(puVar1 + 5) = 1;
  *(undefined1 *)((int)puVar1 + 0x15) = 1;
  return;
}



void fn_005fba14(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005d68e0(param_1,param_2,0xe6,1);
  *puVar1 = DAT_0084e8fc;
  return;
}



void fn_006016ac(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x128,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00601710(iVar1,param_1);
  return;
}



void fn_0060187c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x118,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_006018ac(iVar1,param_1);
  return;
}



void fn_00601b94(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x20,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00601bc4(iVar1,param_1);
  return;
}



void fn_00601f6c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x110,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00602114(iVar1,param_1);
  return;
}



void fn_00602aa4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xf0,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00602ad4(iVar1,param_1);
  return;
}



void fn_00602e20(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x11c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00602fc4(iVar1,param_1);
  return;
}



void fn_006031a4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x20,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_006031d4(iVar1,param_1);
  return;
}



void fn_00603204(undefined4 *param_1)

{
  *param_1 = DAT_0084f214;
  fn_002feef8(param_1[5]);
  fn_003953e8(param_1);
  fn_002feef8();
  return;
}



void fn_006047b8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x13c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0060481c(iVar1,param_1);
  return;
}



void fn_00604a44(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x120,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00604a74(iVar1,param_1);
  return;
}



void fn_00604d38(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x2d);
  *puVar1 = DAT_0084f3a8;
  return;
}



void fn_00604d64(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x554,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00604d98(iVar1,param_1);
  return;
}



void fn_00605ba0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x58c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00606564(iVar1,param_1);
  return;
}



void fn_00607210(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x2c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_006075d8(iVar1,param_1);
  return;
}



void fn_00607ab4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00607ae4(iVar1,param_1);
  return;
}



void fn_006082c0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_006082f0(iVar1,param_1);
  return;
}



void fn_00608324(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x14,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00608354(iVar1,param_1);
  return;
}



void fn_00608388(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_006083c4(iVar1,param_1);
  return;
}



void fn_00608434(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x1d8,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00608464(iVar1,param_1);
  return;
}



void fn_0060a170(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x110,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0060a288(iVar1,param_1);
  return;
}

