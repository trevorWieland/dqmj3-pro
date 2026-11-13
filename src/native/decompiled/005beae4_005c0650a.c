#include "005beae4_005c0650a.h"



void fn_005bfefc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x9c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005bff2c(iVar1,param_1);
  return;
}



void fn_005bfbb4(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  (**(code **)(**(int **)(param_1 + 0x14) + 0x48))();
  piVar1 = (int *)fn_006b0d10(*(undefined4 *)(param_1 + 0x14),0);
  if ((((piVar1 == (int *)0x0) || (iVar2 = (**(code **)(*piVar1 + 0x48))(piVar1), iVar2 != 0)) &&
      ((**(code **)(**(int **)(param_1 + 0x14) + 0x4c))(), piVar1 == (int *)0x0)) ||
     (iVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x48))(), iVar2 != 0)) {
    iVar2 = *(int *)(param_1 + 0x58) + 1;
    *(int *)(param_1 + 0x58) = iVar2;
    if (iVar2 != 1) {
      fn_001da084(*(undefined4 *)(param_1 + 0x14));
      return;
    }
    if (piVar1 != (int *)0x0) {
      fn_00683320(piVar1,0x16,0);
    }
    fn_00217988(*(undefined4 *)(param_1 + 0x14));
    *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 1;
    fn_00215d9c(*(undefined4 *)(param_1 + 0x14),0xf,1,1);
    if (*(int *)(param_1 + 0x5c) == 0) {
      uVar3 = fn_0023ddec(*(undefined4 *)(DAT_008977e0 + 0x2c),0x7d0a);
      *(undefined4 *)(param_1 + 0x60) = uVar3;
      (**(code **)(**(int **)(param_1 + 0x14) + 0xe4))(*(int **)(param_1 + 0x14),0x10009df,0);
    }
    else {
      uVar3 = fn_0023ddec(*(undefined4 *)(DAT_008977e0 + 0x2c),0x7d0d);
      *(undefined4 *)(param_1 + 0x60) = uVar3;
      piVar1 = (int *)fn_002fdd54(param_1,*(undefined4 *)(param_1 + 0x5c),
                                   *(int *)(param_1 + 0x14) + 0x20,0);
      (**(code **)(*piVar1 + 0xd8))(piVar1);
      fn_00215aec(piVar1,0xf);
    }
    *(undefined4 *)(param_1 + 0xc) = 6;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}



void fn_005bfb34(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 4) {
    fn_005bfd68(param_1);
    return;
  }
  if (iVar1 != 5) {
    if ((iVar1 == 6) && (piVar2 = *(int **)(param_1 + 0x14), piVar2[0x3e] < 0x3f000001)) {
      (**(code **)(*piVar2 + 0x1c4))(piVar2,1);
      (**(code **)(**(int **)(param_1 + 0x14) + 0x54))(*(int **)(param_1 + 0x14),0);
      *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 0;
    }
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x14) + 0x48))();
  piVar2 = (int *)fn_006b0d10(*(undefined4 *)(param_1 + 0x14),0);
  if ((((piVar2 == (int *)0x0) || (iVar1 = (**(code **)(*piVar2 + 0x48))(piVar2), iVar1 != 0)) &&
      ((**(code **)(**(int **)(param_1 + 0x14) + 0x4c))(), piVar2 == (int *)0x0)) ||
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x48))(), iVar1 != 0)) {
    iVar1 = *(int *)(param_1 + 0x58) + 1;
    *(int *)(param_1 + 0x58) = iVar1;
    if (iVar1 != 1) {
      fn_001da084(*(undefined4 *)(param_1 + 0x14));
      return;
    }
    if (piVar2 != (int *)0x0) {
      fn_00683320(piVar2,0x16,0);
    }
    fn_00217988(*(undefined4 *)(param_1 + 0x14));
    *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 1;
    fn_00215d9c(*(undefined4 *)(param_1 + 0x14),0xf,1,1);
    if (*(int *)(param_1 + 0x5c) == 0) {
      uVar3 = fn_0023ddec(*(undefined4 *)(DAT_008977e0 + 0x2c),0x7d0a);
      *(undefined4 *)(param_1 + 0x60) = uVar3;
      (**(code **)(**(int **)(param_1 + 0x14) + 0xe4))(*(int **)(param_1 + 0x14),0x10009df,0);
    }
    else {
      uVar3 = fn_0023ddec(*(undefined4 *)(DAT_008977e0 + 0x2c),0x7d0d);
      *(undefined4 *)(param_1 + 0x60) = uVar3;
      piVar2 = (int *)fn_002fdd54(param_1,*(undefined4 *)(param_1 + 0x5c),
                                   *(int *)(param_1 + 0x14) + 0x20,0);
      (**(code **)(*piVar2 + 0xd8))(piVar2);
      fn_00215aec(piVar2,0xf);
    }
    *(undefined4 *)(param_1 + 0xc) = 6;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}



undefined4 fn_005bfacc(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x10) = 0;
  fn_00214c4c(*(undefined4 *)(param_1 + 0x14),6,1);
  (**(code **)(**(int **)(param_1 + 0x14) + 0xe4))(*(int **)(param_1 + 0x14),0x1000981,0);
  (**(code **)(**(int **)(param_1 + 0x14) + 0x188))(*(int **)(param_1 + 0x14),1);
  return 1;
}



void fn_005bfa6c(int param_1)

{
  if (*(int *)(param_1 + 0x60) != -1) {
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
    *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  }
  fn_00215e38(*(undefined4 *)(param_1 + 0x14),6,1);
                    /* WARNING: Could not recover jumptable at 0x005bfac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x14) + 0x188))(*(int **)(param_1 + 0x14),0);
  return;
}



/* WARNING: Removing unreachable block (ram,0x005beb58) */

void fn_005beae4(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined2 local_30 [4];
  undefined4 local_28;
  
  local_28 = param_1;
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xff);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00892d98) goto LAB_005beb30;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005beb30:
  iVar7 = 0;
  do {
    local_30[0] = 0;
    local_38 = &DAT_008f9cf4;
    fn_00177c88(&local_38,0,DAT_008f9cf0,local_30,0,0,0);
    local_34 = 0;
    local_33 = 0;
    local_32 = 0;
    local_31 = 0;
    uVar3 = fn_006e65a0(*(undefined4 *)(DAT_00897840 + 0x2c),(int)(char)iVar7);
    iVar4 = fn_002043cc(DAT_00897840,uVar3);
    uVar8 = *(undefined4 *)(iVar4 + 0xc);
    iVar5 = fn_00100b58(uVar8);
    if (iVar5 == 0) {
      piVar6 = local_38 + -3;
      iVar5 = *piVar6;
      if (iVar5 == 0) {
        local_38[-1] = 0;
        *(undefined2 *)local_38 = 0;
      }
      else {
        if ((local_38 != &DAT_008f9cf4) &&
           ((iVar5 == -1 || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar5 + -1, iVar5 == 0)))))) {
          fn_001008c4(local_38 + -3,local_38[-2] + 8,0);
        }
        local_38 = &DAT_008f9cf4;
      }
    }
    else {
      fn_00177c88(&local_38,0,local_38[-1],uVar8,iVar5,0,iVar5);
    }
    local_34 = *(undefined1 *)(iVar4 + 0x798);
    local_33 = **(undefined1 **)(DAT_00897840 + 0x2c);
    local_32 = fn_006e67bc(*(undefined4 *)(DAT_00897840 + 0x2c),uVar3);
    fn_005d8b84(puVar1,&local_38);
    if (local_38 != &DAT_008f9cf4) {
      piVar6 = local_38 + -3;
      iVar4 = *piVar6;
      if ((iVar4 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar4 + -1, iVar4 == 0)))) {
        fn_001008c4(local_38 + -3,local_38[-2] + 8,0);
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  *(undefined1 *)(puVar1 + 5) = 1;
  fn_005d8fc4(puVar1);
  fn_0069e82c(local_28,0x1000194);
  fn_00689930(local_28,0xff,0);
  return;
}


