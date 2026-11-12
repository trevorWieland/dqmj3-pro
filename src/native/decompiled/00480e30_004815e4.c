#include "00480e30_004815e4.h"



void fn_004815e4(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_28 [16];
  
  (**(code **)(*param_2 + 0x54))(auStack_28,param_2,param_1);
  piVar1 = *(int **)(param_1 + 0x60);
  iVar6 = *(int *)(param_1 + 0x6c);
  if (piVar1 == (int *)0x0) {
    piVar1 = *(int **)(param_1 + 100);
    if (piVar1 == *(int **)(param_1 + 0x68)) {
      if (*(int *)(param_1 + 0x5c) == 0) {
        uVar5 = 0x20;
      }
      else {
        uVar2 = *(uint *)(*(int *)(param_1 + 0x5c) + 4);
        uVar5 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
        if (uVar5 < uVar2 + 0x20) {
          uVar5 = uVar2 + 0x20;
        }
      }
      puVar3 = (undefined4 *)fn_0015ece0(0xc);
      uVar4 = fn_0015ece0(uVar5 * 0xc);
      puVar3[2] = uVar4;
      *puVar3 = *(undefined4 *)(param_1 + 0x5c);
      puVar3[1] = uVar5;
      *(undefined4 **)(param_1 + 0x5c) = puVar3;
      piVar1 = (int *)puVar3[2];
      *(int **)(param_1 + 100) = piVar1;
      *(int **)(param_1 + 0x68) = piVar1 + uVar5 * 3;
    }
    *(int **)(param_1 + 100) = piVar1 + 3;
  }
  else {
    *(int *)(param_1 + 0x60) = *piVar1;
  }
  if (piVar1 + 2 != (int *)0x0) {
    piVar1[2] = (int)param_2;
  }
  *piVar1 = iVar6;
  piVar1[1] = *(int *)(iVar6 + 4);
  **(int **)(iVar6 + 4) = (int)piVar1;
  *(int **)(iVar6 + 4) = piVar1;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  return;
}



undefined4
fn_004814e8(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 *param_9)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  uVar5 = 0;
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
  iVar2 = fn_0015ece0(0x1c0);
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_00484660(iVar2,*(undefined1 *)(param_1 + 0x76),param_1,
                         *(undefined4 *)(param_2 + 0x44),param_3,param_4,param_5,param_6,param_7,
                         param_8);
  }
  iVar2 = fn_001249d0();
  if (iVar2 != 0) {
    uVar5 = *(undefined4 *)(iVar2 + 0xc);
  }
  fn_004bdba4(uVar5,uVar4,0);
  if (param_9 != (undefined4 *)0x0) {
    *param_9 = uVar4;
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return 1;
}



undefined4 fn_00481410(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_24 [3];
  undefined4 local_18 [2];
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  iVar2 = fn_00455e10(param_2);
  if (iVar2 != 0) {
    local_18[0] = *(undefined4 *)(param_2 + 0x44);
    (**(code **)(*param_3 + 0x74))(local_24,param_3,fn_006084b4,local_18,DAT_008b6418);
    if (-1 < local_24[0]) {
      (**(code **)(*piVar3 + 0xc))(piVar3);
      return 1;
    }
    (**(code **)(*(int *)param_3[1] + 0x40))((int *)param_3[1],param_3);
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return 0;
}



undefined4
fn_00481240(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined1 auStack_48 [52];
  
  fn_004b54dc(auStack_48);
  uVar1 = fn_002febd8(param_3);
  fn_0015ef58(auStack_48,param_3,uVar1,0xffffffff);
  uVar1 = fn_004812bc(param_1,param_2,auStack_48,param_4,param_5,param_6,param_7);
  fn_0014f480(auStack_48);
  return uVar1;
}



undefined4
fn_004812bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [16];
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  uVar5 = 0;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  iVar2 = fn_00455e10(param_1);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    return 0;
  }
  fn_004b5404(auStack_50,param_3);
  iVar2 = fn_0015ece0(0x98);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x44);
    puVar4 = (undefined4 *)fn_004b3044(iVar2,param_7,auStack_30);
    *puVar4 = &DAT_00852ab0;
    puVar4[0xf] = uVar6;
    puVar4[0x10] = param_2;
    iVar2 = fn_004b54dc(puVar4 + 0x11);
    *(undefined4 *)(iVar2 + 0x24) = param_4;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x28) = param_5;
    iVar1 = fn_004b54dc(iVar2 + 0x2c);
    iVar2 = iVar1 + -0x70;
    fn_004b5540(iVar1 + -0x2c,auStack_50);
    *(undefined4 *)(iVar1 + 0x20) = 0;
    fn_004b5540(iVar1,auStack_50);
  }
  *(undefined4 *)(iVar2 + 0x90) = param_6;
  iVar1 = fn_001249d0();
  if (iVar1 != 0) {
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
  }
  fn_004bdba4(uVar5,iVar2,0);
  fn_0014f480(auStack_50);
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return 1;
}



void fn_0048114c(undefined4 param_1,int *param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 auStack_78 [12];
  int local_6c;
  undefined4 uStack_68;
  int local_60;
  undefined1 auStack_58 [16];
  undefined4 local_48;
  undefined4 local_40;
  undefined1 auStack_38 [32];
  
  fn_004b54dc(auStack_38);
  uVar1 = fn_002febd8(param_3);
  fn_0015ef58(auStack_38,param_3,uVar1,0xffffffff);
  fn_004b5404(auStack_78,auStack_38);
  uVar2 = 0;
  uVar1 = (**(code **)(*param_2 + 0x1c))(param_2);
  fn_004b5488(auStack_58,uVar1);
  if (param_4 != 0) {
    do {
      local_48 = 0;
      local_40 = 0;
      (**(code **)(*param_2 + 8))(param_2,auStack_78,auStack_58);
      fn_004b5540(auStack_78,auStack_58);
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_4);
  }
  fn_0014f24c(param_1,local_60 + local_6c,uStack_68);
  fn_0014f480(auStack_58);
  fn_0014f480(auStack_78);
  fn_0014f480(auStack_38);
  return;
}



void fn_00481128(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_c;
  undefined4 auStack_8 [2];
  
  uStack_c = param_2;
  auStack_8[0] = param_3;
  (**(code **)(*param_1 + 0x18))(param_1,&uStack_c,auStack_8,1,param_1);
  return;
}



undefined4 fn_00480f60(int *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  undefined1 auStack_58 [12];
  int local_4c;
  uint local_48;
  int local_40;
  undefined1 auStack_38 [12];
  int local_2c;
  uint local_28;
  int local_20;
  
  iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  if (iVar2 != 0) {
    if ((char)param_1[2] == '\0') {
      uVar1 = (**(code **)(*param_1 + 0x1c))(param_1);
      *(undefined1 *)(param_1 + 2) = uVar1;
    }
    if ((uint)*(byte *)(param_1 + 2) <= *(uint *)(param_2 + 0x10)) {
      fn_004b54dc(auStack_58);
      iVar2 = *(int *)(param_2 + 0x10) - (uint)*(byte *)(param_1 + 2);
      *(int *)(param_2 + 0x10) = iVar2;
      fn_0015ef58(auStack_58,*(int *)(param_2 + 0xc) + *(int *)(param_2 + 0x18) + iVar2,
                   (char)param_1[2],0xffffffff);
      uVar3 = (**(code **)(*param_1 + 0x1c))(param_1);
      fn_004b5488(auStack_38,uVar3);
      (**(code **)(*param_1 + 8))(param_1,param_2,auStack_38);
      uVar4 = (**(code **)(*param_1 + 0x1c))(param_1);
      uVar7 = (uint)*(byte *)(param_1 + 2);
      if (uVar7 < uVar4) {
        uVar4 = (**(code **)(*param_1 + 0x1c))(param_1);
        for (; uVar7 < uVar4; uVar7 = uVar7 + 1) {
          pbVar5 = (byte *)fn_004b55dc(auStack_38,*(byte *)(param_1 + 2) - 1);
          pbVar6 = (byte *)fn_004b55dc(auStack_38,uVar7);
          *pbVar5 = *pbVar6 ^ *pbVar5;
        }
        local_28 = (uint)*(byte *)(param_1 + 2);
      }
      if ((local_48 == local_28) &&
         (iVar2 = fn_001010c8(local_2c + local_20,local_4c + local_40,local_48), iVar2 == 0)) {
        fn_0014f480(auStack_38);
        fn_0014f480(auStack_58);
        return 1;
      }
      fn_0014f480(auStack_38);
      fn_0014f480(auStack_58);
    }
  }
  return 0;
}



undefined4 fn_00480e30(int *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  undefined1 auStack_40 [12];
  int local_34;
  uint local_30;
  int local_28;
  
  iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  uVar3 = 0;
  if (iVar2 != 0) {
    if ((char)param_1[2] == '\0') {
      uVar1 = (**(code **)(*param_1 + 0x1c))(param_1);
      *(undefined1 *)(param_1 + 2) = uVar1;
    }
    uVar3 = (**(code **)(*param_1 + 0x1c))(param_1);
    fn_004b5488(auStack_40,uVar3);
    (**(code **)(*param_1 + 8))(param_1,param_2,auStack_40);
    uVar4 = (**(code **)(*param_1 + 0x1c))(param_1);
    uVar7 = (uint)*(byte *)(param_1 + 2);
    if (uVar7 < uVar4) {
      uVar4 = (**(code **)(*param_1 + 0x1c))(param_1);
      for (; uVar7 < uVar4; uVar7 = uVar7 + 1) {
        pbVar5 = (byte *)fn_004b55dc(auStack_40,*(byte *)(param_1 + 2) - 1);
        pbVar6 = (byte *)fn_004b55dc(auStack_40,uVar7);
        *pbVar5 = *pbVar6 ^ *pbVar5;
      }
      local_30 = (uint)*(byte *)(param_1 + 2);
    }
    fn_0015ef58(param_2,local_28 + local_34,local_30,0xffffffff);
    fn_0014f480(auStack_40);
    uVar3 = 1;
  }
  return uVar3;
}


