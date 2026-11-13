#include "0017eab4_0017f118.h"



void fn_0017f118(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  iVar1 = fn_00101a1c(param_1 + 6,fn_0017d8f8,4,2);
  iVar1 = fn_00101a1c(iVar1 + 8,fn_0017d8f8,4,2);
  *(undefined1 *)(iVar1 + 0x24) = 0;
  *(undefined1 *)(iVar1 + 0x25) = 0;
  return;
}



void fn_0017f108(undefined4 *param_1,undefined4 *param_2)

{
  *param_2 = *param_1;
  *param_1 = param_2;
  return;
}



int fn_0017f0ec(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0018c8e8();
  fn_0017d904(uVar1,param_1 + 0x88);
  return param_1;
}



void fn_0017ed40(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  ushort uVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  float fVar8;
  
  if (*(char *)(param_1 + 0x139) != '\0') {
    if (*(char *)(param_1 + 0x138) != '\0') {
      param_2 = 0;
    }
    uVar5 = *(ushort *)(param_1 + 0x184);
    if (uVar5 < *(ushort *)(param_1 + 0x182)) {
      uVar5 = uVar5 + 1;
      *(ushort *)(param_1 + 0x184) = uVar5;
    }
    if ((uint)uVar5 < (uint)*(ushort *)(param_1 + 0x182)) {
      bVar1 = *(byte *)(param_1 + 0x180);
      iVar3 = fn_00300f74(((uint)*(byte *)(param_1 + 0x181) - (uint)bVar1) * (uint)uVar5);
      uVar2 = iVar3 + (uint)bVar1 & 0xff;
    }
    else {
      uVar2 = (uint)*(byte *)(param_1 + 0x181);
    }
    uVar6 = 0x3b808081;
    VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
    if ((*(char *)(param_1 + 0x98) == '\x04') && (fn_001910b4(param_1 + 0x98), 0xc2b4cccd < uVar6))
    {
      if (*(int *)(param_1 + 0x1a8) != 0) {
        fn_0017ea58();
        fn_0018b010(*(undefined4 *)(param_1 + 0x1a8));
        *(undefined4 *)(param_1 + 0x1a8) = 0;
        *(undefined1 *)(param_1 + 0x138) = 0;
        *(undefined1 *)(param_1 + 0x139) = 0;
        if (*(code **)(param_1 + 0x1a0) != (code *)0x0) {
          (**(code **)(param_1 + 0x1a0))(param_1,0,*(undefined4 *)(param_1 + 0x1a4));
        }
        if (*(char *)(param_1 + 0x13a) != '\0') {
          *(undefined1 *)(param_1 + 0x13a) = 0;
          uVar4 = fn_00152724();
          fn_00173100(uVar4,param_1);
          return;
        }
      }
    }
    else {
      fVar7 = 0.0;
      uVar2 = in_fpscr & 0xfffffff;
      if (*(float *)(param_1 + 0x168) != 0.0) {
        iVar3 = *(int *)(param_1 + 0x170);
        if (*(int *)(param_1 + 0x16c) < iVar3) {
          fVar7 = (float)VectorSignedToFloat(iVar3,(byte)(uVar2 >> 0x16) & 3);
          fVar8 = (float)VectorSignedToFloat(iVar3 - *(int *)(param_1 + 0x16c),
                                             (byte)(uVar2 >> 0x16) & 3);
          fVar7 = (fVar8 * *(float *)(param_1 + 0x168)) / fVar7;
        }
      }
      iVar3 = 0;
      fVar8 = (float)VectorSignedToFloat((uint)*(byte *)(param_1 + 0x194) -
                                         (uint)*(byte *)(param_1 + 0x195),(byte)(uVar2 >> 0x16) & 3)
      ;
      fVar7 = fVar7 + fVar8;
      fVar8 = fVar7 + *(float *)(param_1 + 0x164);
      do {
        if (*(char *)(param_1 + iVar3 + 0x134) == '\0') {
          fn_00191128(param_1 + iVar3 * 0x20 + 0xb4);
          fVar8 = fVar7 + fVar8;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
      if (*(float *)(param_1 + 0x188) != fVar8) {
        iVar3 = (int)(fVar8 * 256.0);
        fn_0018ad98(iVar3);
        *(float *)(param_1 + 0x188) = fVar8;
        *(int *)(param_1 + 0x18c) = iVar3;
      }
      iVar3 = 0;
      do {
        if (*(char *)(param_1 + iVar3 + 0x134) == '\x02') {
          fn_00191128(param_1 + iVar3 * 0x20 + 0xb4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
      if (param_2 != 0) {
        if (*(char *)(param_1 + 0x13b) != '\0') {
          iVar3 = *(int *)(param_1 + 0x16c) + 5;
          *(int *)(param_1 + 0x16c) = iVar3;
          if (*(int *)(param_1 + 0x170) < iVar3) {
            iVar3 = *(int *)(param_1 + 0x170);
          }
          *(int *)(param_1 + 0x16c) = iVar3;
        }
        iVar3 = 0;
        do {
          fn_0018ca4c(param_1 + iVar3 * 0x20 + 0xb4,5);
          iVar3 = iVar3 + 1;
        } while (iVar3 < 4);
        fn_0018abf0(param_1 + 0x98,5);
      }
      fn_001910b4(param_1 + 0x98);
      fn_0018aec4();
      iVar3 = 0;
      do {
        if (*(char *)(param_1 + iVar3 + 0x134) == '\x01') {
          fn_00191128(param_1 + iVar3 * 0x20 + 0xb4);
          fn_0018aec4();
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
      if (*(int *)(param_1 + 0x1a8) != 0) {
        fn_0018b1c4();
        fn_0018b164(*(undefined4 *)(param_1 + 0x1a8));
        fn_0018b078(*(undefined4 *)(param_1 + 0x1a8));
        fn_0018af84(*(undefined4 *)(param_1 + 0x1a8));
        fn_0018af1c(*(undefined4 *)(param_1 + 0x1a8));
        fn_0018afa8(*(undefined4 *)(param_1 + 0x1a8),*(undefined1 *)(param_1 + 0x13e));
        fn_0018af40(*(undefined4 *)(param_1 + 0x1a8));
        uVar2 = 0;
        do {
          fn_0018b188(*(undefined4 *)(param_1 + 0x1a8),uVar2 & 0xff);
          uVar2 = uVar2 + 1;
        } while ((int)uVar2 < 2);
      }
    }
  }
  return;
}



undefined4 * fn_0017eca4(undefined4 *param_1)

{
  *param_1 = &DAT_0085833c;
  param_1[1] = 0;
  param_1[2] = 0;
  fn_0014ddb8(param_1 + 1,1);
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0x3f800000;
  param_1[6] = 0x3f800000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)((int)param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0xff;
  param_1[10] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0x35) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  fn_0015dfc0(param_1 + 1);
  return param_1;
}



void fn_0017eab4(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  bool bVar4;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    return;
  }
  uVar3 = *(ushort *)(param_1 + 0x20);
  iVar1 = 0;
  bVar4 = (uVar3 & 1) == 0;
  if (!bVar4) {
    uVar3 = (ushort)*(byte *)(param_1 + 0x15);
  }
  if (bVar4 || uVar3 == 0) {
    if (*(char *)(param_1 + 0x16) == '\0') goto LAB_0017ebd8;
  }
  else if (*(char *)(param_1 + 0x16) == '\0') {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        if (*(int *)(param_1 + iVar1 * 4) != 0) {
          fn_0018a240();
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 8));
    }
    fn_0018b09c(param_1);
    fn_001910ec(&DAT_008ece50);
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        if (*(int *)(param_1 + iVar1 * 4) != 0) {
          fn_001943e8();
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 8));
    }
    *(undefined1 *)(param_1 + 0x16) = 1;
    iVar1 = 1;
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xfff2;
  }
  bVar4 = (*(ushort *)(param_1 + 0x20) & 2) != 0;
  if (bVar4) {
    param_3 = (uint)*(byte *)(param_1 + 0x15);
  }
  if (bVar4 && param_3 != 0) {
    if (*(char *)(param_1 + 0x17) == '\0') {
      *(undefined1 *)(param_1 + 0x18) = 0;
      iVar1 = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x18) = 1;
      iVar1 = 3;
    }
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xfffd;
  }
LAB_0017ebd8:
  if (iVar1 == 1) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        iVar2 = *(int *)(param_1 + iVar1 * 4);
        if (iVar2 != 0) {
          fn_0019f2a8(iVar2,0);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 8));
      return;
    }
  }
  else if (iVar1 == 2) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        iVar2 = *(int *)(param_1 + iVar1 * 4);
        if (iVar2 != 0) {
          fn_0019f2a8(iVar2,1);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 8));
      return;
    }
  }
  else if ((iVar1 == 3) && (iVar1 = 0, 0 < *(int *)(param_1 + 8))) {
    do {
      iVar2 = *(int *)(param_1 + iVar1 * 4);
      if (iVar2 != 0) {
        fn_0019f2a8(iVar2,2);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  return;
}


