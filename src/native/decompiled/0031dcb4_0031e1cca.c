#include "0031dcb4_0031e1cca.h"



void fn_0031dfc8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float in_s0;
  float in_s1;
  float in_s2;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  (**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(*(int **)(param_1 + 0xc),0,param_2);
  iVar1 = 0;
  do {
    fn_0031e04c(*(undefined4 *)(param_1 + 0x1c),iVar1,0);
    iVar2 = iVar1;
    while( true ) {
      iVar1 = iVar2 + 1;
      if (6 < iVar1) {
        iVar1 = *(int *)(param_1 + 0x1c);
        iVar2 = iVar1 + param_2 * 4;
        fn_002b209c(*(undefined4 *)(iVar2 + 0x14),1);
        fn_0025e31c(*(undefined4 *)(iVar1 + 0x30),1);
        fn_0037d284(*(undefined4 *)(iVar2 + 0x14));
        fn_00688ff8();
        fStack_20 = in_s0;
        fStack_1c = in_s1;
        fStack_18 = in_s2;
        (**(code **)(**(int **)(iVar1 + 8) + 0x2c))(*(int **)(iVar1 + 8),"Null_RootCursor",1);
        fn_00688ff8();
        fStack_20 = fStack_20 - in_s0;
        fStack_1c = fStack_1c - in_s1;
        fStack_18 = fStack_18 - in_s2;
        fn_0025e7cc(*(undefined4 *)(iVar1 + 0x30),&fStack_20);
        return;
      }
      if (iVar1 < 2) break;
      fn_0031df20(*(undefined4 *)(param_1 + 0x1c),iVar2 + -1,0);
      iVar2 = iVar1;
    }
  } while( true );
}



void fn_0031de9c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float in_s0;
  float in_s1;
  float in_s2;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  (**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(*(int **)(param_1 + 0xc),0,param_2 + 2);
  iVar1 = 0;
  do {
    fn_0031e04c(*(undefined4 *)(param_1 + 0x1c),iVar1,0);
    iVar2 = iVar1;
    while( true ) {
      iVar1 = iVar2 + 1;
      if (6 < iVar1) {
        iVar1 = *(int *)(param_1 + 0x1c);
        iVar2 = iVar1 + param_2 * 4;
        fn_003945c0(*(undefined4 *)(iVar2 + 0x1c),1);
        fn_0025e31c(*(undefined4 *)(iVar1 + 0x34),1);
        fn_00394520(*(undefined4 *)(iVar2 + 0x1c));
        fn_00688ff8();
        fStack_20 = in_s0;
        fStack_1c = in_s1;
        fStack_18 = in_s2;
        (**(code **)(**(int **)(iVar1 + 8) + 0x2c))(*(int **)(iVar1 + 8),"Null_RootCursor",1);
        fn_00688ff8();
        fStack_20 = fStack_20 - in_s0;
        fStack_1c = fStack_1c - in_s1;
        fStack_18 = fStack_18 - in_s2;
        fn_0025e7cc(*(undefined4 *)(iVar1 + 0x34),&fStack_20);
        return;
      }
      if (iVar1 < 2) break;
      fn_0031df20(*(undefined4 *)(param_1 + 0x1c),iVar2 + -1,0);
      iVar2 = iVar1;
    }
  } while( true );
}



void fn_0031df20(int param_1,int param_2,int param_3)

{
  int iVar1;
  float in_s0;
  float in_s1;
  float in_s2;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar1 = param_1 + param_2 * 4;
  fn_003945c0(*(undefined4 *)(iVar1 + 0x1c),param_3);
  fn_0025e31c(*(undefined4 *)(param_1 + 0x34),param_3);
  if (param_3 != 0) {
    fn_00394520(*(undefined4 *)(iVar1 + 0x1c));
    fn_00688ff8();
    local_20 = in_s0;
    local_1c = in_s1;
    local_18 = in_s2;
    (**(code **)(**(int **)(param_1 + 8) + 0x2c))(*(int **)(param_1 + 8),(char *)&DAT_0031dfb8,1);
    fn_00688ff8();
    local_20 = local_20 - in_s0;
    local_1c = local_1c - in_s1;
    local_18 = local_18 - in_s2;
    fn_0025e7cc(*(undefined4 *)(param_1 + 0x34),&local_20);
  }
  return;
}



void fn_0031dcb4(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_40;
  undefined1 auStack_3c [4];
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar7 = *(undefined4 *)(param_1 + param_2 * 4 + 0x14);
  if (param_3 == 0) {
    local_2c = 0;
    local_38 = (undefined4 *)0x0;
    local_34 = 0;
    local_30 = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_40 = param_2;
    fn_0017d96c(&local_38,0x20,0x1f,(char *)&DAT_0031de88);
    uVar5 = fn_0022f584(&local_38,0);
    fn_002b1f94(uVar7,uVar5);
    fn_0037d320(uVar7,0xffffffff);
    fn_0037d2b0(uVar7,0xffffffff);
    fn_002b1f04(uVar7,0);
    return;
  }
  fn_00231210(&local_38,param_3,1);
  fn_002b1f94(uVar7,local_38);
  uVar5 = 2;
  iVar4 = 0;
  uVar6 = *(undefined4 *)(DAT_00897804 + 0xc);
  do {
    iVar1 = fn_00144df4(uVar6,iVar4);
    if (iVar1 == param_3) {
      uVar5 = 0;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  iVar4 = 0;
  do {
    iVar1 = fn_006b8538(uVar6,iVar4);
    if (iVar1 == param_3) {
      uVar5 = 1;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  fn_0037d320(uVar7,uVar5);
  uVar5 = fn_0028aad0(uVar6,param_3);
  fn_0020bbc4(&local_40,uVar5);
  uVar5 = fn_006bfe90(auStack_3c);
  fn_0037d2b0(uVar7,uVar5);
  uVar2 = fn_006c0108(auStack_3c);
  fn_002b1f04(uVar7,uVar2 < 10);
  if (local_38 != &DAT_008f9cf4) {
    piVar3 = local_38 + -3;
    iVar4 = *piVar3;
    if ((iVar4 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar4 + -1, iVar4 == 0)))) {
      fn_001008c4(local_38 + -3,local_38[-2] + 8,0);
    }
  }
  return;
}


