#include "00693484_006939d8.h"



void fn_006939d8(int *param_1)

{
  if ((char)param_1[0x44] == '\0') {
    (**(code **)(*param_1 + 0x13c))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00693a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x138))(param_1);
    return;
  }
  return;
}



undefined4 fn_00693914(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = fn_001d99a0(param_1,param_2,0,0,param_4);
  uVar2 = fn_006f7a9c(DAT_008977e0);
  iVar3 = fn_00279bbc(uVar2,param_2 + 1);
  if (iVar3 != 0) {
    fn_001d962c(param_1,param_2 + 1,param_2 + 2,param_2 + 3,0);
  }
  param_1[0x3b] = 0;
  param_1[0x3c] = 0x41000000;
  param_1[0x3d] = 0;
  (**(code **)(*param_1 + 0x54))(param_1,1);
  *(undefined1 *)((int)param_1 + 0x169) = 0;
  fn_001d96a0(param_1,&DAT_007bf890);
  param_1[0x4e] = param_1[0x4e] | 8;
  (**(code **)(*param_1 + 0x58))(param_1,0);
  return uVar1;
}



void fn_006938e8(int *param_1)

{
  (**(code **)(*param_1 + 0x54))(param_1,0);
  fn_001d9fcc(param_1);
  return;
}



void fn_00693788(int *param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  
  iVar1 = fn_006f7a5c(DAT_008977e0);
  fVar4 = *(float *)(iVar1 + 0x1c);
  fVar6 = *(float *)(iVar1 + 0x20);
  fVar5 = *(float *)(iVar1 + 0x24);
  uVar7 = fn_00211f10(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
  iVar1 = (int)((ulonglong)uVar7 >> 0x20);
  if (((int)uVar7 == 0) ||
     (uVar7 = (**(code **)(*param_1 + 0x134))(param_1), iVar1 = (int)((ulonglong)uVar7 >> 0x20),
     (int)uVar7 != 0)) {
    iVar2 = (int)*(short *)((int)param_1 + 0x16a);
    if (iVar2 != 0x3d4) {
      iVar1 = -0x3d5;
    }
    if (iVar2 != 0x3d4 && iVar2 + iVar1 != 0) goto LAB_0069381c;
  }
  iVar1 = fn_006f733c(DAT_008977e0);
  if (iVar1 == 0) {
    iVar1 = fn_006f7a84(DAT_008977e0);
    fVar4 = *(float *)(iVar1 + 0x20);
    fVar6 = *(float *)(iVar1 + 0x24);
    fVar5 = *(float *)(iVar1 + 0x28);
  }
LAB_0069381c:
  pfVar3 = (float *)param_1[0x40];
  fVar4 = fVar4 - ((float)param_1[8] + *pfVar3);
  fVar5 = fVar5 - ((float)param_1[10] + pfVar3[2]);
  fVar6 = fVar6 - ((float)param_1[9] + pfVar3[1]);
  fVar6 = SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5);
  if (fVar6 <= (float)param_1[0x49]) {
    if (*(char *)((int)param_1 + 0x59) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x006938d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x58))(param_1,1);
      return;
    }
  }
  else if ((fVar6 < (float)param_1[0x4a]) && (*(char *)((int)param_1 + 0x59) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x006938a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x58))(param_1,0);
    return;
  }
  return;
}



void fn_00693654(int *param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  undefined8 uVar5;
  
  *(short *)((int)param_1 + 0x16a) = (short)param_2;
  *(undefined2 *)(param_1 + 0x5b) = param_3;
  if (param_2 == 0) {
    (**(code **)(*param_1 + 0x44))(param_1,1,4,0);
    *(undefined1 *)((int)param_1 + 0x169) = 5;
    iVar1 = fn_0018367c(param_1[0x39]);
    fVar4 = 1.0;
    *(float *)(iVar1 + 4) = *(float *)(iVar1 + 0xc) - 1.0;
    uVar2 = fn_006ec29c(param_1[0x39],0);
    iVar1 = fn_006ec21c(param_1[0x39],uVar2);
    if (iVar1 != 0) {
      *(float *)(iVar1 + 4) = *(float *)(iVar1 + 0xc) - fVar4;
    }
  }
  uVar5 = fn_00211f10(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
  iVar1 = (int)((ulonglong)uVar5 >> 0x20);
  if (((int)uVar5 == 0) ||
     (uVar5 = (**(code **)(*param_1 + 0x134))(param_1), iVar1 = (int)((ulonglong)uVar5 >> 0x20),
     (int)uVar5 != 0)) {
    iVar3 = (int)*(short *)((int)param_1 + 0x16a);
    if (iVar3 != 0x3d4) {
      iVar1 = -0x3d5;
    }
    if (iVar3 != 0x3d4 && iVar3 + iVar1 != 0) {
      return;
    }
  }
  *(undefined1 *)((int)param_1 + 0x172) = 1;
  fn_001d96a0(param_1,&DAT_007bf89c);
                    /* WARNING: Could not recover jumptable at 0x00693758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}



void fn_0069356c(int *param_1)

{
  if ((char)param_1[0x5a] != '\n') {
    (**(code **)(*param_1 + 0x44))(param_1,1,4,0);
  }
  switch((char)param_1[0x5a]) {
  case '\x06':
  case '\a':
  case '\b':
  case '\t':
  case '\f':
    break;
  default:
  }
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_00693550(void)

{
  return;
}



undefined4 * fn_006934d4(undefined4 *param_1)

{
  if (param_1[4] != 0) {
    fn_002a726c();
    fn_002feef8();
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))();
  }
  if (param_1[2] != 0) {
    fn_002feef8(param_1[2]);
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  fn_002feef8(*param_1);
  return param_1;
}



void fn_006934b8(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}



void fn_00693484(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  
  if (*param_1 == 0) {
    return;
  }
  fn_002a6ee8(param_1[4]);
  iVar4 = param_1[3];
  if (iVar4 == 0) {
    return;
  }
  fn_001c93c8(*(undefined4 *)(iVar4 + 0x14));
  fn_0035abdc(iVar4);
  switch(*(undefined1 *)(iVar4 + 8)) {
  case 0:
    fn_001088e0(*(undefined4 *)(iVar4 + 0x14),*(undefined4 *)(iVar4 + 0x20));
    fn_00154a6c();
    iVar3 = fn_006f7a48(DAT_008977e0);
    if ((*(uint *)(iVar3 + 8) < 0x1f) || (*(char *)(iVar4 + 0x24) != '\0'))
    goto switchD_0035b4a4_default;
    fn_0035b638(iVar4,1);
    uVar2 = 1;
    break;
  case 1:
    fn_001088e0(*(undefined4 *)(iVar4 + 0x14),*(undefined4 *)(iVar4 + 0x20));
    iVar3 = fn_00154a6c();
    if (iVar3 == 0) goto switchD_0035b4a4_default;
    fn_0035b638(iVar4,2);
    uVar2 = 2;
    goto LAB_0035b5f4;
  case 2:
    fn_001088e0(*(undefined4 *)(iVar4 + 0x14),*(undefined4 *)(iVar4 + 0x20));
    fn_00154a6c();
    iVar3 = fn_006f7a48(DAT_008977e0);
    if ((*(int *)(iVar3 + 8) != 0) && (*(char *)(iVar4 + 0x24) == '\0'))
    goto switchD_0035b4a4_default;
    fn_0035b638(iVar4,3);
    uVar2 = 3;
    break;
  case 3:
    fn_001088e0(*(undefined4 *)(iVar4 + 0x14),*(undefined4 *)(iVar4 + 0x20));
    iVar3 = fn_00154a6c();
    if (iVar3 == 0) goto switchD_0035b4a4_default;
    fn_0035b638(iVar4,0);
    uVar2 = 0;
LAB_0035b5f4:
    *(undefined1 *)(iVar4 + 10) = uVar2;
  default:
    goto switchD_0035b4a4_default;
  }
  *(undefined1 *)(iVar4 + 10) = uVar2;
switchD_0035b4a4_default:
  cVar1 = *(char *)(iVar4 + 8);
  *(int *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) + 1;
  *(char *)(iVar4 + 9) = cVar1;
  *(char *)(iVar4 + 8) = *(char *)(iVar4 + 10);
  if (cVar1 == *(char *)(iVar4 + 10)) {
    iVar3 = *(int *)(iVar4 + 0x10) + 1;
  }
  else {
    iVar3 = 0;
  }
  *(int *)(iVar4 + 0x10) = iVar3;
  return;
}


