/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 0059e4e0 .. 005b807c.
 */
#include "decompiled.h"
#include "fuzzy_38.h"


void fn_0059e4e0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = DAT_008463ec;
  return;
}



void fn_005a2e2c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  puVar1[0x2c] = 0;
  *puVar1 = DAT_00846868;
  return;
}



void fn_005a2e8c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,DAT_00895244,5);
  *puVar1 = DAT_008469a8;
  return;
}



void fn_005a52e4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  *puVar1 = DAT_00846c30;
  return;
}



void fn_005aeb84(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = DAT_00847960;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return;
}



void fn_005b1824(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,DAT_00892b30,1);
  *puVar1 = DAT_00847bbc;
  return;
}



void fn_005b2fd0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005b3000(iVar1,param_1);
  return;
}



void fn_005b3034(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x20,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005b3064(iVar1,param_1);
  return;
}



void fn_005b30cc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x24,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005b30fc(iVar1,param_1);
  return;
}



void fn_005b3140(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005b3170(iVar1,param_1);
  return;
}



void fn_005b31bc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x118,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005b31ec(iVar1,param_1);
  return;
}



void fn_005b329c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x9c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005b32cc(iVar1,param_1);
  return;
}



void fn_005b3314(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x14,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005b33d0(iVar1,param_1);
  return;
}



void fn_005b3ac0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xf8) == '\0') {
    return;
  }
  iVar1 = *(int *)(param_1 + 0xd0);
  iVar3 = *(int *)(iVar1 + 0x3c);
  if (iVar3 < *(int *)(iVar1 + 0x70)) {
    *(int *)(iVar1 + 0x3c) = iVar3 + 1;
    uVar2 = fn_003453a8(iVar3 + 1);
    fn_005b4558(param_1,0,uVar2);
    fn_0068ab44(param_1,0x1000957);
    return;
  }
  fn_0068ab44(param_1,0x100094d);
  return;
}



void fn_005b46e0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x28,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005b4710(iVar1,param_1);
  return;
}



void fn_005b4770(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x18,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005b47a0(iVar1,param_1);
  return;
}



void fn_005b47c8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x18,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005b47f8(iVar1,param_1);
  return;
}



void fn_005b49fc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x108,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005b4d04(iVar1,param_1);
  return;
}



void fn_005b6bec(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005d9bb0();
  puVar1[0x37] = 0;
  *puVar1 = DAT_008485f8;
  puVar1[0x38] = 0;
  return;
}



void fn_005b732c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005b73b4(iVar1,param_1);
  return;
}



void fn_005b741c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_1 + 0xc));
  fn_0017821c(param_1 + 0x10,uVar1,0xf0);
  return;
}



void fn_005b7450(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x108,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005b7480(iVar1,param_1);
  return;
}



void fn_005b7ae0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0xf);
  *puVar1 = DAT_00848a6c;
  return;
}



void fn_005b7ff8(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,5);
  *puVar1 = DAT_00848a94;
  return;
}



void fn_005b8024(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x9c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005b8054(iVar1,param_1);
  return;
}



void fn_005b807c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005b8104(iVar1,param_1);
  return;
}

