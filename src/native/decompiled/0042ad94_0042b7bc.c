#include "0042ad94_0042b7bc.h"



void fn_0042b788(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x114,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0042b7bc(iVar1,param_1);
  return;
}



void fn_0042b7bc(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0043d350(param_1,param_2,(char *)&DAT_0042b7e8,0xf1);
  *puVar1 = &DAT_0083b8d8;
  *(undefined1 *)(puVar1 + 0x41) = 0;
  puVar1[0x43] = 0;
  puVar1[0x44] = 0;
  return;
}



void fn_0042b720(void)

{
                    /* WARNING: Subroutine does not return */
  fn_002c3de4();
}



void fn_0042b678(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [12];
  
  puVar1 = (undefined4 *)fn_001f74ec(param_2,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00892ee4) goto LAB_0042b6d0;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0042b6d0:
  if (param_3 == 0) {
    uVar3 = fn_0057dd9c(puVar1);
    fn_00168a24(param_1,uVar3,auStack_28);
    return;
  }
  fn_00168a24(param_1,&LAB_0042b718,auStack_24);
  return;
}



int fn_0042b614(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00892ee4) goto LAB_0042b658;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0042b658:
  pcVar3 = (char *)fn_006e7ac8(puVar1);
  iVar4 = (int)*pcVar3;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  return iVar4;
}



undefined4 fn_0042b538(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = fn_0043cd80();
  fn_00689efc(param_1,0xf5,0);
  puVar2 = (undefined4 *)fn_001f74ec(param_1,0xf1);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00894eb0) goto LAB_0042b5a0;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_0042b5a0:
  puVar3 = (undefined4 *)fn_001f74ec(param_1,0xe7);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_00892ee4) goto LAB_0042b5e0;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_0042b5e0:
  puVar3[6] = 0;
  fn_0057dd88(puVar3);
  fn_0023520c(puVar3[2],puVar2[2]);
  return uVar1;
}



void fn_0042ad94(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  int iVar11;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  fn_002e69f8();
  uStack_38 = 0x20000;
  uStack_34 = 0;
  uStack_30 = 0x10002;
  uStack_2c = 0x20001;
  uStack_28 = 0;
  uStack_24 = 0x20000;
  uStack_20 = 0x10001;
  puVar3 = (undefined4 *)fn_001f74ec(param_1,0xe7);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_00892ee4) goto LAB_0042ae08;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_0042ae08:
  pcVar5 = (char *)fn_006e7ac8(puVar3);
  iVar11 = (int)*pcVar5;
  if ((*(int *)(param_1 + 0x9c) == iVar11) && (iVar6 = fn_0057dd88(puVar3), iVar6 == 0)) {
    return;
  }
  if (iVar11 < 0) {
    iVar6 = fn_001828f0(*(undefined4 *)(param_1 + 0x74),"Null_left");
    *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe;
    iVar6 = fn_001828f0(*(undefined4 *)(param_1 + 0x74),"Null_right");
    *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe;
    goto LAB_0042b46c;
  }
  iVar6 = fn_001828f0(*(undefined4 *)(param_1 + 0x74),"Null_left");
  *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe | 1;
  iVar6 = fn_001828f0(*(undefined4 *)(param_1 + 0x74),"Null_right");
  *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe | 1;
  if (iVar11 == 2) {
    iVar6 = fn_006e7ac8(puVar3);
    cVar1 = *(char *)(iVar6 + 1);
    if (cVar1 == '\0') {
      puVar7 = (undefined1 *)fn_0022f750("time90");
    }
    else if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
      puVar7 = (undefined1 *)fn_0022f750();
    }
    else {
      puVar7 = &LAB_0042aac8;
    }
    uVar8 = fn_001827b0(*(undefined4 *)(param_1 + 0x74),"tb_time_01");
    fn_00190d50(uVar8,puVar7);
    iVar6 = fn_006e7ac8(puVar3);
    cVar1 = *(char *)(iVar6 + 2);
    if (cVar1 == '\0') {
      puVar7 = (undefined1 *)fn_0022f750("point20");
    }
    else if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
      puVar7 = (undefined1 *)fn_0022f750();
    }
    else {
      puVar7 = &LAB_0042aac8;
    }
    uVar8 = fn_001827b0(*(undefined4 *)(param_1 + 0x74),"tb_point_01");
    fn_00190d50(uVar8,puVar7);
    iVar6 = fn_006e7ac8(puVar3);
    cVar1 = *(char *)(iVar6 + 3);
    if (cVar1 == '\0') {
      puVar7 = (undefined1 *)fn_0022f750("normal");
    }
    else if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
      puVar7 = (undefined1 *)fn_0022f750();
    }
    else {
      puVar7 = &LAB_0042aac8;
    }
    uVar8 = fn_001827b0(*(undefined4 *)(param_1 + 0x74),"tb_bomb_01");
    fn_00190d50(uVar8,puVar7);
    iVar6 = fn_006e7ac8(puVar3);
    cVar1 = *(char *)(iVar6 + 4);
    if (cVar1 == '\0') {
      puVar7 = (undefined1 *)fn_0022f750("normal");
    }
    else if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
      puVar7 = (undefined1 *)fn_0022f750();
    }
    else {
      puVar7 = &LAB_0042aac8;
    }
    uVar8 = fn_001827b0(*(undefined4 *)(param_1 + 0x74),"tb_item_01");
    fn_00190d50(uVar8,puVar7);
    iVar6 = fn_006e7ac8(puVar3);
    cVar1 = *(char *)(iVar6 + 5);
    if (cVar1 == '\0') {
      puVar7 = (undefined1 *)fn_0022f750("playernum2");
    }
    else if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
      puVar7 = (undefined1 *)fn_0022f750();
    }
    else {
      puVar7 = &LAB_0042aac8;
    }
    uVar8 = fn_001827b0(*(undefined4 *)(param_1 + 0x74),"tb_play_num_01");
    fn_00190d50(uVar8,puVar7);
    iVar6 = fn_006e7ac8(puVar3);
    cVar1 = *(char *)(iVar6 + 6);
    if (cVar1 == '\0') {
      puVar7 = (undefined1 *)fn_0022f750(&DAT_0042ab78);
    }
    else if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
      puVar7 = (undefined1 *)fn_0022f750();
    }
    else {
      puVar7 = &LAB_0042aac8;
    }
    uVar8 = fn_001827b0(*(undefined4 *)(param_1 + 0x74),"tb_com_01");
    fn_00190d50(uVar8,puVar7);
    iVar6 = fn_006e7ac8(puVar3);
    if (*(char *)(iVar6 + 7) == '\0') goto LAB_0042b418;
    if (*(char *)(iVar6 + 7) != '\x01') goto LAB_0042b238;
LAB_0042b420:
    puVar10 = &DAT_0042ad58;
LAB_0042b2e8:
    puVar7 = (undefined1 *)fn_0022f750(puVar10);
  }
  else {
    iVar6 = iVar11 * 0xe;
    sVar2 = *(short *)((int)&uStack_38 + iVar6);
    if (sVar2 == 0) {
      puVar7 = (undefined1 *)fn_0022f750("time90");
    }
    else if ((sVar2 == 1) || (sVar2 == 2)) {
      puVar7 = (undefined1 *)fn_0022f750();
    }
    else {
      puVar7 = &LAB_0042aac8;
    }
    uVar8 = fn_001827b0(*(undefined4 *)(param_1 + 0x74),"tb_time_01");
    fn_00190d50(uVar8,puVar7);
    sVar2 = *(short *)((int)&uStack_38 + iVar6 + 2);
    if (sVar2 == 0) {
      puVar7 = (undefined1 *)fn_0022f750("point20");
    }
    else if ((sVar2 == 1) || (sVar2 == 2)) {
      puVar7 = (undefined1 *)fn_0022f750();
    }
    else {
      puVar7 = &LAB_0042aac8;
    }
    uVar8 = fn_001827b0(*(undefined4 *)(param_1 + 0x74),"tb_point_01");
    fn_00190d50(uVar8,puVar7);
    sVar2 = *(short *)((int)&uStack_34 + iVar6);
    if (sVar2 == 0) {
      puVar7 = (undefined1 *)fn_0022f750("normal");
    }
    else if ((sVar2 == 1) || (sVar2 == 2)) {
      puVar7 = (undefined1 *)fn_0022f750();
    }
    else {
      puVar7 = &LAB_0042aac8;
    }
    uVar8 = fn_001827b0(*(undefined4 *)(param_1 + 0x74),"tb_bomb_01");
    fn_00190d50(uVar8,puVar7);
    sVar2 = *(short *)((int)&uStack_34 + iVar6 + 2);
    if (sVar2 == 0) {
      puVar7 = (undefined1 *)fn_0022f750("normal");
    }
    else if ((sVar2 == 1) || (sVar2 == 2)) {
      puVar7 = (undefined1 *)fn_0022f750();
    }
    else {
      puVar7 = &LAB_0042aac8;
    }
    uVar8 = fn_001827b0(*(undefined4 *)(param_1 + 0x74),"tb_item_01");
    fn_00190d50(uVar8,puVar7);
    sVar2 = *(short *)((int)&uStack_30 + iVar6);
    if (sVar2 == 0) {
      puVar7 = (undefined1 *)fn_0022f750("playernum2");
    }
    else if ((sVar2 == 1) || (sVar2 == 2)) {
      puVar7 = (undefined1 *)fn_0022f750();
    }
    else {
      puVar7 = &LAB_0042aac8;
    }
    uVar8 = fn_001827b0(*(undefined4 *)(param_1 + 0x74),"tb_play_num_01");
    fn_00190d50(uVar8,puVar7);
    sVar2 = *(short *)((int)&uStack_30 + iVar6 + 2);
    if (sVar2 == 0) {
      puVar7 = (undefined1 *)fn_0022f750(&DAT_0042ab78);
    }
    else if ((sVar2 == 1) || (sVar2 == 2)) {
      puVar7 = (undefined1 *)fn_0022f750();
    }
    else {
      puVar7 = &LAB_0042aac8;
    }
    uVar8 = fn_001827b0(*(undefined4 *)(param_1 + 0x74),"tb_com_01");
    fn_00190d50(uVar8,puVar7);
    if (*(short *)((int)&uStack_2c + iVar6) == 0) {
LAB_0042b418:
      puVar10 = &LAB_0042ad5c;
      goto LAB_0042b2e8;
    }
    if (*(short *)((int)&uStack_2c + iVar6) == 1) goto LAB_0042b420;
LAB_0042b238:
    puVar7 = &LAB_0042aac8;
  }
  uVar8 = fn_001827b0(*(undefined4 *)(param_1 + 0x74),"tb_happening_01");
  fn_00190d50(uVar8,puVar7);
  iVar6 = fn_0057dcdc(puVar3);
  if (*(int *)(iVar6 + 8) == -1) {
    uVar8 = fn_0022f584("MenuMessageCommonHyphen",0);
  }
  else {
    iStack_1c = iVar6;
    uVar8 = fn_006b2dec();
  }
  uVar9 = fn_001827b0(*(undefined4 *)(param_1 + 0x74),&DAT_0042aabc);
  fn_00190d50(uVar9,uVar8);
LAB_0042b46c:
  *(int *)(param_1 + 0x9c) = iVar11;
  return;
}


