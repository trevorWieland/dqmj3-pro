#include "0025adf0_0050527c.h"



undefined4 * fn_0050527c(void)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = DAT_008bf4e0;
  if (DAT_008bf4e0 == (int *)0x0) {
    if (DAT_008c0630 == (undefined4 *)0x0) {
      return &DAT_008c0630;
    }
    return DAT_008c0630;
  }
  if (*(char *)((int)DAT_008bf4e0 + 0x81) != '\0') {
    fn_00503ca8(DAT_008bf4e0);
    fn_005044fc(piVar1);
    fn_0051dc1c(DAT_008bf4d4);
    fn_004ee29c(DAT_008c0638);
    *(undefined1 *)((int)piVar1 + 0x81) = 0;
    if (DAT_008bf4e0 == (int *)0x0) {
      DAT_008bf4e0 = (int *)0x0;
      return (undefined4 *)0x0;
    }
  }
  puVar2 = (undefined4 *)(**(code **)(*DAT_008bf4e0 + 8))();
  DAT_008bf4e0 = (int *)0x0;
  return puVar2;
}



void fn_004b8354(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  code *pcVar7;
  uint uVar8;
  undefined4 *puVar9;
  bool bVar10;
  
  *param_1 = &DAT_00855b84;
  DAT_008b6504 = DAT_008b63ec;
  if (DAT_008b6404 != (int *)0x0) {
    (**(code **)(*DAT_008b6404 + 0x24))();
  }
  if (*(char *)(param_1[0x40] + 0x90) == '\x01') {
    fn_00456510(param_1[0x40] + 0x80,4);
  }
  if ((int *)param_1[0x40] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x40] + 4))();
  }
  param_1[0x40] = 0;
  if ((int *)param_1[0x24] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x24] + 4))();
  }
  param_1[0x24] = 0;
  fn_00170704(&DAT_008e7794);
  piVar1 = (int *)fn_001249d0();
  puVar5 = (uint *)(piVar1 + 1);
  do {
    uVar2 = *puVar5 - 1;
    bVar10 = (bool)hasExclusiveAccess(puVar5);
  } while (!bVar10);
  *puVar5 = uVar2;
  bVar10 = uVar2 == 0;
  if (bVar10) {
    uVar2 = (uint)*(byte *)(piVar1 + 2);
  }
  if (bVar10 && uVar2 == 0) {
    *(undefined1 *)(piVar1 + 2) = 1;
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  if (DAT_008b63e8 == 0) {
    DAT_008b637c = 0;
  }
  fn_004747a4();
  fn_001707b4(&DAT_008e7794);
  if (param_1[3] != 0) {
    (**(code **)(*DAT_008b6490 + 0xc))();
    param_1[3] = 0;
  }
  if ((int *)param_1[0xd2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xd2] + 4))();
    param_1[0xd2] = 0;
  }
  iVar3 = fn_004b616c(9);
  if (*(int *)(iVar3 + 0x9c) == param_1[0xd4]) {
    iVar3 = fn_004b616c(9);
    *(undefined4 *)(iVar3 + 0x9c) = 0;
  }
  iVar3 = fn_004b616c(1);
  if (*(int *)(iVar3 + 0x9c) == param_1[0xd4]) {
    iVar3 = fn_004b616c(1);
    *(undefined4 *)(iVar3 + 0x9c) = 0;
  }
  iVar3 = fn_004b616c(8);
  if (*(int *)(iVar3 + 0x9c) == param_1[0xd4]) {
    iVar3 = fn_004b616c(8);
    *(undefined4 *)(iVar3 + 0x9c) = 0;
  }
  if ((int *)param_1[0xd3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xd3] + 4))();
  }
  if ((int *)param_1[0xd4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xd4] + 4))();
  }
  param_1[0xf0] = &DAT_0085319c;
  param_1[0xef] = &PTR_LAB_008533fc;
  uVar6 = param_1[0xec];
  uVar2 = param_1[0xed];
  if (uVar6 < uVar2) {
    uVar8 = (uVar2 - uVar6 & 0xf) >> 3;
  }
  else {
    uVar8 = 0;
  }
  iVar4 = uVar8 + 1;
  iVar3 = (int)(uVar2 - uVar6) >> 3;
  if (iVar4 < iVar3 + 1) {
    do {
      iVar4 = iVar4 + 2;
    } while (iVar4 < iVar3 + 1);
  }
  if (uVar6 != 0) {
    pcVar7 = *(code **)(uVar6 - 8);
    if (pcVar7 == (code *)0x0) {
      fn_0030233c((undefined4 *)(uVar6 - 8));
    }
    else {
      (*pcVar7)();
    }
  }
  param_1[0xe3] = &DAT_0085319c;
  param_1[0xe2] = &PTR_LAB_008533fc;
  if (param_1[0xdf] != 0) {
    pcVar7 = *(code **)(param_1[0xdf] + -8);
    if (pcVar7 == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (*pcVar7)();
    }
  }
  param_1[0x46] = &PTR_FUN_00852e9c;
  if ((int *)param_1[0xd1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xd1] + 4))();
  }
  param_1[0x46] = &DAT_00853b08;
  iVar3 = fn_0014f2b0(param_1 + 0x48);
  iVar3 = fn_0048f128(iVar3 + -0x1c);
  iVar3 = fn_0048b0e4(iVar3 + -0x30);
  puVar9 = (undefined4 *)(iVar3 + -0x40);
  *puVar9 = &DAT_00853b30;
  *(undefined4 *)(iVar3 + -0x1c) = 0;
  fn_0048bfc0(puVar9);
  iVar3 = fn_00474f88(puVar9);
  *(undefined **)(iVar3 + -0x48) = &DAT_008533b0;
  iVar3 = fn_00786480(iVar3 + -0x1c);
  *(undefined **)(iVar3 + -0x24) = &DAT_0085319c;
  *(undefined ***)(iVar3 + -0x28) = &PTR_LAB_008533fc;
  iVar3 = fn_00474f88(iVar3 + -0x40);
  *(undefined **)(iVar3 + -0x38) = &DAT_00853740;
  *(undefined4 *)(iVar3 + -0x34) = 0;
  *(undefined **)(iVar3 + -0x24) = &DAT_0085319c;
  *(undefined ***)(iVar3 + -0x28) = &PTR_LAB_008533fc;
  return;
}



undefined4
fn_004ad62c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,int param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [68];
  int iStack_34;
  int iStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iStack_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  fn_004b73b0(auStack_78);
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  fn_004ba7c4(auStack_78,*(undefined2 *)(param_1 + 0x20),1);
  iVar2 = fn_004bab34(auStack_78,param_2);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_78);
    return 0;
  }
  fn_004ba7ac(auStack_78,0x1b);
  fn_0045f6f0(auStack_78,local_2c);
  fn_0045f6f0(auStack_78,local_28);
  fn_0015ef4c(auStack_78,param_5,4);
  fn_0045f6f0(auStack_78,param_6);
  (**(code **)(*DAT_008c3dcc + 8))(DAT_008c3dcc,auStack_78,*(undefined4 *)(param_7 + 4));
  if (param_2 != 0) {
    fn_0048ca64(param_2,param_8);
    fn_0048ca64(param_2,param_9);
  }
  DAT_008e93bc = fn_004adac8;
  if ((*(char *)(param_1 + 0x34) == '\0') || (iVar2 = fn_006d3ef4(param_1,0x10), iVar2 == 0)) {
    uVar4 = fn_0046e0a4(param_1,param_2,auStack_78);
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_78);
    return uVar4;
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  uVar4 = fn_0046e0a4(param_1,param_2,auStack_78);
  fn_004b7520(auStack_78);
  return uVar4;
}



int fn_0025adf0(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (param_1[0xb] == 0) {
    fn_0025a8f4(param_1);
    iVar3 = *param_1;
    uVar5 = *(undefined4 *)(param_1[1] + 0x3c);
    uVar2 = fn_00129004();
    fn_002419f4(uVar2,iVar3,uVar5);
    iVar3 = param_1[2];
    iVar6 = param_1[3];
    uVar2 = fn_00129004();
    fn_002416b4(uVar2,iVar3,iVar6);
    iVar3 = param_1[4];
    iVar6 = param_1[5];
    uVar2 = fn_00129004();
    fn_00241948(uVar2,iVar3,iVar6);
    if (param_1[0xc] == 0) {
      pcVar4 = *(code **)(*(int *)param_1[9] + 0x34);
LAB_0025aea8:
      (*pcVar4)();
    }
    else if (param_1[0xc] == 1) {
      pcVar4 = *(code **)(*(int *)param_1[9] + 0x38);
      goto LAB_0025aea8;
    }
    param_1[0xc] = 0;
    param_1[0xb] = 1;
  }
  else if (param_1[0xb] != 1) goto LAB_0025af14;
  (**(code **)(*(int *)param_1[9] + 0x18))();
  iVar3 = (**(code **)(*(int *)param_1[9] + 0x2c))();
  if (iVar3 != 0) goto LAB_0025af14;
  cVar1 = *(char *)((int)param_1 + 0x35);
  if (cVar1 == -1) {
    cVar1 = '\x01';
  }
  *(char *)(param_1 + 0xd) = cVar1;
  if (cVar1 == -1) {
LAB_0025af08:
    param_1[0xc] = 0;
  }
  else if (cVar1 == '\0') {
    param_1[0xc] = 1;
  }
  else if (cVar1 == '\x01') goto LAB_0025af08;
  fn_0025a6c8(param_1);
LAB_0025af14:
  if ((char)param_1[0xd] != '\x01') {
    if (param_1[1] != 0) {
      fn_0023e6c8();
    }
    if ((int *)*param_1 != (int *)0x0) {
      (**(code **)(*(int *)*param_1 + 0x10))();
    }
  }
  (**(code **)(*DAT_00897808 + 8))(DAT_00897808,1);
  (**(code **)(*DAT_0089780c + 8))(DAT_0089780c,1);
  return (int)(char)param_1[0xd];
}


