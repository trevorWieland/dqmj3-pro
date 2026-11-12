#include "004e0ea8_004f01f4a.h"



void fn_004edb64(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = &DAT_00856ca0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



void fn_004ed440(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  return;
}



void fn_004ed3b8(void)

{
  int *piVar1;
  
  if (DAT_008c062c == '\0') {
    return;
  }
  DAT_008c062c = 0;
  fn_0065929c(DAT_008c06e0);
  fn_00659178();
  fn_00656bb8();
  DAT_008c06dc = 0;
  while (DAT_008eef74 != 0) {
    if (DAT_008eef74 - 1 < DAT_008eef74) {
      piVar1 = *(int **)(DAT_008eef7c + (DAT_008eef74 - 1) * 4);
    }
    else {
      piVar1 = (int *)0x0;
    }
    (**(code **)(*piVar1 + 0x10))();
    if (0 < (int)DAT_008eef74) {
      DAT_008eef74 = DAT_008eef74 - 1;
    }
  }
  while (DAT_008eef3c != 0) {
    if (DAT_008eef3c - 1 < DAT_008eef3c) {
      piVar1 = *(int **)(DAT_008eef44 + (DAT_008eef3c - 1) * 4);
    }
    else {
      piVar1 = (int *)0x0;
    }
    (**(code **)(*piVar1 + 0x10))();
    if (0 < (int)DAT_008eef3c) {
      DAT_008eef3c = DAT_008eef3c - 1;
    }
  }
  DAT_008c06d0 = 0;
  fn_00657320(DAT_008c06d4);
  DAT_008c06d4 = 0;
  fn_00656ca4(&DAT_008eef58);
  return;
}



void fn_004ecfe0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_004ed2e8();
  fn_00656e14(param_1,uVar1);
  return;
}



void fn_004ec4a0(undefined4 *param_1)

{
  *param_1 = &DAT_00856c64;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  return;
}



void fn_004e9ebc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  puVar1[0x10] = 0;
  *puVar1 = &DAT_00856ab0;
  return;
}



undefined4 fn_004e0ea8(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  (**(code **)(*param_1 + 0x84))(param_1);
  param_1[2] = param_2;
  if (param_1[0x488] == 0) {
    uVar6 = param_1[0x489];
    uVar1 = fn_004ed2e8();
    iVar2 = fn_00656e14(uVar6,uVar1);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      uVar4 = 0;
      if (uVar6 != 0) {
        do {
          puVar5 = (undefined1 *)(iVar2 + uVar4);
          uVar4 = uVar4 + 1;
          if (puVar5 != (undefined1 *)0x0) {
            *puVar5 = 0;
          }
        } while (uVar4 < uVar6);
      }
    }
    param_1[0x488] = iVar2;
  }
  if (param_1[0x495] == 0) {
    uVar1 = fn_004ed2e8();
    iVar3 = fn_00656e14(0x40,uVar1);
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = fn_004ebda0();
    }
    param_1[0x495] = iVar2;
  }
  if (param_1[0x480] == 0) {
    uVar1 = fn_004ed2e8();
    iVar3 = fn_00656e14(0x78,uVar1);
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = fn_004e3064();
    }
    param_1[0x480] = iVar2;
  }
  if (param_1[0x492] == 0) {
    uVar1 = fn_004ed2e8();
    iVar3 = fn_00656e14(0x40,uVar1);
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = fn_004df308();
    }
    param_1[0x492] = iVar2;
  }
  if (param_1[0x493] == 0) {
    uVar1 = fn_004ed2e8();
    iVar3 = fn_00656e14(0x48,uVar1);
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = fn_004e9a58();
    }
    param_1[0x493] = iVar2;
  }
  if (param_1[0x494] == 0) {
    uVar1 = fn_004ed2e8();
    iVar3 = fn_00656e14(0x40,uVar1);
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = fn_004e2b10();
    }
    param_1[0x494] = iVar2;
  }
  if (param_1[0x496] == 0) {
    uVar1 = fn_004ed2e8();
    iVar3 = fn_00656e14(0x40,uVar1);
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = fn_004e81d8();
    }
    param_1[0x496] = iVar2;
  }
  if (param_1[0x497] == 0) {
    uVar1 = fn_004ed2e8();
    iVar3 = fn_00656e14(0x14,uVar1);
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = fn_004ed164();
    }
    param_1[0x497] = iVar2;
  }
  return 0;
}


