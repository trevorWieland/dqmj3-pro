#include "003a5b64_003a62bc.h"



void fn_003a62bc(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined8 in_d8;
  int local_30;
  
  iVar9 = 0;
  puVar10 = &DAT_008c62fc;
  uVar12 = 0;
  uVar5 = (int)((ulonglong)in_d8 >> 0x20);
  if (0 < param_3) {
    uVar5 = uVar12;
  }
  local_30 = 0;
  iVar8 = 0;
  if (0 < param_3) {
    do {
      if ((((byte)DAT_008c62fc & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008c62fc), iVar2 != 0)) {
        DAT_008f9e2c = uVar5;
        DAT_008f9e30 = uVar5;
        DAT_008f9e34 = uVar5;
      }
      uVar1 = DAT_008f9e34;
      uVar7 = DAT_008f9e30;
      iVar2 = iVar8 + 1;
      puVar3 = (undefined4 *)(param_2 + iVar8 * 0xc);
      *puVar3 = DAT_008f9e2c;
      puVar3[1] = uVar7;
      puVar3[2] = uVar1;
      iVar8 = iVar2;
    } while (iVar2 < param_3);
  }
  if (0 < param_5) {
    puVar10 = &DAT_008f9e2c;
  }
  iVar8 = 0;
  if (0 < param_5) {
    do {
      if ((((byte)DAT_008c62fc & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008c62fc), iVar2 != 0)) {
        DAT_008f9e2c = uVar12;
        DAT_008f9e30 = uVar12;
        DAT_008f9e34 = uVar12;
      }
      uVar5 = puVar10[1];
      uVar7 = puVar10[2];
      iVar2 = iVar8 + 1;
      puVar3 = (undefined4 *)(param_4 + iVar8 * 0xc);
      *puVar3 = *puVar10;
      puVar3[1] = uVar5;
      puVar3[2] = uVar7;
      iVar8 = iVar2;
    } while (iVar2 < param_5);
  }
  iVar8 = 0x10;
  do {
    iVar2 = fn_00353a38(*(undefined4 *)(param_1 + 0x70),iVar8);
    if (iVar2 != 0) {
      iVar4 = (int)(char)iVar8;
      uVar6 = iVar4 - 0x10;
      iVar2 = *(int *)(iVar2 + 0xa0);
      bVar11 = 3 < uVar6;
      if (bVar11) {
        uVar6 = iVar4 - 0x18;
      }
      if ((bVar11 && 3 < uVar6) && (iVar4 != 0x20 && iVar4 != 0x22)) {
        if (local_30 < param_5) {
          uVar5 = *(undefined4 *)(iVar2 + 0x1c);
          uVar12 = *(undefined4 *)(iVar2 + 0x20);
          puVar10 = (undefined4 *)(param_4 + local_30 * 0xc);
          local_30 = local_30 + 1;
          puVar10[2] = *(undefined4 *)(iVar2 + 0x24);
          *puVar10 = uVar5;
          puVar10[1] = uVar12;
        }
      }
      else if (iVar9 < param_3) {
        uVar5 = *(undefined4 *)(iVar2 + 0x20);
        uVar12 = *(undefined4 *)(iVar2 + 0x24);
        puVar10 = (undefined4 *)(param_2 + iVar9 * 0xc);
        iVar9 = iVar9 + 1;
        *puVar10 = *(undefined4 *)(iVar2 + 0x1c);
        puVar10[1] = uVar5;
        puVar10[2] = uVar12;
      }
    }
    iVar8 = (int)(char)((char)iVar8 + '\x01');
  } while (iVar8 < 0x18);
  return;
}



void fn_003a5ff4(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  fn_003a704c();
  fn_003a704c(param_1,2,0,1,0);
  fn_003a704c(param_1,4,0,1,0);
  fn_003a704c(param_1,3,0,1,0);
  fn_003a704c(param_1,6,0,1,0);
  fn_003a74ac(param_1,0);
  switch(param_2) {
  case 0:
  case 2:
    fn_003a704c(param_1,0,0,1,0);
    fn_003a760c(param_1);
    fn_003a704c(param_1,5,1,0,0);
    return;
  case 1:
  case 3:
    if (param_3 == 0) {
      fn_003a704c(param_1,5,1,0);
      *(undefined1 *)(param_1 + 0x7c) = 5;
      (**(code **)(**(int **)(param_1 + 0x78) + 0x2c))(*(int **)(param_1 + 0x78),0);
      uVar3 = (uint)*(byte *)(param_1 + 0x7c);
      if ((uint)(*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 2) <= uVar3) {
        fn_002ff628(9,&DAT_008c7660,&DAT_008c7660,uVar3);
      }
      iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x98) + uVar3 * 4) + 4);
      fn_0025e378(*(undefined4 *)(param_1 + 200),iVar4 + 0x3c);
      fn_0025e7cc(*(undefined4 *)(param_1 + 200),iVar4 + 0x1c);
      fn_003a755c(param_1,*(undefined1 *)(param_1 + 0x7c));
    }
    else {
      fn_003a704c(param_1,0,1,0,0);
      fn_003a704c(param_1,5,0,1);
    }
    fn_003a760c(param_1);
    return;
  case 4:
  case 6:
    fn_003a704c(param_1,0,1,0,0);
    fn_003a760c(param_1);
    uVar1 = 0;
    uVar2 = 1;
    break;
  case 5:
    fn_003a704c(param_1,0,1,0,0);
    fn_003a760c(param_1);
    fn_003a704c(param_1,5,1,0,0);
    return;
  case 7:
    fn_003a704c(param_1,0,1,0,0);
    fn_003a760c(param_1);
    uVar2 = 0;
    uVar1 = 1;
    break;
  default:
    return;
  }
  fn_003a704c(param_1,5,uVar1,uVar2,0);
  return;
}



void fn_003a5f88(int param_1,int param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xe1) == '\0') {
    return;
  }
  iVar1 = fn_00174828(DAT_008977e4);
  if ((*(char *)(iVar1 + 0x4283) == '\0') && (param_2 != 0)) {
    fn_00190e00(*(undefined4 *)(param_1 + 0xe4));
    return;
  }
  fn_00190cdc(*(undefined4 *)(param_1 + 0xe4),1);
  return;
}



void fn_003a5b64(int param_1,char param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    *(char *)(param_1 + 0x7d) = param_2;
    return;
  }
  *(char *)(param_1 + 0x7d) = param_2;
  *(char *)(param_1 + 0x7f) = param_2 + -0x10;
  uVar2 = *(undefined4 *)(param_1 + 0xcc);
  iVar1 = fn_00353a38(*(undefined4 *)(param_1 + 0x70));
  fn_0025e868(uVar2,(int)*(char *)(iVar1 + 0x4c));
  fn_0025e7cc(uVar2,*(int *)(iVar1 + 0xa0) + 0x1c);
  return;
}


