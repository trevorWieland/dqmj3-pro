#include "005d2b78_005e08b8.h"



undefined4
fn_005e08b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *local_30 [8];
  
  uVar4 = *(undefined4 *)(param_1 + 4);
  local_30[0] = &DAT_008f9cf4;
  uVar1 = fn_00156b34(uVar4,local_30,&DAT_0089a4f4,param_3,param_2);
  iVar2 = fn_00145b00(0x3c,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_001439d0(iVar2,uVar1,local_30[0],param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10);
  }
  fn_001588d4(local_30);
  fn_00162ad0(uVar4,uVar3);
  return uVar3;
}



int fn_005ddf4c(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_r4;
  
  iVar1 = fn_00145b00(0x1a0,&DAT_00812c8c);
  if (iVar1 == 0) {
    return 0;
  }
  puVar2 = (undefined4 *)fn_0043d370(iVar1,param_1,(char *)&DAT_005de47c,0xf7,1,unaff_r4);
  *puVar2 = &PTR_FUN_0084d968;
  puVar2[0x41] = 0;
  puVar2[0x43] = &DAT_0085a9f4;
  puVar2[0x44] = 0;
  puVar2[0x45] = 0;
  iVar3 = fn_00124930(puVar2 + 0x46);
  iVar4 = fn_00145b00(0x1c0,&DAT_00812c8c);
  iVar1 = 0;
  if (iVar4 != 0) {
    iVar1 = fn_0020bc58();
    *(undefined1 *)(iVar1 + 0x1b0) = 0;
    *(undefined4 *)(iVar1 + 0x1b2) = 0;
    *(undefined4 *)(iVar1 + 0x1b6) = 0;
    *(undefined4 *)(iVar1 + 0x1ba) = 0;
    *(undefined2 *)(iVar1 + 0x1be) = 0;
  }
  *(int *)(iVar3 + 0x70) = iVar1;
  iVar1 = fn_00145b00(0x9c,&DAT_00812c8c);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)fn_005f62c0();
    puVar2[8] = &DAT_00859420;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    *puVar2 = &DAT_00859b38;
    iVar1 = fn_00119b40(puVar2 + 0x10);
    puVar2 = (undefined4 *)(iVar1 + -0x40);
    fn_0066ddbc();
    fn_002fec40(iVar1 + 0x18,s_TaskNexGatheringUnregister_008c702c);
    *puVar2 = &DAT_0085a460;
    fn_00679fec(puVar2);
  }
  *(undefined4 **)(iVar3 + 0x74) = puVar2;
  iVar1 = fn_00145b00(0x9c,&DAT_00812c8c);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)fn_005f62c0();
    puVar2[9] = 0;
    puVar2[8] = &DAT_00859420;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    *puVar2 = &DAT_00859b38;
    puVar2[0xd] = 0;
    iVar1 = fn_00119b40(puVar2 + 0x10);
    puVar2 = (undefined4 *)(iVar1 + -0x40);
    fn_0066ddbc();
    fn_002fec40(iVar1 + 0x18,s_TaskNexGatheringEnd_008c6e5b);
    *puVar2 = &DAT_00859f80;
    fn_00676eec(puVar2);
  }
  *(undefined4 **)(iVar3 + 0x78) = puVar2;
  *(undefined1 *)(iVar3 + 0x7c) = 0;
  iVar1 = fn_00145b00(0x10,&DAT_00812c8c);
  uVar5 = 0;
  if (iVar1 != 0) {
    uVar5 = fn_0038e974();
  }
  *(undefined4 *)(iVar3 + 0x80) = uVar5;
  *(undefined4 *)(iVar3 + 0x84) = 0;
  return iVar3 + -0x118;
}



undefined4 fn_005db7b4(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  wchar16 *pwStack_98;
  char *pcStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_84;
  undefined1 auStack_7c [12];
  undefined1 auStack_70 [4];
  undefined1 local_6c;
  undefined1 local_6b;
  undefined4 local_64;
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [32];
  undefined1 auStack_38 [32];
  
  fn_00397774(&pwStack_98);
  local_84 = 9;
  local_90 = 9;
  pwStack_98 = L"rom:/data/Layout/common/common_0200.arc";
  pcStack_94 = (char *)&DAT_005db910;
  local_8c = fn_002f70cc(param_1);
  uVar1 = fn_0022f750((char *)&DAT_005db924);
  fn_00147974(auStack_7c,uVar1);
  local_6c = 0;
  local_6b = 0;
  local_64 = 1;
  uVar1 = fn_0022f750((char *)&DAT_005db92c);
  fn_00147974(auStack_58,uVar1);
  uVar1 = fn_00397618(param_1,&pwStack_98);
  uVar2 = fn_00121838(DAT_00897800,L"rom:/data/Message/AreaMessage.mes",1);
  iVar4 = 0;
  do {
    fn_001028d4(auStack_38,(char *)&DAT_005db944,iVar4);
    uVar3 = fn_0025f9d8(DAT_00897800,uVar2,auStack_38);
    fn_0031b78c(param_1,iVar4,0,uVar3);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 9);
  fn_0025fa58(DAT_00897800,uVar2);
  fn_00689efc(param_1,0xee,0);
  fn_00100414(auStack_5c,&LAB_0059e0e0,8,4);
  iVar4 = fn_001588d4(auStack_70);
  iVar4 = fn_001588d4(iVar4 + -4);
  iVar4 = fn_001588d4(iVar4 + -4);
  fn_001588d4(iVar4 + -4);
  return uVar1;
}



void fn_005d976c(int *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  wchar16 *local_74;
  char *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int local_60;
  undefined4 *local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_44;
  undefined1 local_42;
  undefined1 auStack_40 [32];
  
  fn_002c330c(&local_74);
  local_74 = L"rom:/data/Layout/mix/mix_skill_choice.arc";
  local_70 = "mix_skill_choice.bflyt";
  local_6c = 8;
  local_60 = param_1[0x31] - param_1[0x30] >> 3;
  local_68 = param_3;
  uStack_64 = param_4;
  uVar2 = fn_0022f750((char *)&DAT_0085fd6c);
  fn_00147974(&local_58,uVar2);
  uVar2 = fn_0022f750((char *)&DAT_0085fd9c);
  fn_00147974(&local_4c,uVar2);
  local_48 = 1;
  local_44 = 0;
  local_42 = 1;
  local_47 = param_2;
  fn_002c29a0(param_1,&local_74);
  iVar3 = fn_00178f9c(param_1[0x19],param_1[0x1b]);
  piVar9 = *(int **)(iVar3 + 0x10);
  piVar4 = (int *)(**(code **)(*piVar9 + 0x2c))(piVar9,(char *)&DAT_005d9aa0,1);
  if (piVar4 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar5 == &DAT_0089a930) goto LAB_005d9874;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_005d9874:
  param_1[0x2c] = (int)piVar4;
  iVar6 = (**(code **)(*piVar9 + 0x2c))(piVar9,(char *)&DAT_005d9ab0,1);
  uVar8 = 0;
  do {
    fn_0017d96c(auStack_40,0x20,0x1f,(char *)&DAT_005d9ac4,uVar8);
    uVar2 = fn_00172c98(iVar3,auStack_40);
    iVar7 = fn_00145b00(0x4c,&DAT_00812c8c);
    piVar4 = (int *)0x0;
    if (iVar7 != 0) {
      piVar4 = (int *)fn_0037d928(iVar7,param_1[1],uVar2,1,param_1[0x12]);
    }
    *(undefined1 *)((int)piVar4 + 0x4b) = 1;
    piVar4[0xc] = iVar6;
    (**(code **)(*piVar4 + 0x10))(piVar4);
    uVar1 = param_1[0x2e] - param_1[0x2d] >> 2;
    if (uVar1 <= uVar8) {
      fn_002ff628(9,&DAT_008c7656,&DAT_008c7656,uVar8,uVar1);
    }
    *(int **)(param_1[0x2d] + uVar8 * 4) = piVar4;
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 8);
  (**(code **)(*param_1 + 0x124))(param_1);
  fn_00688c04(param_1[0x2c],param_1[0x34] - param_1[0x35],0);
  if (local_4c != &DAT_008f9cf4) {
    piVar4 = local_4c + -3;
    iVar3 = *piVar4;
    if ((iVar3 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_4c + -3,local_4c[-2] + 8,0);
    }
  }
  if (local_50 != &DAT_008f9cf4) {
    piVar4 = local_50 + -3;
    iVar3 = *piVar4;
    if ((iVar3 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_50 + -3,local_50[-2] + 8,0);
    }
  }
  if (local_54 != &DAT_008f9cf4) {
    piVar4 = local_54 + -3;
    iVar3 = *piVar4;
    if ((iVar3 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_54 + -3,local_54[-2] + 8,0);
    }
  }
  if (local_58 != &DAT_008f9cf4) {
    piVar4 = local_58 + -3;
    iVar3 = *piVar4;
    if ((iVar3 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_58 + -3,local_58[-2] + 8,0);
    }
  }
  return;
}



void fn_005d33e4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 local_34;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [12];
  
  uVar3 = 0;
  do {
    uVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),
                         *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0xc));
    fn_0020bbc4(auStack_30,uVar1);
    if (((uVar3 < 2) || (uVar3 != 2)) || (iVar2 = fn_006bfffc(auStack_2c), iVar2 == 0)) {
      pcVar4 = (char *)(&DAT_007c6fe8)[uVar3 * 3];
    }
    else {
      pcVar4 = (char *)&DAT_00864c88;
    }
    uVar1 = fn_0022f750(pcVar4);
    fn_0031b78c(param_1,uVar3,0,uVar1);
    iVar2 = fn_005d34e0(param_1,uVar3);
    if (iVar2 == 0) {
      local_34 = DAT_00894618;
    }
    else {
      local_34 = DAT_00894610;
    }
    fn_002c37e0(param_1,uVar3,&local_34);
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 4);
  return;
}



undefined4 fn_005d2b78(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined1 auStack_a0 [12];
  undefined1 auStack_94 [4];
  undefined4 local_90;
  undefined4 local_88;
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [28];
  undefined1 auStack_60 [40];
  undefined1 auStack_38 [32];
  
  puVar4 = *(undefined4 **)(param_1 + 0x18);
  if (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar1 == &DAT_008944cc) goto LAB_005d2bc4;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_005d2bc4:
  *(undefined4 **)(param_1 + 0xe4) = puVar4;
  puVar4 = (undefined4 *)fn_001f74d8(param_1,0x2d);
  if (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar1 == &DAT_008951dc) goto LAB_005d2c08;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_005d2c08:
  *(undefined4 **)(param_1 + 0xe8) = puVar4;
  fn_005d2d78(param_1,auStack_60,0x12);
  iVar5 = *(int *)(*(int *)(param_1 + 0xe4) + 0xc);
  iVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),iVar5);
  fn_0018a618(auStack_38,0x10,0xf,&DAT_005d2d5c,(int)*(short *)(iVar2 + 0x3a));
  fn_00689efc(param_1,0x2d,0);
  if (iVar5 == 0) {
    *(undefined2 *)(*(int *)(param_1 + 0xe8) + 0x1c) = 0;
  }
  else {
    fn_0025f354();
  }
  fn_00397774(&local_bc);
  local_bc = DAT_00894604;
  local_b8 = DAT_00894608;
  uVar3 = fn_0022f750((char *)&DAT_005d2d68);
  fn_00147974(auStack_a0,uVar3);
  local_b4 = 4;
  local_a8 = 4;
  local_b0 = *(undefined4 *)(*(int *)(param_1 + 0xe4) + 8);
  local_90 = 0;
  local_88 = 1;
  fn_00147974(auStack_7c,auStack_60);
  fn_00147974(auStack_80,auStack_38);
  fn_00397618(param_1,&local_bc);
  fn_00100414(auStack_80,&LAB_0059e0e0,8,4);
  iVar2 = fn_001588d4(auStack_94);
  iVar2 = fn_001588d4(iVar2 + -4);
  iVar2 = fn_001588d4(iVar2 + -4);
  fn_001588d4(iVar2 + -4);
  return 1;
}


