#include "0041aa74_0043bcc4.h"



undefined4 fn_0043bcc4(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  wchar16 *local_7c;
  char *pcStack_78;
  int local_74;
  undefined4 local_70;
  int local_68;
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [4];
  undefined1 local_50;
  undefined1 local_4f;
  undefined4 local_48;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [32];
  
  uVar5 = *(undefined4 *)(DAT_00897804 + 0xc);
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x2d);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008951dc) goto LAB_0043bd24;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0043bd24:
  *(undefined4 **)(param_1 + 0xe8) = puVar1;
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0x9f);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00895964) goto LAB_0043bd68;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0043bd68:
  *(undefined4 **)(param_1 + 0xe4) = puVar1;
  iVar3 = fn_006b83e4(uVar5);
  if (*(char *)(*(int *)(param_1 + 0xe4) + 0x24) == '\0') {
    iVar4 = fn_006b84b0(uVar5);
    iVar3 = iVar3 + iVar4;
  }
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x14);
  fn_00397774(&local_7c);
  local_7c = L"rom:/data/Layout/common/common_0200.arc";
  pcStack_78 = (char *)&DAT_0043bee8;
  if (iVar3 < 9) {
    local_74 = iVar3;
  }
  else {
    local_74 = 9;
  }
  local_70 = *(undefined4 *)(param_1 + 0x11c);
  local_68 = iVar3;
  uVar5 = fn_0022f750((char *)&DAT_00866ea8);
  fn_00147974(auStack_60,uVar5);
  local_50 = 0;
  local_4f = 0;
  local_48 = 1;
  uVar5 = fn_0022f750(*(undefined4 *)
                        (&DAT_007c7684 + *(int *)(*(int *)(param_1 + 0xe4) + 0x10) * 4));
  fn_00147974(auStack_3c,uVar5);
  fn_00397618(param_1,&local_7c);
  fn_0031f8fc(*(undefined4 *)(param_1 + 0x74),0,0,0,0xffffffff);
  iVar3 = *(int *)(param_1 + 0x74);
  *(undefined1 *)(iVar3 + 0x81) = 0;
  fn_0031f3f4(iVar3,0);
  fn_00100414(auStack_40,&LAB_0059e0e0,8,4);
  iVar3 = fn_001588d4(auStack_54);
  iVar3 = fn_001588d4(iVar3 + -4);
  iVar3 = fn_001588d4(iVar3 + -4);
  fn_001588d4(iVar3 + -4);
  fn_0043bf08(param_1);
  iVar3 = *(int *)(param_1 + 0x11c);
  fn_00689efc(param_1,0x2d,0);
  fn_0025f3f4(*(undefined4 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + iVar3 * 4 + 0xf4));
  return 1;
}



void fn_00439cc4(int param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 auStack_40 [20];
  undefined1 auStack_2c [4];
  short local_28;
  
  if (*(int *)(param_1 + 0x8c) == 0) {
    if (*(char *)(*(int *)(param_1 + 0x90) + 8) != '\0') {
      return;
    }
    fn_006bd084(*(undefined4 *)(param_1 + 0x94),auStack_2c);
    uVar5 = fn_0015b064((int)local_28);
    fn_0016ba84(DAT_00897800,uVar5);
    fn_006bd084(*(undefined4 *)(param_1 + 0x94),auStack_40);
    uVar5 = fn_00689b18(param_1);
    fn_0028c644(uVar5,auStack_40);
    iVar6 = *(int *)(param_1 + 0x90);
    uVar1 = 1;
  }
  else {
    puVar2 = (undefined4 *)fn_00689c1c(param_1,0x73);
    puVar7 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      do {
        if (puVar3 == &DAT_008943b0) goto LAB_00439d20;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    puVar2 = (undefined4 *)0x0;
LAB_00439d20:
    if (*(char *)((int)puVar2 + 0x15) == '\0') {
      return;
    }
    fn_002eb8b0(*(undefined4 *)(param_1 + 0x94));
    puVar3 = (undefined4 *)fn_001f74d8(param_1,0x5b);
    if (puVar3 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
      do {
        if (puVar4 == &DAT_00894aac) {
          puVar7 = puVar3;
          break;
        }
        puVar4 = (undefined4 *)*puVar4;
      } while (puVar4 != (undefined4 *)0x0);
    }
    if (*(char *)((int)puVar7 + 0xe13) == '\0') {
      *(code **)(param_1 + 0x80) = fn_00439140;
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    else if (*(char *)((int)puVar2 + 0x15) == '\x03') {
      *(code **)(param_1 + 0x80) = fn_00439140;
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    else {
      *(code **)(param_1 + 0x80) = fn_00439858;
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    iVar6 = *(int *)(param_1 + 0x90);
    uVar1 = 0;
  }
  *(undefined1 *)(iVar6 + 8) = uVar1;
  return;
}



void fn_0042a024(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  
  uVar4 = *(int *)(*(int *)(param_1 + 0x9c) + 0xcc) *
          (*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2) + param_2;
  uVar1 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4) >> 1;
  if (uVar1 <= uVar4) {
    fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar4,uVar1);
  }
  sVar3 = *(short *)(*(int *)(param_1 + 0xb4) + uVar4 * 2);
  iVar2 = fn_002894f8(*(undefined4 *)(DAT_00897804 + 0x24),(int)sVar3);
  if (iVar2 == 0) {
    sVar3 = 0;
  }
  *(short *)(*(int *)(param_1 + 0xc4) + 0x1c) = sVar3;
  return;
}



void fn_004218ec(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  
  uVar1 = fn_00313844(param_2,0x13,0,1,1);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  uVar1 = fn_00178f9c(param_2,uVar1);
  uVar5 = 0;
  *(undefined4 *)(param_1 + 100) = uVar1;
  do {
    piVar2 = (int *)fn_0017dd54(*(undefined4 *)(param_1 + 100),(&DAT_007bb380)[uVar5],0);
    *(int **)(param_1 + uVar5 * 4 + 0x68) = piVar2;
    (**(code **)(*piVar2 + 100))();
    uVar5 = uVar5 + 1;
  } while (uVar5 < 4);
  iVar6 = 0;
  do {
    iVar3 = fn_001828f0(*(undefined4 *)(param_1 + 100),(&DAT_007bb390)[iVar6]);
    piVar7 = (int *)(param_1 + iVar6 * 0x20);
    piVar7[6] = iVar3;
    piVar2 = (int *)fn_001828f0(*(undefined4 *)(param_1 + 100),(&DAT_007bb3a8)[iVar6]);
    if (piVar2 != (int *)0x0) {
      puVar4 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
      do {
        if (puVar4 == &DAT_0089a934) goto LAB_004219cc;
        puVar4 = (undefined4 *)*puVar4;
      } while (puVar4 != (undefined4 *)0x0);
    }
    piVar2 = (int *)0x0;
LAB_004219cc:
    *piVar7 = (int)piVar2;
    piVar2 = (int *)fn_001828f0(*(undefined4 *)(param_1 + 100),(&DAT_007bb3c0)[iVar6]);
    if (piVar2 != (int *)0x0) {
      puVar4 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
      do {
        if (puVar4 == &DAT_0089a930) goto LAB_00421a18;
        puVar4 = (undefined4 *)*puVar4;
      } while (puVar4 != (undefined4 *)0x0);
    }
    piVar2 = (int *)0x0;
LAB_00421a18:
    piVar7[1] = (int)piVar2;
    *(undefined1 *)(piVar7 + 2) = 0;
    piVar2 = (int *)fn_001828f0(*(undefined4 *)(param_1 + 100),(&DAT_007bb39c)[iVar6]);
    if (piVar2 != (int *)0x0) {
      puVar4 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
      do {
        if (puVar4 == &DAT_0089a934) goto LAB_00421a64;
        puVar4 = (undefined4 *)*puVar4;
      } while (puVar4 != (undefined4 *)0x0);
    }
    piVar2 = (int *)0x0;
LAB_00421a64:
    piVar7[3] = (int)piVar2;
    piVar2 = (int *)fn_001828f0(*(undefined4 *)(param_1 + 100),(&DAT_007bb3b4)[iVar6]);
    if (piVar2 != (int *)0x0) {
      puVar4 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
      do {
        if (puVar4 == &DAT_0089a930) goto LAB_00421aac;
        puVar4 = (undefined4 *)*puVar4;
      } while (puVar4 != (undefined4 *)0x0);
    }
    piVar2 = (int *)0x0;
LAB_00421aac:
    *(undefined1 *)(piVar7 + 5) = 0;
    iVar6 = (int)(char)((char)iVar6 + '\x01');
    *(undefined1 *)(piVar7 + 7) = 0;
    piVar7[4] = (int)piVar2;
    if (2 < iVar6) {
      iVar6 = *(int *)(*(int *)(param_1 + 100) + 0x10);
      *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe;
      return;
    }
  } while( true );
}



void fn_0041af1c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_20 [4];
  
  iVar1 = fn_006ba220();
  if (iVar1 == 0) {
    local_20[0] = 0xfb4;
    local_20[1] = 0xfb6;
    local_20[2] = 0xfb7;
    local_20[3] = 0xfb5;
    iVar1 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),0x3ed);
    if ((iVar1 < 1) && (2 < param_2)) {
      param_2 = param_2 + 1;
    }
    uVar2 = fn_00391df8(param_2);
    uVar3 = fn_0022eefc((int)(short)local_20[param_2],0);
    uVar2 = fn_0022f750(uVar2);
    fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar2,uVar3);
    fn_00689bd0(param_1,0x49,0);
  }
  return;
}



undefined4 fn_0041aa74(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined1 local_23;
  undefined1 local_1e;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0x60);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894b34) goto LAB_0041aac4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0041aac4:
  *(undefined4 **)(param_1 + 0xb8) = puVar1;
  fn_002c330c(&local_50);
  local_50 = DAT_00894bb0;
  local_4c = DAT_00894bb4;
  iVar3 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),0x3ed);
  if (iVar3 < 1) {
    local_48 = 3;
  }
  else {
    local_48 = 4;
  }
  local_48 = local_48 + 1;
  iVar3 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),0x3ed);
  if (iVar3 < 1) {
    local_3c = 3;
  }
  else {
    local_3c = 4;
  }
  local_44 = 0;
  uVar4 = fn_0022f750((char *)&DAT_0041aca8);
  fn_00147974(&local_34,uVar4);
  local_1e = 1;
  local_23 = 1;
  uVar4 = fn_0022f750((char *)&DAT_0041acb8);
  fn_00147974(&local_28,uVar4);
  fn_002c29a0(param_1,&local_50);
  if (local_28 != &DAT_008f9cf4) {
    piVar5 = local_28 + -3;
    iVar3 = *piVar5;
    if ((iVar3 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_28 + -3,local_28[-2] + 8,0);
    }
  }
  if (local_2c != &DAT_008f9cf4) {
    piVar5 = local_2c + -3;
    iVar3 = *piVar5;
    if ((iVar3 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_2c + -3,local_2c[-2] + 8,0);
    }
  }
  if (local_30 != &DAT_008f9cf4) {
    piVar5 = local_30 + -3;
    iVar3 = *piVar5;
    if ((iVar3 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_30 + -3,local_30[-2] + 8,0);
    }
  }
  if (local_34 != &DAT_008f9cf4) {
    piVar5 = local_34 + -3;
    iVar3 = *piVar5;
    if ((iVar3 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_34 + -3,local_34[-2] + 8,0);
    }
  }
  return 1;
}


