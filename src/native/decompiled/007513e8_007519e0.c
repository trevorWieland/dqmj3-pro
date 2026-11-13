#include "007513e8_007519e0.h"



void fn_007519e0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    fn_00456510(param_1 + 0x80,4);
  }
  else {
    iVar2 = fn_006d3b8c(param_2);
    local_20 = *param_2;
    uStack_1c = param_2[1];
    uStack_18 = param_2[2];
    if (iVar2 == 0) {
      fn_00456044(iVar1,&local_20);
    }
    else {
      fn_00456074();
    }
  }
  fn_004b2f04(param_1);
  return;
}



undefined8 fn_0075189c(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = (undefined4 *)fn_0046b318(param_1,0x73);
  *puVar1 = &DAT_00854e00;
  puVar1[4] = &DAT_00854f14;
  iVar2 = fn_0049c62c(puVar1 + 6,0);
  puVar1 = (undefined4 *)(iVar2 + -0x18);
  *(undefined2 *)(iVar2 + 0x20) = 0x73;
  iVar3 = fn_0015ecdc(0x44);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = fn_0049c62c(iVar3,0);
  }
  uVar4 = fn_006d12d8(puVar1);
  fn_0047f194(uVar4,0x73,uVar5);
  *(undefined1 *)(iVar2 + -4) = 0;
  fn_001237bc();
  *(undefined4 *)(iVar2 + 0x48) = 0x10;
  *(undefined **)(iVar2 + -8) = &DAT_008546d0;
  *(undefined **)(iVar2 + 0x44) = &DAT_00854790;
  *puVar1 = &DAT_00854564;
  *(undefined1 *)(iVar2 + 0x4c) = 1;
  *(undefined4 *)(iVar2 + 0x50) = 0xa7;
  *(undefined4 *)(iVar2 + 0x54) = 60000;
  *(undefined4 *)(iVar2 + 0x58) = 0x4000;
  *(undefined4 *)(iVar2 + 0x5c) = 0x8000;
  return CONCAT44(0x4000064,puVar1);
}



void fn_00751868(void)

{
  fn_00751248();
  return;
}



undefined4
fn_00751700(int *param_1,int param_2,undefined4 param_3,undefined1 *param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  bool bVar6;
  int local_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined1 *local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [48];
  
  iVar1 = fn_00455e10(param_2);
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x24))(param_1,param_2);
    if (iVar1 == 0) {
      local_6c = &DAT_80010001;
      uVar2 = fn_004b8d4c(&local_78,&local_6c);
      fn_00456044(param_2,uVar2);
      return 0;
    }
    iVar1 = fn_0015ecdc(0x170);
    if (iVar1 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)fn_004a939c();
    }
    local_68 = (undefined4)param_5;
    uStack_64 = (undefined4)((ulonglong)param_5 >> 0x20);
    uStack_60 = (undefined4)param_6;
    uStack_5c = (undefined4)((ulonglong)param_6 >> 0x20);
    uStack_58 = (undefined4)param_7;
    uStack_54 = (undefined4)((ulonglong)param_7 >> 0x20);
    uStack_50 = (undefined4)param_8;
    uStack_4c = (undefined4)((ulonglong)param_8 >> 0x20);
    local_78 = param_1[0x18];
    iStack_74 = param_1[0x1b];
    uStack_70 = param_3;
    local_6c = param_4;
    (**(code **)(*piVar5 + 0x34))(auStack_48,piVar5,*(undefined4 *)(param_2 + 0x44),param_1 + 4);
    iVar1 = fn_006d3b8c(auStack_48);
    if (iVar1 == 0) {
      puVar4 = (uint *)(piVar5 + 1);
      do {
        uVar3 = *puVar4 - 1;
        bVar6 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar6);
      *puVar4 = uVar3;
      bVar6 = uVar3 == 0;
      if (bVar6) {
        uVar3 = (uint)*(byte *)(piVar5 + 2);
      }
      if (bVar6 && uVar3 == 0) {
        *(undefined1 *)(piVar5 + 2) = 1;
        (**(code **)(*piVar5 + 4))();
      }
      uVar2 = fn_006d3b8c(auStack_48);
      return uVar2;
    }
    iVar1 = fn_001249d0();
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(iVar1 + 0xc);
    }
    fn_004bdba4(uVar2,piVar5,0);
    uVar2 = 1;
  }
  return uVar2;
}



undefined4
fn_0075157c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  bool bVar6;
  undefined4 local_58;
  int local_54;
  int local_50;
  undefined1 *local_4c;
  int iStack_48;
  int iStack_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [24];
  
  iVar1 = fn_00455e10(param_2);
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x24))(param_1,param_2);
    if (iVar1 == 0) {
      local_4c = &DAT_80010001;
      uVar2 = fn_004b8d4c(&local_58,&local_4c);
      fn_00456044(param_2,uVar2);
      return 0;
    }
    iVar1 = fn_0015ecdc(0x188);
    if (iVar1 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)fn_004a04e4();
    }
    local_3c = param_1[0x1c];
    local_38 = (undefined4)param_5;
    uStack_34 = (undefined4)((ulonglong)param_5 >> 0x20);
    local_4c = (undefined1 *)param_1[0x1d];
    iStack_48 = param_1[0x1a];
    iStack_44 = param_1[0x1b];
    local_50 = (int)(char)param_1[0x19];
    local_54 = param_1[0x18];
    local_58 = param_3;
    local_40 = param_4;
    (**(code **)(*piVar5 + 0x34))(auStack_30,piVar5,*(undefined4 *)(param_2 + 0x44),param_1 + 4);
    iVar1 = fn_006d3b8c(auStack_30);
    if (iVar1 == 0) {
      puVar4 = (uint *)(piVar5 + 1);
      do {
        uVar3 = *puVar4 - 1;
        bVar6 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar6);
      *puVar4 = uVar3;
      bVar6 = uVar3 == 0;
      if (bVar6) {
        uVar3 = (uint)*(byte *)(piVar5 + 2);
      }
      if (bVar6 && uVar3 == 0) {
        *(undefined1 *)(piVar5 + 2) = 1;
        (**(code **)(*piVar5 + 4))();
      }
      uVar2 = fn_006d3b8c(auStack_30);
      return uVar2;
    }
    iVar1 = fn_001249d0();
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(iVar1 + 0xc);
    }
    fn_004bdba4(uVar2,piVar5,0);
    uVar2 = 1;
  }
  return uVar2;
}



undefined4
fn_007513e8(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  bool bVar6;
  undefined4 local_60;
  int local_5c;
  int local_58;
  undefined1 *local_54;
  int iStack_50;
  int local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [28];
  
  iVar1 = fn_00455e10(param_2);
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x24))(param_1,param_2);
    if (iVar1 == 0) {
      local_54 = &DAT_80010001;
      uVar2 = fn_004b8d4c(&local_60,&local_54);
      fn_00456044(param_2,uVar2);
      return 0;
    }
    iVar1 = fn_0015ecdc(0x200);
    if (iVar1 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)fn_00750ec0();
    }
    local_40 = param_1[0x1c];
    local_44 = (undefined4)param_5;
    local_3c = (undefined4)((ulonglong)param_5 >> 0x20);
    local_4c = param_1[0x1b];
    local_54 = (undefined1 *)param_1[0x1d];
    iStack_50 = param_1[0x1a];
    local_58 = (int)(char)param_1[0x19];
    local_5c = param_1[0x18];
    local_60 = param_3;
    uStack_48 = param_4;
    uStack_38 = param_6;
    (**(code **)(*piVar5 + 0x34))(auStack_34,piVar5,*(undefined4 *)(param_2 + 0x44),param_1 + 4);
    iVar1 = fn_006d3b8c(auStack_34);
    if (iVar1 == 0) {
      puVar4 = (uint *)(piVar5 + 1);
      do {
        uVar3 = *puVar4 - 1;
        bVar6 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar6);
      *puVar4 = uVar3;
      bVar6 = uVar3 == 0;
      if (bVar6) {
        uVar3 = (uint)*(byte *)(piVar5 + 2);
      }
      if (bVar6 && uVar3 == 0) {
        *(undefined1 *)(piVar5 + 2) = 1;
        (**(code **)(*piVar5 + 4))();
      }
      uVar2 = fn_006d3b8c(auStack_34);
      return uVar2;
    }
    iVar1 = fn_001249d0();
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(iVar1 + 0xc);
    }
    fn_004bdba4(uVar2,piVar5,0);
    uVar2 = 1;
  }
  return uVar2;
}


