#include "00436894_0043f1e8.h"



undefined4 fn_0043f1e8(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar6 = *(undefined4 *)(iVar1 + 8);
  iVar1 = fn_00145b00(0x10,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_0028bf74(iVar1,uVar6);
  }
  piVar5 = (int *)param_1[0x1b];
  if (piVar5 != piVar2) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    param_1[0x1b] = (int)piVar2;
  }
  fn_0028bed4(param_1[0x1b]);
  fn_0028bf3c(param_1[0x1b]);
  iVar1 = fn_001481c8(uVar6,L"rom:/data/Layout/menu/wifi_ranking_battle/upper/ranking.arc",
                       &DAT_0043f364,1,1);
  param_1[0x19] = iVar1;
  iVar1 = fn_001480d0(uVar6,iVar1,(char *)&DAT_0043f370,&DAT_0043f36c,0,1,0);
  param_1[0x1a] = iVar1;
  uVar6 = fn_00178f9c(uVar6,iVar1);
  uVar3 = fn_002f6534(param_1);
  fn_00688cc4(uVar6,(char *)&DAT_0043f380,uVar3);
  puVar7 = (undefined4 *)param_1[6];
  if (puVar7 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar7)(puVar7);
    do {
      if (puVar4 == &DAT_0089715c) goto LAB_0043f304;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar7 = (undefined4 *)0x0;
LAB_0043f304:
  if (*(char *)(puVar7 + 4) == '\x01') {
    uVar3 = fn_0022f750((char *)&DAT_0043f39c);
    fn_00688cc4(uVar6,(char *)&DAT_007cae84,uVar3);
  }
  else {
    uVar3 = fn_0022f750((char *)&DAT_0043f390);
    fn_00688cc4(uVar6,(char *)&DAT_007cae84,uVar3);
  }
  fn_0043f3d4(param_1);
  return 1;
}



void fn_004392d0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    fn_006bd084(*(undefined4 *)(param_1 + 0x94),&local_28);
    uVar2 = fn_0015b064((int)(short)local_24);
    fn_0016ba84(DAT_00897800,uVar2);
    iVar3 = fn_006bd094(*(undefined4 *)(param_1 + 0x94));
    if (iVar3 == 0) {
      uVar2 = fn_0022f584((char *)&DAT_0043942c,0);
      local_24 = 1;
      uStack_20 = 0;
      local_18 = 1;
      local_1c = 0;
      local_28 = 1;
      fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar2,1);
      fn_00689bd0(param_1,0x48);
    }
    else {
      uVar2 = fn_0022f584((char *)&DAT_004393fc,0);
      local_24 = 1;
      uStack_20 = 0;
      local_18 = 1;
      local_1c = 0;
      local_28 = 1;
      fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar2,1);
      fn_00689bd0(param_1,0x48);
    }
  }
  cVar1 = *(char *)(*(int *)(param_1 + 0x5c) + 0x31);
  if (cVar1 == '\x03') {
    pcVar4 = fn_004394d8;
  }
  else {
    if (cVar1 != '\x02') {
      return;
    }
    pcVar4 = fn_004395f0;
  }
  *(code **)(param_1 + 0x80) = pcVar4;
  *(undefined4 *)(param_1 + 0x84) = 0;
  return;
}



void fn_004394d8(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_28 [4];
  short local_24;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x5b);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894aac) goto LAB_00439524;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00439524:
  if (*(int *)(param_1 + 0x8c) == 0) {
    fn_006bd084(*(undefined4 *)(param_1 + 0x94),auStack_28);
    uVar3 = fn_0015b064((int)local_24);
    fn_0016ba84(DAT_00897800,uVar3);
    uVar3 = fn_0022f584((char *)&DAT_004395cc,0);
    fn_00445408(puVar1,uVar3,1);
    fn_00689930(param_1,0x5b,0);
    fn_00689878(param_1,0);
    return;
  }
  if (*(char *)(puVar1 + 900) != '\0') {
    *(code **)(param_1 + 0x80) = fn_00439cc4;
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  return;
}



undefined4 fn_00436894(int *param_1)

{
  short sVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  param_1[0x1f] = 4;
  (**(code **)(*param_1 + 0x118))(param_1,DAT_00895548,DAT_0089554c,DAT_00895550);
  iVar3 = fn_00178f9c(param_1[0x19],param_1[0x1b]);
  piVar8 = *(int **)(iVar3 + 0x10);
  piVar4 = (int *)(**(code **)(*piVar8 + 0x2c))(piVar8,(char *)&DAT_00436c78,1);
  if (piVar4 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar5 == &DAT_0089a930) goto LAB_0043692c;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_0043692c:
  param_1[0x3f] = (int)piVar4;
  piVar4 = (int *)(**(code **)(*piVar8 + 0x2c))(piVar8,(char *)&DAT_00436c8c,1);
  if (piVar4 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar5 == &DAT_0089a92c) goto LAB_00436980;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_00436980:
  param_1[0x40] = (int)piVar4;
  piVar4 = (int *)(**(code **)(*piVar8 + 0x2c))(piVar8,(char *)&DAT_00436c9c,1);
  if (piVar4 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar5 == &DAT_0089a930) goto LAB_004369d0;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_004369d0:
  param_1[0x41] = (int)piVar4;
  piVar4 = (int *)(**(code **)(*piVar8 + 0x2c))(piVar8,(char *)&DAT_00436cb0,1);
  if (piVar4 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar5 == &DAT_0089a930) goto LAB_00436a20;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_00436a20:
  param_1[0x43] = (int)piVar4;
  piVar4 = (int *)(**(code **)(*piVar8 + 0x2c))(piVar8,(char *)&DAT_00436cc4,1);
  if (piVar4 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar5 == &DAT_0089a92c) goto LAB_00436a70;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_00436a70:
  param_1[0x45] = (int)piVar4;
  piVar4 = (int *)(**(code **)(*piVar8 + 0x2c))(piVar8,(char *)&DAT_00436cd0,1);
  if (piVar4 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar5 == &DAT_0089a930) goto LAB_00436ac0;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_00436ac0:
  param_1[0x42] = (int)piVar4;
  piVar4 = (int *)(**(code **)(*piVar8 + 0x2c))(piVar8,(char *)&DAT_00436ce4,1);
  if (piVar4 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar5 == &DAT_0089a930) goto LAB_00436b0c;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_00436b0c:
  param_1[0x44] = (int)piVar4;
  piVar4 = (int *)(**(code **)(*piVar8 + 0x2c))(piVar8,(char *)&DAT_00436cf8,1);
  if (piVar4 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar5 == &DAT_0089a92c) goto LAB_00436b5c;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_00436b5c:
  param_1[0x46] = (int)piVar4;
  piVar4 = (int *)(**(code **)(*piVar8 + 0x2c))(piVar8,(char *)&DAT_00436d04,1);
  if (piVar4 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar5 == &DAT_0089a92c) goto LAB_00436bac;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_00436bac:
  param_1[0x47] = (int)piVar4;
  piVar4 = (int *)(**(code **)(*piVar8 + 0x2c))(piVar8,(char *)&DAT_00436d10,1);
  if (piVar4 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar5 == &DAT_0089a92c) goto LAB_00436bfc;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_00436bfc:
  param_1[0x49] = (int)piVar4;
  piVar4 = (int *)(**(code **)(*piVar8 + 0x2c))(piVar8,(char *)&DAT_00436d1c,1);
  if (piVar4 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar5 == &DAT_0089a92c) goto LAB_00436c4c;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_00436c4c:
  param_1[0x48] = (int)piVar4;
  piVar4 = (int *)(**(code **)(*piVar8 + 0x2c))(piVar8,(char *)&DAT_00436d28,1);
  if (piVar4 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar5 == &DAT_0089a92c) goto LAB_00436d5c;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_00436d5c:
  param_1[0x4a] = (int)piVar4;
  uVar9 = 0;
  do {
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    fn_0017d96c(&local_48,0x20,0x1f,(char *)&DAT_00437114,uVar9);
    uVar6 = fn_00172c98(iVar3,&local_48);
    iVar7 = fn_00145b00(0xd4,&DAT_00812c8c);
    piVar4 = (int *)0x0;
    if (iVar7 != 0) {
      piVar4 = (int *)fn_002b44c0(iVar7,param_1[1],uVar6,1,param_1[0x12]);
    }
    (**(code **)(*piVar4 + 0x10))(piVar4);
    *(undefined1 *)((int)piVar4 + 0x1d) = 1;
    uVar10 = param_1[0x4c] - param_1[0x4b] >> 2;
    if (uVar10 <= uVar9) {
      fn_002ff628(9,&DAT_008c7651,&DAT_008c7651,uVar9,uVar10);
    }
    *(int **)(param_1[0x4b] + uVar9 * 4) = piVar4;
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 7);
  fn_0043721c(param_1);
  fn_00437134(param_1);
  bVar2 = *(byte *)(param_1[0x26] + 0x27);
  *(byte *)(param_1[0x40] + 0x44) = *(byte *)(param_1[0x40] + 0x44) & 0xfe | bVar2;
  *(byte *)(param_1 + 0x2c) = bVar2;
  iVar3 = 0;
  do {
    fn_004374f4(param_1,iVar3);
    fn_0042ec40(param_1[0x26],iVar3,&local_4c,&local_48,&local_38);
    if ((short)local_4c == 0) {
      uVar6 = fn_0022f584((char *)&DAT_004374e0,0);
      fn_00190d50(param_1[iVar3 + 0x41],uVar6);
    }
    else {
      uVar6 = fn_0015b064();
      fn_00190d50(param_1[iVar3 + 0x41],uVar6);
    }
    *(short *)((int)param_1 + iVar3 * 0x20 + 0xb2) = (short)local_4c;
    local_4c = (undefined4 *)0x504;
    fn_0042ec40(param_1[0x26],iVar3,&local_48,&local_40,&local_44);
    uVar10 = (uint)*(byte *)((int)&local_4c + iVar3);
    uVar9 = param_1[0x4c] - param_1[0x4b] >> 2;
    if (uVar9 <= uVar10) {
      fn_002ff628(9,&DAT_008c7651,&DAT_008c7651,uVar10,uVar9);
    }
    iVar7 = *(int *)(param_1[0x4b] + uVar10 * 4);
    if ((short)local_48 == 0) {
      fn_002b427c(iVar7,1);
      *(undefined1 *)(iVar7 + 0x3b) = 1;
      *(undefined1 *)(iVar7 + 0x3d) = 0;
      *(undefined1 *)(iVar7 + 0x43) = 0;
      *(undefined1 *)(iVar7 + 0x3f) = 0;
      *(undefined1 *)(iVar7 + 0x41) = 0;
    }
    else {
      fn_002b427c(iVar7);
      *(undefined1 *)(iVar7 + 0x3b) = 0;
      *(undefined1 *)(iVar7 + 0x3d) = 0;
      *(undefined1 *)(iVar7 + 0x43) = 0;
      *(undefined1 *)(iVar7 + 0x3f) = 0;
      *(undefined1 *)(iVar7 + 0x41) = 0;
    }
    fn_0042ec40(param_1[0x26],iVar3,&local_4c,&local_48,&local_3c);
    *(byte *)(param_1[iVar3 + 0x45] + 0x44) =
         (byte)local_3c | *(byte *)(param_1[iVar3 + 0x45] + 0x44) & 0xfe;
    *(byte *)((int)param_1 + iVar3 * 0x20 + 0xd1) =
         *(byte *)((int)param_1 + iVar3 * 0x20 + 0xd1) & 0xfd | (byte)local_3c << 1;
    fn_0043761c(param_1,iVar3);
    local_4c = &local_48;
    fn_0042e8f4(param_1[0x26],iVar3,&local_3c,&local_44,&local_40);
    iVar7 = iVar3 + 1;
    *(byte *)(param_1[iVar3 + 0x47] + 0x44) =
         (byte)local_44 | *(byte *)(param_1[iVar3 + 0x47] + 0x44) & 0xfe;
    *(byte *)(param_1[iVar3 + 0x49] + 0x44) =
         (byte)local_48 | *(byte *)(param_1[iVar3 + 0x49] + 0x44) & 0xfe;
    bVar2 = *(byte *)((int)param_1 + iVar3 * 0x20 + 0xd1) & 0xfb | (byte)local_44 << 2;
    *(byte *)((int)param_1 + iVar3 * 0x20 + 0xd1) = bVar2;
    *(byte *)((int)param_1 + iVar3 * 0x20 + 0xd1) = bVar2 & 0xf7 | (byte)local_48 << 3;
    iVar3 = iVar7;
  } while (iVar7 < 2);
  sVar1 = *(short *)(param_1[0x26] + 0x1c);
  fn_0022cdb4(param_1,sVar1 != 0);
  *(short *)(param_1 + 0x2a) = sVar1;
  param_1[0x3d] = (uint)*(byte *)(param_1[0x26] + 0x26);
  *(undefined1 *)(param_1 + 0x3e) = *(undefined1 *)(param_1[0x26] + 0x338);
  *(undefined1 *)((int)param_1 + 0xf9) = *(undefined1 *)(param_1[0x26] + 0x45a);
  return 1;
}


