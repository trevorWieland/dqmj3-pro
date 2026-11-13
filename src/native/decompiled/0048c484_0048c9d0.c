#include "0048c484_0048c9d0.h"



void fn_0048c9d0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar2 = *(int *)(param_1 + 100);
    iVar3 = *(int *)(param_1 + 0x60);
    if (iVar3 != iVar2) {
      if (0 < iVar2 - iVar3 >> 2) {
        for (iVar1 = iVar2 - iVar3 >> 3; iVar1 != 0; iVar1 = iVar1 + -1) {
        }
      }
      *(uint *)(param_1 + 100) = iVar2 - (iVar2 - iVar3 & 0xfffffffcU);
      return;
    }
  }
  else if ((param_2 == 3) && (param_4 != 0)) {
    if (*(undefined1 **)(param_1 + 0x6c) != (undefined1 *)0x0) {
      **(undefined1 **)(param_1 + 0x6c) = 0;
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
    if (*(int *)(param_1 + 0x70) != 0) {
      fn_004b8d90(*(int *)(param_1 + 0x70),param_3);
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
  }
  return;
}



void fn_0048c944(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  
  piVar1 = *(int **)(param_1 + 0x74);
  if (piVar1 != (int *)0x0) {
    puVar3 = (uint *)(piVar1 + 1);
    do {
      uVar2 = *puVar3 - 1;
      bVar4 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar4);
    *puVar3 = uVar2;
    bVar4 = uVar2 == 0;
    if (bVar4) {
      uVar2 = (uint)*(byte *)(piVar1 + 2);
    }
    if (bVar4 && uVar2 == 0) {
      *(undefined1 *)(piVar1 + 2) = 1;
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  if (param_2 != 0) {
    piVar1 = (int *)(param_2 + 4);
    *(int *)(param_1 + 0x74) = param_2;
    do {
      bVar4 = (bool)hasExclusiveAccess(piVar1);
    } while (!bVar4);
    *piVar1 = *piVar1 + 1;
  }
  return;
}



void fn_0048c938(void)

{
  fn_004a2158();
  return;
}



void fn_0048c758(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  
  *param_1 = &DAT_00853388;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 4);
  param_1[2] = *(undefined4 *)(param_2 + 8);
  param_1[3] = *(undefined4 *)(param_2 + 0xc);
  param_1[4] = *(undefined4 *)(param_2 + 0x10);
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 0x14);
  *(undefined2 *)((int)param_1 + 0x16) = *(undefined2 *)(param_2 + 0x16);
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  param_1[7] = *(undefined4 *)(param_2 + 0x1c);
  param_1[8] = *(undefined4 *)(param_2 + 0x20);
  param_1[9] = *(undefined4 *)(param_2 + 0x24);
  iVar1 = fn_004b637c(param_1 + 10,param_2 + 0x28);
  *(undefined ***)(iVar1 + -0x28) = &PTR_FUN_00854c0c;
  *(undefined1 *)(iVar1 + 8) = *(undefined1 *)(param_2 + 0x30);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_2 + 0x34);
  iVar1 = fn_004b637c(iVar1 + 0x10,param_2 + 0x38);
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  uVar10 = *(int *)(param_2 + 0x44) - *(int *)(param_2 + 0x40) >> 2;
  uVar9 = 0x20;
  if (0x1f < uVar10) {
    uVar9 = uVar10;
  }
  puVar2 = (undefined4 *)fn_0015ece0(uVar9 << 2);
  *(int *)(iVar1 + 8) = (int)puVar2;
  puVar7 = *(undefined4 **)(param_2 + 0x44);
  for (puVar5 = *(undefined4 **)(param_2 + 0x40); puVar5 != puVar7; puVar5 = puVar5 + 1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar5;
    }
    puVar2 = puVar2 + 1;
  }
  iVar3 = *(int *)(iVar1 + 8);
  *(int *)(iVar1 + 0xc) = iVar3 + (*(int *)(param_2 + 0x44) - *(int *)(param_2 + 0x40) >> 2) * 4;
  *(uint *)(iVar1 + 0x10) = iVar3 + uVar9 * 4;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(int *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  uVar10 = *(int *)(param_2 + 0x50) - *(int *)(param_2 + 0x4c);
  if (uVar10 < 0x20) {
    uVar10 = 0x20;
  }
  puVar4 = (undefined1 *)fn_0015ece0(uVar10);
  *(int *)(iVar1 + 0x14) = (int)puVar4;
  puVar8 = *(undefined1 **)(param_2 + 0x50);
  for (puVar6 = *(undefined1 **)(param_2 + 0x4c); puVar6 != puVar8; puVar6 = puVar6 + 1) {
    if (puVar4 != (undefined1 *)0x0) {
      *puVar4 = *puVar6;
    }
    puVar4 = puVar4 + 1;
  }
  iVar3 = *(int *)(iVar1 + 0x14);
  *(int *)(iVar1 + 0x18) = (*(int *)(param_2 + 0x50) - *(int *)(param_2 + 0x4c)) + iVar3;
  *(uint *)(iVar1 + 0x1c) = iVar3 + uVar10;
  iVar1 = fn_004b9b4c(iVar1 + 0x20,param_2 + 0x58);
  iVar1 = fn_004b9b4c(iVar1 + 8,param_2 + 0x60);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined ***)(iVar1 + -0x60) = &PTR_FUN_00853b40;
  return;
}



void fn_0048c740(int param_1,uint param_2,undefined4 param_3)

{
  if (param_2 < (uint)(*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) >> 2)) {
    *(undefined4 *)(*(int *)(param_1 + 0x40) + param_2 * 4) = param_3;
  }
  return;
}



int fn_0048c694(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(char *)(param_1 + 0x1d) = (char)param_1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  piVar1 = (int *)fn_0015ece0(0xc);
  iVar2 = fn_0015ece0(0x380);
  piVar1[2] = iVar2;
  *piVar1 = *(int *)(param_1 + 4);
  piVar1[1] = 0x20;
  *(int *)(param_1 + 4) = (int)piVar1;
  puVar3 = (undefined1 *)piVar1[2];
  *(undefined1 **)(param_1 + 0xc) = puVar3;
  *(undefined1 **)(param_1 + 0x10) = puVar3 + 0x380;
  *(undefined1 **)(param_1 + 0xc) = puVar3 + 0x1c;
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *puVar3 = 0;
  *(undefined1 **)(param_1 + 0x14) = puVar3;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(int *)(*(int *)(param_1 + 0x14) + 8) = *(int *)(param_1 + 0x14);
  *(int *)(*(int *)(param_1 + 0x14) + 0xc) = *(int *)(param_1 + 0x14);
  *(undefined **)(param_1 + 0x20) = &DAT_00853688;
  *(undefined2 *)(param_1 + 0x24) = 1;
  return param_1;
}



void fn_0048c484(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  bool bVar8;
  char *local_34;
  char *local_30;
  undefined *local_28;
  short local_24;
  undefined4 local_20;
  
  if ((*(short *)(param_2 + 0x44) == *(short *)(param_1 + 0x24)) ||
     (0 < (short)(*(short *)(param_2 + 0x44) - *(short *)(param_1 + 0x24)))) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  if (!bVar8) {
    return;
  }
  iVar6 = *(int *)(param_1 + 0x14);
  iVar1 = iVar6;
  iVar4 = *(int *)(iVar6 + 4);
  while (iVar4 != 0) {
    if ((short)(*(short *)(param_2 + 0x44) - *(short *)(iVar4 + 0x14)) < 1) {
      iVar1 = iVar4;
      iVar4 = *(int *)(iVar4 + 8);
    }
    else {
      iVar4 = *(int *)(iVar4 + 0xc);
    }
  }
  if ((iVar1 != iVar6) && ((short)(*(short *)(iVar1 + 0x14) - *(short *)(param_2 + 0x44)) < 1)) {
    iVar6 = iVar1;
  }
  if (iVar6 != *(int *)(param_1 + 0x14)) {
    return;
  }
  piVar5 = (int *)(param_2 + 4);
  do {
    bVar8 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar8);
  *piVar5 = *piVar5 + 1;
  local_24 = *(short *)(param_2 + 0x44);
  local_28 = &DAT_00853688;
  local_20 = 0;
  pcVar7 = *(char **)(param_1 + 0x14);
  bVar8 = true;
  pcVar2 = pcVar7;
  pcVar3 = *(char **)(pcVar7 + 4);
  while (pcVar3 != (char *)0x0) {
    bVar8 = 0 < (short)(*(short *)(pcVar3 + 0x14) - local_24);
    pcVar2 = pcVar3;
    if (bVar8) {
      pcVar3 = *(char **)(pcVar3 + 8);
    }
    else {
      pcVar3 = *(char **)(pcVar3 + 0xc);
    }
  }
  if (*(char *)(param_1 + 0x1c) == '\0') {
    local_30 = pcVar2;
    if (bVar8) {
      if (pcVar2 == *(char **)(pcVar7 + 8)) goto LAB_0048c668;
      if ((*pcVar2 == '\0') && (*(char **)(*(int *)(pcVar2 + 4) + 4) == pcVar2)) {
        local_30 = *(char **)(pcVar2 + 0xc);
      }
      else {
        local_30 = *(char **)(pcVar2 + 8);
        if (local_30 == (char *)0x0) {
          local_30 = *(char **)(pcVar2 + 4);
          pcVar3 = local_30;
          if (pcVar2 == *(char **)(local_30 + 8)) {
            do {
              local_30 = *(char **)(pcVar3 + 4);
              bVar8 = pcVar3 == *(char **)(local_30 + 8);
              pcVar3 = local_30;
            } while (bVar8);
          }
        }
        else {
          for (pcVar2 = *(char **)(local_30 + 0xc); pcVar2 != (char *)0x0;
              pcVar2 = *(char **)(pcVar2 + 0xc)) {
            local_30 = pcVar2;
          }
        }
      }
    }
    if ((short)(local_24 - *(short *)(local_30 + 0x14)) < 1) goto LAB_0048c680;
  }
LAB_0048c668:
  fn_00767bd4(&local_34);
  local_30 = local_34;
LAB_0048c680:
  *(int *)(local_30 + 0x18) = param_2;
  return;
}


