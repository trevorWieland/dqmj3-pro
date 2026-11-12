#include "006a2404_006a3bfc.h"



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



void fn_006a3744(void)

{
  return;
}



void fn_006a34f4(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int local_38;
  int local_34;
  int local_30;
  
  uVar1 = fn_0017fde4(param_1[0x17]);
  iVar2 = fn_0068c694(DAT_008977e8);
  fn_00162d54(*(undefined4 *)(iVar2 + 0x24),uVar1);
  uVar1 = fn_0017fde4(param_1[0x16]);
  iVar2 = fn_0068c694(DAT_008977e8);
  fn_00162d54(*(undefined4 *)(iVar2 + 0x24),uVar1);
  iVar2 = fn_0068c694(DAT_008977e8);
  fn_00162d44(*(undefined4 *)(iVar2 + 0x24));
  uVar1 = fn_0017fde4(param_1[0x17]);
  iVar2 = fn_00154ab4(DAT_008977e8);
  fn_001969a4(*(undefined4 *)(iVar2 + 0x24),uVar1);
  uVar1 = fn_0017fde4(param_1[0x16]);
  iVar2 = fn_00154ab4(DAT_008977e8);
  fn_001969a4(*(undefined4 *)(iVar2 + 0x24),uVar1);
  iVar2 = fn_00154ab4(DAT_008977e8);
  fn_00162d44(*(undefined4 *)(iVar2 + 0x24));
  iVar2 = fn_00242984((int)(short)param_1[0x4f]);
  local_34 = *(undefined4 *)(iVar2 + 4);
  iVar2 = 0;
  local_30 = 0;
  (**(code **)(*param_1 + 0x18))(param_1,&local_38);
  uVar1 = 0xc2340000;
  fn_0017fe34();
  local_38 = iVar2;
  local_34 = uVar1;
  local_30 = iVar2;
  (**(code **)(*param_1 + 0x24))(param_1,&local_38);
  if (param_1[0x19] != -1) {
    iVar5 = param_1[0x16];
    uVar1 = fn_00156f24(DAT_008987bc);
    fn_00661f34(uVar1,iVar5);
    uVar1 = fn_00154ab4(DAT_008977e8);
    uVar3 = fn_00156f24(DAT_008987bc,param_1[0x19]);
    fn_00661eb8(uVar3,uVar1);
    iVar5 = param_1[0x16];
    uVar1 = fn_00156f24(DAT_008987bc,param_1[0x19]);
    fn_00661d1c(uVar1,iVar5);
  }
  param_1[0x1a] = iVar2;
  param_1[0x1b] = iVar2;
  param_1[0x1c] = iVar2;
  param_1[0x23] = iVar2;
  param_1[0x24] = iVar2;
  param_1[0x25] = iVar2;
  param_1[0x4d] = iVar2;
  param_1[0x4e] = iVar2;
  param_1[0x29] = 0;
  *(undefined1 *)(param_1 + 0x86) = 1;
  *(undefined1 *)(param_1 + 0x58) = 0;
  local_38 = iVar2;
  local_34 = iVar2;
  local_30 = iVar2;
  if (-1 < param_1[0x57]) {
    piVar4 = (int *)fn_0068c7e8(DAT_008977e8);
    (**(code **)(*piVar4 + 0xc))(piVar4,param_1[0x57]);
  }
  *(undefined1 *)((int)param_1 + 0x156) = 0;
  param_1[0x57] = -1;
  param_1[0x56] = 0;
  fn_001747e8(param_1[0x17]);
  *(undefined1 *)((int)param_1 + 0x1c1) = 0;
  *(undefined1 *)(param_1 + 0x79) = 1;
  param_1[0x68] = 0;
  (**(code **)(*param_1 + 0x34))(param_1);
  return;
}



void fn_006a2e8c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  bool bVar4;
  
  iVar1 = *(int *)(param_1 + 0x194);
  if (iVar1 == -1) {
    param_3 = *(int *)(param_1 + 0x198);
  }
  if (iVar1 == -1 && param_3 == -1) {
LAB_006a2f40:
    if (*(int *)(param_1 + 0x224) != -1) {
      iVar1 = param_1 + 0x224;
LAB_006a2f54:
      fn_006a33a4(param_1,iVar1,0);
      goto LAB_006a2f58;
    }
  }
  else {
    if (*(int *)(param_1 + 0x224) == -1) {
      if (iVar1 == -1) {
        param_3 = *(int *)(param_1 + 0x198);
      }
      if (iVar1 == -1 && param_3 == -1) goto LAB_006a2f40;
      if (iVar1 == -1) {
        if (*(int *)(param_1 + 0x198) == -1) {
          iVar1 = 0;
        }
        else {
          iVar1 = param_1 + 0x198;
        }
      }
      else {
        iVar1 = param_1 + 0x194;
      }
      goto LAB_006a2f54;
    }
    if (iVar1 == -1) {
      if (*(int *)(param_1 + 0x198) == -1) {
        iVar1 = 0;
      }
      else {
        iVar1 = param_1 + 0x198;
      }
    }
    else {
      iVar1 = param_1 + 0x194;
    }
    fn_006a33a4(param_1,iVar1,1);
    fn_006a33a4(param_1,param_1 + 0x224,2);
LAB_006a2f58:
    if (*(int *)(param_1 + 0x198) != -1) {
      uVar2 = fn_0068c7e8(DAT_008977e8);
      iVar1 = fn_006b4cd0(uVar2,*(undefined4 *)(param_1 + 0x198));
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x198) = 0xffffffff;
      }
    }
  }
  if (*(int *)(param_1 + 0x220) != 0) {
    iVar1 = *(int *)(param_1 + 0x220) + -1;
    *(int *)(param_1 + 0x220) = iVar1;
    if (iVar1 == 0) {
LAB_006a2fc4:
      *(undefined4 *)(param_1 + 0x220) = 0;
      if (*(int *)(param_1 + 0xa8) != -1) {
        piVar3 = (int *)fn_0068c7e8(DAT_008977e8);
        (**(code **)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(param_1 + 0xa8));
        *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
      }
      if (*(int *)(param_1 + 0x224) != -1) {
        piVar3 = (int *)fn_0068c7e8(DAT_008977e8);
        (**(code **)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(param_1 + 0x224));
        *(undefined4 *)(param_1 + 0x224) = 0xffffffff;
      }
      fn_006a0a04(param_1);
      fn_0014481c(DAT_008977e8);
      iVar1 = fn_00263814();
      fn_00660790(0xb,iVar1 + 8,param_1 + 8);
      return;
    }
    if (iVar1 < 0x1e) {
      iVar1 = *(int *)(param_1 + 0x1a0);
      bVar4 = iVar1 == 0;
      if (bVar4) {
        iVar1 = *(int *)(param_1 + 0x1a4);
      }
      if ((bVar4 && iVar1 == 0) && (*(char *)(param_1 + 0x1e4) == '\0')) goto LAB_006a2fc4;
    }
  }
  return;
}



void fn_006a2cbc(int *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int local_20;
  float local_1c;
  int local_18;
  
  fVar2 = 0.97;
  fVar3 = 5.0;
  if (*(char *)((int)param_1 + 0x185) == '\0') {
    param_1[0x62] = (int)((float)param_1[0x62] * 0.97);
    fn_0017fe34();
    if (fVar3 < (float)param_1[0x62]) {
      local_20 = param_1[8];
      local_18 = param_1[10];
      fVar3 = (float)param_1[9] + (float)param_1[0x62];
      local_1c = fVar3;
      fn_005df8f8();
      local_1c = fVar3;
      (**(code **)(*param_1 + 0x24))(param_1,&local_20);
      return;
    }
  }
  else if (*(char *)((int)param_1 + 0x185) == '\x01') {
    iVar1 = (**(code **)(*param_1 + 0x3c))(param_1);
    if ((iVar1 != 0) && ((char)param_1[0x83] == '\0')) {
      param_1[0x62] = (int)((float)param_1[0x62] * fVar2);
      fn_0017fe34();
      if (fVar3 < (float)param_1[0x62]) {
        local_20 = param_1[8];
        local_18 = param_1[10];
        fVar3 = (float)param_1[9] + (float)param_1[0x62];
        local_1c = fVar3;
        fn_005df8f8();
        local_1c = fVar3;
        (**(code **)(*param_1 + 0x24))(param_1,&local_20);
      }
      param_1[0x4e] = param_1[0x4d];
      return;
    }
    local_20 = param_1[8];
    local_1c = (float)param_1[9];
    local_18 = param_1[10];
    fVar3 = local_1c + (float)param_1[0x62];
    fn_005df8f8();
    local_1c = fVar3;
    (**(code **)(*param_1 + 0x24))(param_1,&local_20);
    param_1[0x4e] = 0x3e800000;
    if (((char)param_1[0x83] != '\0') && ((float)param_1[0x1b] <= 0.0)) {
      *(undefined1 *)(param_1 + 0x83) = 0;
    }
  }
  return;
}



void fn_006a2b28(int param_1)

{
  float in_s0;
  
  *(int *)(param_1 + 300) = (int)(in_s0 * 30.0);
  return;
}



void fn_006a2b14(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*(int *)(param_1 + 0x80) + param_2 * 0xc + 8) = param_3;
  return;
}



void fn_006a2584(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xa4);
  *(int *)(param_1 + 0x1a0) = param_2 + 6;
  *(int *)(param_1 + 0x1a8) = param_2 + 6;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  *(int *)(param_1 + 0xa4) = iVar2;
  *(undefined1 *)(param_1 + 0x160) = 0;
  if (-1 < *(int *)(param_1 + 0x15c)) {
    piVar1 = (int *)fn_0068c7e8(DAT_008977e8);
    (**(code **)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(param_1 + 0x15c));
  }
  *(undefined1 *)(param_1 + 0x156) = 2;
  *(int *)(param_1 + 0x158) = param_2;
  *(undefined4 *)(param_1 + 0x15c) = 0xffffffff;
  fn_001747e8(*(undefined4 *)(param_1 + 0x5c));
  return;
}



void fn_006a24ec(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  
  if (0 < param_4) {
    *(undefined1 *)(param_1 + 0x160) = 0;
    if (-1 < *(int *)(param_1 + 0x15c)) {
      piVar1 = (int *)fn_0068c7e8(DAT_008977e8);
      (**(code **)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(param_1 + 0x15c));
    }
    *(undefined1 *)(param_1 + 0x156) = 1;
    *(int *)(param_1 + 0x158) = param_4;
    *(undefined4 *)(param_1 + 0x15c) = param_5;
    fn_001747e8(*(undefined4 *)(param_1 + 0x5c));
  }
  iVar2 = *(int *)(param_1 + 0x80) + param_2 * 0xc;
  *(undefined1 *)(param_1 + 0x160) = *(undefined1 *)(iVar2 + 4);
  *(undefined4 *)(iVar2 + 8) = param_3;
  return;
}



/* WARNING: Removing unreachable block (ram,0x006a2470) */
/* WARNING: Removing unreachable block (ram,0x006a2498) */
/* WARNING: Removing unreachable block (ram,0x006a24b4) */
/* WARNING: Removing unreachable block (ram,0x006a24b8) */

void fn_006a2404(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (NAN(*(float *)(param_1 + 0x6c) + *(float *)(param_1 + 0x138))) {
    uVar3 = 4;
    uVar2 = 8;
    iVar1 = fn_00191284(*(undefined4 *)(param_1 + 0x5c),4);
    if (iVar1 != 0) {
      return;
    }
  }
  else {
    iVar1 = fn_00191284(*(undefined4 *)(param_1 + 0x5c),3);
    uVar3 = 3;
    uVar2 = 4;
    if (iVar1 != 0) {
      return;
    }
  }
  fn_0018d060(*(undefined4 *)(param_1 + 0x5c),uVar3,uVar2);
  return;
}


