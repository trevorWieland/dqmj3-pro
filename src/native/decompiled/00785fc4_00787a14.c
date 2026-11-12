#include "00785fc4_00787a14.h"



void fn_00787a14(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  while (param_1[8] != 0) {
    iVar1 = *param_1;
    *param_1 = iVar1 + 8;
    iVar2 = param_1[8] + -1;
    param_1[8] = iVar2;
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = param_1[2];
    }
    if (iVar2 == 0 || iVar1 + 8 == iVar3) {
      puVar4 = (undefined4 *)param_1[3];
      param_1[3] = (int)(puVar4 + 1);
      fn_001008c4(*puVar4,0x20);
      if (param_1[8] == 0) {
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        fn_001008c4(param_1[9],param_1[10],0);
      }
      else {
        iVar3 = *(int *)param_1[3];
        if ((int *)param_1[3] == (int *)0x0) {
          iVar1 = 0;
          iVar2 = 0;
        }
        else {
          iVar1 = iVar3 + 0x100;
          iVar2 = iVar3;
        }
        param_1[2] = iVar1;
        *param_1 = iVar3;
        param_1[1] = iVar2;
      }
    }
  }
  return;
}



void fn_00786cbc(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  
  piVar5 = (int *)param_1[1];
  iVar7 = param_1[4];
  if (piVar5 == (int *)0x0) {
    if (param_1[2] == param_1[3]) {
      if (*param_1 == 0) {
        uVar6 = 0x20;
      }
      else {
        uVar1 = *(uint *)(*param_1 + 4);
        uVar6 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        if (uVar6 < uVar1 + 0x20) {
          uVar6 = uVar1 + 0x20;
        }
      }
      piVar5 = (int *)fn_0015ece0(0xc);
      iVar2 = fn_0015ece0(uVar6 * 0x38);
      piVar5[2] = iVar2;
      *piVar5 = *param_1;
      piVar5[1] = uVar6;
      *param_1 = (int)piVar5;
      iVar2 = piVar5[2];
      param_1[2] = iVar2;
      param_1[3] = iVar2 + uVar6 * 0x38;
    }
    piVar5 = (int *)param_1[2];
    param_1[2] = (int)(piVar5 + 0xe);
  }
  else {
    param_1[1] = *piVar5;
  }
  if (piVar5 + 2 != (int *)0x0) {
    iVar2 = fn_00456a28(piVar5 + 2,param_2);
    uVar3 = *(undefined4 *)(param_2 + 0x24);
    uVar4 = *(undefined4 *)(param_2 + 0x28);
    uVar8 = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(iVar2 + 0x24) = uVar3;
    *(undefined4 *)(iVar2 + 0x28) = uVar4;
    *(undefined4 *)(iVar2 + 0x2c) = uVar8;
  }
  *piVar5 = iVar7;
  piVar5[1] = *(int *)(iVar7 + 4);
  **(undefined4 **)(iVar7 + 4) = piVar5;
  *(int **)(iVar7 + 4) = piVar5;
  param_1[5] = param_1[5] + 1;
  return;
}



void fn_00786934(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  
  piVar5 = (int *)param_1[1];
  iVar7 = param_1[4];
  if (piVar5 == (int *)0x0) {
    if (param_1[2] == param_1[3]) {
      if (*param_1 == 0) {
        uVar6 = 0x20;
      }
      else {
        uVar1 = *(uint *)(*param_1 + 4);
        uVar6 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        if (uVar6 < uVar1 + 0x20) {
          uVar6 = uVar1 + 0x20;
        }
      }
      piVar5 = (int *)fn_0015ece0(0xc);
      iVar2 = fn_0015ece0(uVar6 * 0x38);
      piVar5[2] = iVar2;
      *piVar5 = *param_1;
      piVar5[1] = uVar6;
      *param_1 = (int)piVar5;
      iVar2 = piVar5[2];
      param_1[2] = iVar2;
      param_1[3] = iVar2 + uVar6 * 0x38;
    }
    piVar5 = (int *)param_1[2];
    param_1[2] = (int)(piVar5 + 0xe);
  }
  else {
    param_1[1] = *piVar5;
  }
  if (piVar5 + 2 != (int *)0x0) {
    iVar2 = fn_00456a28(piVar5 + 2,param_2);
    uVar3 = *(undefined4 *)(param_2 + 0x24);
    uVar4 = *(undefined4 *)(param_2 + 0x28);
    uVar8 = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(iVar2 + 0x24) = uVar3;
    *(undefined4 *)(iVar2 + 0x28) = uVar4;
    *(undefined4 *)(iVar2 + 0x2c) = uVar8;
  }
  *piVar5 = iVar7;
  piVar5[1] = *(int *)(iVar7 + 4);
  **(undefined4 **)(iVar7 + 4) = piVar5;
  *(int **)(iVar7 + 4) = piVar5;
  param_1[5] = param_1[5] + 1;
  return;
}



void fn_00786404(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 0x10);
  if (piVar2 == (int *)0x0) {
    if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0xc)) {
      fn_0078638c(param_1);
    }
    piVar2 = *(int **)(param_1 + 8);
    *(int **)(param_1 + 8) = piVar2 + 0x1c;
  }
  else {
    *(int *)(param_1 + 4) = *piVar2;
  }
  if (piVar2 + 2 != (int *)0x0) {
    fn_0013cd7c(piVar2 + 2,param_2);
  }
  *piVar2 = iVar1;
  piVar2[1] = *(int *)(iVar1 + 4);
  **(undefined4 **)(iVar1 + 4) = piVar2;
  *(int **)(iVar1 + 4) = piVar2;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return;
}



char * fn_007861a0(int param_1,ushort *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  char *local_2c;
  char *local_28;
  ushort local_20;
  undefined4 local_1c;
  
  local_20 = *param_2;
  local_1c = 0;
  pcVar2 = *(char **)(param_1 + 0x10);
  bVar4 = true;
  pcVar1 = pcVar2;
  pcVar3 = *(char **)(pcVar2 + 4);
  while (pcVar3 != (char *)0x0) {
    bVar4 = local_20 < *(ushort *)(pcVar3 + 0x10);
    pcVar1 = pcVar3;
    if (bVar4) {
      pcVar3 = *(char **)(pcVar3 + 8);
    }
    else {
      pcVar3 = *(char **)(pcVar3 + 0xc);
    }
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    local_28 = pcVar1;
    if (bVar4) {
      if (pcVar1 == *(char **)(pcVar2 + 8)) goto LAB_007862b0;
      if ((*pcVar1 == '\0') && (*(char **)(*(int *)(pcVar1 + 4) + 4) == pcVar1)) {
        local_28 = *(char **)(pcVar1 + 0xc);
      }
      else {
        local_28 = *(char **)(pcVar1 + 8);
        if (local_28 == (char *)0x0) {
          local_28 = *(char **)(pcVar1 + 4);
          pcVar3 = local_28;
          if (pcVar1 == *(char **)(local_28 + 8)) {
            do {
              local_28 = *(char **)(pcVar3 + 4);
              bVar4 = pcVar3 == *(char **)(local_28 + 8);
              pcVar3 = local_28;
            } while (bVar4);
          }
        }
        else {
          for (pcVar1 = *(char **)(local_28 + 0xc); pcVar1 != (char *)0x0;
              pcVar1 = *(char **)(pcVar1 + 0xc)) {
            local_28 = pcVar1;
          }
        }
      }
    }
    if (local_20 <= *(ushort *)(local_28 + 0x10)) goto LAB_007862d8;
  }
LAB_007862b0:
  fn_0077e114(&local_2c);
  local_28 = local_2c;
LAB_007862d8:
  return local_28 + 0x14;
}



void fn_00785fc4(undefined4 *param_1,int param_2,short *param_3)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 local_1c;
  
  pcVar3 = *(char **)(param_2 + 0x10);
  bVar1 = true;
  pcVar4 = pcVar3;
  if (*(char **)(pcVar3 + 4) != (char *)0x0) {
    pcVar2 = *(char **)(pcVar3 + 4);
    do {
      pcVar4 = pcVar2;
      bVar1 = *param_3 < *(short *)(pcVar4 + 0x10);
      if (bVar1) {
        pcVar2 = *(char **)(pcVar4 + 8);
      }
      else {
        pcVar2 = *(char **)(pcVar4 + 0xc);
      }
    } while (pcVar2 != (char *)0x0);
  }
  if (*(char *)(param_2 + 0x18) == '\0') {
    if (bVar1) {
      if (pcVar4 == *(char **)(pcVar3 + 8)) goto LAB_00786020;
      if ((*pcVar4 == '\0') && (*(char **)(*(int *)(pcVar4 + 4) + 4) == pcVar4)) {
        pcVar4 = *(char **)(pcVar4 + 0xc);
      }
      else {
        pcVar3 = *(char **)(pcVar4 + 8);
        if (*(char **)(pcVar4 + 8) == (char *)0x0) {
          pcVar3 = *(char **)(pcVar4 + 4);
          pcVar2 = pcVar4;
          while (pcVar4 = pcVar3, pcVar2 == *(char **)(pcVar4 + 8)) {
            pcVar3 = *(char **)(pcVar4 + 4);
            pcVar2 = pcVar4;
          }
        }
        else {
          do {
            pcVar4 = pcVar3;
            pcVar3 = *(char **)(pcVar4 + 0xc);
          } while (*(char **)(pcVar4 + 0xc) != (char *)0x0);
        }
      }
    }
    if (*(short *)(pcVar4 + 0x10) < *param_3) {
      fn_0077cea8(&local_1c);
      *param_1 = local_1c;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    *param_1 = pcVar4;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
LAB_00786020:
    fn_0077cea8(&local_1c);
    *param_1 = local_1c;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}


