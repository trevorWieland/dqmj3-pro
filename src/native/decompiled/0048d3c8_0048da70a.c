#include "0048d3c8_0048da70a.h"



void fn_0048d5c0(void)

{
  fn_0048d5d0();
  fn_00455018();
  return;
}



void fn_0048d5d0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 local_20;
  int local_1c;
  undefined1 auStack_18 [8];
  
  *param_1 = &DAT_00853ba8;
  if (param_1[5] != 0) {
    fn_00487308();
    fn_00455018();
  }
  iVar1 = param_1[6];
  if (iVar1 != 0) {
    piVar4 = (int *)(iVar1 + 4);
    iVar2 = *(int *)(iVar1 + 0x14);
    if (iVar2 != 0) {
      local_20 = *(undefined4 *)(iVar2 + 8);
      local_1c = iVar2;
      fn_00778f4c(auStack_18,piVar4,&local_20,&local_1c);
      iVar2 = *(int *)(iVar1 + 0x14);
      *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 8);
      *(int *)(iVar1 + 8) = iVar2;
      piVar3 = (int *)*piVar4;
      while (piVar3 != (int *)0x0) {
        *piVar4 = *piVar3;
        fn_0014f1bc(piVar3[2]);
        fn_0014f1bc(piVar3);
        piVar3 = (int *)*piVar4;
      }
    }
    fn_00455018(iVar1);
  }
  if ((int *)param_1[4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[4] + 4))();
  }
  fn_0046dd70();
  fn_0046b3fc(param_1);
  return;
}



undefined4
fn_0048d4b4(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  uVar4 = 0;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  iVar2 = fn_00455e10(param_2);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    return 0;
  }
  iVar2 = fn_0015ecdc(0x1b0);
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = fn_004916dc(iVar2,*(undefined4 *)(param_2 + 0x44),uVar5,param_3,param_4,param_5,
                         param_1 + 0x1c,param_6,param_7,param_8);
  }
  iVar2 = fn_001249d0();
  if (iVar2 != 0) {
    uVar4 = *(undefined4 *)(iVar2 + 0xc);
  }
  fn_004bdba4(uVar4,uVar5,0);
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return 1;
}



int fn_0048d3c8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  int local_1c;
  undefined1 auStack_18 [8];
  
  iVar4 = param_1 + 8;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  if (iVar4 != param_2 + 8) {
    local_1c = *(int *)(param_1 + 0x18);
    local_20 = *(undefined4 *)(local_1c + 8);
    fn_0076a024(auStack_18,iVar4,&local_20,&local_1c);
    iVar4 = fn_0076a798(iVar4,*(undefined4 *)(*(int *)(param_2 + 0x18) + 4),
                         *(undefined4 *)(param_1 + 0x18));
    *(int *)(*(int *)(param_1 + 0x18) + 4) = iVar4;
    iVar3 = *(int *)(param_1 + 0x18);
    if (iVar4 == 0) {
      *(int *)(iVar3 + 8) = iVar3;
      *(int *)(*(int *)(param_1 + 0x18) + 0xc) = *(int *)(param_1 + 0x18);
    }
    else {
      iVar2 = *(int *)(iVar4 + 8);
      while (iVar1 = iVar2, iVar1 != 0) {
        iVar4 = iVar1;
        iVar2 = *(int *)(iVar1 + 8);
      }
      *(int *)(iVar3 + 8) = iVar4;
      iVar4 = *(int *)(*(int *)(param_1 + 0x18) + 4);
      for (iVar3 = *(int *)(iVar4 + 0xc); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
        iVar4 = iVar3;
      }
      *(int *)(*(int *)(param_1 + 0x18) + 0xc) = iVar4;
    }
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  }
  return param_1;
}


