#include "0055eae8_0055f270.h"



int fn_0055f20c(int param_1,int param_2,uint *param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + param_2);
  if (*pcVar1 == -2) {
    param_2 = param_2 + 3;
    *param_3 = CONCAT11(pcVar1[1],pcVar1[2]) | 1;
  }
  else {
    *param_3 = 1;
  }
  return param_2;
}



int fn_0055f170(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00101a1c(param_1,&DAT_0017ce08,0x18,4);
  *(undefined4 *)(iVar1 + 0x8c) = 0;
  *(undefined4 *)(iVar1 + 0x90) = 0;
  *(undefined **)(iVar1 + 0x88) = &DAT_0085847c;
  *(int *)(iVar1 + 0x94) = iVar1;
  iVar1 = fn_0055828c(iVar1 + 0x98);
  iVar1 = fn_00101a1c(iVar1 + 0x1c,fn_0055f270,0x20,4);
  *(undefined1 *)(iVar1 + 0x84) = 0;
  *(undefined1 *)(iVar1 + 0x85) = 0;
  *(undefined1 *)(iVar1 + 0x86) = 0;
  *(undefined1 *)(iVar1 + 0xcc) = 0;
  *(undefined1 *)(iVar1 + 0xcd) = 0;
  *(undefined2 *)(iVar1 + 0xce) = 0;
  *(undefined2 *)(iVar1 + 0xd0) = 0;
  *(undefined4 *)(iVar1 + 0xf4) = 0;
  *(undefined4 *)(iVar1 + 0xfc) = 0;
  *(undefined4 *)(iVar1 + 0x100) = 0;
  uVar2 = fn_0018c8e8();
  fn_00196754(uVar2,iVar1 + -0x2c);
  return iVar1 + -0xb4;
}



int fn_0055f270(int param_1)

{
  fn_0017df94();
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  return param_1;
}



void fn_0055eed0(int param_1,uint param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x1a8);
  if (iVar2 != 0) {
    iVar8 = *(int *)(iVar2 + 8);
    iVar2 = 0;
    bVar1 = false;
    if (0 < iVar8) {
      do {
        iVar5 = 0;
        do {
          puVar6 = (uint *)(iVar2 * 0x30 + iVar5 * 0x18 + *(int *)(param_1 + 0xc));
          if (*(char *)((int)puVar6 + 0x11) != '\0' && *(char *)((int)puVar6 + 0x11) != '\x03') {
            uVar7 = *puVar6;
            uVar3 = fn_006e4580(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x1a8));
            iVar4 = fn_00559e68(puVar6[1],uVar3);
            if ((param_2 <= iVar4 + uVar7) && (*puVar6 <= param_3)) {
              bVar1 = true;
              break;
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 2);
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar8);
      if (bVar1) {
        iVar2 = *(int *)(param_1 + 0xc);
        if (*(code **)(iVar2 + 0x1a0) != (code *)0x0) {
          (**(code **)(iVar2 + 0x1a0))(iVar2,3,*(undefined4 *)(iVar2 + 0x1a4));
          *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x1a0) = 0;
        }
        iVar2 = *(int *)(param_1 + 0xc);
        if (*(int *)(iVar2 + 0x1a8) != 0) {
          fn_0017ea58();
          fn_0018b010(*(undefined4 *)(iVar2 + 0x1a8));
          *(undefined4 *)(iVar2 + 0x1a8) = 0;
          *(undefined1 *)(iVar2 + 0x138) = 0;
          *(undefined1 *)(iVar2 + 0x139) = 0;
          if (*(code **)(iVar2 + 0x1a0) != (code *)0x0) {
            (**(code **)(iVar2 + 0x1a0))(iVar2,0,*(undefined4 *)(iVar2 + 0x1a4));
          }
          if (*(char *)(iVar2 + 0x13a) != '\0') {
            *(undefined1 *)(iVar2 + 0x13a) = 0;
            uVar3 = fn_00152724();
            fn_00173100(uVar3,iVar2);
            return;
          }
        }
      }
    }
  }
  return;
}



void fn_0055ee80(int param_1)

{
  if (*(char *)(param_1 + 0x13d) == '\0') {
    if (*(char *)(param_1 + 0x98) != '\x04') {
      if ((*(int *)(param_1 + 0x1a8) != 0) && (*(char *)(param_1 + 0x13c) == '\0')) {
        fn_001a82f4(*(int *)(param_1 + 0x1a8),1);
      }
      *(undefined1 *)(param_1 + 0x98) = 4;
    }
    *(undefined1 *)(param_1 + 0x138) = 0;
  }
  return;
}



void fn_0055edf0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = 0;
  *(undefined4 *)(param_1 + 400) = param_3;
  do {
    fn_0055f244(param_1 + iVar1 * 0x20 + 0xb4);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  fn_005581c4(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x16c) = 0;
  fn_0055a0a4(*(undefined4 *)(param_1 + 0x1a8),param_2,param_4);
  fn_0055eb88(param_1,param_2,param_4);
  fn_0055a218(*(undefined4 *)(param_1 + 0x1a8),*(undefined1 *)(param_1 + 0x197));
  fn_0055a29c(*(undefined4 *)(param_1 + 0x1a8));
  *(undefined1 *)(param_1 + 0x139) = 1;
  return;
}



void fn_0055f244(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  return;
}



void fn_0055eb88(int param_1,char *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int *piVar8;
  undefined2 *local_58;
  undefined1 auStack_50 [32];
  int local_30;
  
  *(char *)(param_1 + 0x84) = param_2[1];
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x14);
  if ((param_3 != 0) && (*param_2 == '\x03')) {
    param_3 = (uint)((ulonglong)param_3 * 0x49249249 + 0x49249249 >> 0x22) * 0xe;
  }
  *(uint *)(param_1 + 0x78) = param_3;
  local_30 = fn_001a40cc(uVar3,*param_2);
  fn_001a40cc(*(undefined4 *)(param_2 + 0x10),*param_2);
  iVar5 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1a8) + 8);
  if (0 < iVar1) {
    do {
      puVar6 = *(undefined2 **)(param_2 + iVar5 * 0x30 + 0x18);
      local_58 = puVar6;
      if (param_3 != 0) {
        iVar2 = fn_001a40cc(param_3,*param_2);
        local_58 = (undefined2 *)(iVar2 + (int)puVar6);
      }
      iVar2 = param_1 + iVar5 * 6;
      puVar7 = (undefined2 *)(iVar2 + 0x60);
      if (*param_2 == '\x03') {
        fn_00301a9c(auStack_50,param_2 + iVar5 * 0x30 + 0x1c,0x20);
        if (param_3 == 0) {
          *puVar7 = *(undefined2 *)(param_2 + iVar5 * 0x30 + 0x3c);
          *(undefined2 *)(iVar2 + 0x62) = *(undefined2 *)(param_2 + iVar5 * 0x30 + 0x3e);
          *(undefined2 *)(iVar2 + 100) = *(undefined2 *)(param_2 + iVar5 * 0x30 + 0x40);
        }
        else {
          *puVar7 = *local_58;
          *(undefined2 *)(iVar2 + 0x62) = *(undefined2 *)(param_2 + iVar5 * 0x30 + 0x3e);
          *(undefined2 *)(iVar2 + 100) = *(undefined2 *)(param_2 + iVar5 * 0x30 + 0x40);
          fn_0055a1c4(puVar7,auStack_50,param_3,puVar6);
        }
        if (param_2[1] != '\0') {
          *(undefined2 *)(iVar2 + 0x6c) = *(undefined2 *)(param_2 + iVar5 * 0x30 + 0x42);
          *(undefined2 *)(iVar2 + 0x6e) = *(undefined2 *)(param_2 + iVar5 * 0x30 + 0x44);
          *(undefined2 *)(iVar2 + 0x70) = *(undefined2 *)(param_2 + iVar5 * 0x30 + 0x46);
        }
        fn_001a3c8c(*(undefined4 *)(param_1 + 0x1a8),iVar5,auStack_50);
      }
      puVar4 = (undefined4 *)(param_1 + iVar5 * 0x30);
      piVar8 = puVar4 + 6;
      fn_001a3c68(puVar4);
      *puVar4 = local_58;
      puVar4[1] = *(int *)(param_2 + 0x10) - param_3;
      *(undefined1 *)(puVar4 + 4) = 0;
      if (*param_2 == '\x03') {
        puVar4[2] = puVar7;
      }
      fn_001a834c(*(undefined4 *)(param_1 + 0x1a8),iVar5,puVar4);
      if (param_2[1] != '\0') {
        fn_001a3c68(piVar8);
        *piVar8 = (int)puVar6 + local_30;
        puVar4[7] = *(int *)(param_2 + 0x10) - *(int *)(param_1 + 0x7c);
        *(undefined1 *)(puVar4 + 10) = 1;
        if (*param_2 == '\x03') {
          puVar4[8] = (undefined2 *)(iVar2 + 0x6c);
        }
        fn_001a834c(*(undefined4 *)(param_1 + 0x1a8),iVar5,piVar8,1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  return;
}



void fn_0055eb70(int param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 in_s0;
  
  *(undefined4 *)(param_1 + 0x168) = in_s0;
  *(undefined4 *)(param_1 + 0x170) = param_2;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined1 *)(param_1 + 0x13b) = param_3;
  return;
}



int fn_0055eae8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  fn_00152724();
  iVar1 = fn_0055ad2c();
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x13a) = 1;
    uVar2 = fn_0018b794();
    iVar3 = fn_00195ff8(uVar2,param_1,param_2,fn_00173078,iVar1);
    if (iVar3 == 0) {
      uVar2 = fn_00152724();
      fn_00173100(uVar2,iVar1);
      return 0;
    }
    *(int *)(iVar1 + 0x1a8) = iVar3;
    fn_0055f038(iVar1,param_3,param_4);
  }
  return iVar1;
}



void fn_0055f038(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = param_2;
  *(undefined4 *)(param_1 + 0x1a4) = param_3;
  *(undefined1 *)(param_1 + 0x138) = 0;
  *(undefined1 *)(param_1 + 0x13b) = 1;
  *(undefined1 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x13d) = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined1 *)(param_1 + 0x194) = 0x3c;
  *(undefined1 *)(param_1 + 0x195) = 0x3c;
  uVar4 = 0x3f800000;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x140) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined1 *)(param_1 + 0x13e) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined1 *)(param_1 + 0x180) = 0xff;
  *(undefined1 *)(param_1 + 0x181) = 0xff;
  *(undefined2 *)(param_1 + 0x182) = 0;
  *(undefined2 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  fn_00558104(param_1 + 0x98);
  iVar3 = 0;
  do {
    fn_0017df94(param_1 + iVar3 * 0x20 + 0xb4);
    iVar2 = param_1 + iVar3;
    iVar3 = iVar3 + 1;
    *(undefined1 *)(iVar2 + 0x134) = 0;
  } while (iVar3 < 4);
  *(undefined1 *)(param_1 + 0x196) = 0;
  uVar1 = 0;
  if (DAT_008ece52 == '\0') {
    uVar1 = 2;
  }
  else if (DAT_008ece52 == '\x01') {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x197) = uVar1;
  *(int *)(param_1 + 0x198) = (int)uVar4;
  *(int *)(param_1 + 0x19c) = (int)uVar4;
  return;
}


