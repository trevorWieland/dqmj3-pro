#include "0055e334_0055eac8.h"



void fn_0055eac8(int param_1,int param_2)

{
  param_2 = param_2 + *(int *)(param_1 + 0x16c);
  *(int *)(param_1 + 0x16c) = param_2;
  if (*(int *)(param_1 + 0x170) < param_2) {
    param_2 = *(int *)(param_1 + 0x170);
  }
  *(int *)(param_1 + 0x16c) = param_2;
  return;
}



void fn_0055ea6c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1a8) != 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x1a8) + 8);
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        iVar1 = param_1 + iVar2 * 0x30;
        if (*(char *)(iVar1 + 0x10) != param_2) {
          *(char *)(iVar1 + 0x10) = (char)param_2;
          fn_0055a1b8(*(undefined4 *)(param_1 + 0x1a8),iVar2);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
    }
  }
  return;
}



void fn_0055ea54(undefined4 param_1)

{
  uint in_fpscr;
  
  VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  return;
}



void fn_0055ea18(int param_1,undefined4 *param_2)

{
  param_2[0x4b] = 0;
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  (**(code **)*param_2)(param_2);
  fn_0017f108(param_1 + 8,param_2);
  return;
}



void fn_0055e6cc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  *(undefined1 *)(param_1 + 0xf) = 1;
  fn_001966d8(param_1);
  if (*(char *)(param_1 + 0xc) != '\0') {
    uVar1 = fn_0018c8e8();
    fn_0017d904(uVar1,param_1 + 0x44);
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  uVar3 = 0;
  do {
    fn_005591ac(param_1 + uVar3 * 0xc + 0x134);
    fn_00559e44(param_1 + uVar3 * 0x10 + 0xf4);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  if (*(char *)(param_1 + 0x165) != '\0') {
    fn_0015dfb8(param_1);
    *(undefined1 *)(param_1 + 0x165) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x178);
  if (iVar4 != 0) {
    iVar5 = *(int *)(param_1 + 0x174);
    iVar2 = fn_0013c3d8(iVar4 + 0xc);
    if (iVar2 == 0) {
      fn_0017d948(iVar5 + 0x20,iVar5 + 0x24,iVar4 + 0x80);
    }
    else {
      if (*(int *)(iVar4 + 0x78) != 0) {
        fn_005558ac(*(undefined4 *)(iVar4 + 0x24));
      }
      fn_0017d948(iVar5 + 0x14,iVar5 + 0x18,iVar4 + 0x80);
    }
    *(undefined4 *)(param_1 + 0x178) = 0;
  }
  return;
}



void fn_0055e334(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 local_4c [4];
  undefined4 local_3c [4];
  char local_2c [4];
  int local_28;
  undefined1 auStack_24 [4];
  undefined4 local_20;
  
  if ((char)param_1[0x59] == '\x01') {
    iVar5 = param_1[0x5d];
    if (iVar5 == 0) {
      return;
    }
    if (*(int *)(iVar5 + 0x14) == 0) {
      return;
    }
    iVar2 = *(int *)(iVar5 + 0x18);
    fn_00150c1c(iVar5 + 0x14);
    if (iVar2 + -0x80 == 0) {
      return;
    }
    param_1[0x5e] = iVar2 + -0x80;
    *(undefined1 *)(param_1 + 0x59) = 2;
    *(undefined1 *)(iVar2 + -0x6c) = 0;
    *(undefined4 *)(iVar2 + -0x30) = 0;
    *(undefined4 *)(iVar2 + -0x2c) = 0;
    *(undefined4 *)(iVar2 + -0x1c) = 0;
    *(undefined1 *)(iVar2 + -0xc) = 0;
    *(undefined4 *)(iVar2 + -0x28) = 0;
    *(undefined4 *)(iVar2 + -0x18) = 0;
    *(undefined1 *)(iVar2 + -0xb) = 0;
    *(undefined4 *)(iVar2 + -0x24) = 0;
    *(undefined4 *)(iVar2 + -0x14) = 0;
    *(undefined1 *)(iVar2 + -10) = 0;
    *(undefined4 *)(iVar2 + -0x20) = 0;
    *(undefined4 *)(iVar2 + -0x10) = 0;
    *(undefined1 *)(iVar2 + -9) = 0;
    *(undefined1 *)(iVar2 + -4) = 0;
    iVar5 = param_1[0x60];
    iVar7 = param_1[0x61];
    iVar8 = param_1[0x62];
    iVar9 = param_1[99];
    iVar10 = param_1[100];
    iVar11 = param_1[0x65];
    iVar12 = param_1[0x66];
    *(int *)(iVar2 + -100) = param_1[0x5f];
    *(int *)(iVar2 + -0x60) = iVar5;
    *(int *)(iVar2 + -0x5c) = iVar7;
    *(int *)(iVar2 + -0x58) = iVar8;
    *(int *)(iVar2 + -0x54) = iVar9;
    *(int *)(iVar2 + -0x50) = iVar10;
    *(int *)(iVar2 + -0x4c) = iVar11;
    *(int *)(iVar2 + -0x48) = iVar12;
    iVar5 = param_1[0x67];
    iVar7 = param_1[0x68];
    iVar8 = param_1[0x69];
    iVar9 = param_1[0x6a];
    iVar10 = param_1[0x6b];
    *(undefined4 *)(iVar2 + -8) = 0;
    *(int *)(iVar2 + -0x44) = iVar5;
    *(int *)(iVar2 + -0x40) = iVar7;
    *(int *)(iVar2 + -0x3c) = iVar8;
    *(int *)(iVar2 + -0x38) = iVar9;
    *(int *)(iVar2 + -0x34) = iVar10;
  }
  else if ((char)param_1[0x59] != '\x02') {
    if ((char)param_1[3] == '\0') {
      return;
    }
    goto LAB_0055e368;
  }
  iVar5 = param_1[0x5e];
  if (*(int *)(iVar5 + 0x78) == 0) {
    iVar2 = fn_005558e0(*(undefined4 *)(iVar5 + 0x24));
    *(int *)(iVar5 + 0x78) = iVar2;
    if (iVar2 == 0) {
      return;
    }
    fn_005582d8();
  }
  cVar1 = *(char *)(iVar5 + 0x14);
  if (cVar1 == '\0') {
    iVar2 = fn_00172e2c();
    fn_00170704(iVar2 + 0x2c);
    fn_0013c428(iVar5 + 0xc);
    *(undefined1 *)(iVar5 + 0x14) = 1;
    fn_0017d948(iVar2 + 0xc,iVar2 + 0x10,iVar5 + 4);
    fn_001839ac(iVar2 + 0x38,0);
    fn_001707b4(iVar2 + 0x2c);
    return;
  }
  if (cVar1 != '\x03' && cVar1 != '\x04') {
    return;
  }
  iVar5 = param_1[0x5e];
  if (*(char *)(iVar5 + 0x7c) == '\0') {
    *(undefined1 *)((int)param_1 + 0xf) = 1;
    fn_001966d8(param_1);
    return;
  }
  uVar3 = *(undefined4 *)(iVar5 + 0x50);
  local_28 = param_1[0x5a];
  local_4c[0] = *(undefined4 *)(iVar5 + 0x54);
  local_3c[0] = *(undefined4 *)(iVar5 + 100);
  local_2c[0] = *(char *)(iVar5 + 0x74);
  local_4c[1] = *(undefined4 *)(iVar5 + 0x58);
  local_3c[1] = *(undefined4 *)(iVar5 + 0x68);
  local_2c[1] = *(undefined1 *)(iVar5 + 0x75);
  local_4c[2] = *(undefined4 *)(iVar5 + 0x5c);
  local_3c[2] = *(undefined4 *)(iVar5 + 0x6c);
  local_2c[2] = *(undefined1 *)(iVar5 + 0x76);
  local_4c[3] = *(undefined4 *)(iVar5 + 0x60);
  local_3c[3] = *(undefined4 *)(iVar5 + 0x70);
  local_2c[3] = *(undefined1 *)(iVar5 + 0x77);
  if ((char)param_1[3] != '\0') {
    fn_001966d8(param_1);
  }
  iVar5 = param_1[0x24];
  if (iVar5 == 0) {
    (**(code **)(*param_1 + 0xc))(param_1);
  }
  else {
    fn_00195964(auStack_24,uVar3);
    fn_00195e18(iVar5,local_20,local_28);
    fn_00195e28(iVar5);
    uVar4 = 0;
    do {
      fn_001957f4(param_1 + uVar4 * 3 + 0x4d,local_4c[uVar4]);
      fn_001958bc(param_1 + uVar4 * 4 + 0x3d,local_3c[uVar4],(int)local_2c[uVar4]);
      uVar4 = uVar4 + 1;
    } while (uVar4 < 4);
    *(undefined1 *)(param_1 + 0x59) = 3;
    *(undefined1 *)(param_1 + 3) = 1;
    uVar3 = fn_0018c8e8();
    fn_00196754(uVar3,param_1 + 0x11);
    *(undefined1 *)((int)param_1 + 0x166) = 1;
  }
  if ((char)param_1[3] == '\0') {
    return;
  }
  if ((char)param_1[0x5b] == '\0') {
    param_1[0x1b] = param_1[0x5c] + param_1[0x1b];
  }
  else if ((char)param_1[0x5b] == '\x01') {
    fVar6 = (float)VectorSignedToFloat(param_1[0x5c],(byte)(in_fpscr >> 0x16) & 3);
    param_1[0x1c] = (int)((float)param_1[0x1c] + fVar6);
  }
LAB_0055e368:
  if (*(char *)((int)param_1 + 0xd) != '\0') {
    if ((param_1[0x1b] != 0) || (0.0 < (float)param_1[0x1c])) {
      fn_0055e7b0(param_1);
    }
    else if (*(char *)((int)param_1 + 0xe) == '\0') {
      fn_0055e038(param_1);
    }
    iVar5 = 0;
    do {
      if ((iVar5 < 0x10) && (param_1[iVar5 + 0x24] != 0)) {
        fn_001a4270();
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x10);
  }
  return;
}



void fn_0055e7b0(int param_1)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar5 = 0;
  do {
    if ((iVar5 < 0x10) && (iVar6 = *(int *)(param_1 + iVar5 * 4 + 0x90), iVar6 != 0)) {
      fn_0055a560(iVar6,0x7f);
      fn_0055a4a8(iVar6);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x10);
  iVar5 = 0;
  fVar10 = 1.6666667e-05;
  fVar11 = 1.0;
  while( true ) {
    iVar6 = *(int *)(param_1 + 0x6c);
    if ((iVar6 == 0) &&
       (fVar9 = (float)VectorUnsignedToFloat
                                 ((uint)*(byte *)(param_1 + 0x75) *
                                  (uint)*(ushort *)(param_1 + 0x76),(byte)(in_fpscr >> 0x16) & 3),
       (int)(fVar9 * *(float *)(param_1 + 100) * fVar10 * *(float *)(param_1 + 0x70)) < 0x3f800000))
    {
      *(undefined4 *)(param_1 + 0x70) = 0;
      return;
    }
    if (DAT_008c3580 <= iVar5) {
      return;
    }
    if (iVar6 == 0) {
      fVar9 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(param_1 + 0x75) * (uint)*(ushort *)(param_1 + 0x76),
                                (byte)(in_fpscr >> 0x16) & 3);
      *(float *)(param_1 + 0x70) =
           *(float *)(param_1 + 0x70) - fVar11 / (fVar9 * fVar10 * *(float *)(param_1 + 100));
    }
    else {
      *(int *)(param_1 + 0x6c) = iVar6 + -1;
    }
    sVar1 = *(short *)(param_1 + 0x7c);
    bVar2 = false;
    sVar4 = sVar1;
    if (sVar1 < *(short *)(param_1 + 0x7a)) {
      sVar4 = sVar1 + 1;
    }
    iVar6 = 0;
    if (sVar1 < *(short *)(param_1 + 0x7a)) {
      *(short *)(param_1 + 0x7c) = sVar4;
    }
    do {
      if (iVar6 < 0x10) {
        iVar8 = param_1 + iVar6 * 4;
        iVar7 = *(int *)(iVar8 + 0x90);
        if (iVar7 != 0) {
          fn_0055a630(iVar7);
          iVar3 = fn_0055a378(iVar7,0);
          if ((iVar3 < 0) && (*(int *)(iVar8 + 0x90) != 0)) {
            fn_001a0728();
            (**(code **)(**(int **)(param_1 + 0x84) + 0xc))
                      (*(int **)(param_1 + 0x84),*(undefined4 *)(iVar8 + 0x90));
            *(undefined4 *)(iVar8 + 0x90) = 0;
          }
          if (*(char *)(iVar7 + 5) != '\0') {
            bVar2 = true;
          }
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x10);
    if (!bVar2) break;
    iVar5 = iVar5 + 1;
    *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
  }
  fn_001966d8(param_1);
  *(undefined1 *)(param_1 + 0xf) = 1;
  return;
}


