#include "006bccf8_006bd4a4.h"



void fn_006bd4a4(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)fn_006f7508(DAT_008977e0);
  uVar2 = (**(code **)(*piVar1 + 0x90))();
  iVar3 = fn_003b2730(uVar2,param_2);
  if (iVar3 == 0) {
    return;
  }
  iVar4 = fn_002e9c90((int)*(short *)(iVar3 + 2));
  if (iVar4 == -1) {
    fn_0066173c((int)*(short *)(iVar3 + 4));
  }
  fn_002cd59c();
  return;
}



void fn_006bd414(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_50 [64];
  
  iVar1 = fn_0017fde4(*(undefined4 *)(param_2 + 0xe4));
  if ((iVar1 != 0) && (iVar2 = fn_00191238(iVar1,param_3), 0 < iVar2)) {
    uVar3 = fn_0016676c(iVar1);
    fn_001781f0(auStack_50,uVar3);
  }
  return;
}



int fn_006bd32c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 4) + 0x648 + iVar2 * 0x10) == 0) {
      return iVar1;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 1;
  } while (iVar2 < 100);
  return iVar1;
}



undefined4 fn_006bd2ac(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x14);
  iVar1 = iVar4;
  iVar2 = *(int *)(iVar4 + 4);
  while (iVar2 != 0) {
    if (*(uint *)(iVar2 + 0x10) < param_2) {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    else {
      iVar1 = iVar2;
      iVar2 = *(int *)(iVar2 + 8);
    }
  }
  if ((iVar1 != iVar4) && (*(uint *)(iVar1 + 0x10) <= param_2)) {
    iVar4 = iVar1;
  }
  if (iVar4 == *(int *)(param_1 + 0x14)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(iVar4 + 0x14);
  }
  return uVar3;
}



undefined4 fn_006bd170(void)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_278 [20];
  undefined1 local_264 [72];
  undefined4 local_21c;
  undefined4 local_218;
  undefined1 local_214 [380];
  undefined1 auStack_98 [98];
  undefined1 auStack_36 [14];
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  char local_22;
  undefined1 local_21 [4];
  undefined1 local_1d;
  
  local_28 = 0x5a;
  local_27 = 0xff;
  local_26 = 1;
  local_25 = 1;
  iVar1 = 0;
  do {
    fn_001003e0(auStack_98 + iVar1 * 0x18,&DAT_008c7328);
    local_21[iVar1] = 0;
    *(undefined4 *)(local_214 + iVar1 * 0x60 + -4) = 0;
    local_214[iVar1 * 0x60] = 0;
    iVar2 = iVar1 + 1;
    iVar1 = iVar1 * 0x12;
    local_264[iVar1] = 0;
    local_264[iVar1 + 6] = 0;
    local_264[iVar1 + 0xc] = 0;
    iVar1 = iVar2;
  } while (iVar2 < 4);
  fn_0011a604(auStack_36);
  local_22 = '\0';
  local_21c = 0;
  local_1d = 0;
  local_24 = 1;
  local_23 = 0;
  fn_0068c6c4(DAT_008977e8,auStack_278);
  fn_00144810(DAT_008977e8);
  iVar1 = fn_006a8694();
  if ((iVar1 == 0) && ('\x02' < local_22)) {
    fn_00144810(DAT_008977e8);
    fn_006a86a0();
    fn_00144810(DAT_008977e8);
                    /* WARNING: Subroutine does not return */
    fn_006a8660();
  }
  return 0;
}



int fn_006bd10c(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + param_2 + 0x10);
  iVar2 = 1;
  if (param_2 == 0) {
LAB_006bd138:
    if (bVar1 < *(byte *)(param_1 + 0x11)) {
      iVar2 = iVar2 + 1;
    }
    if (param_2 == 2) goto LAB_006bd160;
  }
  else {
    if (bVar1 < *(byte *)(param_1 + 0x10)) {
      iVar2 = 2;
    }
    if (param_2 != 1) goto LAB_006bd138;
  }
  if (bVar1 < *(byte *)(param_1 + 0x12)) {
    iVar2 = iVar2 + 1;
  }
  if (param_2 == 3) {
    return iVar2;
  }
LAB_006bd160:
  if (bVar1 < *(byte *)(param_1 + 0x13)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}



void fn_006bd084(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  uVar4 = *(undefined4 *)(param_1 + 0x34);
  *param_2 = *(undefined4 *)(param_1 + 0x24);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  param_2[4] = uVar4;
  return;
}



bool fn_006bcf84(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  int iStack_2c;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar6 = *(undefined4 *)(DAT_00897804 + 0x4c);
  iVar2 = fn_006be9cc(uVar6);
  bVar1 = false;
  if (iVar2 != 0) {
    iVar2 = fn_006bea90(uVar6);
    bVar1 = false;
    if (iVar2 != 0) {
      fn_002eb72c(&local_40);
      local_20 = local_40;
      uStack_1c = local_3c;
      uVar3 = fn_0011a314(&local_20);
      uVar4 = fn_0011a3c4(&local_20);
      uVar5 = fn_0011a36c(&local_20);
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      fn_001142a8(&local_30,uVar5,uVar4,uVar3);
      uVar3 = fn_006beab4(uVar6);
      uVar4 = fn_006beb64(uVar6);
      uVar6 = fn_006beb0c(uVar6);
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      fn_001142a8(&local_28,uVar6,uVar4,uVar3);
      bVar1 = (int)(iStack_24 - (iStack_2c + (uint)(local_28 < local_30))) < 0 ==
              (SBORROW4(iStack_24,iStack_2c) !=
              SBORROW4(iStack_24 - iStack_2c,(uint)(local_28 < local_30)));
    }
  }
  return bVar1;
}



undefined4 fn_006bcde8(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  uint local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  int iStack_34;
  int local_30;
  int local_2c;
  int local_28;
  int iStack_24;
  undefined1 auStack_20 [12];
  
  uVar6 = *(undefined4 *)(DAT_00897804 + 0x4c);
  iVar1 = fn_006be9cc(uVar6);
  if (iVar1 != 0) {
    fn_001237e4(&local_48);
    local_38 = local_48;
    iStack_34 = local_44;
    lVar7 = fn_006be9c0(uVar6);
    local_48 = 0x1a;
    lVar8 = fn_00129f6c(&local_38,(int)((ulonglong)lVar7 >> 0x20),0x26d694b3,0x112e0be8);
    if (lVar7 != lVar8) {
      uVar9 = fn_006be9c0(uVar6);
      lVar7 = (uVar9 & 0xffffffff) * 1000000000;
      uVar2 = (uint)lVar7;
      local_30 = local_38 - uVar2;
      local_2c = iStack_34 -
                 ((int)(uVar9 >> 0x20) * 1000000000 + (int)((ulonglong)lVar7 >> 0x20) +
                 (uint)(local_38 < uVar2));
      uVar2 = *(uint *)(param_1 + 8);
      iVar1 = *(int *)(param_1 + 0xc);
      local_48 = 0x12;
      uVar10 = fn_00129f6c(&local_30,0x12,0xd7b634db,0x431bde82);
      local_28 = uVar2 - (uint)uVar10;
      iStack_24 = iVar1 - ((int)((ulonglong)uVar10 >> 0x20) + (uint)(uVar2 < (uint)uVar10));
      uVar3 = fn_006beb18(uVar6);
      uVar4 = fn_006beb70(uVar6);
      uVar6 = fn_006beac0(uVar6);
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      fn_001142a8(auStack_20,uVar3,uVar4,uVar6);
      iVar1 = fn_0011a36c(&local_28);
      iVar5 = fn_0011a36c(auStack_20);
      if (iVar1 == iVar5) {
        iVar1 = fn_0011a3c4(&local_28);
        iVar5 = fn_0011a3c4(auStack_20);
        if (iVar1 == iVar5) {
          iVar1 = fn_0011a314(&local_28);
          iVar5 = fn_0011a314(auStack_20);
          if (iVar1 == iVar5) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



undefined4 fn_006bccf8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_20 [12];
  
  uVar5 = *(undefined4 *)(DAT_00897804 + 0x4c);
  iVar1 = fn_006bebbc(uVar5,*(undefined1 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    uVar2 = fn_006bea48(uVar5,*(undefined1 *)(param_1 + 0x10));
    uVar3 = fn_006bea6c(uVar5,*(undefined1 *)(param_1 + 0x10));
    uVar5 = fn_006bea24(uVar5,*(undefined1 *)(param_1 + 0x10));
    fn_001142a8(auStack_20,uVar2,uVar3,uVar5,0,0,0,0);
    param_1 = param_1 + 8;
    iVar1 = fn_0011a36c(param_1);
    iVar4 = fn_0011a36c(auStack_20);
    if (iVar1 == iVar4) {
      iVar1 = fn_0011a3c4(param_1);
      iVar4 = fn_0011a3c4(auStack_20);
      if (iVar1 == iVar4) {
        iVar1 = fn_0011a314(param_1);
        iVar4 = fn_0011a314(auStack_20);
        if (iVar1 == iVar4) {
          return 1;
        }
      }
    }
  }
  return 0;
}


