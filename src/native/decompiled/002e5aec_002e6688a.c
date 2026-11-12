#include "002e5aec_002e6688a.h"



void fn_002e5d84(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_20;
  
  local_20 = param_4;
  iVar1 = fn_006ba220();
  if (iVar1 == 0) {
    iVar1 = fn_006ba284(param_1);
    param_2 = iVar1 * 9 + param_2;
    iVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_1[0x39] + 0x14));
    piVar4 = (int *)(param_1[0x3d] + param_2 * 0x10);
    iVar2 = *piVar4;
    if (*(int *)(iVar1 + 0xe0) == iVar2) {
      fn_00231690(&local_20,piVar4,0);
      fn_0015b0dc(local_20);
      fn_001588d4(&local_20);
      uVar3 = fn_0022f584((char *)&DAT_002e5f58,0);
      fn_0068974c(param_1,uVar3,0,1);
      fn_002e628c(param_1,&DAT_0085af48,iVar1);
    }
    else {
      iVar2 = fn_0028afe0(*(undefined4 *)(DAT_00897804 + 0xc),iVar2);
      if (iVar2 == 0) {
        iVar2 = param_1[0x3d] + param_2 * 0x10;
        fn_00231690(&local_20,iVar2,0);
        fn_0015b0dc(local_20);
        fn_001588d4(&local_20);
        uVar3 = fn_0022f584((char *)&DAT_002e546c,0);
        fn_0068974c(param_1,uVar3,0,1);
        fn_002e628c(param_1,iVar2,iVar1);
      }
      else {
        fn_0015b0dc(iVar2 + 4);
        fn_0015b0dc(iVar2 + 4);
        uVar3 = fn_0022f584((char *)&DAT_002e5f74,0);
        fn_0068974c(param_1,uVar3,1);
        *(undefined1 *)(param_1 + 0x3c) = 1;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x002e5f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x124))(param_1);
    return;
  }
  fn_0068ab44(param_1,0x100094c);
  fn_00689824(param_1,0);
  fn_006899f4(param_1,0x69,0);
  iVar1 = param_1[0x39];
  uVar6 = *(uint *)(iVar1 + 0xc);
  uVar7 = *(uint *)(iVar1 + 8);
  if (uVar7 != uVar6) {
    uVar5 = uVar7;
    if (uVar6 <= uVar7) {
      do {
        uVar5 = uVar5 + 4;
      } while (uVar5 != uVar6);
    }
    *(uint *)(iVar1 + 0xc) = uVar6 - (uVar6 - uVar7 & 0xfffffffc);
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined1 *)(iVar1 + 0x18) = 0xff;
  return;
}



void fn_002e5d54(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x100,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_002e6640(iVar1,param_1);
  return;
}



void fn_002e5c9c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  fn_0068ab44(param_1,0x100094c);
  fn_00689824(param_1,0);
  fn_006899f4(param_1,0x69,0);
  iVar1 = *(int *)(param_1 + 0xe4);
  uVar3 = *(uint *)(iVar1 + 0xc);
  uVar4 = *(uint *)(iVar1 + 8);
  if (uVar4 != uVar3) {
    uVar2 = uVar4;
    if (uVar3 <= uVar4) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != uVar3);
    }
    *(uint *)(iVar1 + 0xc) = uVar3 - (uVar3 - uVar4 & 0xfffffffc);
  }
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined1 *)(iVar1 + 0x18) = 0xff;
  return;
}



int * fn_002e5aec(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_108 [224];
  int local_28;
  int local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  undefined1 auStack_14 [4];
  
  uVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),
                       *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x14));
  fn_0017821c(auStack_108,uVar2,0xf0);
  fn_0025f3f4(*(undefined4 *)(param_1 + 0xe8),auStack_108);
  iVar3 = fn_006ba220(param_1,param_2);
  if (iVar3 != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0xe8) + 0x544) = 0;
    iVar3 = *(int *)(param_1 + 0xe8);
    *(int *)(iVar3 + 0x554) = local_28;
    *(int *)(iVar3 + 0x558) = local_24;
    *(int *)(iVar3 + 0x55c) = iStack_20;
    *(int *)(iVar3 + 0x560) = iStack_1c;
    return (int *)(iVar3 + 0x554);
  }
  *(undefined1 *)(*(int *)(param_1 + 0xe8) + 0x544) = 1;
  iVar3 = fn_006ba284(param_1);
  param_2 = iVar3 * 9 + param_2;
  iVar3 = *(int *)(param_1 + 0xe8);
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0xf4) + param_2 * 0x10);
  uVar2 = puVar5[1];
  uVar6 = puVar5[2];
  uVar7 = puVar5[3];
  *(undefined4 *)(iVar3 + 0x554) = *puVar5;
  *(undefined4 *)(iVar3 + 0x558) = uVar2;
  *(undefined4 *)(iVar3 + 0x55c) = uVar6;
  *(undefined4 *)(iVar3 + 0x560) = uVar7;
  piVar4 = (int *)(*(int *)(param_1 + 0xf4) + param_2 * 0x10);
  if (local_28 == *piVar4) {
    local_24 = 0;
    iStack_20 = 0;
    iStack_1c = 0;
    local_28 = 0;
  }
  else {
    local_24 = piVar4[1];
    iStack_20 = piVar4[2];
    iStack_1c = piVar4[3];
    local_28 = *piVar4;
  }
  fn_0020bbc4(&iStack_18,auStack_108);
  iVar3 = *(int *)(param_1 + 0xe8);
  uVar1 = fn_006c0028(auStack_14);
  *(undefined2 *)(iVar3 + 0x546) = uVar1;
  iVar3 = *(int *)(param_1 + 0xe8);
  uVar1 = fn_006c0114(auStack_14);
  *(undefined2 *)(iVar3 + 0x548) = uVar1;
  iVar3 = *(int *)(param_1 + 0xe8);
  uVar1 = fn_006c09b4(auStack_14);
  *(undefined2 *)(iVar3 + 0x54a) = uVar1;
  iVar3 = *(int *)(param_1 + 0xe8);
  uVar1 = fn_006bed98(auStack_14);
  *(undefined2 *)(iVar3 + 0x54c) = uVar1;
  iVar3 = *(int *)(param_1 + 0xe8);
  uVar1 = fn_006c01f4(auStack_14);
  *(undefined2 *)(iVar3 + 0x54e) = uVar1;
  iVar3 = *(int *)(param_1 + 0xe8);
  uVar1 = fn_006bff0c(auStack_14);
  *(undefined2 *)(iVar3 + 0x550) = uVar1;
  return &iStack_18;
}


