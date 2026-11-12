#include "0019d650_0019e2e8.h"



undefined4 fn_0019e2e8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == param_1) {
    return 0;
  }
  iVar1 = param_2;
  if (param_2 != 0) {
    do {
      iVar1 = *(int *)(iVar1 + 0x18);
      if (iVar1 == param_1) {
        return 0;
      }
    } while (iVar1 != 0);
    if (param_2 != 0) {
      *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
    }
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 4) + -1;
    *(int *)(iVar1 + 4) = iVar2;
    if (iVar2 == 0) {
      (**(code **)(**(int **)(param_1 + 0x18) + 8))();
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(int *)(param_1 + 0x18) = param_2;
  return 1;
}



/* WARNING: Removing unreachable block (ram,0x0019e308) */
/* WARNING: Removing unreachable block (ram,0x0019e31c) */
/* WARNING: Removing unreachable block (ram,0x0019e324) */
/* WARNING: Removing unreachable block (ram,0x0019e32c) */

undefined4 fn_0019e2cc(int param_1)

{
  int iVar1;
  int iVar2;
  
  fn_00666384();
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 4) + -1;
    *(int *)(iVar1 + 4) = iVar2;
    if (iVar2 == 0) {
      (**(code **)(**(int **)(param_1 + 0x18) + 8))();
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return 1;
}



int fn_0019e1ec(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  param_1[1] = 0;
  *param_1 = &DAT_0081bd48;
  param_1[2] = 0;
  iVar1 = fn_00101a1c(param_1 + 0xb,&LAB_001a36c0,8,1);
  iVar7 = iVar1 + -0x2c;
  *(undefined4 *)(iVar1 + -4) = param_4;
  iVar2 = *(int *)(param_3 + 0x1c);
  *(int *)(iVar1 + -0x10) = iVar2;
  uVar6 = *(uint *)(iVar2 + 0x24);
  uVar3 = 0;
  if (uVar6 != 0) {
    do {
      iVar2 = iVar7 + uVar3 * 8;
      puVar4 = (uint *)(iVar2 + 0x2c);
      if (puVar4 != (uint *)0x0) {
        iVar5 = param_3 + uVar3 * 8;
        uVar8 = *(uint *)(iVar5 + 0x2c);
        *puVar4 = uVar8;
        iVar5 = *(int *)(iVar5 + 0x30);
        *(int *)(iVar2 + 0x30) = iVar5;
        if ((uVar8 & 0x8000000) != 0) {
          *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar6);
  }
  *(undefined4 *)(iVar1 + -0xc) = 0;
  *(undefined4 *)(iVar1 + -8) = 0;
  *(int *)(*(int *)(iVar1 + -0x10) + 4) = *(int *)(*(int *)(iVar1 + -0x10) + 4) + 1;
  *(undefined4 *)(iVar1 + -0x14) = *(undefined4 *)(*(int *)(iVar1 + -0x10) + 0x18);
  *(undefined4 *)(iVar1 + -0x20) = 0;
  *(int *)(iVar1 + -0x18) = param_2;
  *(undefined4 *)(iVar1 + -0x1c) = 0;
  fn_0019e8c4(param_2 + 0x44,iVar7);
  return iVar7;
}



void fn_0019e0c4(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  int local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  int local_28;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  
  fn_001a3530();
  if (*param_1 == 0x10f) {
    iVar2 = fn_001a9704(param_1[1]);
    iVar3 = fn_001a72b0(param_1[1],0xffffffff);
    uVar1 = (undefined1)iVar3;
    local_34 = 0x2c;
    local_32 = (undefined1)iVar2;
    local_38 = 0;
    local_31 = 0;
    local_33 = uVar1;
    fn_001a759c(param_1[1],&local_38);
    iVar4 = *(int *)(param_1[1] + 100) + -1;
    if (iVar3 != iVar2) {
      local_2c = 10;
      local_2a = 0;
      local_29 = 0;
      local_30 = iVar2;
      local_2b = uVar1;
      fn_001a759c(param_1[1],&local_30);
    }
    iVar2 = fn_001a9c90(param_1 + 4);
    *param_1 = iVar2;
    fn_0019e0c4(param_1);
    *(undefined1 *)(param_1[1] + 0xd8) = 0;
    iVar2 = fn_001a9704(param_1[1]);
    if (iVar3 != iVar2) {
      local_24 = 10;
      local_22 = 0;
      local_21 = 0;
      local_28 = iVar2;
      local_23 = uVar1;
      fn_001a759c(param_1[1],&local_28);
    }
    *(undefined1 *)(param_1[1] + 0xd8) = 0;
    fn_001a7908(param_1[1],iVar4,1,(*(int *)(param_1[1] + 100) - iVar4) + -1);
  }
  return;
}



undefined4 fn_0019d91c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  while( true ) {
    if (piVar2 == (int *)(param_1 + 8)) {
      return 0;
    }
    iVar1 = (**(code **)(*(int *)piVar2[-8] + 0xc))((int *)piVar2[-8],param_3,param_2,0);
    if (iVar1 != 0) break;
    piVar2 = (int *)*piVar2;
  }
  return piVar2[-8];
}



void fn_0019d684(int *param_1)

{
  int iVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  
  do {
    while (iVar1 = param_1[9], iVar1 == 0) {
      param_1[9] = 1;
      if (*(code **)(*param_1 + 0x24) == (code *)0x0) {
        iVar1 = 3;
      }
      else {
        iVar1 = (**(code **)(*param_1 + 0x24))(param_1,param_1[6]);
      }
      param_1[1] = iVar1;
      if (iVar1 == 10) {
        return;
      }
    }
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return;
      }
      if ((param_1[1] == 0) && (param_1[2] != param_1[7])) {
        param_1[1] = 5;
      }
      iVar1 = param_1[1];
      if (iVar1 == 10) {
        return;
      }
      iVar3 = param_1[2];
      iVar2 = fn_00192114();
      *(undefined1 *)(iVar2 + 0xc0) = 0;
      iVar2 = fn_00192114();
      if (*(int *)(iVar2 + 200) == 0 || *(int *)(iVar2 + 200) == 10) {
        iVar2 = fn_00192114();
        *(int *)(iVar2 + 200) = iVar1;
        iVar1 = fn_00192114();
        *(int *)(iVar1 + 0xcc) = iVar3;
      }
      UNRECOVERED_JUMPTABLE = (code *)param_1[10];
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        return;
      }
      goto LAB_0019d808;
    }
    param_1[9] = 2;
    if (param_1[1] != 0) break;
    if (param_1[2] != param_1[6]) {
      param_1[1] = 5;
      break;
    }
    if (*(code **)(*param_1 + 0x20) == (code *)0x0) {
      iVar1 = 3;
    }
    else {
      iVar1 = (**(code **)(*param_1 + 0x20))
                        (param_1,param_1[8],param_1[7],*(undefined1 *)((int)param_1 + 0x13));
    }
    param_1[1] = iVar1;
  } while (iVar1 != 10);
  iVar1 = param_1[1];
  if (iVar1 == 10) {
    return;
  }
  iVar3 = param_1[2];
  iVar2 = fn_00192114();
  *(undefined1 *)(iVar2 + 0xc0) = 0;
  iVar2 = fn_00192114();
  if (*(int *)(iVar2 + 200) == 0 || *(int *)(iVar2 + 200) == 10) {
    iVar2 = fn_00192114();
    *(int *)(iVar2 + 200) = iVar1;
    iVar1 = fn_00192114();
    *(int *)(iVar1 + 0xcc) = iVar3;
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[10];
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
LAB_0019d808:
                    /* WARNING: Could not recover jumptable at 0x0019d814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_1[2]);
  return;
}



void fn_0019d680(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 == 0) {
    return;
  }
  if (DAT_0089a508 == '\0') {
    return;
  }
  iVar1 = fn_00124ffc();
  fn_0014e774(*(undefined4 *)(iVar1 + 4),param_1);
  piVar2 = (int *)fn_00124ffc();
                    /* WARNING: Could not recover jumptable at 0x00143b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 4))(piVar2,param_1);
  return;
}



void fn_0019d650(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x8c);
  (**(code **)(**(int **)(iVar3 + 0x4c) + 0x10))();
  fn_0014c5e4(iVar3);
  if (iVar3 == 0) {
    return;
  }
  if (DAT_0089a508 == '\0') {
    return;
  }
  iVar1 = fn_00124ffc(DAT_0089a508,0xb4);
  fn_0014e774(*(undefined4 *)(iVar1 + 4),iVar3);
  piVar2 = (int *)fn_00124ffc();
                    /* WARNING: Could not recover jumptable at 0x00143b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 4))(piVar2,iVar3);
  return;
}


