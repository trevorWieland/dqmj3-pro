#include "007401e4_0074833cb.h"



void fn_0074833c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 local_20;
  
  local_20 = param_4;
  fn_002c3e78();
  iVar6 = 0;
  iVar1 = fn_006ba274(param_1);
  if (0 < iVar1) {
    do {
      iVar1 = fn_006ba284(param_1);
      iVar2 = fn_006ba274(param_1);
      uVar3 = iVar1 * iVar2 + iVar6;
      if ((int)uVar3 < 0) {
        return;
      }
      if ((uint)(*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xbc) >> 4) <= uVar3) {
        return;
      }
      puVar4 = (undefined4 *)(*(int *)(param_1 + 0xbc) + uVar3 * 0x10);
      if (puVar4 == (undefined4 *)0x0) {
        return;
      }
      uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x78) + iVar6 * 4);
      uVar5 = fn_0022f750(*puVar4);
      fn_0031b78c(param_1,iVar6,0,uVar5);
      iVar1 = fn_006ba284(param_1);
      iVar2 = fn_006ba274(param_1);
      uVar3 = iVar1 * iVar2 + iVar6;
      if (((int)uVar3 < 0) ||
         ((uint)(*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xbc) >> 4) <= uVar3)) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(param_1 + 0xbc) + uVar3 * 0x10;
      }
      if (*(int *)(iVar1 + 8) == 0) {
        local_20 = DAT_0089657c;
        fn_0031b554(uVar7,&local_20);
      }
      iVar6 = iVar6 + 1;
      iVar1 = fn_006ba274(param_1);
    } while (iVar6 < iVar1);
  }
  return;
}



void fn_00748104(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  
  iVar1 = fn_001f7e04(param_1,0x80);
  if (iVar1 != 0) {
    fn_00689878(param_1,0);
  }
  if (param_1[0x2c] == 0) {
    fn_00689878(param_1,0);
  }
  uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  uVar3 = (**(code **)(*param_1 + 0x144))(param_1);
  fn_006899f4(param_1,param_1[0x2c],uVar3,uVar2,unaff_r4);
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_00747ef8(int param_1)

{
  if (*(int *)(param_1 + 0xcc) != 0) {
    fn_002feef8(*(int *)(param_1 + 0xcc));
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  fn_002c4100(param_1);
  return;
}



void fn_00747ea0(int param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0xdc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xdc) + 4))();
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  iVar1 = fn_001f7e04(param_1,0x5e);
  if (iVar1 != 0) {
    fn_00689878(param_1,0);
  }
  if (*(int *)(param_1 + 0xcc) != 0) {
    fn_002feef8(*(int *)(param_1 + 0xcc));
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  fn_002c4100(param_1);
  return;
}



void fn_0074403c(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_008bfad8 + (param_2 & 0x1ff) * 4;
  iVar2 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    *(int *)(iVar1 + 0x10) = param_1;
  }
  else if (param_2 < *(uint *)(iVar2 + 8)) {
    *(int *)(param_1 + 0xc) = iVar2;
    *(int *)(iVar1 + 0x10) = param_1;
  }
  else {
    for (iVar1 = *(int *)(iVar2 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
      if (param_2 < *(uint *)(iVar1 + 8)) {
        *(int *)(iVar2 + 0xc) = param_1;
        *(int *)(param_1 + 0xc) = iVar1;
        if (iVar1 != 0) {
          return;
        }
        break;
      }
      iVar2 = iVar1;
    }
    *(int *)(iVar2 + 0xc) = param_1;
  }
  return;
}


