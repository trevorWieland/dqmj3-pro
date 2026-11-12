#include "00559a28_0055a198.h"



void fn_0055a198(int param_1,uint param_2)

{
  if (*(byte *)(param_1 + 0x2d) != param_2) {
    *(char *)(param_1 + 0x2d) = (char)param_2;
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 8;
  }
  return;
}



void fn_0055a178(int param_1,uint param_2)

{
  if (*(byte *)(param_1 + 0x2c) != param_2) {
    *(char *)(param_1 + 0x2c) = (char)param_2;
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 8;
  }
  return;
}



void fn_0055a0a4(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  *(undefined1 *)(param_1 + 0x50) = *param_2;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar2 = *(int *)(param_1 + iVar3 * 4);
      if (iVar2 != 0) {
        fn_0051e49c(iVar2,1);
        uVar1 = 1;
        switch(*(undefined1 *)(param_1 + 0x50)) {
        case 0:
          uVar1 = 0;
          break;
        case 3:
          uVar1 = 2;
        }
        fn_0051e4bc(iVar2,uVar1);
        fn_0051e464(iVar2,*(undefined4 *)(param_2 + 8));
        uVar1 = 0;
        if (DAT_008ece52 == '\0') {
          uVar1 = 2;
        }
        else if (DAT_008ece52 == '\x01') {
          uVar1 = 1;
        }
        fn_0051e548(iVar2,uVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 8));
  }
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  return;
}



undefined4
fn_00559ed8(uint *param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 local_50 [2];
  char local_48;
  undefined1 auStack_40 [12];
  char local_34;
  undefined1 auStack_30 [12];
  
  param_1[1] = 0;
  *param_1 = 0xffffffff;
  *param_2 = '\0';
  fn_00140594(auStack_30,param_3);
  puVar1 = (uint *)fn_0014580c(auStack_30);
  if (puVar1 == (uint *)0x0) {
    return 0xfffffffe;
  }
  if (*puVar1 == 0) {
    uVar2 = 1;
  }
  else {
    puVar5 = puVar1 + 1;
    if (puVar5 == (uint *)0x0) {
      return 0xfffffffe;
    }
    uVar3 = fn_006e3b8c(param_5,*puVar5);
    if (uVar3 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      local_50[0] = 0xffffffff;
      local_48 = '\0';
      fn_00156328(param_4,*puVar5,local_50);
      *param_1 = *puVar5;
      param_1[1] = uVar3;
      *param_2 = local_48;
      if (local_48 != '\0') {
        fn_00162118(auStack_40,uVar3,1);
        uVar3 = 0;
        if (*puVar1 != 0) {
          do {
            if ((local_34 == '\0') || (iVar4 = fn_001566bc(auStack_40,puVar1[2]), iVar4 == 0)) {
              return 2;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < *puVar1);
        }
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}



uint fn_00559e68(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 == 0) {
    uVar2 = param_1;
  }
  else if (param_2 == 1) {
    uVar2 = param_1 << 1;
  }
  else if (param_2 == 3) {
    uVar2 = (uint)((ulonglong)param_1 * 0x49249249 + 0x49249249 >> 0x22) * 8;
    iVar1 = param_1 + (uint)((ulonglong)param_1 * 0x49249249 + 0x49249249 >> 0x22) * -0xe;
    if (iVar1 != 0) {
      uVar2 = uVar2 + (iVar1 + 1U >> 1) + 1;
    }
  }
  return uVar2;
}



void fn_00559e44(undefined4 *param_1)

{
  if (*(char *)(param_1 + 3) != '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}



undefined4
fn_00559d10(undefined4 *param_1,undefined2 *param_2,undefined2 *param_3,int param_4,uint param_5)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  
  (**(code **)(*(int *)*param_1 + 0x40))((int *)*param_1,param_5 * 4 * param_4 + param_1[1] + 8,0);
  iVar2 = (**(code **)(*(int *)*param_1 + 0x24))((int *)*param_1,&DAT_008f7860,0x20);
  if (iVar2 == 0x20) {
    if (0 < (int)param_5) {
      puVar4 = (undefined2 *)0x8f785c;
      puVar5 = param_2 + -1;
      puVar6 = param_3 + -1;
      if ((param_5 & 1) != 0) {
        *param_2 = DAT_008f7860;
        puVar4 = &DAT_008f7860;
        *param_3 = DAT_008f7862;
        puVar5 = param_2;
        puVar6 = param_3;
      }
      for (iVar2 = (int)param_5 >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
        puVar5[1] = puVar4[2];
        puVar6[1] = puVar4[3];
        puVar5 = puVar5 + 2;
        *puVar5 = puVar4[4];
        puVar1 = puVar4 + 5;
        puVar4 = puVar4 + 4;
        puVar6 = puVar6 + 2;
        *puVar6 = *puVar1;
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



undefined4 fn_00559b6c(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 local_f0 [80];
  undefined1 auStack_a0 [132];
  
  (**(code **)(*(int *)*param_1 + 0x40))((int *)*param_1,0);
  iVar1 = (**(code **)(*(int *)*param_1 + 0x24))((int *)*param_1,auStack_a0,0x60);
  if (iVar1 == 0x60) {
    iVar1 = fn_006e3ee8(param_2,auStack_a0);
    if (iVar1 != 0) {
      iVar1 = fn_006e3490(auStack_a0);
      iVar2 = fn_006e3464(auStack_a0);
      uVar5 = iVar1 + iVar2;
      if (uVar5 <= param_4) {
        (**(code **)(*(int *)*param_1 + 0x40))((int *)*param_1,0);
        uVar3 = (**(code **)(*(int *)*param_1 + 0x24))((int *)*param_1,param_3,uVar5);
        if (uVar3 == uVar5) {
          fn_00559de0(param_2,param_3);
          if ((*param_2 == 0) || (iVar1 = fn_006e3448(), iVar1 == 0)) {
            iVar1 = 0;
          }
          else {
            iVar1 = fn_001a2150(param_2[1]);
            iVar1 = *(int *)(iVar1 + 0x40);
            iVar2 = fn_006e34bc(*param_2);
            iVar1 = iVar2 + 8 + iVar1;
          }
          param_1[2] = iVar1;
          iVar1 = fn_001a2150(param_2[1]);
          *(undefined2 *)(param_1 + 3) = *(undefined2 *)(iVar1 + 0x38);
          iVar1 = fn_006e3f20(param_2,local_f0);
          if (iVar1 != 0) {
            iVar1 = fn_001a03e0(local_f0[0]);
            if (iVar1 == 3) {
              if ((*param_2 == 0) || (iVar1 = fn_006e336c(), iVar1 == 0)) {
                uVar4 = 0;
              }
              else {
                uVar4 = fn_006e34a4(*param_2);
              }
              param_1[1] = uVar4;
            }
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



void fn_00559de0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 == 0x4d545343) && (param_2[2] + 0xfe000000U < 0x30101)) {
    *param_1 = param_2;
    iVar1 = fn_006e3490(param_2);
    param_1[1] = (int)param_2 + iVar1 + 8;
  }
  return;
}



int fn_00559b18(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_00858250;
  param_1[3] = &DAT_00858270;
  if (*(char *)((int)param_1 + 0x261) == '\0') {
    *(undefined1 *)(param_1 + 0x98) = 0;
    *(undefined1 *)((int)param_1 + 0x261) = 1;
    param_1[4] = 0;
  }
  iVar1 = fn_001271d4(param_1 + 3);
  return iVar1 + -0xc;
}



void fn_00559ad4(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &DAT_008582b4;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = (undefined4 *)fn_001271b0(param_1 + 3);
  *puVar1 = &DAT_00858270;
  puVar1[-3] = &DAT_00858250;
  *(undefined1 *)(puVar1 + 0x95) = 0;
  *(undefined1 *)((int)puVar1 + 0x255) = 1;
  return;
}



void fn_00559aa8(int param_1)

{
  if (*(char *)(param_1 + 0x261) == '\0') {
    *(undefined1 *)(param_1 + 0x260) = 0;
    *(undefined1 *)(param_1 + 0x261) = 1;
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  }
  return;
}



int fn_00559a28(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar3 = *(int **)(param_1 + 4);
  iVar2 = 0;
  iVar5 = 0x80;
  while (piVar3 != (int *)(param_1 + 4)) {
    iVar4 = piVar3[-0x30] + (uint)*(byte *)((int)piVar3 + -0x73);
    iVar1 = UnsignedSaturate(iVar4,7);
    UnsignedDoesSaturate(iVar4,7);
    if (iVar1 < iVar5) {
      iVar2 = (int)(piVar3 + -0x44);
    }
    piVar3 = (int *)*piVar3;
    if (iVar1 < iVar5) {
      iVar5 = iVar1;
    }
  }
  return iVar2;
}


