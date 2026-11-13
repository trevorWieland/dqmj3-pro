#include "00145a30_00146d2c.h"



void fn_00146d2c(void)

{
  int iVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_r7;
  int iVar3;
  
  iVar1 = DAT_008e3108;
  UNRECOVERED_JUMPTABLE = (code *)0x0;
  iVar3 = *(int *)(DAT_008e3108 + 0x18) + *(int *)(DAT_008e3108 + 0x28) * 0x1c;
  fn_00150284();
  iVar2 = *(int *)(iVar1 + 0x28) + 1;
  *(int *)(iVar1 + 0x28) = iVar2;
  if ((*(code **)(iVar1 + 0x38) != (code *)0x0) &&
     ((*(char *)(iVar3 + 1) != '\0' ||
      ((iVar2 == *(int *)(iVar1 + 0x20) && (*(char *)(iVar1 + 0x3c) != '\0')))))) {
    UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 0x38);
    unaff_r7 = iVar2;
  }
  if (*(char *)(iVar3 + 2) == '\0') {
    if (iVar2 < *(int *)(iVar1 + 0x20)) {
      fn_0016720c();
    }
    else {
      DAT_008e3079 = 0;
    }
  }
  else {
    DAT_008e307a = 0;
    DAT_008e3080 = 0;
    DAT_008e3079 = 0;
  }
  fn_00150294();
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00146dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(unaff_r7);
  return;
}



void fn_00146a80(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11,int param_12)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  if (param_10 == 0x500) {
    iVar11 = 0;
    uVar1 = 1;
  }
  else {
    if (param_10 != 0x501) {
      if (param_10 != 0x502) {
        return;
      }
      iVar11 = 2;
      uVar1 = 2;
      sVar5 = 2;
      goto LAB_00146ad8;
    }
    iVar11 = 1;
    uVar1 = 2;
  }
  sVar5 = 1;
LAB_00146ad8:
  if (param_5 == 0x8057) {
    uVar3 = 3;
  }
  else if (param_5 < 0x8057) {
    if (param_5 == 0x8051) {
      uVar3 = 1;
    }
    else {
      if (param_5 != 0x8056) {
        return;
      }
      uVar3 = 4;
    }
  }
  else if (param_5 == 0x8058) {
    uVar3 = 0;
  }
  else {
    if (param_5 != 0x8d62) {
      return;
    }
    uVar3 = 2;
  }
  if (param_9 == 0x8057) {
    iVar8 = 3;
    iVar2 = 2;
  }
  else if (param_9 < 0x8057) {
    if (param_9 == 0x8051) {
      iVar8 = 1;
      iVar2 = 3;
    }
    else {
      if (param_9 != 0x8056) {
        return;
      }
      iVar8 = 4;
      iVar2 = 2;
    }
  }
  else if (param_9 == 0x8058) {
    iVar8 = 0;
    iVar2 = 4;
  }
  else {
    if (param_9 != 0x8d62) {
      return;
    }
    iVar8 = 2;
    iVar2 = iVar8;
  }
  if ((param_3 == 0 || param_4 == 0) || (param_7 == 0 || param_8 == 0)) {
    return;
  }
  uVar10 = param_7 * uVar1;
  puVar4 = (undefined1 *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) * 0x1c);
  *puVar4 = 3;
  *(undefined4 *)(puVar4 + 4) = param_2;
  *(int *)(puVar4 + 8) = param_6;
  uVar6 = *(uint *)(puVar4 + 0x14);
  uVar7 = uVar6 & 0xffffffc0 | uVar3 | iVar8 << 3;
  *(uint *)(puVar4 + 0x14) = uVar7;
  *(short *)(puVar4 + 0xc) = (short)param_3;
  *(short *)(puVar4 + 0xe) = (short)param_4;
  *(short *)(puVar4 + 0x10) = (short)uVar10;
  if (param_11 == 0) {
    uVar1 = uVar6 & 0xffffff80 | uVar3 | iVar8 << 3;
  }
  *(short *)(puVar4 + 0x12) = (short)param_8 * sVar5;
  if (param_11 != 0) {
    uVar9 = *(uint *)(puVar4 + 0x10);
    uVar6 = uVar9 & 0xffff;
    uVar3 = *(uint *)(puVar4 + 0xc) & 0xffff;
    if (uVar3 <= uVar6) {
      uVar10 = uVar9 >> 0x10;
    }
    if (uVar3 > uVar6 || uVar10 < *(uint *)(puVar4 + 0xc) >> 0x10) {
      if (uVar1 == 2) {
        uVar3 = uVar3 - uVar6;
        if (iVar2 == 3) {
          uVar1 = 0x10;
        }
        else {
          uVar1 = 8;
        }
        if ((uVar3 & uVar1) != 0) {
          uVar3 = uVar3 - uVar1;
        }
        iVar2 = (int)(uVar3 * (param_8 + -1) * iVar2) / 2;
      }
      else {
        iVar2 = (uVar3 - uVar6) * ((uVar9 >> 0x10) - 1) * iVar2;
      }
      *(int *)(puVar4 + 8) = param_6 - iVar2;
    }
    uVar1 = uVar7 | 0x40;
  }
  uVar3 = uVar1 & 0xfffffe7f | iVar11 << 7;
  *(uint *)(puVar4 + 0x14) = uVar3;
  if (param_12 == 0x20) {
    uVar3 = uVar3 | 0x200;
  }
  else {
    uVar3 = uVar1 & 0xfffffc7f | iVar11 << 7;
  }
  *(uint *)(puVar4 + 0x14) = uVar3 & 0xfffff3ff;
  fn_00150284();
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  if (((DAT_008e3108 == param_1) && (DAT_008e307a != '\0')) && (DAT_008e3079 == '\0')) {
    DAT_008e3079 = '\x01';
    fn_0016720c();
  }
  fn_00150294();
  return;
}



int * fn_00146994(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  uint local_18;
  int *local_14;
  
  iVar1 = fn_002fece8(0xb4);
  if (iVar1 != 0) {
    fn_0014c4c8();
  }
  fn_0014a6a0(iVar1);
  piVar2 = (int *)fn_002fece8(0xa8);
  if (piVar2 != (int *)0x0) {
    fn_0015467c(piVar2,iVar1);
  }
  local_18 = 0x8001000;
  local_14 = piVar2;
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    fn_00146590(0,&local_18);
  }
  piVar2[1] = piVar2[1] + 1;
  fn_0019e864(iVar1 + 0x48);
  if (((local_18 & 0x8000000) != 0) &&
     (iVar1 = local_14[1], local_14[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*local_14 + 8))();
  }
  iVar1 = fn_001544a0(piVar2,0,param_1);
  if (iVar1 == 0) {
    (**(code **)*piVar2)(piVar2);
    fn_0019d680(piVar2,0xa8);
    piVar2 = (int *)0x0;
  }
  return piVar2;
}



void fn_001464f4(void)

{
  if (DAT_0089a51c != 0) {
    DAT_0089a51c = 0;
  }
  return;
}



void fn_00146034(void)

{
  if (DAT_008bfab0 != 0) {
    DAT_008bfab0 = 0;
  }
  return;
}



undefined4 fn_00145adc(byte *param_1)

{
  undefined4 uVar1;
  
  if ((*param_1 < 2) || (*param_1 == 2)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 fn_00145ad0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 8) + 0xe8);
  if ((bVar1 < 2) || (bVar1 == 2)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void fn_00145a68(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int local_10;
  
  local_10 = param_4;
  fn_0012bc84(0x208,&local_10);
  iVar1 = local_10;
  local_10 = fn_00156130(param_1 + 0x14,local_10,*(undefined4 *)(param_1 + 0x5c),1);
  fn_001467e4(local_10 - iVar1 & 0xfffffffc);
  fn_00146578();
  return;
}



void fn_001467e4(int param_1)

{
  DAT_008bf790 = param_1 + DAT_008bf790;
  return;
}



undefined4 fn_00146578(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0089a518;
  DAT_0089a518 = 0;
  return uVar1;
}



undefined4 fn_00145a40(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0xdc);
  iVar2 = *(int *)(iVar1 + 0x48);
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  else {
    iVar2 = iVar2 + -1;
  }
  return *(undefined4 *)(iVar1 + iVar2 * 0x20 + 0x20);
}



undefined4 fn_00145a30(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  bool bVar4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x3c);
  bVar4 = param_2 >> 0x18 == 1;
  if (bVar4) {
    param_4 = 1;
  }
  uVar3 = 0xffffffff;
  if (bVar4 && param_4 == param_2 >> 0x18) {
    puVar2 = (uint *)(iVar1 + *(int *)(iVar1 + 4));
    if ((((param_2 & 0xffffff) < *puVar2) &&
        (iVar1 = (int)puVar2 + puVar2[(param_2 & 0xffffff) * 2 + 2], iVar1 != 0)) &&
       (*(short *)(iVar1 + 0xc) == 0x2201)) {
      uVar3 = *(undefined4 *)(iVar1 + *(int *)(iVar1 + 0x10) + 0x20);
    }
  }
  return uVar3;
}


