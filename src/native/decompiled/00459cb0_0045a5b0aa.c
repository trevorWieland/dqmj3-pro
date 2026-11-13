#include "00459cb0_0045a5b0aa.h"



void fn_00459d70(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  bool bVar6;
  
  piVar1 = (int *)*param_3;
  iVar3 = piVar1[3];
  iVar4 = piVar1[4];
  if (iVar4 != 0) {
    *(int *)(iVar4 + 0xc) = iVar3;
  }
  piVar1[4] = 0;
  if (iVar3 != 0) {
    *(int *)(iVar3 + 0x10) = iVar4;
  }
  piVar1[3] = 0;
  if (*(int **)(param_2 + 8) == piVar1) {
    *(int *)(param_2 + 8) = iVar3;
  }
  if (*(int **)(param_2 + 0xc) == piVar1) {
    *(int *)(param_2 + 0xc) = iVar4;
  }
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
  *param_3 = iVar3;
  piVar1[0x42] = 0;
  piVar1[0x43] = 0;
  puVar5 = (uint *)(piVar1 + 1);
  do {
    uVar2 = *puVar5 - 1;
    bVar6 = (bool)hasExclusiveAccess(puVar5);
  } while (!bVar6);
  *puVar5 = uVar2;
  bVar6 = uVar2 == 0;
  if (bVar6) {
    uVar2 = (uint)*(byte *)(piVar1 + 2);
  }
  if (bVar6 && uVar2 == 0) {
    *(undefined1 *)(piVar1 + 2) = 1;
    (**(code **)(*piVar1 + 4))();
  }
  *param_1 = *param_3;
  return;
}



void fn_00459cb0(int param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (((*(int *)(param_2 + 0x10) == 0) && (*(int *)(param_2 + 0xc) == 0)) &&
     (*(int *)(param_1 + 8) != param_2)) {
    piVar3 = (int *)(param_2 + 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = *piVar3 + 1;
    if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0x10)) {
      *(int *)(param_1 + 8) = param_2;
    }
    else {
      *(int *)(*(int *)(param_1 + 0xc) + 0xc) = param_2;
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = param_2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    uVar2 = DAT_008b6514;
    if (param_3 != 0) {
      *(undefined4 *)(param_2 + 0x108) = DAT_008b6510;
      *(undefined4 *)(param_2 + 0x10c) = uVar2;
    }
  }
  return;
}


