/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 005bff2c .. 005db3a4.
 */
#include "decompiled.h"
#include "fuzzy_41.h"


void fn_005bff2c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003e2a68();
  *puVar1 = DAT_00849dbc;
  return;
}



void fn_005bff84(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003e2cbc();
  *puVar1 = DAT_00849f04;
  return;
}



void fn_005c1a14(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  puVar1[2] = 0;
  *puVar1 = DAT_0084a1dc;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  *(undefined1 *)((int)puVar1 + 0x11) = 0;
  return;
}



void fn_005c1a80(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0039571c();
  puVar1[3] = 0;
  *puVar1 = DAT_0084a1f0;
  return;
}



void fn_005c2e3c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0043f144();
  *puVar1 = DAT_0084a4a0;
  return;
}



void fn_005c44cc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  puVar1[0x2c] = 0;
  *puVar1 = DAT_0084a600;
  *(undefined1 *)(puVar1 + 0x2d) = 0;
  *(undefined2 *)((int)puVar1 + 0xb6) = 0;
  puVar1[0x2e] = 0;
  *(undefined1 *)(puVar1 + 0x2f) = 0;
  return;
}



void fn_005ca198(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005ab93c();
  puVar1[0x41] = 0;
  *puVar1 = DAT_0084b130;
  return;
}



void fn_005cadbc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003fced4();
  *puVar1 = DAT_0084b3d8;
  return;
}



void fn_005cae14(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0039571c();
  *puVar1 = DAT_0084b50c;
  *(undefined1 *)(puVar1 + 3) = 0xff;
  return;
}



void fn_005cc3dc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = DAT_0084b744;
  return;
}



void fn_005cc4a8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005a6028();
  *puVar1 = DAT_0084b884;
  return;
}



void fn_005cd19c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  *puVar1 = DAT_0084baec;
  return;
}



void fn_005cd3e0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  puVar1[0x19] = 0;
  *puVar1 = DAT_0084bc34;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  return;
}



void fn_005cd950(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = DAT_0084be6c;
  *(undefined1 *)(puVar1 + 2) = 0;
  return;
}



void fn_005d20fc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x1c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005d212c(iVar1,param_1);
  return;
}



void fn_005d21f0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xf0,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005d24bc(iVar1,param_1);
  return;
}



void fn_005d2974(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x1c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005d29a4(iVar1,param_1);
  return;
}



void fn_005d29f4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005d2a24(iVar1,param_1);
  return;
}



void fn_005d2af8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x550,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005d2b28(iVar1,param_1);
  return;
}



void fn_005d2e6c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xf0,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005d3804(iVar1,param_1);
  return;
}



void fn_005d3d20(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005d3db8(iVar1,param_1);
  return;
}



void fn_005d4338(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xd4,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005d4484(iVar1,param_1);
  return;
}



void fn_005d4530(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x38,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005d4560(iVar1,param_1);
  return;
}



void fn_005d6b84(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x6c))(param_1,DAT_008c66b7,0);
  if (iVar1 == 0) {
    return;
  }
  fn_006e98a4(param_1,param_2,DAT_008c66bc);
  return;
}



void fn_005d9de0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x20,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005d9e10(iVar1,param_1);
  return;
}



void fn_005da4f4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x140,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005dae08(iVar1,param_1);
  return;
}



void fn_005db3a4(int param_1,undefined4 param_2)

{
  fn_0017821c(param_1 + 0xc,param_2,0x8d8);
  return;
}

