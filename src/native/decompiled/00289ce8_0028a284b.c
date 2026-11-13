#include "00289ce8_0028a284b.h"



undefined4 fn_0028a284(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [28];
  undefined4 local_68;
  undefined4 uStack_64;
  int local_60;
  int local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined1 auStack_40 [32];
  
  iVar2 = DAT_00897804;
  if (DAT_00897804 == 0) {
LAB_0028a38c:
    bVar1 = false;
  }
  else {
    fn_00301a9c(auStack_88,&DAT_0088fcb8,0x20);
    local_68 = **(undefined4 **)(*(int *)(iVar2 + 0xc) + 4);
    uStack_64 = 0;
    local_60 = (int)*(short *)(*(int *)(*(int *)(iVar2 + 0x14) + 4) + 0x60);
    local_5c = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 0x14) + 4) + 0x86);
    uStack_58 = 0;
    local_54 = 0;
    local_50 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x26c);
    local_4c = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x26e);
    local_48 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x270);
    local_44 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x272);
    fn_0013ef80(auStack_40,auStack_88,0x48);
    iVar2 = fn_001010c8(auStack_40,*(undefined4 *)(*(int *)(DAT_00897804 + 0x60) + 4),0x20);
    if (iVar2 == 0) goto LAB_0028a38c;
    bVar1 = true;
  }
  puVar3 = (undefined4 *)fn_0077f1f8(*(int *)(param_1 + 4) + 0x2c,500);
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  uVar5 = *puVar3;
  fn_0017821c(puVar3,param_2,0xf0);
  *puVar3 = uVar5;
  fn_0020bbc4(auStack_88,puVar3);
  iVar2 = fn_006bf240(auStack_84);
  if (0 < iVar2) {
    fn_00144834(0x204,1);
  }
  iVar2 = fn_006bfe90(auStack_84);
  if (iVar2 == 2) {
    fn_00144834(0x216,1);
  }
  else {
    if (iVar2 == 3) {
      uVar4 = 0x217;
    }
    else {
      if (iVar2 != 4) goto LAB_0028a444;
      uVar4 = 0x218;
    }
    fn_00144834(uVar4,1);
  }
LAB_0028a444:
  iVar2 = fn_006bffec(auStack_84);
  if (iVar2 != 0) {
    fn_00144834(0x22d);
    fn_00144834(0x22e,1);
  }
  fn_00289ce8(*(undefined4 *)(DAT_00897804 + 0x24),puVar3);
  iVar2 = DAT_00897804;
  if ((!bVar1) && (DAT_00897804 != 0)) {
    fn_00301a9c(auStack_88,&DAT_0088fcb8,0x20);
    local_68 = **(undefined4 **)(*(int *)(iVar2 + 0xc) + 4);
    uStack_64 = 0;
    local_60 = (int)*(short *)(*(int *)(*(int *)(iVar2 + 0x14) + 4) + 0x60);
    local_5c = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 0x14) + 4) + 0x86);
    uStack_58 = 0;
    local_54 = 0;
    local_50 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x26c);
    local_4c = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x26e);
    local_48 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x270);
    local_44 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x272);
    fn_0013ef80(auStack_40,auStack_88,0x48);
    fn_00122c48(*(undefined4 *)(DAT_00897804 + 0x60),auStack_40);
  }
  return uVar5;
}



undefined1 * fn_00289f30(undefined4 param_1)

{
  undefined *local_18;
  undefined4 local_14;
  undefined1 auStack_10 [4];
  undefined4 local_c;
  
  fn_0020bbc4(auStack_10);
  local_14 = local_c;
  local_18 = &DAT_0081c498;
  fn_00289f80(param_1,&local_18,0);
  return auStack_10;
}



void fn_00289f80(int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  short *psVar5;
  uint uVar6;
  short sVar7;
  int iVar8;
  short local_1c8 [112];
  short local_e8 [76];
  short local_50 [16];
  int iStack_30;
  int iStack_2c;
  int local_28;
  
  local_50[0] = 0;
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  local_50[4] = 0;
  local_50[5] = 0;
  local_50[6] = 0;
  local_50[7] = 0;
  local_50[8] = 0;
  local_50[9] = 0;
  local_50[10] = 0;
  local_50[0xb] = 0;
  local_50[0xc] = 0;
  local_50[0xd] = 0;
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_2 + 4;
  }
  iStack_30 = param_1;
  iStack_2c = param_2;
  local_28 = param_3;
  iVar2 = fn_006c02d4(iVar2,local_50,7);
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      uVar6 = (uint)local_50[iVar3 * 2];
      sVar7 = local_50[iVar3 * 2 + 1];
      iVar8 = *(int *)(param_1 + 4) + 0x298;
      iVar3 = iVar3 + 1;
      *(uint *)(iVar8 + (uVar6 >> 5) * 4) =
           *(uint *)(iVar8 + (uVar6 >> 5) * 4) | 1 << (uVar6 & 0x1f);
      iVar8 = uVar6 * 2 + 0x2e8;
      sVar1 = *(short *)(*(int *)(param_1 + 4) + iVar8);
      if (sVar7 < sVar1) {
        sVar7 = sVar1;
      }
      *(short *)(*(int *)(param_1 + 4) + iVar8) = sVar7;
    } while (iVar3 < iVar2);
  }
  uVar4 = fn_00154ac8(0x19);
  fn_00301f50(local_e8,0x98);
  iVar2 = 0;
  if (local_28 == 0) {
    if (param_2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_2 + 4;
    }
    iVar2 = fn_006bf5ec(iVar2,local_e8,0x4c,1,1,0,uVar4,1);
  }
  else {
    if (param_2 != 0) {
      iVar2 = param_2 + 4;
    }
    iVar2 = fn_006bf5ec(iVar2,local_e8,0x4c,0,0,0,uVar4,1);
  }
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      psVar5 = local_e8 + iVar3;
      iVar3 = iVar3 + 1;
      iVar8 = *(int *)(param_1 + 4) + 0x7c0;
      uVar6 = (uint)(int)*psVar5 >> 5;
      *(uint *)(iVar8 + uVar6 * 4) = *(uint *)(iVar8 + uVar6 * 4) | 1 << ((int)*psVar5 & 0x1fU);
    } while (iVar3 < iVar2);
  }
  fn_00301f50(local_1c8,0xdc);
  if (local_28 == 0) {
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = param_2 + 4;
    }
    iVar2 = fn_006c0354(param_2,local_1c8,0x6e,1,1,0);
  }
  else {
    if (param_2 != 0) {
      param_2 = param_2 + 4;
    }
    iVar2 = fn_006c0354(param_2,local_1c8,0x6e,0,0,0);
  }
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      psVar5 = local_1c8 + iVar3;
      iVar3 = iVar3 + 1;
      uVar6 = (uint)(int)*psVar5 >> 5;
      iVar8 = *(int *)(param_1 + 4) + 0x804;
      *(uint *)(iVar8 + uVar6 * 4) = *(uint *)(iVar8 + uVar6 * 4) | 1 << ((int)*psVar5 & 0x1fU);
    } while (iVar3 < iVar2);
  }
  return;
}



void fn_00289f08(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + 0x804;
  *(uint *)(iVar1 + (param_2 >> 5) * 4) =
       *(uint *)(iVar1 + (param_2 >> 5) * 4) | 1 << (param_2 & 0x1f);
  return;
}



void fn_00289ec0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4) + 0x298;
  *(uint *)(iVar2 + (param_2 >> 5) * 4) =
       *(uint *)(iVar2 + (param_2 >> 5) * 4) | 1 << (param_2 & 0x1f);
  iVar1 = param_2 * 2 + 0x2e8;
  iVar2 = (int)*(short *)(*(int *)(param_1 + 4) + iVar1);
  if (param_3 < iVar2) {
    param_3 = iVar2;
  }
  *(short *)(*(int *)(param_1 + 4) + iVar1) = (short)param_3;
  return;
}



void fn_00289e9c(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + 0x180;
  *(uint *)(iVar1 + (param_2 >> 5) * 4) =
       *(uint *)(iVar1 + (param_2 >> 5) * 4) | 1 << (param_2 & 0x1f);
  return;
}


