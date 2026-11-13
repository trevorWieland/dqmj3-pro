#include "0047adcc_0047c3a8.h"



void fn_0047c3a8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 local_6c;
  undefined *local_68;
  code *local_64;
  undefined4 local_60;
  undefined *local_5c;
  int local_58 [7];
  int local_3c;
  undefined1 auStack_38 [20];
  
  (**(code **)(**(int **)(param_1 + 0xd8) + 0xc))
            (*(int **)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0x6c));
  iVar6 = *(int *)(param_1 + 0xd8);
  local_3c = param_1 + 0x80;
  uVar1 = fn_004b6318(auStack_38,*(undefined4 *)(param_1 + 0x88));
  uVar8 = *(undefined4 *)(param_1 + 0x8c);
  iVar2 = fn_001249d0();
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0xc);
  }
  iVar7 = 0;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  piVar4 = (int *)(iVar3 + 0x50);
  (**(code **)(*piVar4 + 8))();
  iVar3 = fn_00455e10(param_1 + 0x158);
  if (iVar3 == 0) {
    (**(code **)(*piVar4 + 0xc))(piVar4);
  }
  else {
    iVar3 = fn_0015ecdc(0x1b0);
    if (iVar3 == 0) {
      uVar1 = 0;
    }
    else {
      local_58[1] = 0;
      local_58[2] = 0;
      local_58[3] = 0;
      local_60 = 1;
      local_64 = (code *)0x0;
      local_6c = uVar8;
      local_68 = (undefined *)(param_1 + 0x90);
      local_5c = (undefined *)(param_1 + 0x9c);
      local_58[0] = param_1 + 0xa4;
      uVar1 = fn_0047db40(iVar3,*(undefined4 *)(param_1 + 0x19c),iVar6 + 0x10,local_3c,uVar1);
    }
    iVar3 = fn_001249d0();
    if (iVar3 != 0) {
      iVar7 = *(int *)(iVar3 + 0xc);
    }
    fn_004bdba4(iVar7,uVar1,0);
    (**(code **)(*piVar4 + 0xc))(piVar4);
    iVar7 = 1;
  }
  fn_00170f54(auStack_38);
  if (iVar7 != 1) {
    local_6c = 0x8001000d;
    uVar1 = fn_004b8d4c(local_58,&local_6c);
    fn_004b8d90(param_1 + 200,uVar1);
    local_64 = fn_0047b8f8;
    local_60 = 0;
    local_5c = &DAT_0047c590;
    local_68 = &DAT_00853500;
    fn_00479c98(param_1,&local_68);
    return;
  }
  fn_004b2f0c(param_1);
  puVar5 = (undefined4 *)fn_0015ecdc(0x10);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = &DAT_00853500;
    puVar5[1] = fn_0047c2b0;
    puVar5[2] = 0;
    puVar5[3] = &DAT_0047c590;
  }
  fn_00479b1c(param_1,param_1 + 0x158,puVar5);
  return;
}



void fn_0047bd74(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 local_64;
  undefined *local_60;
  code *pcStack_5c;
  undefined4 local_58;
  undefined1 *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 auStack_30 [12];
  
  (**(code **)(**(int **)(param_1 + 0xd8) + 0xc))
            (*(int **)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0x6c));
  iVar6 = *(int *)(param_1 + 0xd8);
  uVar1 = fn_004b6318(auStack_30,*(undefined4 *)(param_1 + 0x88));
  iVar2 = fn_001249d0();
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0xc);
  }
  iVar7 = 0;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  piVar4 = (int *)(iVar3 + 0x50);
  (**(code **)(*piVar4 + 8))();
  iVar3 = fn_00455e10(param_1 + 0x158);
  if (iVar3 == 0) {
    (**(code **)(*piVar4 + 0xc))(piVar4);
  }
  else {
    iVar3 = fn_0015ecdc(0x1b0);
    if (iVar3 == 0) {
      uVar1 = 0;
    }
    else {
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      local_44 = 0;
      pcStack_5c = (code *)0x0;
      local_58 = 4;
      local_54 = (undefined1 *)0x0;
      local_64 = 0;
      local_60 = (undefined *)(param_1 + 0x90);
      uVar1 = fn_0047db40(iVar3,*(undefined4 *)(param_1 + 0x19c),iVar6 + 0x10,param_1 + 0x80,uVar1)
      ;
    }
    iVar3 = fn_001249d0();
    if (iVar3 != 0) {
      iVar7 = *(int *)(iVar3 + 0xc);
    }
    fn_004bdba4(iVar7,uVar1,0);
    (**(code **)(*piVar4 + 0xc))(piVar4);
    iVar7 = 1;
  }
  fn_00170f54(auStack_30);
  if (iVar7 != 1) {
    local_64 = 0x8001000d;
    uVar1 = fn_004b8d4c(&local_50,&local_64);
    fn_004b8d90(param_1 + 200,uVar1);
    pcStack_5c = fn_0047b8f8;
    local_58 = 0;
    local_54 = &LAB_0047bf4c;
    local_60 = &DAT_00853500;
    fn_00479c98(param_1,&local_60);
    return;
  }
  fn_004b2f0c(param_1);
  puVar5 = (undefined4 *)fn_0015ecdc(0x10);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = &DAT_00853500;
    puVar5[1] = fn_0047c2b0;
    puVar5[2] = 0;
    puVar5[3] = &LAB_0047bf4c;
  }
  fn_00479b1c(param_1,param_1 + 0x158,puVar5);
  return;
}



void fn_0047c2b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *local_28;
  code *local_24;
  undefined4 uStack_20;
  undefined *local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0x168) == '\x02') {
    if (*(char *)(param_1 + 0x98) == '\0') {
      iVar1 = fn_006d3b8c(param_1 + 0xbc);
      if (iVar1 == 0) {
        fn_004b8d90(param_1 + 200,param_1 + 0xbc);
      }
      else {
        local_c = 0x10001;
        uVar2 = fn_004b8d4c(&local_18,&local_c);
        fn_004b8d90(param_1 + 200,uVar2);
      }
    }
  }
  else {
    local_18 = *(undefined4 *)(param_1 + 400);
    uStack_14 = *(undefined4 *)(param_1 + 0x194);
    uStack_10 = *(undefined4 *)(param_1 + 0x198);
    fn_004b8d90(param_1 + 200,&local_18);
  }
  if (*(int **)(param_1 + 0xd8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xd8) + 4))();
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  local_24 = fn_0047b8f8;
  uStack_20 = 0;
  local_1c = &DAT_0047c39c;
  local_28 = &DAT_00853500;
  fn_00479c98(param_1,&local_28);
  return;
}



void fn_0047b8f8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  iVar1 = fn_00473ce0(*(undefined4 *)(param_1 + 0xd4),param_1 + 0x1d0,
                       *(undefined4 *)(param_1 + 0x6c));
  if (iVar1 == 0) {
    local_18 = *(undefined4 *)(param_1 + 0x208);
    uStack_14 = *(undefined4 *)(param_1 + 0x20c);
    uStack_10 = *(undefined4 *)(param_1 + 0x210);
    fn_0047b860(param_1,&local_18);
    return;
  }
  fn_004b2f0c(param_1);
  puVar2 = (undefined4 *)fn_0015ecdc(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = &LAB_0047c284;
    *puVar2 = &DAT_00853500;
    puVar2[2] = 0;
    puVar2[3] = &LAB_0047b998;
  }
  fn_00479b1c(param_1,param_1 + 0x1d0,puVar2);
  return;
}



void fn_0047b860(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 != 0) {
    iVar2 = fn_006d3b8c(param_2);
    if ((iVar2 == 0) || (iVar2 = fn_006d3b8c(param_1 + 200), iVar2 == 0)) {
      iVar2 = fn_006d3b8c(param_2);
      if (iVar2 == 0) {
        local_20 = *param_2;
        uStack_1c = param_2[1];
        uStack_18 = param_2[2];
      }
      else {
        local_20 = *(undefined4 *)(param_1 + 200);
        uStack_1c = *(undefined4 *)(param_1 + 0xcc);
        uStack_18 = *(undefined4 *)(param_1 + 0xd0);
      }
      fn_00456044(iVar1,&local_20);
    }
    else {
      local_20 = *param_2;
      uStack_1c = param_2[1];
      uStack_18 = param_2[2];
      fn_00456074(iVar1,&local_20);
    }
  }
  fn_004b2f04(param_1);
  return;
}



void fn_0047af54(int param_1,uint param_2)

{
  uint uVar1;
  
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_2;
  uVar1 = *(uint *)(param_1 + 0x14);
  if (param_2 <= *(uint *)(param_1 + 0x14)) {
    uVar1 = param_2;
  }
  if (param_2 <= *(uint *)(param_1 + 0x18)) {
    param_2 = *(uint *)(param_1 + 0x18);
  }
  *(uint *)(param_1 + 0x14) = uVar1;
  *(uint *)(param_1 + 0x18) = param_2;
  return;
}



int fn_0047ae88(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = &DAT_008535dc;
  (**(code **)(DAT_008e7674 + 8))();
  puVar1 = DAT_008e7664;
  while( true ) {
    if (puVar1 != DAT_008e766c) {
      param_4 = puVar1;
    }
    if (puVar1 == DAT_008e766c || puVar1 == param_1) break;
    puVar1 = (undefined4 *)param_4[1];
  }
  if (puVar1 != DAT_008e766c) {
    puVar3 = (undefined4 *)puVar1[2];
    puVar4 = (undefined4 *)puVar1[1];
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = puVar4;
    }
    puVar1[2] = 0;
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[2] = puVar3;
    }
    puVar1[1] = 0;
    if (DAT_008e7664 == puVar1) {
      DAT_008e7664 = puVar4;
    }
    if (DAT_008e7668 == puVar1) {
      DAT_008e7668 = puVar3;
    }
    DAT_008e7670 = DAT_008e7670 + -1;
  }
  (**(code **)(DAT_008e7674 + 0xc))(&DAT_008e7674);
  iVar2 = fn_00170f54(param_1 + 3);
  return iVar2 + -0xc;
}



undefined4 * fn_0047adcc(undefined4 *param_1,int param_2)

{
  *param_1 = &DAT_008535dc;
  param_1[1] = 0;
  param_1[3] = &DAT_00855a94;
  param_1[2] = 0;
  fn_0015e6f0(param_1 + 4,*(undefined4 *)(param_2 + 4));
  param_1[5] = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  (**(code **)(DAT_008e7674 + 8))();
  if (DAT_008e7664 == DAT_008e766c) {
    DAT_008e7664 = param_1;
  }
  else {
    *(undefined4 **)((int)DAT_008e7668 + 4) = param_1;
    param_1[2] = DAT_008e7668;
  }
  DAT_008e7670 = DAT_008e7670 + 1;
  DAT_008e7668 = param_1;
  (**(code **)(DAT_008e7674 + 0xc))(&DAT_008e7674);
  return param_1;
}


