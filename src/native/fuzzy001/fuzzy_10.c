/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 0026c534 .. 002ce3d4.
 */
#include "decompiled.h"
#include "fuzzy_10.h"


void fn_0026c534(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0026bb64();
  *puVar1 = DAT_0081e05c;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}



void fn_00293604(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xa70) == '\x06') {
    uVar1 = fn_002ea524((int)*(short *)(param_1 + 0xa72));
    fn_002508f4(uVar1,*(undefined4 *)(param_1 + 0xa80));
    return;
  }
  return;
}



undefined4 fn_002962f0(void)

{
  int iVar1;
  
  iVar1 = fn_0068c7f4(DAT_008977e8);
  return *(undefined4 *)(iVar1 + 4);
}



undefined4 fn_00299e00(int param_1)

{
  undefined4 uVar1;
  short *psVar2;
  
  uVar1 = 0;
  psVar2 = (short *)(DAT_008928d4 + param_1 * 0x1a);
  if ((((*psVar2 != 0) && (uVar1 = 1, psVar2[2] != 0)) && (uVar1 = 2, psVar2[4] != 0)) &&
     (((uVar1 = 3, psVar2[6] != 0 && (uVar1 = 4, psVar2[8] != 0)) && (uVar1 = 5, psVar2[10] != 0))))
  {
    uVar1 = 6;
  }
  return uVar1;
}



undefined2 fn_00299e7c(int param_1,uint param_2)

{
  return *(undefined2 *)(DAT_008928d4 + param_1 * 0x1a + (param_2 & 0xff) * 4 + 2);
}



int fn_00299ea4(int param_1,uint param_2)

{
  return (int)*(short *)(DAT_008928d4 + param_1 * 0x1a + (param_2 & 0xff) * 4);
}



int fn_00299ecc(int param_1)

{
  return (int)*(short *)(DAT_008928d4 + param_1 * 0x1a + 0x18);
}



void fn_0029f704(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_00182994(DAT_008977e4);
  fn_00164c80(uVar1,param_1,1);
  return;
}



void fn_0029f9cc(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_00182994(DAT_008977e4);
  fn_00164c80(uVar1,param_1,2);
  return;
}



void fn_002a1a6c(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  
  *param_1 = (char)param_2;
  if (param_2 == 1) {
    uVar1 = 900;
  }
  else {
    if (param_2 == 2) {
      *(undefined4 *)(param_1 + 8) = 0x708;
      return;
    }
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



void fn_002a1ab8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025fb7c();
  *puVar1 = DAT_00851b88;
  return;
}



void fn_002a2e68(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0026bb64();
  *puVar1 = DAT_0081e78c;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined1 *)((int)puVar1 + 5) = 1;
  *(undefined1 *)((int)puVar1 + 6) = 0;
  return;
}



void fn_002a8214(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001f7350();
  *puVar1 = DAT_0081e984;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  return;
}



void fn_002a9f40(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_002aa570(iVar1,param_1);
  return;
}



void fn_002b0b18(int param_1)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x28) = 0;
  return;
}



void fn_002b7874(undefined4 *param_1)

{
  *param_1 = DAT_00851bdc;
  fn_003a6aa4(*(undefined4 *)(param_1[2] + 0x48),0);
  fn_002feef8(param_1);
  return;
}



void fn_002bbffc(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = DAT_00851d8c;
  iVar1 = fn_00182988(DAT_008977e4);
  fn_002a1a9c(iVar1 + 0x38c);
  iVar1 = fn_001c3c7c();
  if (iVar1 != 0) {
    fn_003ef8e0(*(undefined4 *)(*(int *)(param_1[2] + 0x4c) + 0x10));
  }
  fn_002feef8(param_1);
  return;
}



void fn_002c3d68(undefined4 param_1)

{
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_002c573c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc4,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_002c6180(iVar1,param_1);
  return;
}



void fn_002c5bec(int *param_1)

{
  uint uVar1;
  
  uVar1 = fn_006f6a5c();
  if ((uVar1 & 0x20000) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002c5c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x110))(param_1);
  return;
}



void fn_002c7734(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x11c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_002c7f50(iVar1,param_1);
  return;
}



void fn_002c8df4(undefined4 param_1,int param_2)

{
  fn_0022f750(*(undefined4 *)(DAT_00894f98 + param_2 * 4));
  return;
}



void fn_002c9280(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xe0,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_002c946c(iVar1,param_1);
  return;
}



void fn_002ca784(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xd8,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_002caa54(iVar1,param_1);
  return;
}



void fn_002cb3c0(undefined4 *param_1)

{
  param_1[2] = 0;
  *param_1 = DAT_0081fba8;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[5] = 0;
  return;
}



undefined4 * fn_002cd364(undefined4 *param_1,undefined4 *param_2)

{
  param_1[1] = 0;
  *param_1 = DAT_0081fc44;
  param_1[2] = *param_2;
  param_1[3] = param_2[1];
  param_1[4] = param_2[2];
  param_1[5] = param_2[3];
  param_1[6] = param_2[4];
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 5);
  *(undefined1 *)((int)param_1 + 0x5e) = 0;
  *(undefined1 *)((int)param_1 + 0x5f) = 0;
  fn_00158f6c((int)param_1 + 0x1e,0x40);
  return param_1;
}



void fn_002cd49c(undefined4 param_1,undefined4 param_2)

{
  fn_002466b8(DAT_0089284c,param_1,param_2);
  return;
}



void fn_002ce3d4(undefined4 *param_1)

{
  *param_1 = DAT_0081fc80;
  fn_00260014(param_1,1);
  fn_00260750(param_1);
  fn_002feef8();
  return;
}

