#include "005ee840_005eef64b.h"



int fn_005eef64(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  local_14 = 0;
  local_10 = 0;
  local_18 = *param_2;
  fn_005ef58c(puVar2,&local_18);
  uVar1 = fn_005ea5fc(*puVar2);
  fn_006e00a0(*param_2,uVar1,local_14);
  fn_007961ec(puVar2 + 5,&local_18);
  return (int)(puVar2[6] - puVar2[5]) / 0xc + -1;
}



void fn_005eee98(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  (**(code **)(*param_1 + 0x24))(param_1);
  puVar5 = (undefined4 *)param_1[1];
  iVar4 = puVar5[0x10];
  iVar2 = *(int *)(iVar4 + 8);
  while (iVar2 != iVar4) {
    fn_005e8778(*(undefined4 *)(iVar2 + 0x14),*puVar5,0);
    iVar1 = *(int *)(iVar2 + 0xc);
    if (*(int *)(iVar2 + 0xc) == 0) {
      iVar1 = *(int *)(iVar2 + 4);
      while (iVar3 = iVar1, iVar2 == *(int *)(iVar3 + 0xc)) {
        iVar2 = iVar3;
        iVar1 = *(int *)(iVar3 + 4);
      }
      if (*(int *)(iVar2 + 0xc) != iVar3) {
        iVar2 = iVar3;
      }
    }
    else {
      do {
        iVar2 = iVar1;
        iVar1 = *(int *)(iVar2 + 8);
      } while (*(int *)(iVar2 + 8) != 0);
    }
  }
  iVar2 = ((undefined4 *)param_1[1])[0x13];
  if (iVar2 == 0) {
    return;
  }
  fn_005e8778(iVar2,*(undefined4 *)param_1[1],0);
  return;
}



void fn_005eee80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_r4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 in_d8;
  
  fn_001dbe2c();
  piVar2 = *(int **)(param_1 + 0xe4);
  (**(code **)(*piVar2 + 0x24))(piVar2);
  puVar6 = (undefined4 *)piVar2[1];
  iVar5 = puVar6[0x10];
  iVar3 = *(int *)(iVar5 + 8);
  while (iVar3 != iVar5) {
    fn_005e8778(*(undefined4 *)(iVar3 + 0x14),*puVar6,0,param_4,in_d8,unaff_r4);
    iVar1 = *(int *)(iVar3 + 0xc);
    if (*(int *)(iVar3 + 0xc) == 0) {
      iVar1 = *(int *)(iVar3 + 4);
      while (iVar4 = iVar1, iVar3 == *(int *)(iVar4 + 0xc)) {
        iVar3 = iVar4;
        iVar1 = *(int *)(iVar4 + 4);
      }
      if (*(int *)(iVar3 + 0xc) != iVar4) {
        iVar3 = iVar4;
      }
    }
    else {
      do {
        iVar3 = iVar1;
        iVar1 = *(int *)(iVar3 + 8);
      } while (*(int *)(iVar3 + 8) != 0);
    }
  }
  iVar3 = ((undefined4 *)piVar2[1])[0x13];
  if (iVar3 == 0) {
    return;
  }
  fn_005e8778(iVar3,*(undefined4 *)piVar2[1],0);
  return;
}



void fn_005eeda8(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (*(char *)(param_1[1] + 0x50) == '\0') {
    return;
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  puVar5 = (undefined4 *)param_1[1];
  iVar4 = puVar5[0x10];
  iVar3 = *(int *)(iVar4 + 8);
  while (iVar3 != iVar4) {
    fn_005e6c08(*(undefined4 *)(iVar3 + 0x14),*puVar5,0);
    iVar1 = *(int *)(iVar3 + 0xc);
    if (*(int *)(iVar3 + 0xc) == 0) {
      iVar1 = *(int *)(iVar3 + 4);
      while (iVar2 = iVar1, iVar3 == *(int *)(iVar2 + 0xc)) {
        iVar3 = iVar2;
        iVar1 = *(int *)(iVar2 + 4);
      }
      if (*(int *)(iVar3 + 0xc) != iVar2) {
        iVar3 = iVar2;
      }
    }
    else {
      do {
        iVar3 = iVar1;
        iVar1 = *(int *)(iVar3 + 8);
      } while (*(int *)(iVar3 + 8) != 0);
    }
  }
  fn_005e6c08(((undefined4 *)param_1[1])[0x13],*(undefined4 *)param_1[1],0);
  return;
}



void fn_005eece8(undefined4 *param_1)

{
  *param_1 = &DAT_00858db8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



int * fn_005eec4c(int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(**(code **)(*param_2 + 8))(param_2);
  piVar1 = (int *)fn_005e783c(0x80000000 >> (LZCOUNT(*piVar1 + -1) - 1U & 0xff),
                               0x80000000 >> (LZCOUNT(piVar1[1] + -1) - 1U & 0xff),0,piVar1[3],0,0,
                               param_3);
  piVar2 = *(int **)(param_1 + 4);
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int **)(param_1 + 4) = piVar1;
  }
  return piVar1;
}


