#include "00591a94_0059403c.h"



undefined4 fn_0059403c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  wchar16 *local_48;
  char *pcStack_44;
  int local_40;
  undefined4 local_3c;
  int local_34;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  
  fn_002c330c(&local_48);
  local_48 = L"rom:/data/Layout/common/common_0100.arc";
  pcStack_44 = (char *)&DAT_0059423c;
  iVar1 = fn_002f5cf0(param_1);
  if (iVar1 == 0) {
    local_40 = 2;
  }
  else {
    local_40 = 3;
  }
  local_34 = local_40;
  local_3c = fn_002f70cc(param_1);
  uVar2 = fn_0022f750((char *)&DAT_00594250);
  fn_00147974(&local_2c,uVar2);
  local_1c = 0;
  local_1b = 0;
  uVar2 = fn_002c29a0(param_1,&local_48);
  iVar1 = 0;
  if (0 < local_34) {
    do {
      iVar3 = fn_002f8914();
      uVar4 = fn_0022f750(*(undefined4 *)((&PTR_PTR_007ca034)[iVar3] + iVar1 * 4));
      fn_0031b78c(param_1,iVar1,0,uVar4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_34);
  }
  (**(code **)(*param_1 + 0x120))(param_1,local_3c);
  if (local_20 != &DAT_008f9cf4) {
    piVar5 = local_20 + -3;
    iVar1 = *piVar5;
    if ((iVar1 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_20 + -3,local_20[-2] + 8,0);
    }
  }
  if (local_24 != &DAT_008f9cf4) {
    piVar5 = local_24 + -3;
    iVar1 = *piVar5;
    if ((iVar1 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_24 + -3,local_24[-2] + 8,0);
    }
  }
  if (local_28 != &DAT_008f9cf4) {
    piVar5 = local_28 + -3;
    iVar1 = *piVar5;
    if ((iVar1 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_28 + -3,local_28[-2] + 8,0);
    }
  }
  if (local_2c != &DAT_008f9cf4) {
    piVar5 = local_2c + -3;
    iVar1 = *piVar5;
    if ((iVar1 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_2c + -3,local_2c[-2] + 8,0);
    }
  }
  return uVar2;
}



void fn_00593d30(int param_1)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  cVar1 = *(char *)(param_1 + 0xa4);
  cVar2 = *(char *)(param_1 + 0xa6);
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
  *(char *)(param_1 + 0xa5) = cVar1;
  *(char *)(param_1 + 0xa4) = cVar2;
  if (cVar1 == cVar2) {
    iVar4 = *(int *)(param_1 + 0xac) + 1;
  }
  else {
    iVar4 = 0;
  }
  *(int *)(param_1 + 0xac) = iVar4;
  if ((cVar2 != '\x01') && (cVar2 == '\x02')) {
    if (iVar4 == 0) {
      piVar3 = (int *)fn_002b157c(*(undefined4 *)(param_1 + 0x98));
      (**(code **)(*piVar3 + 0x1c))(piVar3,1);
    }
    iVar4 = fn_00593a80(param_1 + 0xc);
    if (iVar4 != 0) {
      *(undefined1 *)(param_1 + 0xa6) = 3;
    }
    iVar4 = fn_002b157c(*(undefined4 *)(param_1 + 0x98));
    uVar5 = *(undefined4 *)(param_1 + 0x20);
    uVar6 = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(iVar4 + 0x20) = uVar5;
    *(undefined4 *)(iVar4 + 0x24) = uVar6;
  }
  return;
}



void fn_00592534(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = fn_0022eed8(*(undefined4 *)(&DAT_008959fc + param_2 * 4));
  uVar2 = fn_0022f750((&DAT_008959f4)[param_2]);
  fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar2,uVar1);
  fn_00689bd0(param_1,0x49,0);
  return;
}



void fn_0059205c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 0) {
    fn_002e6978(param_1,&LAB_005920bc);
    fn_00190d50(*(undefined4 *)(param_1 + 0xa0),&LAB_005920bc);
    return;
  }
  fn_005db5e0(*(undefined4 *)(param_1 + 0x9c));
  uVar1 = fn_0022f750();
  fn_002e6978(param_1,uVar1);
  fn_005db5ac(*(undefined4 *)(param_1 + 0x9c),param_2);
  uVar1 = fn_0022f750();
  fn_00190d50(*(undefined4 *)(param_1 + 0xa0),uVar1);
  return;
}



undefined4 fn_00591e3c(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  (**(code **)(*param_1 + 0x118))(param_1,DAT_00896bc0,DAT_00896bc4,DAT_00896bc8);
  uVar6 = *(undefined4 *)(param_1[0x1d] + 0x10);
  iVar1 = fn_0068897c(uVar6,DAT_00896bcc);
  param_1[0x28] = iVar1;
  puVar5 = (undefined4 *)param_1[6];
  if (puVar5 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar2 == &DAT_00896ad4) goto LAB_00591eb0;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_00591eb0:
  param_1[0x27] = (int)puVar5;
  iVar1 = param_1[0x2a];
  if (iVar1 < 0) {
    fn_002e6978(param_1,&LAB_005920bc);
    puVar4 = &LAB_005920bc;
    iVar1 = param_1[0x28];
  }
  else {
    fn_005db5e0(puVar5,iVar1);
    uVar3 = fn_0022f750();
    fn_002e6978(param_1,uVar3);
    fn_005db5ac(param_1[0x27],iVar1);
    puVar4 = (undefined1 *)fn_0022f750();
    iVar1 = param_1[0x28];
  }
  fn_00190d50(iVar1,puVar4);
  iVar1 = fn_00689210(uVar6,DAT_00896bd0);
  param_1[0x29] = iVar1;
  iVar1 = fn_006e9d7c(param_1[0x27]);
  if (iVar1 == 0) {
    *(byte *)(param_1[0x29] + 0x44) = *(byte *)(param_1[0x29] + 0x44) & 0xfe;
  }
  else {
    fn_00591f78(param_1,param_1[0x2a],param_1[0x2a]);
  }
  return 1;
}



undefined4 fn_00591a94(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 uStack_44;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined1 local_24;
  undefined1 local_23;
  
  puVar4 = *(undefined4 **)(param_1 + 0x18);
  if (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar1 == &DAT_00893b10) goto LAB_00591ae0;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_00591ae0:
  *(undefined4 **)(param_1 + 0xb0) = puVar4;
  puVar4 = (undefined4 *)fn_001f74d8(param_1,0xd9);
  if (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar1 == &DAT_00896ad4) goto LAB_00591b24;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_00591b24:
  fn_002c330c(&local_50);
  local_50 = DAT_00896b98;
  local_4c = DAT_00896b9c;
  local_48 = fn_005db570(puVar4);
  uStack_44 = 0;
  fn_005db614(puVar4);
  uVar2 = fn_0022f750();
  fn_00147974(&local_34,uVar2);
  local_24 = 0;
  local_23 = 1;
  uVar2 = fn_0022f750((char *)&DAT_00591d30);
  fn_00147974(&local_28,uVar2);
  fn_002c29a0(param_1,&local_50);
  iVar5 = 0;
  if (0 < local_48) {
    do {
      fn_005db5e0(puVar4,iVar5);
      uVar2 = fn_0022f750();
      fn_0031b78c(param_1,iVar5,0,uVar2);
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_48);
  }
  fn_00689930(param_1,0xd9,0);
  if (local_28 != &DAT_008f9cf4) {
    piVar3 = local_28 + -3;
    iVar5 = *piVar3;
    if ((iVar5 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar5 + -1, iVar5 == 0)))) {
      fn_001008c4(local_28 + -3,local_28[-2] + 8,0);
    }
  }
  if (local_2c != &DAT_008f9cf4) {
    piVar3 = local_2c + -3;
    iVar5 = *piVar3;
    if ((iVar5 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar5 + -1, iVar5 == 0)))) {
      fn_001008c4(local_2c + -3,local_2c[-2] + 8,0);
    }
  }
  if (local_30 != &DAT_008f9cf4) {
    piVar3 = local_30 + -3;
    iVar5 = *piVar3;
    if ((iVar5 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar5 + -1, iVar5 == 0)))) {
      fn_001008c4(local_30 + -3,local_30[-2] + 8,0);
    }
  }
  if (local_34 != &DAT_008f9cf4) {
    piVar3 = local_34 + -3;
    iVar5 = *piVar3;
    if ((iVar5 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar5 + -1, iVar5 == 0)))) {
      fn_001008c4(local_34 + -3,local_34[-2] + 8,0);
    }
  }
  return 1;
}


