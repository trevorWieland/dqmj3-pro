#include "0040790c_00408d04.h"



void fn_00408594(int param_1)

{
  if (*(int **)(param_1 + 0x90) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x90) + 0x18))();
    if (*(int **)(param_1 + 0x90) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x90) + 4))();
      *(undefined4 *)(param_1 + 0x90) = 0;
    }
  }
  fn_0033bc28(*(undefined4 *)(param_1 + 0x88));
  if (*(int **)(param_1 + 0x88) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x88) + 4))();
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  fn_002d8084(*(undefined4 *)(param_1 + 0x84));
  if (*(int **)(param_1 + 0x84) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x84) + 4))();
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  fn_00315f08(*(undefined4 *)(param_1 + 0x80));
  if (*(int **)(param_1 + 0x80) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x80) + 4))();
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  fn_0038efe4(*(undefined4 *)(param_1 + 0x7c));
  if (*(int **)(param_1 + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7c) + 4))();
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  if (*(int **)(param_1 + 0x8c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x8c) + 0x18))();
    if (*(int **)(param_1 + 0x8c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x8c) + 4))();
      *(undefined4 *)(param_1 + 0x8c) = 0;
    }
  }
  if (*(int *)(param_1 + 0x78) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 0x70));
    *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x74) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 0x70));
  }
  return;
}



void fn_00408570(int param_1,int param_2)

{
  fn_00689828(param_1,param_2 == 0);
  *(char *)(param_1 + 0x98) = (char)param_2;
  return;
}



void fn_00408534(int param_1)

{
  uint uVar1;
  
  uVar1 = fn_006f6a5c();
  if ((uVar1 & 0x100000) == 0) {
    if ((uVar1 & 0x200000) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 100) + 0x18) = 2;
      return;
    }
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 100) + 0x18) = 1;
  }
  return;
}



void fn_004082f4(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  
  iVar4 = *(int *)(param_1 + 0xb4);
  iVar1 = fn_006ba4ec(*(undefined4 *)(param_1 + 0x7c));
  if (iVar1 < 2) {
    iVar1 = fn_006ba4ec();
  }
  else {
    iVar1 = 0;
  }
  fn_00231210(&local_30,*(undefined4 *)(*(int *)(iVar4 + 4) + iVar1 * 4),0);
  fn_0015b0dc(local_30);
  if (local_30 != &DAT_008f9cf4) {
    piVar2 = local_30 + -3;
    iVar1 = *piVar2;
    if ((iVar1 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_30 + -3,local_30[-2] + 8,0);
    }
  }
  fn_006c1574(*(undefined4 *)(param_1 + 0x88));
  fn_00660d60();
  fn_00231d50();
  fn_0015b0dc();
  uVar3 = fn_0022f584((char *)&DAT_00408478,0);
  local_2c = 1;
  uStack_28 = 0;
  local_20 = 1;
  local_24 = 0;
  local_30 = (undefined4 *)0x1;
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar3,1,0);
  fn_00689bd0(param_1,0x48,0);
  fn_00406380(param_1,param_2);
  (**(code **)(**(int **)(param_1 + 0x88) + 8))();
  iVar1 = fn_006c14b4(*(undefined4 *)(param_1 + 0x88));
  if (iVar1 == 0) {
    fn_0033b3ec(*(undefined4 *)(param_1 + 0x88));
    uVar3 = fn_006ba4ec(*(undefined4 *)(param_1 + 0x84));
    fn_00408d04(param_1,uVar3,1);
    return;
  }
  return;
}



void fn_00408d04(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  fn_0031e0f4(*(undefined4 *)(param_1 + 0x7c),0);
  *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_1 + 0xa4);
  *(undefined1 *)(param_1 + 0xa6) = 4;
  uVar4 = *(undefined4 *)(param_1 + 0x7c);
  iVar1 = fn_006ba4ec(uVar4);
  uVar3 = 0;
  if (iVar1 < 2) {
    uVar2 = fn_006ba4ec(uVar4);
    if (1 < uVar2) goto LAB_00408d68;
  }
  else {
    uVar2 = 0;
  }
  uVar3 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xb4) + 4) + uVar2 * 4);
LAB_00408d68:
  fn_002d7ed8(*(undefined4 *)(param_1 + 0x84),uVar3,param_2);
  fn_002a3bb0(*(undefined4 *)(param_1 + 0x8c),0);
  if (param_3 == 0) {
    return;
  }
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_004082a4(int param_1,undefined4 param_2)

{
  int iVar1;
  
  fn_0040678c(param_1,param_2,1);
  fn_0031e0f4(*(undefined4 *)(param_1 + 0x7c),1);
  (**(code **)(**(int **)(param_1 + 0x7c) + 8))();
  iVar1 = fn_006b5dc8(*(undefined4 *)(param_1 + 0xb4));
  if (iVar1 == 0) {
    return;
  }
  fn_0031de9c(*(undefined4 *)(param_1 + 0x7c),0);
  return;
}



void fn_004081f0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0022f584((char *)&DAT_00408278,0);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar1,1,0,1,1,0,0,1);
  fn_00689bd0(param_1,0x48,0);
  fn_00689828(param_1,0);
  *(undefined1 *)(param_1 + 0x98) = 5;
  fn_0068ab44(param_1,0x100094b);
  return;
}



undefined4 fn_00408118(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  
  iVar1 = fn_006b51c0(*(undefined4 *)(DAT_00897804 + 0x1c));
  bVar3 = iVar1 == param_2;
  iVar1 = fn_006b8600(*(undefined4 *)(DAT_00897804 + 0xc));
  bVar4 = iVar1 == param_2;
  if ((bool)(bVar3 & ~bVar4)) {
    uVar2 = 1;
  }
  else if ((bool)(bVar4 & ~bVar3)) {
    uVar2 = 2;
  }
  else {
    uVar2 = 0;
    if (bVar4 && bVar3) {
      uVar2 = 3;
    }
  }
  return uVar2;
}



void fn_00407de0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 == 1) {
    uVar1 = fn_0022f584((char *)&DAT_00407ebc,0);
  }
  else if (param_2 == 2) {
    uVar1 = fn_0022f584((char *)&DAT_00407ee8,0);
  }
  else if (param_2 == 3) {
    uVar1 = fn_0022f584((char *)&DAT_00407f14,0);
  }
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar1,1,1,1,1,0,0,1);
  fn_00689bd0(param_1,0x48,0);
  fn_00689828(param_1,0);
  *(undefined1 *)(param_1 + 0x98) = 4;
  fn_0068ab44(param_1,0x100094b);
  return;
}



undefined4 fn_00407c7c(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 0x7c);
  iVar1 = fn_006ba4ec(uVar3);
  if (iVar1 < 2) {
    uVar2 = fn_006ba4ec(uVar3);
    if (1 < uVar2) {
      return 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xb4) + 4) + uVar2 * 4);
}



void fn_0040796c(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 != 0) {
    fn_002575e0(param_1[0x2e],param_1[0x2d]);
  }
  iVar1 = fn_006ba6b0(param_1[0x20],1);
  if (iVar1 != 0) {
    uVar2 = fn_006be54c();
                    /* WARNING: Could not recover jumptable at 0x004079b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x118))(param_1,uVar2);
    return;
  }
  iVar1 = fn_006ba680(param_1[0x20],1);
  if (iVar1 == 0) {
    iVar1 = fn_006ba55c(param_1[0x20],1);
    if ((iVar1 == 0) && (iVar1 = fn_006ba52c(param_1[0x20],1), iVar1 == 0)) {
      return;
    }
    iVar1 = fn_006ba4ec(param_1[0x1f]);
    if (iVar1 < 2) {
      uVar2 = fn_006ba4ec();
    }
    else {
      uVar2 = 0;
    }
    uVar3 = fn_006be54c(param_1[0x20]);
    fn_002573b0(param_1[0x2d],uVar2,uVar3);
    fn_002560d0(param_1[0x2d]);
    (**(code **)(*(int *)param_1[0x1f] + 8))();
    iVar1 = fn_006be54c(param_1[0x20]);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
    }
                    /* WARNING: Could not recover jumptable at 0x00407b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10c))(param_1,uVar2,0x2d);
    return;
  }
  if ((char)param_1[0x2c] == '\x05') {
    fn_0040678c(param_1,0);
    fn_0033bc38(param_1[0x22],param_1[0x2d],0);
    *(char *)(param_1 + 0x2c) = (char)param_1[0x29];
    *(undefined1 *)((int)param_1 + 0xa6) = 5;
    fn_002a3bb0(param_1[0x23],3);
    return;
  }
  if ((char)param_1[0x2c] == '\x06') {
    fn_0040678c(param_1,0);
    fn_0033bf68(param_1[0x22],param_1[0x2d],0);
    *(char *)(param_1 + 0x2c) = (char)param_1[0x29];
    *(undefined1 *)((int)param_1 + 0xa6) = 6;
    fn_002a3bb0(param_1[0x23],3);
    return;
  }
  fn_0040678c(param_1,0,1);
  fn_0031e0f4(param_1[0x1f],1);
                    /* WARNING: Could not recover jumptable at 0x00407a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)param_1[0x1f] + 8))();
  return;
}



void fn_0040790c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1[0x2d];
  iVar1 = fn_006ba4ec(param_1[0x1f]);
  if (iVar1 < 2) {
    iVar1 = fn_006ba4ec();
  }
  else {
    iVar1 = 0;
  }
  uVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),
                       *(undefined4 *)(*(int *)(iVar3 + 4) + iVar1 * 4));
                    /* WARNING: Could not recover jumptable at 0x00407964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10c))(param_1,uVar2,0x2d);
  return;
}


