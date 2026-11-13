#include "00487308_00487620.h"



bool fn_00487620(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined *puVar7;
  int *piVar8;
  undefined1 auStack_28 [4];
  undefined *local_24;
  undefined1 auStack_20 [4];
  undefined *local_1c;
  
  iVar3 = fn_001249d0();
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + 0xc);
  }
  piVar5 = (int *)(iVar4 + 0x50);
  (**(code **)(*piVar5 + 8))();
  iVar3 = fn_0045f4ec(param_1 + 0x50,param_2);
  if (iVar3 != 0) {
    iVar3 = *(int *)(iVar3 + 0x78);
    (**(code **)(*piVar5 + 0xc))(piVar5);
    return iVar3 == -1;
  }
  iVar3 = fn_0045f4ec(param_1 + 0x34,param_2);
  if (iVar3 != 0) {
LAB_0048777c:
    (**(code **)(*piVar5 + 0xc))(piVar5);
    return false;
  }
  for (piVar8 = (int *)**(int **)(param_1 + 0x2c); piVar8 != (int *)*(int *)(param_1 + 0x2c);
      piVar8 = (int *)*piVar8) {
    fn_006d0734(auStack_28,piVar8 + 2);
    fn_006d0734(auStack_20,param_2);
    if (local_24 == local_1c) {
LAB_00487728:
      iVar3 = fn_006d0810(piVar8 + 2,L"RVCID",0);
      iVar4 = fn_006d0810(param_2,L"RVCID",0);
      if (iVar3 != iVar4) goto LAB_00487758;
      bVar2 = true;
    }
    else {
      if (local_24 == (undefined *)0x0) {
        puVar7 = local_1c;
        puVar1 = &DAT_007db524;
LAB_0048771c:
        iVar3 = fn_004b626c(puVar1,puVar7);
        if (iVar3 != 0) goto LAB_00487728;
      }
      else {
        if (local_1c == (undefined *)0x0) {
          puVar7 = &DAT_007db524;
          puVar1 = local_24;
          goto LAB_0048771c;
        }
        iVar3 = fn_00101d80();
        if (iVar3 == 0) goto LAB_00487728;
      }
LAB_00487758:
      bVar2 = false;
    }
    fn_00170f54(auStack_20);
    fn_00170f54(auStack_28);
    if (bVar2) goto LAB_0048777c;
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x104) + 8);
  do {
    if (iVar3 == *(int *)(param_1 + 0x104)) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
      return true;
    }
    fn_006d0734(auStack_28,iVar3 + 0x20);
    fn_006d0734(auStack_20,param_2);
    if (local_24 == local_1c) {
LAB_00487824:
      iVar4 = fn_006d0810(iVar3 + 0x20,L"RVCID",0);
      iVar6 = fn_006d0810(param_2,L"RVCID",0);
      if (iVar4 != iVar6) goto LAB_00487854;
      bVar2 = true;
    }
    else {
      if (local_24 == (undefined *)0x0) {
        puVar7 = local_1c;
        puVar1 = &DAT_007db524;
LAB_00487818:
        iVar4 = fn_004b626c(puVar1,puVar7);
        if (iVar4 != 0) goto LAB_00487824;
      }
      else {
        if (local_1c == (undefined *)0x0) {
          puVar7 = &DAT_007db524;
          puVar1 = local_24;
          goto LAB_00487818;
        }
        iVar4 = fn_00101d80();
        if (iVar4 == 0) goto LAB_00487824;
      }
LAB_00487854:
      bVar2 = false;
    }
    fn_00170f54(auStack_20);
    fn_00170f54(auStack_28);
    if (bVar2) {
      (**(code **)(*piVar5 + 0xc))(piVar5);
      return false;
    }
    iVar4 = *(int *)(iVar3 + 0xc);
    if (*(int *)(iVar3 + 0xc) == 0) {
      iVar4 = *(int *)(iVar3 + 4);
      if (iVar3 == *(int *)(iVar4 + 0xc)) {
        do {
          iVar3 = iVar4;
          iVar4 = *(int *)(iVar3 + 4);
        } while (iVar3 == *(int *)(iVar4 + 0xc));
      }
      if (*(int *)(iVar3 + 0xc) != iVar4) {
        iVar3 = iVar4;
      }
    }
    else {
      do {
        iVar3 = iVar4;
        iVar4 = *(int *)(iVar3 + 8);
      } while (*(int *)(iVar3 + 8) != 0);
    }
  } while( true );
}



undefined4 fn_00487560(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  iVar2 = fn_0045f4ec(param_1 + 0x50,param_2);
  if (iVar2 != 0) {
    if (*(char *)(param_2 + 0x65) == '\0') {
      fn_00455590(param_2);
    }
    uVar4 = *(undefined4 *)(param_2 + 0x60);
    if (*(char *)(iVar2 + 0x69) == '\0') {
      fn_00455590(iVar2 + 4);
    }
    iVar1 = fn_00101d80(*(undefined4 *)(iVar2 + 100),uVar4);
    if (iVar1 != 0) {
      fn_0014e7cc(param_3,iVar2 + 4);
      (**(code **)(*piVar3 + 0xc))(piVar3);
      return 1;
    }
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return 0;
}



undefined4 fn_004874d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *local_84 [22];
  undefined4 local_2c;
  undefined1 local_1c;
  
  local_84[0] = &DAT_0085748c;
  local_1c = 0;
  fn_00160094(local_84);
  fn_00487428(param_1,param_2,param_3,param_4,local_84);
  return local_2c;
}



undefined4 fn_0048739c(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined *local_8c [22];
  undefined1 auStack_34 [16];
  undefined1 local_24;
  int local_20;
  undefined4 local_1c [2];
  
  local_8c[0] = &DAT_0085748c;
  local_24 = 0;
  fn_00160094(local_8c);
  local_20 = *(int *)(param_2 + 0xc) + *(int *)(param_2 + 0x18);
  local_1c[0] = *(undefined4 *)(param_2 + 0x10);
  fn_00487428(param_1,&local_20,local_1c,1,local_8c);
  fn_0015ef58(param_3,auStack_34,0x10,0xffffffff);
  return 1;
}



undefined4
fn_0048732c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  undefined *local_84 [22];
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c;
  
  local_84[0] = &DAT_0085748c;
  local_1c = 0;
  fn_00160094(local_84);
  fn_00487428(param_1,param_2,param_3,param_4,local_84);
  *param_5 = local_2c;
  param_5[1] = uStack_28;
  param_5[2] = uStack_24;
  param_5[3] = uStack_20;
  param_5[4] = 0x10;
  return 1;
}



void fn_00487428(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar2 = 0;
  iVar3 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  iVar1 = param_3;
  if (0 < param_4) {
    do {
      bVar4 = *(int *)(param_2 + iVar2 * 4) != 0;
      if (bVar4) {
        iVar1 = *(int *)(param_3 + iVar2 * 4);
      }
      if ((bVar4 && iVar1 != 0) && (*(char *)(param_5 + 0x68) == '\0')) {
        fn_001600c4(param_5);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_4);
  }
  if (iVar3 != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == *(int *)(param_1 + 0x1c)) {
      iVar1 = 0;
    }
    if (*(char *)(param_5 + 0x68) == '\0') {
      fn_001600c4(param_5,iVar1,iVar3);
    }
  }
  if (*(char *)(param_5 + 0x68) == '\0') {
    fn_00160190(param_5,param_5 + 0x58);
    *(undefined1 *)(param_5 + 0x68) = 1;
  }
  return;
}



int fn_00487308(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0014f2b0(param_1 + 0x2e4);
  iVar1 = fn_0045af48(iVar1 + -0xb0);
  iVar1 = fn_00468958(iVar1 + -0x230);
  return iVar1 + -4;
}


