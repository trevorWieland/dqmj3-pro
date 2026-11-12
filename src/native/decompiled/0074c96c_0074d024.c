#include "0074c96c_0074d024.h"



undefined4 * fn_0074d024(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  
  *param_1 = &DAT_00853d3c;
  fn_004a1938(&DAT_008b6508,param_1);
  if (param_1[2] != 0) {
    uVar2 = 0;
    if (DAT_008b6400 != 0) {
      do {
        uVar3 = uVar2 + 1;
        iVar1 = param_1[2] + uVar2 * 0xac;
        *(undefined ***)(iVar1 + 4) = &PTR_LAB_008533fc;
        *(undefined **)(iVar1 + 8) = &DAT_0085319c;
        uVar2 = uVar3;
      } while (uVar3 < DAT_008b6400);
    }
    if (param_1[2] != 0) {
      pcVar4 = *(code **)(param_1[2] + -8);
      if (pcVar4 == (code *)0x0) {
        fn_0030233c();
      }
      else {
        (*pcVar4)();
      }
    }
    param_1[2] = 0;
  }
  param_1[0x30] = &DAT_0085319c;
  param_1[0x2f] = &PTR_LAB_008533fc;
  param_1[5] = &DAT_0085319c;
  param_1[4] = &PTR_LAB_008533fc;
  return param_1;
}



void fn_0074cf38(int param_1,int param_2)

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
  fn_0015ef4c(param_1,param_2 + 0x10,2);
  if (cVar1 == '\0') {
    iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    fn_00454cbc(param_1,iVar4);
    local_28 = (iVar3 - iVar4) + -4;
    fn_0015ef4c(param_1,&local_28,4);
    fn_00454cbc(param_1,iVar3);
  }
  return;
}



void fn_0074cd60(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_28;
  undefined1 local_24 [4];
  undefined4 local_20 [2];
  
  cVar1 = *(char *)(param_1 + 0x3b);
  iVar5 = 0;
  if (cVar1 == '\0') {
    local_24[0] = 0;
    piVar2 = &local_28;
    if (*(char *)(param_2 + 4) != '\0') {
      piVar2 = (int *)local_24;
    }
    local_28 = CONCAT31(((unsigned int)(local_28) >> 8) & 0xffffff,*(char *)(param_2 + 4));
    fn_0015ef4c(param_1,piVar2,1);
    iVar5 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    local_20[0] = 0;
    fn_0015ef4c(param_1,local_20,4);
  }
  fn_0015ef4c(param_1,param_2 + 5,1);
  local_28 = *(int *)(param_2 + 0xc) - *(int *)(param_2 + 8) >> 2;
  fn_0015ef4c(param_1,&local_28,4);
  iVar4 = *(int *)(param_2 + 0xc);
  for (iVar3 = *(int *)(param_2 + 8); iVar3 != iVar4; iVar3 = iVar3 + 4) {
    fn_0015ef4c(param_1,iVar3,4);
  }
  if (cVar1 == '\0') {
    iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    fn_00454cbc(param_1,iVar5);
    local_28 = (iVar3 - iVar5) + -4;
    fn_0015ef4c(param_1,&local_28,4);
    fn_00454cbc(param_1,iVar3);
  }
  return;
}



int fn_0074cd38(int param_1)

{
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 4))();
  }
  return param_1;
}



int fn_0074cd10(int param_1)

{
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 4))();
  }
  return param_1;
}



void fn_0074ccc0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 local_18;
  
  local_18 = *(undefined4 *)(param_2 + 0x14);
  fn_0015ef4c(param_1,&local_18,4);
  piVar2 = *(int **)(param_2 + 0x10);
  for (piVar1 = (int *)*piVar2; piVar1 != piVar2; piVar1 = (int *)*piVar1) {
    fn_0047fb68(param_1,piVar1 + 2);
  }
  return;
}



undefined4 fn_0074cbe4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 local_10;
  
  piVar1 = (int *)(param_1 + 0x10);
  local_10 = param_4;
  (**(code **)(*piVar1 + 8))();
  uVar2 = fn_0013d1a8();
  iVar5 = *(int *)(param_1 + 0x48);
  iVar6 = iVar5;
  iVar3 = *(int *)(iVar5 + 4);
  while (iVar3 != 0) {
    if (*(uint *)(iVar3 + 0x10) < uVar2) {
      iVar3 = *(int *)(iVar3 + 0xc);
    }
    else {
      iVar6 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
  }
  if ((iVar6 == iVar5) || (uVar2 < *(uint *)(iVar6 + 0x10))) {
    iVar6 = iVar5;
  }
  if (iVar6 == *(int *)(param_1 + 0x48)) {
    local_10 = fn_0013d1a8();
    puVar4 = (undefined4 *)fn_00147a40(param_1 + 0x38,&local_10);
    *puVar4 = *(undefined4 *)(param_1 + 0xc);
    local_10 = fn_0013d1a8();
    puVar4 = (undefined4 *)fn_00147a40(param_1 + 0x38,&local_10);
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  else {
    puVar4 = (undefined4 *)(iVar6 + 0x14);
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  return *puVar4;
}



undefined4 * fn_0074ca78(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int *piVar4;
  undefined4 local_18;
  int local_14;
  undefined1 auStack_10 [4];
  
  *param_1 = &DAT_0085335c;
  (**(code **)(param_1[4] + 8))();
  iVar1 = param_1[0x13];
  while (iVar1 != 0) {
    local_18 = *(undefined4 *)(param_1[0x12] + 8);
    fn_0077b3e4(&local_14,param_1 + 0xe,&local_18);
    iVar1 = param_1[0x13];
  }
  (**(code **)(param_1[4] + 0xc))(param_1 + 4);
  piVar4 = param_1 + 0xe;
  iVar1 = param_1[0x12];
  if (iVar1 != 0) {
    local_18 = *(undefined4 *)(iVar1 + 8);
    local_14 = iVar1;
    fn_0077ba40(auStack_10,piVar4,&local_18,&local_14);
    iVar1 = param_1[0x12];
    *(undefined4 *)(iVar1 + 0xc) = param_1[0xf];
    param_1[0xf] = iVar1;
    piVar2 = (int *)*piVar4;
    while (piVar2 != (int *)0x0) {
      *piVar4 = *piVar2;
      if (piVar2[2] != 0) {
        pcVar3 = *(code **)(piVar2[2] + -8);
        if (pcVar3 == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (*pcVar3)();
        }
      }
      if (piVar2 != (int *)0x0) {
        if ((code *)piVar2[-2] == (code *)0x0) {
          fn_0030233c(piVar2 + -2);
        }
        else {
          (*(code *)piVar2[-2])();
        }
      }
      piVar2 = (int *)*piVar4;
    }
  }
  param_1[4] = &PTR_LAB_008533fc;
  param_1[5] = &DAT_0085319c;
  *param_1 = &DAT_00853a0c;
  fn_004885e4(DAT_008b64a4,param_1);
  return param_1;
}



void fn_0074ca0c(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 local_18;
  undefined1 auStack_14 [8];
  
  piVar1 = (int *)(param_1 + 0x10);
  (**(code **)(*piVar1 + 8))();
  iVar2 = *(int *)(param_1 + 0x4c);
  while (iVar2 != 0) {
    local_18 = *(undefined4 *)(*(int *)(param_1 + 0x48) + 8);
    fn_0077b3e4(auStack_14,param_1 + 0x38,&local_18);
    iVar2 = *(int *)(param_1 + 0x4c);
  }
                    /* WARNING: Could not recover jumptable at 0x0074ca74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}



void fn_0074c96c(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_18;
  undefined1 auStack_14 [4];
  
  piVar1 = (int *)(param_1 + 0x10);
  (**(code **)(*piVar1 + 8))();
  iVar3 = *(int *)(param_1 + 0x48);
  iVar4 = iVar3;
  iVar2 = *(int *)(iVar3 + 4);
  while (iVar2 != 0) {
    if (*(uint *)(iVar2 + 0x10) < param_2) {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    else {
      iVar4 = iVar2;
      iVar2 = *(int *)(iVar2 + 8);
    }
  }
  if ((iVar4 == iVar3) || (param_2 < *(uint *)(iVar4 + 0x10))) {
    iVar4 = iVar3;
  }
  if (iVar4 != iVar3) {
    local_18 = iVar4;
    fn_0077b3e4(auStack_14,param_1 + 0x38,&local_18);
  }
                    /* WARNING: Could not recover jumptable at 0x0074ca08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}


