#include "00760b2c_007617a8.h"



void fn_00761740(int param_1)

{
  fn_0040f564(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x3c),2);
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
  fn_0074804c(param_1,DAT_00898214,s_MenuMessageWirelessBattle0010_008c644a);
  *(undefined4 *)(param_1 + 0xe4) = 6;
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_00761680(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = fn_0028eac8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x18) + 0xc),0x48,param_3,
                       param_4,param_4);
  if (iVar1 != 0) {
    uVar2 = fn_006f6a38();
    iVar1 = fn_0028eac8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x18) + 0xc),0x48);
    if ((*(char *)(iVar1 + 0xc) == '\x03') && ((uVar2 & 0x20000) != 0)) goto LAB_007616f8;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x9c) + 0xa8))();
  if (iVar1 < 0) {
    return;
  }
LAB_007616f8:
  *(undefined4 *)(param_1 + 0xe4) = 0;
  fn_0068993c(param_1,param_2,param_3,0);
  fn_00689bd0(param_1,0,0);
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_00761144(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_002cd348(param_1[0x43]);
  iVar1 = fn_002cc950(param_1[0x43]);
  if (iVar1 != 0) {
    uVar2 = fn_002cc950();
    fn_00747f28(param_1,DAT_00898214,uVar2,0,1,1,0);
    fn_002ccba8(param_1[0x43]);
    return;
  }
  iVar1 = fn_002cd334(param_1[0x43]);
  if ((iVar1 != 0) && (*(char *)((int)param_1 + 0x115) == '\0')) {
    *(undefined1 *)(param_1[0x17] + 0x31) = 0;
    fn_0074804c(param_1,DAT_00898214,s_MenuMessageWirelessBattle0018_008c642c);
    *(undefined1 *)((int)param_1 + 0x115) = 1;
    return;
  }
  if ((*(char *)((int)param_1 + 0x115) == '\x01') &&
     (iVar1 = (**(code **)(*param_1 + 0x1b4))(param_1), iVar1 != 0)) {
    *(undefined1 *)((int)param_1 + 0x115) = 0;
    param_1[0x39] = 8;
  }
  return;
}



void fn_007610b4(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1[0x3a];
  if ((uint)(param_1[0x30] - param_1[0x2f] >> 4) <= uVar1) {
    fn_002ff628(9,&DAT_008c7624,&DAT_008c7624,uVar1);
  }
  uVar2 = *(undefined4 *)(param_1[0x2f] + uVar1 * 0x10 + 8);
  fn_006899f4(param_1,uVar2,1);
  (**(code **)(*param_1 + 0x13c))(param_1,uVar2);
  param_1[0x39] = 1;
  fn_0068ab44(param_1,0x100094b);
  return;
}



undefined4 fn_00761074(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00251a3c(*(undefined4 *)(param_1 + 0x110));
  if (iVar1 == 0) {
    fn_00251a50(*(undefined4 *)(param_1 + 0x110));
    return 0;
  }
  fn_007617a8(param_1,*(undefined4 *)(param_1 + 0xd4));
  return 1;
}



void fn_007617a8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_1ab0 [1784];
  undefined1 auStack_13b8 [240];
  int local_12c8 [60];
  undefined1 auStack_11d8 [336];
  undefined1 auStack_1088 [960];
  undefined1 local_cc8;
  undefined1 auStack_cc4 [964];
  undefined1 auStack_900 [2264];
  
  fn_00290734(auStack_900);
  fn_005db3a4(*(undefined4 *)(param_1 + 0xf4),auStack_900);
  fn_0017821c(auStack_1ab0,*(int *)(param_1 + 0xf0) + 0x14,0x8d8);
  fn_0017821c(auStack_11d8,auStack_1ab0,0x8d8);
  iVar3 = 0;
  do {
    fn_0037047c(local_12c8,*(undefined4 *)(*(int *)(param_1 + 0xf0) + 0x10),iVar3);
    fn_0017821c(auStack_1088 + iVar3 * 0xf0,local_12c8,0xf0);
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0xf0) + 0x10);
    fn_0037047c(auStack_13b8,uVar2,iVar3);
    fn_0017821c(local_12c8,auStack_13b8,0xf0);
    iVar1 = fn_003705c4(uVar2);
    if (iVar1 == local_12c8[0]) {
      local_cc8 = (undefined1)iVar3;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  iVar3 = 0;
  do {
    fn_003704e8(local_12c8,*(undefined4 *)(*(int *)(param_1 + 0xf0) + 0x10),iVar3);
    fn_0017821c(auStack_cc4 + iVar3 * 0xf0,local_12c8,0xf0);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  fn_005db3d0(*(undefined4 *)(param_1 + 0xf4),auStack_11d8);
  *(undefined1 *)(*(int *)(param_1 + 0xf4) + 0xb) = 0;
  fn_0068993c(param_1,0xd8,param_2,0,0);
  return;
}



void fn_00761018(int param_1)

{
  if (*(int *)(param_1 + 0xb0) == 0) {
    fn_00689878(param_1,0);
  }
  fn_006899f4(param_1,*(undefined4 *)(param_1 + 0xb0),1);
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x31) = 0;
  fn_00689bd0(param_1,0,0,0);
  *(undefined4 *)(param_1 + 0xe4) = 0xc;
  return;
}



void fn_00760fdc(int param_1)

{
  fn_005f6270(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x44));
  fn_005f6270(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x48));
  if (*(int *)(param_1 + 0x108) == 0) {
    return;
  }
  fn_005f6270();
  return;
}



void fn_00760fb4(int param_1)

{
  fn_00251df0(*(undefined4 *)(param_1 + 0x110),0);
  *(undefined4 *)(param_1 + 0xe4) = 9;
  return;
}



undefined4 fn_00760b2c(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  byte bVar7;
  undefined4 *puVar8;
  bool bVar9;
  int *piVar10;
  undefined4 local_5e0;
  undefined4 local_5dc;
  undefined4 local_5d8;
  undefined4 local_5d4;
  undefined4 local_5d0;
  undefined2 local_5cc;
  undefined1 auStack_5c8 [96];
  undefined1 auStack_568 [1352];
  
  bVar9 = false;
  puVar8 = (undefined4 *)param_1[6];
  if (puVar8 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar8)(puVar8);
    do {
      if (puVar1 == &DAT_008964a0) goto LAB_00760b7c;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar8 = (undefined4 *)0x0;
LAB_00760b7c:
  param_1[0x3c] = (int)puVar8;
  (**(code **)(*param_1 + 0x1c8))(param_1);
  puVar8 = (undefined4 *)0x0;
  bVar7 = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  do {
    iVar2 = fn_005db460(param_1[0x3c],bVar7);
    if (iVar2 != 0) {
      *(byte *)((int)param_1 + *(byte *)(param_1 + 0x36) + 0xd9) = bVar7;
      *(char *)(param_1 + 0x36) = (char)param_1[0x36] + '\x01';
      if (bVar7 == 7) {
        *(undefined1 *)(param_1 + 0x45) = 1;
      }
      else if (bVar7 == 4) {
        bVar9 = true;
      }
    }
    bVar7 = bVar7 + 1;
  } while (bVar7 < 8);
  uVar3 = fn_0043c608(param_1);
  puVar1 = (undefined4 *)fn_00689c1c(param_1,0x80);
  if (puVar1 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar4 == &DAT_008964f4) goto LAB_00760c3c;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00760c3c:
  param_1[0x3f] = (int)puVar1;
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xd8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar4 == &DAT_00896444) goto LAB_00760c80;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00760c80:
  param_1[0x3d] = (int)puVar1;
  *(undefined1 *)(param_1[0x17] + 0x31) = 0;
  puVar1 = (undefined4 *)param_1[1];
  if (puVar1 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar4 == &DAT_008963ac) goto LAB_00760cc8;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00760cc8:
  param_1[0x40] = (int)puVar1;
  fn_0040f564(puVar1[0xf],0);
  puVar1 = *(undefined4 **)(*(int *)(param_1[0x40] + 0x3c) + 8);
  if (bVar9) {
    *(undefined1 *)puVar1 = 6;
    iVar2 = fn_0023c2a8();
    fn_0020bfc0(auStack_5c8);
    fn_0023cff0(iVar2 + 0x30,auStack_5c8);
    fn_0037cb88(puVar1,auStack_568);
  }
  iVar2 = fn_00145b00(0x9c,&DAT_00812c8c);
  if (iVar2 == 0) {
    piVar10 = (int *)0x0;
  }
  else {
    puVar4 = (undefined4 *)fn_005f62c0();
    puVar4[8] = &DAT_00859420;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    *puVar4 = &DAT_00859b38;
    iVar2 = fn_00119b40(puVar4 + 0x10);
    piVar10 = (int *)(iVar2 + -0x40);
    fn_0066ddbc();
    fn_002fec40(iVar2 + 0x18,s_TaskEndMatchmake_008c6e09);
    *piVar10 = (int)&DAT_00859e00;
    fn_00673818(piVar10);
  }
  piVar5 = (int *)param_1[0x42];
  if (piVar5 != piVar10) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))();
    }
    param_1[0x42] = (int)piVar10;
  }
  iVar2 = fn_00145b00(0x60,&DAT_00812c8c);
  if (iVar2 == 0) {
    piVar10 = (int *)0x0;
  }
  else {
    local_5e0 = *puVar1;
    local_5dc = puVar1[1];
    local_5d8 = puVar1[2];
    local_5d4 = puVar1[3];
    local_5d0 = puVar1[4];
    local_5cc = *(undefined2 *)(puVar1 + 5);
    piVar10 = (int *)fn_002cd364(iVar2,&local_5e0);
  }
  piVar5 = (int *)param_1[0x43];
  if (piVar5 != piVar10) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))();
    }
    param_1[0x43] = (int)piVar10;
  }
  iVar6 = fn_00145b00(0x78c8,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar6 != 0) {
    iVar2 = fn_00251e64(iVar6,*(undefined4 *)(*(int *)(param_1[0x40] + 0x3c) + 4),
                         *(undefined4 *)(param_1[0x3c] + 0x10));
  }
  iVar6 = param_1[0x44];
  if (iVar6 != iVar2) {
    if (iVar6 != 0) {
      fn_00251ec8(iVar6);
      fn_002feef8();
    }
    param_1[0x44] = iVar2;
  }
  iVar2 = fn_006c41e4(puVar1);
  if (iVar2 == 2) {
    iVar2 = 0x3a;
    iVar6 = 0x3d;
  }
  else {
    iVar2 = 0x39;
    iVar6 = 0x3c;
  }
  param_1[0x35] = iVar2;
  param_1[0x34] = iVar6;
  if (*(char *)(param_1[0x3c] + 0x8ed) != '\0') {
    puVar1 = (undefined4 *)fn_001f74d8(param_1);
    if (puVar1 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)(**(code **)*puVar1)(puVar1);
      do {
        if (puVar4 == &DAT_00894d28) {
          puVar8 = puVar1;
          break;
        }
        puVar4 = (undefined4 *)*puVar4;
      } while (puVar4 != (undefined4 *)0x0);
    }
    param_1[0x3e] = (int)puVar8;
  }
  fn_00689efc(param_1,param_1[0x35],0);
  fn_0028ab20(*(undefined4 *)(DAT_00897804 + 0xc));
  return uVar3;
}


