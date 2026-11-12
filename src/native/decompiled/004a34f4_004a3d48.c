#include "004a34f4_004a3d48.h"



void fn_004a3d48(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_r12;
  
  *(int *)(param_1 + 0x14) = param_2;
  *(undefined1 *)(param_1 + 9) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x24);
  while( true ) {
    if (iVar1 != iVar2) {
      in_r12 = *(int *)(iVar1 + 0x10);
    }
    if (iVar1 == iVar2 || in_r12 == param_2) break;
    iVar1 = iVar1 + 0x24;
  }
  if (iVar2 != iVar1) {
    fn_004966a4(*(undefined4 *)(param_1 + 0x2c));
    *(undefined1 *)(param_1 + 8) = 1;
  }
  puVar4 = *(undefined4 **)(param_1 + 0x24);
  puVar5 = *(undefined4 **)(param_1 + 0x20);
  puVar3 = puVar5;
  if (puVar5 != puVar4) {
    do {
      (**(code **)*puVar3)(puVar3);
      puVar3 = puVar3 + 9;
    } while (puVar3 != puVar4);
    *(int *)(param_1 + 0x24) =
         *(int *)(param_1 + 0x24) + (((int)puVar4 - (int)puVar5) / 0x24) * -0x24;
  }
  return;
}



void fn_004a3d10(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_2;
  (**(code **)(*piVar1 + 8))(piVar1);
  if (piVar1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004a3d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 4))(piVar1);
  return;
}



void fn_004a3a8c(int param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  int *local_48;
  int *local_44;
  uint local_40;
  int iStack_3c;
  int *local_38;
  int iStack_34;
  int *local_30;
  undefined1 auStack_2c [8];
  
  piVar6 = (int *)param_2[2];
  if (piVar6 != (int *)param_2[4]) {
    do {
      if (((DAT_008b6393 == '\0') || (uVar1 = *(ushort *)(piVar6 + 0xf), (uVar1 & 0xf) != 2)) ||
         (*(byte *)((int)piVar6 + 0x25) >> 4 != 1)) {
LAB_004a3bb4:
        local_38 = piVar6;
        (**(code **)(*param_2 + 0x14))(&local_48,param_2,&local_38);
        piVar7 = local_48;
      }
      else {
        if ((DAT_008b6395 == '\0' && (uVar1 & 0x30) == 0) ||
           ((((DAT_008b6394 == '\0' || ((uVar1 & 0x10) != 0)) && ((uVar1 & 0x30) != 0)) ||
            ((DAT_008b6396 == '\0' && (uVar1 & 0x800) == 0 ||
             (*(char *)((int)piVar6 + 0x131) != '\0')))))) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (!bVar8) goto LAB_004a3bb4;
        piVar7 = piVar6 + 1;
        do {
          bVar8 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar8);
        *piVar7 = *piVar7 + 1;
        local_30 = piVar6;
        (**(code **)(*param_2 + 0x14))(&local_44,param_2,&local_30);
        piVar7 = local_44;
        if ((char)piVar6[0x4e] != '\x02') {
          *(undefined1 *)(piVar6 + 0x4e) = 0;
        }
        fn_0013d0fc(&local_40);
        if ((int)DAT_008b6420 < 0) {
          iVar3 = iStack_3c - (((int)-DAT_008b6420 >> 0x1f) + (uint)(local_40 < -DAT_008b6420));
        }
        else {
          iVar3 = ((int)DAT_008b6420 >> 0x1f) + iStack_3c + (uint)CARRY4(DAT_008b6420,local_40);
        }
        piVar6[0x50] = local_40 + DAT_008b6420;
        piVar6[0x51] = iVar3;
        piVar4 = piVar6 + 1;
        do {
          bVar8 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar8);
        *piVar4 = *piVar4 + 1;
        iVar3 = piVar6[8];
        bVar8 = iVar3 != 0;
        if (!bVar8) {
          iVar3 = piVar6[7];
        }
        if ((bVar8 || iVar3 != 0) || (*(int **)(param_1 + 4) == piVar6)) {
          local_48 = piVar6;
          fn_004a34f4(auStack_2c,param_1,&local_48);
        }
        if (*(int *)(param_1 + 4) == *(int *)(param_1 + 0xc)) {
          *(int **)(param_1 + 4) = piVar6;
          *(int **)(param_1 + 8) = piVar6;
        }
        else {
          piVar6[7] = *(int *)(param_1 + 4);
          *(int **)(*(int *)(param_1 + 4) + 0x20) = piVar6;
          *(int **)(param_1 + 4) = piVar6;
        }
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        fn_0013d0fc(&local_38);
        piVar6[0x44] = (int)local_38;
        piVar6[0x45] = iStack_34;
        if ((uint)DAT_008b63a2 < *(uint *)(param_1 + 0x10)) {
          local_48 = *(int **)(param_1 + 8);
          fn_004a34f4(&local_38,param_1,&local_48);
        }
        puVar5 = (uint *)(piVar6 + 1);
        do {
          uVar2 = *puVar5 - 1;
          bVar8 = (bool)hasExclusiveAccess(puVar5);
        } while (!bVar8);
        *puVar5 = uVar2;
        bVar8 = uVar2 == 0;
        if (bVar8) {
          uVar2 = (uint)*(byte *)(piVar6 + 2);
        }
        if (bVar8 && uVar2 == 0) {
          *(undefined1 *)(piVar6 + 2) = 1;
          (**(code **)(*piVar6 + 4))(piVar6);
        }
      }
      piVar6 = piVar7;
    } while (piVar7 != (int *)param_2[4]);
  }
  return;
}



bool fn_004a3a54(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0046b2bc();
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return iVar1 != 0;
}



void fn_004a3a20(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0046b240();
  if ((iVar1 != 0) && (iVar1 = fn_0047ef28(param_1,param_1 + 0x18), iVar1 != 0)) {
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  return;
}



undefined4 * fn_004a39a8(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = &DAT_00854de0;
  fn_0014f1bc(param_1[0x1e]);
  puVar2 = (undefined4 *)param_1[0x14];
  for (puVar1 = (undefined4 *)param_1[0x13]; puVar1 != puVar2; puVar1 = puVar1 + 2) {
    (**(code **)*puVar1)(puVar1);
  }
  fn_0014f1bc(param_1[0x13]);
  fn_0014f1bc(param_1[6]);
  fn_0014f1bc(param_1[2]);
  return param_1;
}



void fn_004a365c(int param_1,int param_2)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte local_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24 [2];
  
  cVar1 = *(char *)(param_1 + 0x3b);
  iVar5 = 0;
  if (cVar1 == '\0') {
    local_30 = CONCAT31(((unsigned int)(local_30) >> 8) & 0xffffff,3);
    local_58[0] = *(byte *)(param_2 + 4);
    pbVar2 = local_58;
    if (3 < local_58[0]) {
      pbVar2 = (byte *)&local_30;
    }
    fn_0015ef4c(param_1,pbVar2,1);
    iVar5 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    local_2c = 0;
    fn_0015ef4c(param_1,&local_2c,4);
  }
  fn_0015ef4c(param_1,param_2 + 5,1);
  local_24[0] = *(int *)(param_2 + 0xc) - *(int *)(param_2 + 8) >> 2;
  fn_0015ef4c(param_1,local_24,4);
  iVar4 = *(int *)(param_2 + 0xc);
  for (iVar3 = *(int *)(param_2 + 8); iVar3 != iVar4; iVar3 = iVar3 + 4) {
    fn_0015ef4c(param_1,iVar3,4);
  }
  fn_0015ef4c(param_1,param_2 + 0x14,1);
  local_24[0] = *(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x18) >> 2;
  fn_0015ef4c(param_1,local_24,4);
  iVar4 = *(int *)(param_2 + 0x1c);
  for (iVar3 = *(int *)(param_2 + 0x18); iVar3 != iVar4; iVar3 = iVar3 + 4) {
    fn_0015ef4c(param_1,iVar3,4);
  }
  fn_0015ef4c(param_1,param_2 + 0x24,2);
  local_50 = fn_006d3e5c(param_2 + 0x28);
  fn_0015ef4c(param_1,&local_50,8);
  local_48 = fn_006d3e5c(param_2 + 0x30);
  fn_0015ef4c(param_1,&local_48,8);
  local_40 = fn_006d3e5c(param_2 + 0x38);
  fn_0015ef4c(param_1,&local_40,8);
  local_38 = fn_006d3e5c(param_2 + 0x40);
  fn_0015ef4c(param_1,&local_38,8);
  fn_0015ef4c(param_1,param_2 + 0x48,4);
  local_24[0] = *(int *)(param_2 + 0x50) - *(int *)(param_2 + 0x4c) >> 3;
  fn_0015ef4c(param_1,local_24,4);
  iVar4 = *(int *)(param_2 + 0x50);
  for (iVar3 = *(int *)(param_2 + 0x4c); iVar3 != iVar4; iVar3 = iVar3 + 8) {
    fn_0045f6f0(param_1,iVar3);
  }
  fn_0015ef4c(param_1,param_2 + 0x58,1);
  fn_0015ef4c(param_1,param_2 + 0x59,1);
  fn_0047f9b8(param_1,param_2 + 0x5c);
  fn_0015ef4c(param_1,param_2 + 0x6c,1);
  fn_0015ef4c(param_1,param_2 + 0x70,4);
  if (cVar1 == '\0') {
    if (((*(char *)(param_2 + 4) != '\0') &&
        (fn_00454d74(param_1,param_2 + 0x74), 1 < *(byte *)(param_2 + 4))) &&
       (fn_00454d74(param_1,param_2 + 0x75), 2 < *(byte *)(param_2 + 4))) {
      local_28 = *(int *)(param_2 + 0x7c) - *(int *)(param_2 + 0x78) >> 1;
      fn_0015ef4c(param_1,&local_28,4);
      iVar4 = *(int *)(param_2 + 0x7c);
      for (iVar3 = *(int *)(param_2 + 0x78); iVar3 != iVar4; iVar3 = iVar3 + 2) {
        fn_0015ef4c(param_1,iVar3,2);
      }
    }
    iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    fn_00454cbc(param_1,iVar5);
    local_30 = (iVar3 - iVar5) + -4;
    fn_0015ef4c(param_1,&local_30,4);
    fn_00454cbc(param_1,iVar3);
  }
  return;
}



void fn_004a3584(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_28;
  undefined1 local_24 [4];
  undefined4 local_20 [2];
  
  cVar1 = *(char *)(param_1 + 0x3b);
  iVar4 = 0;
  if (cVar1 == '\0') {
    local_24[0] = 0;
    piVar2 = &local_28;
    if (*(char *)(param_2 + 4) != '\0') {
      piVar2 = (int *)local_24;
    }
    local_28 = CONCAT31(((unsigned int)(local_28) >> 8) & 0xffffff,*(char *)(param_2 + 4));
    fn_0015ef4c(param_1,piVar2,1);
    iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    local_20[0] = 0;
    fn_0015ef4c(param_1,local_20,4);
  }
  fn_0015ef4c(param_1,param_2 + 8,8);
  fn_0015ef4c(param_1,param_2 + 0x10,8);
  if (cVar1 == '\0') {
    iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    fn_00454cbc(param_1,iVar4);
    local_28 = (iVar3 - iVar4) + -4;
    fn_0015ef4c(param_1,&local_28,4);
    fn_00454cbc(param_1,iVar3);
  }
  return;
}



void fn_004a34f4(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  bool bVar4;
  undefined4 local_18;
  int *local_14;
  
  piVar3 = (int *)*param_3;
  local_14 = piVar3;
  fn_007547f0(&local_18,param_2,&local_14);
  puVar2 = (uint *)(piVar3 + 1);
  *param_3 = local_18;
  do {
    uVar1 = *puVar2 - 1;
    bVar4 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar4);
  *puVar2 = uVar1;
  bVar4 = uVar1 == 0;
  if (bVar4) {
    uVar1 = (uint)*(byte *)(piVar3 + 2);
  }
  if (bVar4 && uVar1 == 0) {
    *(undefined1 *)(piVar3 + 2) = 1;
    (**(code **)(*piVar3 + 4))();
  }
  *param_1 = *param_3;
  return;
}


