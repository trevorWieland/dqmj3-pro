/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 00568f5c .. 0058418c.
 */
#include "decompiled.h"
#include "fuzzy_34.h"


void fn_00568f5c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0039b1e0();
  *puVar1 = DAT_008400fc;
  return;
}



void fn_00569304(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0039b1e0();
  *puVar1 = DAT_0084024c;
  return;
}



void fn_0056a6cc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = DAT_0084065c;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



void fn_0056a750(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = DAT_00840670;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined1 *)((int)puVar1 + 9) = 0;
  return;
}



void fn_00570520(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0043d370(param_1,param_2,0,0,0);
  *puVar1 = DAT_00840904;
  puVar1[0x41] = 0;
  puVar1[0x42] = 0;
  return;
}



void fn_00570aac(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = DAT_00840a70;
  *(undefined1 *)(puVar1 + 0x2c) = 0;
  return;
}



void fn_00570fc8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  puVar1[0x39] = 0;
  *puVar1 = DAT_00840bb0;
  *(undefined1 *)(puVar1 + 0x3a) = 0;
  return;
}



void fn_00572280(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  puVar1[0x19] = 0xffffffff;
  *puVar1 = DAT_00840f5c;
  puVar1[0x1a] = 0xffffffff;
  return;
}



void fn_00579cf4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  puVar1[2] = 0;
  *puVar1 = DAT_00841690;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return;
}



void fn_0057a0c4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = DAT_008417e4;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined1 *)((int)puVar1 + 9) = 0;
  return;
}



void fn_0057ca6c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0057ca9c(iVar1,param_1);
  return;
}



void fn_0057eb34(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xd4,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0057ec1c(iVar1,param_1);
  return;
}



void fn_00580e78(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x2c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00580f08(iVar1,param_1);
  return;
}



void fn_00580fd8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xac,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00581030(iVar1,param_1);
  return;
}



void fn_00581078(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x14,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005810a8(iVar1,param_1);
  return;
}



void fn_005812e4(int *param_1)

{
  fn_00689828(param_1,1);
  param_1[0x36] = 0;
  param_1[0x32] = 0;
  fn_005c1d18(param_1);
  fn_002b0b04(*(undefined4 *)(DAT_00897804 + 100),param_1[0x31]);
  fn_005c1bd0(param_1);
  (**(code **)(*param_1 + 0x170))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00581344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x158))(param_1);
  return;
}



void fn_00581468(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_00231cb8((DAT_007c6d64)[*(int *)(param_1 + 0xd0)]);
  fn_00243550(*(undefined4 *)(param_1 + 0xa4),uVar1);
  return;
}



void fn_0058178c(int *param_1)

{
  fn_00411cc4();
  (**(code **)(*param_1 + 0x15c))(param_1);
                    /* WARNING: Could not recover jumptable at 0x005817b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x158))(param_1);
  return;
}



void fn_00582b58(int *param_1)

{
  fn_0042fe80();
                    /* WARNING: Could not recover jumptable at 0x00582b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1b4))(param_1);
  return;
}



void fn_00582b78(int *param_1)

{
  fn_0042fe80();
                    /* WARNING: Could not recover jumptable at 0x00582b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1b4))(param_1);
  return;
}



void fn_00583ec0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00583ef0(iVar1,param_1);
  return;
}



void fn_00583f88(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00583fb8(iVar1,param_1);
  return;
}



void fn_00584018(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x24,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00584048(iVar1,param_1);
  return;
}



void fn_005840ac(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x28,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005840dc(iVar1,param_1);
  return;
}



void fn_00584114(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00584144(iVar1,param_1);
  return;
}



void fn_0058418c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(8,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005841bc(iVar1,param_1);
  return;
}

