#include "001478b4_00147c4c.h"



void fn_00147be0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x10);
  piVar1 = (int *)*piVar3;
  while (piVar1 != piVar3) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar1 != *(int **)(param_1 + 0x10)) {
      piVar2 = (int *)*piVar1;
      *(int **)piVar1[1] = piVar2;
      *(int *)(*piVar1 + 4) = piVar1[1];
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
      (**(code **)piVar1[2])(piVar1 + 2);
      *piVar1 = *(int *)(param_1 + 4);
      *(int **)(param_1 + 4) = piVar1;
    }
    piVar1 = piVar2;
  }
  return;
}



void fn_00147b74(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x10);
  piVar1 = (int *)*piVar3;
  while (piVar1 != piVar3) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar1 != *(int **)(param_1 + 0x10)) {
      piVar2 = (int *)*piVar1;
      *(int **)piVar1[1] = piVar2;
      *(int *)(*piVar1 + 4) = piVar1[1];
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
      (**(code **)piVar1[2])(piVar1 + 2);
      *piVar1 = *(int *)(param_1 + 4);
      *(int **)(param_1 + 4) = piVar1;
    }
    piVar1 = piVar2;
  }
  return;
}



char * fn_00147a40(int param_1,uint *param_2)

{
  char *pcVar1;
  char *pcVar2;
  bool bVar3;
  char *local_2c;
  char *local_28;
  uint local_20;
  undefined4 local_1c;
  
  local_20 = *param_2;
  local_1c = 0;
  pcVar2 = *(char **)(param_1 + 0x10);
  bVar3 = true;
  local_28 = pcVar2;
  pcVar1 = *(char **)(pcVar2 + 4);
  while (pcVar1 != (char *)0x0) {
    bVar3 = local_20 < *(uint *)(pcVar1 + 0x10);
    local_28 = pcVar1;
    if (bVar3) {
      pcVar1 = *(char **)(pcVar1 + 8);
    }
    else {
      pcVar1 = *(char **)(pcVar1 + 0xc);
    }
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (bVar3) {
      if (local_28 == *(char **)(pcVar2 + 8)) goto LAB_00147ad0;
      if ((*local_28 == '\0') && (*(char **)(*(int *)(local_28 + 4) + 4) == local_28)) {
        local_28 = *(char **)(local_28 + 0xc);
      }
      else {
        pcVar1 = *(char **)(local_28 + 8);
        if (*(char **)(local_28 + 8) == (char *)0x0) {
          pcVar1 = *(char **)(local_28 + 4);
          pcVar2 = local_28;
          while (local_28 = pcVar1, pcVar2 == *(char **)(local_28 + 8)) {
            pcVar1 = *(char **)(local_28 + 4);
            pcVar2 = local_28;
          }
        }
        else {
          do {
            local_28 = pcVar1;
            pcVar1 = *(char **)(local_28 + 0xc);
          } while (*(char **)(local_28 + 0xc) != (char *)0x0);
        }
      }
    }
    if (local_20 <= *(uint *)(local_28 + 0x10)) goto LAB_00147ae8;
  }
LAB_00147ad0:
  fn_0017790c(&local_2c);
  local_28 = local_2c;
LAB_00147ae8:
  return local_28 + 0x14;
}



int * fn_00147974(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  iVar1 = fn_00100b58(param_2);
  if (iVar1 != 0) {
    fn_00177c88(param_1,0,*(undefined4 *)(*param_1 + -4),param_2,iVar1,0,iVar1);
    return param_1;
  }
  puVar2 = (undefined4 *)*param_1;
  piVar3 = puVar2 + -3;
  iVar1 = *piVar3;
  if (iVar1 == 0) {
    puVar2[-1] = 0;
    *(undefined2 *)*param_1 = 0;
  }
  else {
    if ((puVar2 != &DAT_008f9cf4) &&
       ((iVar1 == -1 || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar1 + -1, iVar1 == 0)))))) {
      fn_001008c4(*param_1 + -0xc,*(int *)(*param_1 + -8) + 8,0);
    }
    *param_1 = (int)&DAT_008f9cf4;
  }
  return param_1;
}



void fn_00147938(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  do {
    fn_00147938(param_1,*(undefined4 *)(param_2 + 0xc));
    iVar1 = *(int *)(param_2 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 4);
    *(int *)(param_1 + 4) = param_2;
    param_2 = iVar1;
  } while (iVar1 != 0);
  return;
}



void fn_001478f0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  do {
    fn_001478f0(param_1,*(undefined4 *)(param_2 + 0xc));
    iVar1 = *(int *)(param_2 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 4);
    fn_00147c4c(param_2 + 0x14);
    *(int *)(param_1 + 4) = param_2;
    param_2 = iVar1;
  } while (iVar1 != 0);
  return;
}



int * fn_00147c4c(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = (int *)param_1[4];
  if (piVar4 != (int *)0x0) {
    piVar3 = (int *)*piVar4;
    while (piVar3 != piVar4) {
      if (piVar3 == (int *)param_1[4]) {
        piVar3 = (int *)param_1[4];
      }
      else {
        piVar5 = (int *)*piVar3;
        *(int **)piVar3[1] = piVar5;
        *(int *)(*piVar3 + 4) = piVar3[1];
        param_1[5] = param_1[5] + -1;
        if ((undefined4 *)piVar3[2] != &DAT_008f9cf4) {
          piVar1 = (undefined4 *)piVar3[2] + -3;
          iVar2 = *piVar1;
          if ((iVar2 == -1) || ((piVar1 != &DAT_008f9ce8 && (*piVar1 = iVar2 + -1, iVar2 == 0)))) {
            fn_001008c4(piVar3[2] + -0xc,*(int *)(piVar3[2] + -8) + 8,0);
          }
        }
        *piVar3 = param_1[1];
        param_1[1] = (int)piVar3;
        piVar3 = piVar5;
      }
    }
    piVar4 = (int *)param_1[4];
    *piVar4 = param_1[1];
    param_1[1] = (int)piVar4;
    piVar4 = (int *)*param_1;
    while (piVar4 != (int *)0x0) {
      *param_1 = *piVar4;
      fn_001008c4(piVar4[2],piVar4[1],0);
      fn_001008c4(piVar4,1,0);
      piVar4 = (int *)*param_1;
    }
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}



void fn_001478b4(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  do {
    fn_001478b4(param_1,*(undefined4 *)(param_2 + 0xc));
    iVar1 = *(int *)(param_2 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 4);
    *(int *)(param_1 + 4) = param_2;
    param_2 = iVar1;
  } while (iVar1 != 0);
  return;
}


