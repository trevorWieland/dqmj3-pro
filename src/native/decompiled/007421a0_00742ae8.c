#include "007421a0_00742ae8.h"



/* WARNING: Removing unreachable block (ram,0x00742b04) */

undefined4 fn_00742ae8(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint local_28;
  int *local_24;
  
  piVar1 = (int *)fn_00173d4c();
  piVar2 = (int *)fn_00173d4c(param_1,0xfffffffe);
  if (*piVar2 == 0x1000001) {
    uVar3 = fn_001581d0(param_1,(char *)&DAT_00742d8c);
    return uVar3;
  }
  iVar4 = *piVar1;
  if (iVar4 == 0x8000040) {
    uVar3 = fn_00173d4c(param_1,0xffffffff);
    uVar5 = fn_00173d4c(param_1,0xfffffffe);
    local_28 = 0;
    iVar4 = fn_001987e4(param_1,piVar1,uVar5,uVar3);
    if (iVar4 == 0) {
LAB_00742d64:
      uVar3 = fn_00173d4c(param_1,0xfffffffe);
      fn_0019828c(param_1,uVar3);
      return 0xffffffff;
    }
  }
  else if (iVar4 == 0x8004000) {
    uVar3 = fn_00173d4c(param_1,0xffffffff);
    uVar5 = fn_00173d4c(param_1,0xfffffffe);
    local_28 = 0;
    fn_001804b4(piVar1[1],*(undefined4 *)(param_1 + 0x8c),uVar5,uVar3);
  }
  else if (iVar4 == 0xa000020) {
    uVar3 = fn_00173d4c(param_1,0xffffffff);
    uVar5 = fn_00173d4c(param_1,0xfffffffe);
    fn_0019b728(piVar1[1],uVar5,uVar3);
  }
  else {
    if (iVar4 != 0xa008000) {
      fn_00173cd0(param_1,2);
      uVar3 = fn_001581d0(param_1,"rawset works only on array/table/class and instance");
      return uVar3;
    }
    iVar6 = piVar1[1];
    uVar3 = fn_00173d4c(param_1,0xfffffffe);
    uVar5 = fn_00173d4c(param_1,0xffffffff);
    local_24 = (int *)0x0;
    local_28 = 0x1000001;
    iVar4 = fn_001a1dc8(*(undefined4 *)(*(int *)(iVar6 + 0x1c) + 0x18),uVar3,&local_28);
    if ((iVar4 == 0) || (((uint)local_24 & 0x2000000) == 0)) {
      if (((local_28 & 0x8000000) != 0) &&
         (iVar4 = local_24[1], local_24[1] = iVar4 + -1, iVar4 + -1 == 0)) {
        (**(code **)(*local_24 + 8))();
      }
      goto LAB_00742d64;
    }
    fn_0019e864(iVar6 + ((uint)local_24 & 0xffffff) * 8 + 0x2c,uVar5);
    if (((local_28 & 0x8000000) != 0) &&
       (iVar4 = local_24[1], local_24[1] = iVar4 + -1, iVar4 + -1 == 0)) {
      (**(code **)(*local_24 + 8))();
    }
  }
  fn_00173cd0(param_1,2);
  return 0;
}



undefined4 fn_00742670(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_20 [2];
  uint local_18;
  int *local_14;
  
  if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x34) < 2) {
    fn_0019813c(param_1,(char *)&DAT_00742774);
  }
  else {
    iVar1 = fn_00159164(param_1,param_2,0xa000020,local_20);
    if (iVar1 != 0) {
      uVar2 = fn_00173d4c(param_1,0xffffffff);
      local_18 = 0x1000001;
      local_14 = (int *)0x0;
      iVar1 = fn_001a1dc8(*(undefined4 *)(local_20[0] + 4),uVar2,&local_18);
      if (iVar1 != 0) {
        fn_0019b650(*(undefined4 *)(local_20[0] + 4),uVar2);
      }
      if (param_3 != 0) {
        uVar2 = fn_00173d4c(param_1,0xffffffff);
        fn_0019e864(uVar2,&local_18);
      }
      if (((local_18 & 0x8000000) != 0) &&
         (iVar1 = local_14[1], local_14[1] = iVar1 + -1, iVar1 + -1 == 0)) {
        (**(code **)(*local_14 + 8))();
      }
      return 0;
    }
  }
  return 0xffffffff;
}



void fn_00742630(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 0) {
    uVar1 = fn_00173d4c();
  }
  else {
    uVar1 = fn_00173d40(param_1,param_2 + -1 + *(int *)(param_1 + 0x34));
  }
  fn_00173d1c(param_1,uVar1);
  return;
}



int * fn_0074254c(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_20;
  int *local_1c;
  
  uVar3 = *(undefined4 *)(param_1 + 0x8c);
  piVar1 = (int *)fn_002fece8(0xa8);
  if (piVar1 != (int *)0x0) {
    fn_0015467c(piVar1,uVar3);
  }
  iVar2 = fn_001544a0(piVar1,param_1,param_2);
  if (iVar2 == 0) {
    (**(code **)*piVar1)(piVar1);
    fn_0019d680(piVar1,0xa8);
    return (int *)0x0;
  }
  local_20 = 0x8001000;
  local_1c = piVar1;
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    fn_00146590(0,&local_20);
  }
  piVar1[1] = piVar1[1] + 1;
  fn_00173d1c(param_1);
  if (((local_20 & 0x8000000) != 0) &&
     (iVar2 = local_1c[1], local_1c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*local_1c + 8))();
  }
  return piVar1;
}



void fn_007424a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint local_20;
  int *local_1c;
  
  uVar2 = *(undefined4 *)(param_1 + 0x8c);
  local_1c = (int *)fn_002fece8(0x2c);
  if (local_1c != (int *)0x0) {
    fn_0019b998(local_1c,uVar2,0);
  }
  local_1c[6] = 0;
  local_20 = 0xa000020;
  if (local_1c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  local_1c[1] = local_1c[1] + 1;
  fn_00173d1c(param_1,&local_20);
  if (((local_20 & 0x8000000) != 0) &&
     (iVar1 = local_1c[1], local_1c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*local_1c + 8))();
  }
  return;
}



void fn_00742460(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 < 0) {
    uVar1 = fn_00173d4c();
  }
  else {
    uVar1 = fn_00173d40(param_2,param_3 + -1 + *(int *)(param_2 + 0x34));
  }
  fn_00173d1c(param_1,uVar1);
  return;
}



undefined4 fn_0074236c(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint local_10;
  int *local_c;
  
  if (param_2 < 0) {
    piVar1 = (int *)fn_00173d4c();
  }
  else {
    piVar1 = (int *)fn_00173d40(param_1,param_2 + -1 + *(int *)(param_1 + 0x34));
  }
  if (*piVar1 != 0x8010000) {
    uVar2 = fn_001581d0(param_1,(char *)&DAT_00742440);
    return uVar2;
  }
  local_10 = *(uint *)(piVar1[1] + 0xc);
  local_c = *(int **)(piVar1[1] + 0x10);
  if ((local_10 & 0x8000000) != 0) {
    local_c[1] = local_c[1] + 1;
  }
  fn_00173d1c(param_1,&local_10);
  if (((local_10 & 0x8000000) != 0) &&
     (iVar3 = local_c[1], local_c[1] = iVar3 + -1, iVar3 + -1 == 0)) {
    (**(code **)(*local_c + 8))();
  }
  return 0;
}



undefined4 fn_0074234c(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 100) != 0) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}



undefined4 fn_00742348(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 100) != 0) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}



int fn_0074225c(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int unaff_r5;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar3 = *(int *)(param_1 + 0x34);
  uVar4 = *(uint *)(param_1 + 100);
  uVar7 = (uVar4 - param_2) - 1;
  if (uVar7 < uVar4) {
    if (param_2 != 0) {
      unaff_r5 = *(int *)(param_1 + 0x60);
    }
    uVar1 = 0;
    if (param_2 != 0) {
      do {
        iVar6 = uVar4 - uVar1;
        uVar1 = uVar1 + 1;
        iVar3 = iVar3 - *(int *)(iVar6 * 0x30 + unaff_r5 + -0x18);
      } while (uVar1 < param_2);
    }
    piVar2 = (int *)(*(int *)(param_1 + 0x60) + uVar7 * 0x30);
    if (piVar2[2] == 0x8000100) {
      iVar5 = *(int *)(piVar2[3] + 0x24);
      iVar6 = *(int *)(iVar5 + 0x4c);
      if (param_3 < iVar6) {
        fn_00173d1c(param_1,*(int *)(piVar2[3] + 0x28) + param_3 * 8,iVar3,iVar6,param_4);
        return *(int *)(*(int *)(iVar5 + 0x50) + param_3 * 0x14 + 8) + 0x1c;
      }
      iVar3 = fn_0029936c(iVar5,param_1,iVar3,param_3 - iVar6,((*piVar2 - iVar5) + -0x60 >> 3) + -1
                          );
      return iVar3;
    }
  }
  return 0;
}



undefined4 fn_007421a0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint local_18;
  int *local_14;
  int local_10 [2];
  
  local_10[0] = 0;
  iVar1 = fn_00159164(param_1,param_2,0xa008000,local_10);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_14 = *(int **)(*(int *)(local_10[0] + 4) + 0x1c);
    local_18 = 0x8004000;
    if (local_14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      fn_00146590(0,&local_18);
    }
    local_14[1] = local_14[1] + 1;
    fn_00173d1c(param_1);
    if (((local_18 & 0x8000000) != 0) &&
       (iVar1 = local_14[1], local_14[1] = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)(*local_14 + 8))();
    }
    uVar2 = 0;
  }
  return uVar2;
}


