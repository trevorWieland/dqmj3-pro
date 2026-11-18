/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 00519324 .. 00568218.
 */
#include "decompiled.h"
#include "fuzzy_32.h"


undefined4 fn_00519324(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 - 0x100000U < 0x3ff00000) {
    fn_0017821c(param_2,param_1 + 4,0x4c);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xe0e14826;
  }
  return uVar1;
}



void fn_00519360(int param_1,int param_2)

{
  if (param_2 - 0x100000U < 0x3ff00000) {
    fn_0017821c(param_1 + 4,param_2,0x4c);
    return;
  }
  return;
}



undefined4 fn_0051995c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 - 0x100000U < 0x3ff00000) {
    *(int *)(param_1 + 0x24) = param_2;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xe0e14826;
  }
  return uVar1;
}



void fn_0051c494(void)

{
  if (DAT_008c0680 != 0) {
    fn_004ecfd0();
    DAT_008c0680 = 0;
  }
  return;
}



undefined4 fn_0051d8bc(void)

{
  undefined4 uVar1;
  
  if (DAT_008bf4d0 - 0x100000U < 0x3ff00000) {
    uVar1 = *(undefined4 *)(DAT_008bf4d0 + 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 fn_0051d9c8(void)

{
  undefined4 uVar1;
  
  if (DAT_008bf4d0 - 0x100000U < 0x3ff00000) {
    uVar1 = *(undefined4 *)(DAT_008bf4d0 + 8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 * fn_00520e48(undefined4 *param_1)

{
  *param_1 = DAT_008573e4;
  fn_00301f50(param_1 + 1,0x408);
  return param_1;
}



void fn_00521734(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00520de8();
  *puVar1 = DAT_00857424;
  return;
}



undefined4 fn_00523200(int param_1)

{
  DAT_008bfb34 = 0;
  fn_00523624(0x18,param_1,1);
  fn_00523624(0x19,param_1 + 1,1);
  fn_00523624(0x1a,param_1 + 2,1);
  fn_00523624(0x1b,param_1 + 4,4);
  fn_00523624(0x1c,param_1 + 8,4);
  return DAT_008bfb34;
}



void fn_00532fac(int *param_1)

{
  (**(code **)(*param_1 + 0xc))(param_1,DAT_008c3568);
  DAT_008c0464 = 0;
  return;
}



void fn_0054a630(int *param_1,int param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x28))(param_1,param_2,0);
  param_1[0xc] = param_2;
                    /* WARNING: Could not recover jumptable at 0x0054a66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_3);
  return;
}



void fn_00551a3c(int param_1,undefined4 param_2)

{
  undefined1 auStack_90 [136];
  
  fn_0017d96c(auStack_90,0x88,0x87,(char *)DAT_007d8878,*(undefined4 *)(param_1 + 0x20),param_2);
  (**(code **)(**(int **)(param_1 + 0x24) + 0xc))(*(int **)(param_1 + 0x24),0x616e696d,auStack_90,0)
  ;
  return;
}



void fn_00557e8c(int param_1)

{
  float in_s0;
  
  if (in_s0 < 0.0) {
    in_s0 = 0.0;
  }
  *(float *)(param_1 + 200) = in_s0;
  return;
}



void fn_00557ee8(int *param_1,undefined1 param_2)

{
  *(undefined1 *)((int)param_1 + 0x9d) = param_2;
  if (param_1[4] != 0) {
    fn_0017de8c(param_1[4],param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00557f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x24))(param_1);
  return;
}



void fn_00557f18(int *param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00557f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xc))(piVar1,param_1[3],param_2);
  return;
}



void fn_005581c4(undefined1 *param_1)

{
  float in_s0;
  
  *param_1 = 0;
  *(float *)(param_1 + 4) = in_s0 * 10.0;
  return;
}



undefined4 * fn_0055acb4(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = DAT_008582a0;
  fn_001a4270(param_1);
  for (iVar1 = param_1[0x4c]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1ac)) {
    if (*(char *)(iVar1 + 0x139) != '\0') {
      fn_001a46b0(iVar1);
    }
  }
  for (iVar1 = param_1[0x4c]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1ac)) {
    fn_001a4698(iVar1);
  }
  param_1[0x4c] = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  return param_1;
}



void fn_0055e2fc(int param_1,undefined4 param_2,undefined4 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0055e328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x80) + 8))(*(int **)(param_1 + 0x80),param_1,param_2,param_3);
  return;
}



void fn_00561f24(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003ed51c(param_1,param_2,0);
  *puVar1 = DAT_0083f458;
  return;
}



void fn_00562728(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xb0,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00563ecc(iVar1,param_1);
  return;
}



void fn_005664d8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x108,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00566718(iVar1,param_1);
  return;
}



void fn_00566508(int param_1,int param_2)

{
  undefined1 uVar1;
  
  *(int *)(*(int *)(param_1 + 0xe4) + 0x40) = param_2;
  if (param_2 == 4) {
    uVar1 = 4;
  }
  else {
    *(undefined4 *)(param_1 + 0x104) = 0xdd;
    fn_00689824(param_1,0);
    uVar1 = 0xe;
  }
  *(undefined1 *)(param_1 + 0x100) = uVar1;
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_00566f04(int param_1)

{
  fn_0023d3f4(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0x1b0));
  fn_0023d3f4(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0x1b4));
  fn_001d9f9c(param_1);
  return;
}



void fn_00567b80(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00390794(param_1,param_2,9);
  *puVar1 = DAT_0083ffb8;
  return;
}



void fn_00567dfc(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00390794(param_1,param_2,0xd);
  *puVar1 = DAT_0083ffec;
  return;
}



void fn_00567e74(int param_1)

{
  fn_00215e38(*(undefined4 *)(param_1 + 0x14),6,1);
                    /* WARNING: Could not recover jumptable at 0x00567ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x14) + 0x188))(*(int **)(param_1 + 0x14),0);
  return;
}



void fn_00568218(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x2e);
  *puVar1 = DAT_00840024;
  return;
}

