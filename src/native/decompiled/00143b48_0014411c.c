#include "00143b48_0014411c.h"



undefined4 fn_0014411c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_14 = *(undefined4 *)(*(int *)(param_1 + 4) + 4);
  uStack_10 = param_2;
  fn_00173d14(uStack_14);
  fn_00158128(uStack_14,param_2,0xffffffff);
  iVar1 = fn_00157df4(uStack_14,0xfffffffe);
  if (iVar1 < 0) {
    uVar2 = fn_00157ff4(uStack_14);
    fn_00173cb8(uStack_14,uVar2);
    return 0;
  }
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  iVar1 = fn_00158268(uStack_14,&LAB_00152888,&uStack_20);
  uVar2 = uStack_1c;
  if (iVar1 < 0) {
    uVar2 = fn_00157ff4(uStack_14);
    fn_00173cb8(uStack_14,uVar2);
    return 0xffffffff;
  }
  uVar3 = fn_00157ff4(uStack_14);
  fn_00173cb8(uStack_14,uVar3);
  return uVar2;
}



undefined4 fn_00144064(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  local_24 = param_1;
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  fn_00173d14(param_1);
  fn_00158128(local_24,param_2,0xffffffff);
  iVar1 = fn_00157df4(local_24,0xfffffffe);
  if (-1 < iVar1) {
    local_28 = 0;
    local_30 = param_3;
    local_2c = param_4;
    iVar1 = fn_00158268(local_24,fn_0015289c,&local_30);
    if (-1 < iVar1) {
      uVar2 = fn_00157ff4(local_24);
      fn_00173cb8(local_24,uVar2);
      return 1;
    }
  }
  uVar2 = fn_00157ff4(local_24);
  fn_00173cb8(local_24,uVar2);
  return 0;
}



undefined4 fn_00144058(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_24 = *(undefined4 *)(*(int *)(param_1 + 4) + 4);
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  fn_00173d14(uStack_24);
  fn_00158128(uStack_24,param_2,0xffffffff);
  iVar1 = fn_00157df4(uStack_24,0xfffffffe);
  if (-1 < iVar1) {
    uStack_28 = 0;
    uStack_30 = param_3;
    uStack_2c = param_4;
    iVar1 = fn_00158268(uStack_24,fn_0015289c,&uStack_30);
    if (-1 < iVar1) {
      uVar2 = fn_00157ff4(uStack_24);
      fn_00173cb8(uStack_24,uVar2);
      return 1;
    }
  }
  uVar2 = fn_00157ff4(uStack_24);
  fn_00173cb8(uStack_24,uVar2);
  return 0;
}



undefined4 fn_00143f98(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_00173d14(param_2);
  fn_00158128(param_2,param_3,0xffffffff);
  iVar1 = fn_00157df4(param_2,0xfffffffe);
  if (-1 < iVar1) {
    fn_001580cc(param_2,param_4);
    iVar1 = fn_00157df4(param_2,0xfffffffe);
    if ((-1 < iVar1) && (iVar1 = fn_00157fb0(param_2,0xffffffff,param_1), -1 < iVar1)) {
      uVar2 = fn_00157ff4(param_2);
      fn_00173cb8(param_2,uVar2);
      return 1;
    }
  }
  uVar2 = fn_00157ff4(param_2);
  fn_00173cb8(param_2,uVar2);
  return 0;
}



undefined4 fn_00143ed8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_00173d14(param_2);
  fn_00158128(param_2,param_3,0xffffffff);
  iVar1 = fn_00157df4(param_2,0xfffffffe);
  if (-1 < iVar1) {
    fn_001580cc(param_2,param_4);
    iVar1 = fn_00157df4(param_2,0xfffffffe);
    if ((-1 < iVar1) && (iVar1 = fn_00157f58(param_2,0xffffffff,param_1), -1 < iVar1)) {
      uVar2 = fn_00157ff4(param_2);
      fn_00173cb8(param_2,uVar2);
      return 1;
    }
  }
  uVar2 = fn_00157ff4(param_2);
  fn_00173cb8(param_2,uVar2);
  return 0;
}



undefined4 fn_00143e3c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_00173d14(param_2);
  fn_00158128(param_2,param_3,0xffffffff);
  iVar1 = fn_00157df4(param_2,0xfffffffe);
  if (-1 < iVar1) {
    iVar1 = fn_00166e14(param_2,0xffffffff);
    *param_1 = iVar1;
    if (-1 < iVar1) {
      uVar2 = fn_00157ff4(param_2);
      fn_00173cb8(param_2,uVar2);
      return 1;
    }
  }
  uVar2 = fn_00157ff4(param_2);
  fn_00173cb8(param_2,uVar2);
  return 0;
}



bool fn_00143e20(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0015427c(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  return iVar1 != 0;
}



bool fn_00143e04(int param_1)

{
  int iVar1;
  
  iVar1 = fn_001541ec(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  return iVar1 != 0;
}



bool fn_00143de8(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00154184(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  return iVar1 != 0;
}



void fn_00143b98(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = iVar3;
  do {
    if (iVar1 == 0) {
LAB_00143bdc:
      iVar1 = *(int *)(param_1 + 0xc);
LAB_00143be0:
      if (iVar1 != 0) {
        iVar3 = *(int *)(iVar1 + 4);
        if (*(int *)(iVar1 + 0x10) + *(int *)(iVar1 + 0x14) == param_2) {
          param_3 = *(int *)(iVar1 + 0x14) + param_3;
          *(int *)(iVar1 + 0x14) = param_3;
          if (iVar3 == 0) {
            return;
          }
          if (*(int *)(iVar1 + 0x10) + param_3 != *(int *)(iVar3 + 0x10)) {
            return;
          }
          *(int *)(iVar1 + 0x14) = param_3 + *(int *)(iVar3 + 0x14);
          if (*(int *)(iVar3 + 4) != 0) {
            *(undefined4 *)(*(int *)(iVar3 + 4) + 8) = *(undefined4 *)(iVar3 + 8);
          }
          if (*(int *)(iVar3 + 8) != 0) {
            *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = *(undefined4 *)(iVar3 + 4);
          }
          if (*(int *)(param_1 + 8) == iVar3) {
            *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar3 + 4);
          }
          if (*(int *)(param_1 + 0xc) == iVar3) {
            *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar3 + 8);
          }
          *(undefined4 *)(iVar3 + 8) = 0;
          *(undefined4 *)(iVar3 + 4) = 0;
          fn_00143d68(param_1,iVar3);
          return;
        }
      }
      if ((iVar3 != 0) && (param_2 + param_3 == *(int *)(iVar3 + 0x10))) {
        *(uint *)(iVar3 + 0x10) = param_2;
        *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + param_3;
        return;
      }
      iVar2 = fn_00153ff0(param_1);
      *(uint *)(iVar2 + 0x10) = param_2;
      *(int *)(iVar2 + 0x14) = param_3;
      if (iVar1 != 0) {
        *(int *)(iVar2 + 8) = iVar1;
        *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
        *(int *)(iVar1 + 4) = iVar2;
        if (*(int *)(iVar2 + 4) != 0) {
          *(int *)(*(int *)(iVar2 + 4) + 8) = iVar2;
        }
        if (*(int *)(param_1 + 0xc) == iVar1) {
          *(int *)(param_1 + 0xc) = iVar2;
        }
        return;
      }
      if (iVar3 == 0) {
        if (*(int *)(param_1 + 0xc) == 0) {
          *(int *)(param_1 + 0xc) = iVar2;
          *(int *)(param_1 + 8) = iVar2;
          *(undefined4 *)(iVar2 + 4) = 0;
          *(undefined4 *)(iVar2 + 8) = 0;
          return;
        }
        *(int *)(*(int *)(param_1 + 0xc) + 4) = iVar2;
        *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 0xc);
        *(int *)(param_1 + 0xc) = iVar2;
        *(undefined4 *)(iVar2 + 4) = 0;
        return;
      }
      *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar3 + 8);
      *(int *)(iVar2 + 4) = iVar3;
      *(int *)(iVar3 + 8) = iVar2;
      if (*(int *)(iVar2 + 8) != 0) {
        *(int *)(*(int *)(iVar2 + 8) + 4) = iVar2;
      }
      if (*(int *)(param_1 + 8) == iVar3) {
        *(int *)(param_1 + 8) = iVar2;
      }
      return;
    }
    if (param_2 < *(uint *)(iVar1 + 0x10)) {
      if (iVar1 != 0) {
        iVar1 = *(int *)(iVar1 + 8);
        goto LAB_00143be0;
      }
      goto LAB_00143bdc;
    }
    iVar1 = *(int *)(iVar1 + 4);
  } while( true );
}



void fn_00143d68(int param_1,int *param_2)

{
  param_2[4] = -1;
  if ((*(byte *)(param_1 + 0x23) & 0xf0) == 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      *(int **)(param_1 + 0x14) = param_2;
      *(int **)(param_1 + 0x10) = param_2;
      param_2[1] = 0;
      param_2[2] = 0;
      return;
    }
    *(int **)(*(int *)(param_1 + 0x14) + 4) = param_2;
    param_2[2] = *(int *)(param_1 + 0x14);
    *(int **)(param_1 + 0x14) = param_2;
    param_2[1] = 0;
  }
  else {
    if ((*(byte *)(param_1 + 0x23) & 0xf) != 0) {
      fn_00143b98(param_1,param_2,0x44);
      return;
    }
    if (param_2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00143de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 4))(param_2);
      return;
    }
  }
  return;
}



void fn_00143b48(int param_1)

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


