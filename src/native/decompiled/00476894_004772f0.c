#include "00476894_004772f0.h"



undefined4 * fn_004772f0(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_008540c0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  iVar1 = fn_0015ece0(0x20);
  param_1[9] = iVar1;
  param_1[10] = iVar1;
  param_1[0xb] = iVar1 + 0x20;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  iVar1 = fn_0015ece0(0x20);
  param_1[0xe] = iVar1;
  param_1[0xf] = iVar1;
  param_1[0x10] = iVar1 + 0x20;
  iVar1 = fn_00124be8(param_1 + 0x12);
  *(undefined4 *)(iVar1 + -0x38) = 0;
  *(undefined4 *)(iVar1 + -0x40) = 0;
  *(undefined4 *)(iVar1 + -0x48) = &DAT_0085345c;
  *(undefined4 *)(iVar1 + -0x34) = 0;
  *(undefined4 *)(iVar1 + -0x30) = 0;
  *(undefined4 *)(iVar1 + -0x18) = 0;
  *(undefined4 *)(iVar1 + -0x2c) = 0;
  *(undefined4 *)(iVar1 + -0x28) = 0;
  *(undefined4 *)(iVar1 + -0x14) = 0;
  if (*(int *)(iVar1 + -0x10) != *(int *)(iVar1 + -0xc)) {
    *(int *)(iVar1 + -0xc) = *(int *)(iVar1 + -0x10);
  }
  fn_0014f510(iVar1,DAT_008b64f8);
  return (undefined4 *)(iVar1 + -0x48);
}



void fn_0047717c(undefined4 *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int *piVar7;
  uint uVar8;
  
  *param_1 = &DAT_008540c0;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 4);
  param_1[2] = *(undefined4 *)(param_2 + 8);
  uVar5 = *(undefined4 *)(param_2 + 0x14);
  param_1[4] = *(undefined4 *)(param_2 + 0x10);
  param_1[5] = uVar5;
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  param_1[7] = *(undefined4 *)(param_2 + 0x1c);
  param_1[8] = *(undefined4 *)(param_2 + 0x20);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar8 = *(int *)(param_2 + 0x28) - *(int *)(param_2 + 0x24);
  if (uVar8 < 0x20) {
    uVar8 = 0x20;
  }
  puVar1 = (undefined1 *)fn_0015ece0(uVar8);
  param_1[9] = puVar1;
  puVar6 = *(undefined1 **)(param_2 + 0x28);
  for (puVar4 = *(undefined1 **)(param_2 + 0x24); puVar4 != puVar6; puVar4 = puVar4 + 1) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = *puVar4;
    }
    puVar1 = puVar1 + 1;
  }
  iVar2 = param_1[9];
  param_1[10] = (*(int *)(param_2 + 0x28) - *(int *)(param_2 + 0x24)) + iVar2;
  param_1[0xb] = iVar2 + uVar8;
  uVar5 = *(undefined4 *)(param_2 + 0x34);
  param_1[0xc] = *(undefined4 *)(param_2 + 0x30);
  param_1[0xd] = uVar5;
  piVar7 = param_1 + 0xe;
  *piVar7 = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  uVar3 = *(int *)(param_2 + 0x3c) - *(int *)(param_2 + 0x38);
  uVar8 = 0x20;
  if (0x1f < uVar3) {
    uVar8 = uVar3;
  }
  puVar1 = (undefined1 *)fn_0015ece0(uVar8);
  *piVar7 = (int)puVar1;
  puVar6 = *(undefined1 **)(param_2 + 0x3c);
  for (puVar4 = *(undefined1 **)(param_2 + 0x38); puVar4 != puVar6; puVar4 = puVar4 + 1) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = *puVar4;
    }
    puVar1 = puVar1 + 1;
  }
  param_1[0xf] = (*(int *)(param_2 + 0x3c) - *(int *)(param_2 + 0x38)) + *piVar7;
  param_1[0x10] = *piVar7 + uVar8;
  iVar2 = fn_004b9b4c(param_1 + 0x12,param_2 + 0x48);
  *(undefined **)(iVar2 + -0x48) = &DAT_0085345c;
  return;
}



undefined4 fn_00477090(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int local_20 [2];
  int local_18 [3];
  
  iVar1 = DAT_008b63d8;
  if (DAT_008b637e == '\0') {
    uVar2 = 0;
  }
  else {
    piVar3 = (int *)(DAT_008b63d8 + 0x10);
    local_18[2] = param_1;
    (**(code **)(*(int *)(DAT_008b63d8 + 0x10) + 8))();
    iVar4 = fn_00169c08(local_20,0xffff8000);
    if (iVar4 < 0) {
      fn_0015e294();
    }
    local_18[0] = local_20[0];
    local_18[1] = 0;
    fn_001777e0(local_20,iVar1 + 0x38,local_18);
    *(int *)(local_20[0] + 0x14) = local_18[2];
    (**(code **)(*piVar3 + 0xc))(piVar3);
    uVar2 = 1;
  }
  return uVar2;
}



int fn_00476f5c(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  fn_0013d0fc(&local_30);
  *(undefined4 *)(param_1 + 8) = &DAT_008527fc;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  piVar1 = (int *)fn_0015ece0(0xc);
  iVar2 = fn_0015ece0(0x38);
  piVar1[2] = iVar2;
  *piVar1 = *(int *)(param_1 + 0xc);
  piVar1[1] = 1;
  *(int *)(param_1 + 0xc) = (int)piVar1;
  iVar2 = piVar1[2];
  *(int *)(param_1 + 0x14) = iVar2;
  *(int *)(param_1 + 0x18) = iVar2 + 0x38;
  *(int *)(param_1 + 0x1c) = iVar2;
  *(int *)(param_1 + 0x14) = iVar2 + 0x38;
  *(int *)iVar2 = iVar2;
  *(int *)(*(int *)(param_1 + 0x1c) + 4) = *(int *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = &DAT_00852d4c;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  *(undefined4 *)(param_1 + 0x28) = local_30;
  *(undefined4 *)(param_1 + 0x2c) = uStack_2c;
  *(undefined **)(param_1 + 0x30) = &DAT_008527fc;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  piVar1 = (int *)fn_0015ece0(0xc);
  iVar2 = fn_0015ece0(0x38);
  piVar1[2] = iVar2;
  *piVar1 = *(int *)(param_1 + 0x34);
  piVar1[1] = 1;
  *(int *)(param_1 + 0x34) = (int)piVar1;
  iVar2 = piVar1[2];
  *(int *)(param_1 + 0x3c) = iVar2;
  *(int *)(param_1 + 0x40) = iVar2 + 0x38;
  *(int *)(param_1 + 0x44) = iVar2;
  *(int *)(param_1 + 0x3c) = iVar2 + 0x38;
  *(int *)iVar2 = iVar2;
  *(int *)(*(int *)(param_1 + 0x44) + 4) = *(int *)(param_1 + 0x44);
  *(undefined **)(param_1 + 0x30) = &DAT_008535a4;
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  *(undefined4 *)(param_1 + 0x50) = param_2;
  return param_1;
}



void fn_004769ac(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  bool bVar5;
  int *local_40 [10];
  undefined1 auStack_18 [8];
  
  fn_0013d0fc(auStack_18);
  fn_0074a8dc(local_40,param_1 + 0x30,auStack_18);
  piVar4 = (int *)**(int **)(param_1 + 0x44);
  if (piVar4 != *(int **)(param_1 + 0x44)) {
    *(int *)piVar4[1] = *piVar4;
    *(int *)(*piVar4 + 4) = piVar4[1];
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
    piVar1 = (int *)piVar4[2];
    puVar3 = (uint *)(piVar1 + 1);
    do {
      uVar2 = *puVar3 - 1;
      bVar5 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar5);
    *puVar3 = uVar2;
    bVar5 = uVar2 == 0;
    if (bVar5) {
      uVar2 = (uint)*(byte *)(piVar1 + 2);
    }
    if (bVar5 && uVar2 == 0) {
      *(undefined1 *)(piVar1 + 2) = 1;
      (**(code **)(*piVar1 + 4))();
    }
    *piVar4 = *(int *)(param_1 + 0x38);
    *(int **)(param_1 + 0x38) = piVar4;
  }
  puVar3 = (uint *)(local_40[0] + 1);
  do {
    uVar2 = *puVar3 - 1;
    bVar5 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar5);
  *puVar3 = uVar2;
  bVar5 = uVar2 == 0;
  if (bVar5) {
    uVar2 = (uint)*(byte *)(local_40[0] + 2);
  }
  if (bVar5 && uVar2 == 0) {
    *(undefined1 *)(local_40[0] + 2) = 1;
    (**(code **)(*local_40[0] + 4))();
  }
  return;
}



void fn_00476894(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  uint local_48;
  uint uStack_44;
  int *local_40;
  undefined *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_3c = &DAT_008528bc;
  piVar2 = param_2 + 1;
  do {
    bVar5 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar5);
  *piVar2 = *piVar2 + 1;
  local_38 = *(undefined4 *)(param_3 + 4);
  local_34 = *(undefined4 *)(param_3 + 8);
  uStack_30 = *(undefined4 *)(param_3 + 0xc);
  uStack_2c = *(undefined4 *)(param_3 + 0x10);
  uStack_28 = *(undefined4 *)(param_3 + 0x14);
  uStack_24 = *(undefined4 *)(param_3 + 0x18);
  uStack_20 = *(undefined4 *)(param_3 + 0x1c);
  local_40 = param_2;
  fn_0013d0fc(&local_48);
  if (*(uint *)(param_1 + 0x2c) <= uStack_44 &&
      (uint)(local_48 <= *(uint *)(param_1 + 0x28)) <= *(uint *)(param_1 + 0x2c) - uStack_44) {
    *(uint *)(param_1 + 0x28) = local_48;
    *(uint *)(param_1 + 0x2c) = uStack_44;
  }
  local_18 = *(undefined4 *)(param_1 + 0x28);
  uStack_14 = *(undefined4 *)(param_1 + 0x2c);
  fn_0074a6d0(param_1 + 8,&local_40,&local_18);
  if (*(int *)(*(int *)(param_1 + 0x24) + 0xc) != -1) {
    uVar1 = fn_00169f1c(local_40[4] * 8000);
    uVar3 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar1 + uVar3;
    *(uint *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + (uint)CARRY4(uVar1,uVar3);
  }
  puVar4 = (uint *)(local_40 + 1);
  do {
    uVar1 = *puVar4 - 1;
    bVar5 = (bool)hasExclusiveAccess(puVar4);
  } while (!bVar5);
  *puVar4 = uVar1;
  bVar5 = uVar1 == 0;
  if (bVar5) {
    uVar1 = (uint)*(byte *)(local_40 + 2);
  }
  if (bVar5 && uVar1 == 0) {
    *(undefined1 *)(local_40 + 2) = 1;
    (**(code **)(*local_40 + 4))();
  }
  return;
}


