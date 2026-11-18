/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 00401f7c .. 0042bbc4.
 */
#include "decompiled.h"
#include "fuzzy_26.h"


void fn_00401f7c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,DAT_007ca0a8,1);
  *puVar1 = DAT_008375e0;
  return;
}



void fn_004042bc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0036c678();
  *puVar1 = DAT_00837914;
  *(undefined1 *)((int)puVar1 + 0x69) = 0;
  return;
}



void fn_00411944(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = DAT_008389dc;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined1 *)((int)puVar1 + 9) = 0;
  *(undefined1 *)((int)puVar1 + 10) = 0;
  *(undefined1 *)((int)puVar1 + 0xb) = 0;
  *(undefined1 *)(puVar1 + 3) = 1;
  *(undefined1 *)((int)puVar1 + 0xd) = 1;
  *(undefined1 *)((int)puVar1 + 0xe) = 0;
  puVar1[4] = 0;
  return;
}



void fn_004119ac(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_004119dc(iVar1,param_1);
  return;
}



void fn_00411a0c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00411a3c(iVar1,param_1);
  return;
}



void fn_00411a6c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x24,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00411a9c(iVar1,param_1);
  return;
}



void fn_00412548(int *param_1)

{
  (**(code **)(*param_1 + 0x124))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00412578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x16c))(param_1,1,0);
  return;
}



void fn_00418154(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x108,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0041899c(iVar1,param_1);
  return;
}



void fn_00419060(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xd8,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_004192bc(iVar1,param_1);
  return;
}



void fn_0041a80c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xa4,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0041a9e4(iVar1,param_1);
  return;
}



void fn_0041afcc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xbc,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0041b6e0(iVar1,param_1);
  return;
}



void fn_0041c0a4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0041c0d4(iVar1,param_1);
  return;
}



void fn_0041c438(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xf0,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0041c68c(iVar1,param_1);
  return;
}



void fn_0041d75c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x104,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0041ddb0(iVar1,param_1);
  return;
}



void fn_0041e108(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xec,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0041e1ec(iVar1,param_1);
  return;
}



void fn_0041fc90(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x88,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0041fd70(iVar1,param_1);
  return;
}



void fn_0041fe0c(int param_1,undefined4 param_2)

{
  fn_0017821c(param_1 + 0x41808,param_2,0x19b98);
  return;
}



void fn_00420734(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xec,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_004208a8(iVar1,param_1);
  return;
}



void fn_00420fb8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001f7350();
  *puVar1 = DAT_0083aa88;
  return;
}



void fn_00422640(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x68,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_004226c4(iVar1,param_1);
  return;
}



void fn_00422d68(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x6c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00422dcc(iVar1,param_1);
  return;
}



void fn_00424790(void)

{
  int iVar1;
  
  fn_002fb670();
  fn_002fb664(1);
  iVar1 = fn_006f7a5c(DAT_008977e0);
  if (iVar1 == 0) {
    return;
  }
  fn_006f7a5c(DAT_008977e0);
  fn_001d8140();
  return;
}



void fn_00424e0c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xa4,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00424eac(iVar1,param_1);
  return;
}



void fn_00427eb8(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003d8360(param_1,param_2,6);
  *puVar1 = DAT_0083b440;
  return;
}



void fn_0042b788(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x114,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0042b7bc(iVar1,param_1);
  return;
}



void fn_0042bbc4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_007464d8();
  *puVar1 = DAT_0083ba7c;
  return;
}

