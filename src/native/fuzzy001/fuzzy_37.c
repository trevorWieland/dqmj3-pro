/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 0058c968 .. 005b2ed0.
 */
#include "decompiled.h"
#include "fuzzy_37.h"


void fn_0058c968(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  puVar1[2] = 0;
  *puVar1 = DAT_00843e40;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return;
}



void fn_00591e08(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  puVar1[0x2c] = 0;
  *puVar1 = DAT_00844804;
  return;
}



void fn_005921a8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002e6a94();
  puVar1[0x27] = 0;
  *puVar1 = DAT_00844944;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  return;
}



void fn_005922cc(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,DAT_0089528c,5);
  *puVar1 = DAT_00844b80;
  return;
}



void fn_00592754(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  puVar1[0x39] = 0;
  *puVar1 = DAT_00844c98;
  *(undefined1 *)(puVar1 + 0x3a) = 0;
  return;
}



void fn_00593968(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003953b0();
  *puVar1 = DAT_00844f7c;
  *(undefined1 *)(puVar1 + 5) = 1;
  puVar1[6] = 0;
  return;
}



void fn_0059790c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  puVar1[0x39] = 0;
  *puVar1 = DAT_008456ac;
  puVar1[0x3a] = 0;
  return;
}



void fn_0059e38c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0056a508();
  puVar1[5] = 0;
  *puVar1 = DAT_008463ac;
  return;
}



void fn_0059e404(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  puVar1[2] = 0;
  *puVar1 = DAT_008463c4;
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}



void fn_0059e488(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = DAT_008463d8;
  return;
}



void fn_0059e4b0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(8,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0059e4e0(iVar1,param_1);
  return;
}



void fn_0059e508(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x1c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0059e9a8(iVar1,param_1);
  return;
}



void fn_005a2a5c(undefined4 *param_1)

{
  *param_1 = DAT_00846728;
  fn_002c4100(param_1);
  fn_002c471c(param_1);
  fn_002feef8();
  return;
}



void fn_005a2d5c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xb4,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005a2e2c(iVar1,param_1);
  return;
}



void fn_005a2e5c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005a2e8c(iVar1,param_1);
  return;
}



void fn_005a2f74(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x28,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005a2fa4(iVar1,param_1);
  return;
}



void fn_005a52b4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xe4,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005a52e4(iVar1,param_1);
  return;
}



void fn_005a558c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x88,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005a566c(iVar1,param_1);
  return;
}



void fn_005aa1e8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xa8,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005aa6fc(iVar1,param_1);
  return;
}



void fn_005aaa90(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x34,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005aaac0(iVar1,param_1);
  return;
}



void fn_005ad8e0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x120,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005adb8c(iVar1,param_1);
  return;
}



void fn_005add70(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x15);
  *puVar1 = DAT_008478c0;
  *(undefined1 *)((int)puVar1 + 0x59) = 0;
  return;
}



void fn_005aeb38(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x18,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005aeb84(iVar1,param_1);
  return;
}



void fn_005af770(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xec,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005afb98(iVar1,param_1);
  return;
}



void fn_005b17f4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005b1824(iVar1,param_1);
  return;
}



void fn_005b2ed0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x114,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005b2f70(iVar1,param_1);
  return;
}

