/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 00352e48 .. 00386854.
 */
#include "decompiled.h"
#include "fuzzy_17.h"


void fn_00352e48(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = DAT_008267d4;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined1 *)((int)puVar1 + 9) = 0;
  return;
}



void fn_0035a0cc(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = DAT_00826aa4;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



void fn_00362d64(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = DAT_008272d4;
  return;
}



void fn_0036c934(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x558,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0036c968(iVar1,param_1);
  return;
}



void fn_0036cbc8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025d744();
  *puVar1 = DAT_0082799c;
  *(undefined1 *)(puVar1 + 0x35) = 1;
  return;
}



void fn_0036cd84(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc4,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0036cecc(iVar1,param_1);
  return;
}



void fn_0036d8b4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397f10();
  puVar1[0x34] = 0;
  *puVar1 = DAT_00827bc4;
  puVar1[0x35] = 0;
  return;
}



void fn_0036e300(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0036e330(iVar1,param_1);
  return;
}



void fn_00370494(int param_1,undefined4 param_2)

{
  fn_0017821c(*(undefined4 *)(param_1 + 0x6c),param_2,0x1510);
  return;
}



void fn_00370a5c(undefined4 *param_1)

{
  *param_1 = DAT_00828314;
  return;
}



undefined4 fn_00371d94(void)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_0014481c(DAT_008977e8);
  iVar1 = fn_006b6c88();
  if (0 < iVar1) {
    uVar2 = fn_0014481c(DAT_008977e8);
    iVar1 = fn_006b6b3c(uVar2,0);
    if (*(char *)(iVar1 + 0x74) == '\0') {
      return 1;
    }
  }
  return 0;
}



void fn_00373e40(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(200,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00374048(iVar1,param_1);
  return;
}



void fn_00376208(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x14,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00376298(iVar1,param_1);
  return;
}



bool fn_0037645c(int param_1)

{
  return *(float *)(*(int *)(param_1 + 0x6c) + 0x24) != 0.0;
}



void fn_00376538(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x88,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00376c18(iVar1,param_1);
  return;
}



void fn_00376f6c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x98,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00377188(iVar1,param_1);
  return;
}



void fn_003789ec(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001f7350();
  *puVar1 = DAT_00828b74;
  return;
}



undefined1 fn_00378afc(int param_1)

{
  return *(undefined1 *)(DAT_008924c4 + param_1 * 6 + 4);
}



int fn_00378bbc(int param_1)

{
  return (int)*(short *)(DAT_008924c4 + param_1 * 6 + 2);
}



int fn_00378bf0(int param_1)

{
  return (int)*(short *)(DAT_008924c4 + param_1 * 6);
}



void fn_0037b890(int *param_1)

{
  int iVar1;
  
  fn_001db0c4();
  iVar1 = param_1[0x5a];
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      iVar1 = (**(code **)(*param_1 + 0x48))(param_1);
      if (iVar1 != 0) {
        param_1[0x5a] = 2;
      }
    }
    else if (iVar1 == 2) {
      param_1[0x5a] = 3;
      (**(code **)(*param_1 + 0x58))(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x0037b8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x54))(param_1,0);
      return;
    }
  }
  return;
}



undefined4 fn_0037c060(int param_1)

{
  return *(undefined4 *)(DAT_007c4bc4 + param_1 * 0xc);
}



void fn_0037c844(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xb8,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0037ca98(iVar1,param_1);
  return;
}



void fn_0037e6f0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x28,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0037e720(iVar1,param_1);
  return;
}



void fn_00380bb0(int *param_1)

{
  if (*(char *)((int)param_1 + 0xe5) == '\x01') {
    (**(code **)(*param_1 + 0x1b8))(param_1,0);
    *(undefined1 *)((int)param_1 + 0xe5) = 0;
    fn_0068ab44(param_1,0x100094c);
  }
  else {
    fn_002c1f84(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00380bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1b4))(param_1);
  return;
}



void fn_00384898(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xd4,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003849cc(iVar1,param_1);
  return;
}



void fn_00386854(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xd4,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003868d0(iVar1,param_1);
  return;
}

