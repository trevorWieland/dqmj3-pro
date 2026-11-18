/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 006a3bfc .. 006ac3cc.
 */
#include "decompiled.h"
#include "fuzzy_49.h"


void fn_006a3bfc(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  param_1[0x6e] = 0;
  uVar1 = fn_0068c7e8(DAT_008977e8);
  fn_0023e640(uVar1,param_1[0x6f],0);
  param_1[0x6f] = -1;
  fn_006605b4(param_1 + 0x7c);
  fn_00144810(DAT_008977e8);
  iVar2 = fn_006a8714();
  if ((iVar2 == 0) || (iVar2 = (**(code **)(*param_1 + 0x98))(param_1), iVar2 == 0)) {
    return;
  }
  fn_003501b0(DAT_008977e8);
  return;
}



void fn_006a3c74(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x1b4) != -1) {
    piVar1 = (int *)fn_0068c7e8(DAT_008977e8);
    (**(code **)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(param_1 + 0x1b4));
    *(undefined4 *)(param_1 + 0x1b4) = 0xffffffff;
  }
  return;
}



void fn_006a6980(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x194) != -1) {
    piVar1 = (int *)fn_0068c7e8(DAT_008977e8);
    (**(code **)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(param_1 + 0x194));
    *(undefined4 *)(param_1 + 0x194) = 0xffffffff;
  }
  *(undefined1 *)(param_1 + 0x19c) = 0;
  return;
}



undefined4 fn_006a7b90(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_18 [16];
  
  fn_0026e378(auStack_18,*param_2,0,(char *)DAT_007ce550,0,1);
  uVar1 = fn_0026d2e8(auStack_18,1);
  fn_0026e410(auStack_18);
  return uVar1;
}



bool fn_006a7d2c(int param_1)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = *(float *)(*(int *)(param_1 + 0x10) + 0x1c);
  bVar1 = fVar2 == 0.0;
  if (bVar1) {
    fVar2 = *(float *)(*(int *)(param_1 + 0x10) + 0x24);
  }
  return !bVar1 || (!bVar1 || fVar2 != 0.0);
}



bool fn_006a7ee8(int param_1)

{
  return *(float *)(*(int *)(param_1 + 0x10) + 0x10) != 0.0;
}



bool fn_006a7f44(int param_1)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = *(float *)(*(int *)(param_1 + 0x10) + 0x24);
  bVar1 = fVar2 == 0.0;
  if (bVar1) {
    fVar2 = *(float *)(*(int *)(param_1 + 0x10) + 0x1c);
  }
  return !bVar1 || (!bVar1 || fVar2 != 0.0);
}



undefined4 fn_006aa980(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(char *)(*(int *)(param_1 + 400) + 0x3c) == '\0') &&
     ((iVar1 = fn_006a9938(param_1), iVar1 != 0 || (iVar1 = fn_006a99b0(param_1), iVar1 != 0)))) {
    uVar2 = fn_006f7388(DAT_008977e0);
    iVar1 = fn_006b4240(uVar2,*(undefined4 *)(param_1 + 0x2b0));
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = fn_006bab38(iVar1,(int)(short)*(undefined4 *)(param_1 + 0x270));
    if (iVar1 == 0xb) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_006aba8c(undefined4 param_1)

{
  int iVar1;
  
  fn_006f7a48(DAT_008977e0);
  iVar1 = fn_006a7d8c();
  if ((iVar1 == 0) ||
     ((iVar1 = fn_006aba20(param_1), iVar1 != 0 && (iVar1 = fn_00154ac8(0x3f), iVar1 == 0)))) {
    return 0;
  }
  return 1;
}



void fn_006abb88(void)

{
  fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14));
  return;
}



void fn_006abc00(void)

{
  fn_002e2c10(*(undefined4 *)(DAT_00897804 + 0x2c));
  return;
}



int fn_006abd08(void)

{
  int iVar1;
  
  iVar1 = fn_006f7a5c(DAT_008977e0);
  return iVar1 + 0x1c;
}



void fn_006abdf0(void)

{
  fn_006f7a84(DAT_008977e0);
  fn_006aba74();
  return;
}



void fn_006abe0c(void)

{
  fn_002426a8(*(undefined4 *)(DAT_00897804 + 0x1c));
  return;
}



void fn_006abe20(void)

{
  int iVar1;
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  fn_006c3a30(*(undefined4 *)(iVar1 + 0x30));
  return;
}



void fn_006abe40(void)

{
  int iVar1;
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  fn_006c3a50(*(undefined4 *)(iVar1 + 0x30));
  return;
}



bool fn_006abe98(void)

{
  int iVar1;
  
  iVar1 = fn_006b4f84(*(undefined4 *)(DAT_00897804 + 0x18));
  return 0 < iVar1;
}



undefined4 fn_006abec0(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 6) {
    uVar1 = fn_006b627c(*(undefined4 *)(DAT_00897804 + 8));
    return uVar1;
  }
  return 0;
}



int fn_006abee4(void)

{
  int iVar1;
  
  iVar1 = fn_001c232c(DAT_008977e4);
  return *(int *)(iVar1 + 0x28) + 1;
}



undefined4 fn_006abf04(void)

{
  int iVar1;
  
  iVar1 = fn_006f7a84(DAT_008977e0);
  return *(undefined4 *)(iVar1 + 0x408);
}



undefined1 fn_006abf20(void)

{
  int iVar1;
  
  iVar1 = fn_006f75ac(DAT_008977e0);
  return *(undefined1 *)(*(int *)(iVar1 + 8) + 0x8f);
}



void fn_006abfc8(void)

{
  int iVar1;
  
  iVar1 = fn_006f72c8(DAT_008977e0);
  if (iVar1 == 0) {
    return;
  }
  fn_00222020(iVar1,0);
  return;
}



int fn_006ac078(void)

{
  int iVar1;
  
  iVar1 = fn_006f7a5c(DAT_008977e0);
  return iVar1 + 0x28;
}



void fn_006ac094(void)

{
  int iVar1;
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  if (*(int *)(iVar1 + 0x30) == 0) {
    return;
  }
  fn_006c3a70();
  return;
}



bool fn_006ac0fc(void)

{
  int iVar1;
  
  iVar1 = fn_006f72b4(DAT_008977e0);
  return *(int *)(iVar1 + 0x138) == 4 || *(int *)(iVar1 + 0x138) == 1;
}



undefined1 fn_006ac190(void)

{
  int iVar1;
  
  iVar1 = fn_001c232c(DAT_008977e4);
  return *(undefined1 *)(iVar1 + 8);
}



void fn_006ac1ac(void)

{
  fn_006b63ac(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



void fn_006ac398(void)

{
  fn_0066eb04(DAT_00897850);
  return;
}



void fn_006ac3cc(void)

{
  fn_006b63ec(*(undefined4 *)(DAT_00897804 + 8));
  return;
}

