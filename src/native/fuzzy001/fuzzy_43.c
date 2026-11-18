/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 005db418 .. 00602ad4.
 */
#include "decompiled.h"
#include "fuzzy_43.h"


void fn_005db418(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = DAT_0084d1ec;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined1 *)((int)puVar1 + 9) = 0;
  *(undefined1 *)(puVar1 + 0x46f) = 0;
  puVar1[0x470] = 0;
  *(undefined1 *)((int)puVar1 + 10) = 0;
  *(undefined1 *)((int)puVar1 + 0xb) = 0;
  return;
}



void fn_005db540(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0039571c();
  puVar1[0x43] = 0;
  *puVar1 = DAT_0084d218;
  return;
}



void fn_005db658(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = DAT_0084d230;
  *(undefined1 *)(puVar1 + 2) = 0;
  return;
}



void fn_005db770(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0043f144();
  *puVar1 = DAT_0084d35c;
  *(undefined1 *)(puVar1 + 4) = 1;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 1;
  *(undefined1 *)((int)puVar1 + 0x19) = 1;
  return;
}



void fn_005dba24(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  *puVar1 = DAT_0084d374;
  return;
}



void fn_005dbc98(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005d4f1c();
  *puVar1 = DAT_0084d4bc;
  return;
}



void fn_005deab4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  puVar1[0x39] = 0;
  *puVar1 = DAT_0084dad4;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  puVar1[0x3c] = 0;
  return;
}



undefined4 * fn_005f6f1c(undefined4 *param_1)

{
  *param_1 = DAT_00859490;
  fn_002feef8(param_1[1]);
  return param_1;
}



void fn_005f7974(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x34,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005f79a4(iVar1,param_1);
  return;
}



void fn_005f79cc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005f79fc(iVar1,param_1);
  return;
}



void fn_005f8170(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x1fc,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005f8670(iVar1,param_1);
  return;
}



void fn_005f8b6c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x128,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005f8d44(iVar1,param_1);
  return;
}



void fn_005f8eec(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x2c);
  *puVar1 = DAT_0084df04;
  return;
}



void fn_005f8f18(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005f8f48(iVar1,param_1);
  return;
}



void fn_005f946c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x88,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005f954c(iVar1,param_1);
  return;
}



void fn_005f95d4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x18,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005f9604(iVar1,param_1);
  return;
}



void fn_005f9640(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x18,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005f9670(iVar1,param_1);
  return;
}



void fn_005fa478(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x18,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005fa4a8(iVar1,param_1);
  return;
}



void fn_005fa92c(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0066e158(DAT_00898840);
  if (iVar1 == 0) {
    fn_00321598(*(undefined4 *)(param_1 + 100));
    fn_006899f4(param_1,0xe0,0,1);
    return;
  }
  return;
}



void fn_005fad40(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x168,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005faf48(iVar1,param_1);
  return;
}



void fn_005fb5f8(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0066e158(DAT_00898840);
  if (iVar1 == 0) {
    fn_00321598(*(undefined4 *)(param_1 + 100));
    return;
  }
  return;
}



void fn_005fb658(int *param_1)

{
  int iVar1;
  
  iVar1 = fn_0066e158(DAT_00898840);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x108))(param_1);
    fn_006899f4(param_1,0xe1,0,1);
    return;
  }
  return;
}



void fn_005fb6a4(int *param_1)

{
  int iVar1;
  
  iVar1 = fn_0066e158(DAT_00898840);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x108))(param_1);
    fn_006899f4(param_1,0xe0,0,1);
    return;
  }
  return;
}



void fn_005fb9e4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005fba14(iVar1,param_1);
  return;
}



void fn_005fc994(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xb08,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005fc9c8(iVar1,param_1);
  return;
}



void fn_00602ad4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005d4f1c();
  *puVar1 = DAT_0084ef48;
  return;
}

