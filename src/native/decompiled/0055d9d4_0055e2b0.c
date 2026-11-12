#include "0055d9d4_0055e2b0.h"



void fn_0055e2b0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  *(char *)(param_1 + 0xe) = (char)param_2;
  do {
    if ((iVar2 < 0x10) && (iVar1 = *(int *)(param_1 + iVar2 * 4 + 0x90), iVar1 != 0)) {
      fn_0055a4f8(iVar1,param_2);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  return;
}



void fn_0055e240(int param_1,undefined4 param_2,int param_3)

{
  int local_20;
  undefined2 *local_1c;
  undefined4 local_18;
  undefined1 local_14;
  
  if (*(int *)(param_1 + 0x88) != 0) {
    local_20 = param_1 + 0xd0;
    local_1c = &DAT_008f2750;
    local_18 = fn_0055a4dc(param_3,0);
    local_14 = *(undefined1 *)(param_3 + 0x24);
    (**(code **)(param_1 + 0x88))(param_2,&local_20,*(undefined4 *)(param_1 + 0x8c));
    *(undefined1 *)(param_3 + 0x24) = local_14;
  }
  return;
}



int fn_0055e210(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0x10) {
    iVar1 = param_1 + param_2 * 2 + 0xd0;
  }
  else if (param_2 < 0x20) {
    iVar1 = (int)&DAT_008f2730 + param_2 * 2;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



void fn_0055e038(int param_1)

{
  short sVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint in_fpscr;
  uint uVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar13 = 0x378bcf65;
  fVar12 = (float)VectorUnsignedToFloat
                            ((uint)*(byte *)(param_1 + 0x75) * (uint)*(ushort *)(param_1 + 0x76),
                             (byte)(in_fpscr >> 0x16) & 3);
  fVar12 = fVar12 * *(float *)(param_1 + 100) * 1.6666667e-05;
  uVar11 = in_fpscr & 0xfffffff;
  if (fVar12 != 0.0) {
    uVar15 = CONCAT44(fVar12,0x4d7fb0ff);
    uVar8 = 0x4e200000;
    uVar9 = 0;
    uVar16 = fn_007b97a4((*(float *)(param_1 + 0x68) * 2.6811186e+08) / fVar12);
    uVar4 = (uint)((ulonglong)uVar16 >> 0x20);
    bVar10 = 0x4e1fffff < (uint)uVar16;
    iVar5 = uVar4 - !bVar10;
    if (uVar4 == 0 && bVar10 <= uVar4) {
      do {
        bVar10 = uVar8 < (uint)uVar16;
        uVar8 = uVar8 - (uint)uVar16;
        uVar9 = uVar9 - ((int)((ulonglong)uVar16 >> 0x20) + (uint)bVar10);
        sVar1 = *(short *)(param_1 + 0x7c);
        bVar10 = false;
        sVar3 = sVar1;
        if (sVar1 < *(short *)(param_1 + 0x7a)) {
          sVar3 = sVar1 + 1;
        }
        iVar5 = 0;
        if (sVar1 < *(short *)(param_1 + 0x7a)) {
          *(short *)(param_1 + 0x7c) = sVar3;
        }
        do {
          if (iVar5 < 0x10) {
            iVar7 = param_1 + iVar5 * 4;
            iVar6 = *(int *)(iVar7 + 0x90);
            if (iVar6 != 0) {
              fn_0055a630(iVar6);
              iVar2 = fn_0055a378(iVar6,1);
              if ((iVar2 < 0) && (*(int *)(iVar7 + 0x90) != 0)) {
                fn_001a0728();
                (**(code **)(**(int **)(param_1 + 0x84) + 0xc))
                          (*(int **)(param_1 + 0x84),*(undefined4 *)(iVar7 + 0x90));
                *(undefined4 *)(iVar7 + 0x90) = 0;
              }
              if (*(char *)(iVar6 + 5) != '\0') {
                bVar10 = true;
              }
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0x10);
        if (!bVar10) {
          fn_001966d8(param_1);
          *(undefined1 *)(param_1 + 0xf) = 1;
          return;
        }
        *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
        fVar12 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(param_1 + 0x75) *
                                   (uint)*(ushort *)(param_1 + 0x76),(byte)(uVar11 >> 0x16) & 3);
        fVar14 = (float)uVar15;
        fVar12 = fVar12 * (float)uVar13 * *(float *)(param_1 + 100);
        uVar15 = CONCAT44(fVar12,fVar14);
        uVar11 = uVar11 & 0xfffffff;
        if (fVar12 == (float)((ulonglong)uVar13 >> 0x20)) {
          return;
        }
        uVar16 = fn_007b97a4(fVar14 / fVar12);
        uVar4 = (uint)((ulonglong)uVar16 >> 0x20);
        bVar10 = uVar8 <= (uint)uVar16;
        iVar5 = uVar4 - (uVar9 + !bVar10);
      } while (uVar4 <= uVar9 && (uint)bVar10 <= uVar4 - uVar9);
    }
    fVar14 = (float)((ulonglong)uVar15 >> 0x20);
    fVar12 = (float)fn_00191dcc((uint)uVar16 - uVar8,
                                 (int)((ulonglong)uVar16 >> 0x20) - (uVar9 + ((uint)uVar16 < uVar8))
                                 ,iVar5);
    *(float *)(param_1 + 0x68) = fVar12 * fVar14 * 3.7297867e-09;
  }
  return;
}



void fn_0055df5c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  fn_0055b880();
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 100) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined2 *)(param_1 + 0x76) = 0x78;
  *(undefined1 *)(param_1 + 0x75) = 0x30;
  *(undefined1 *)(param_1 + 0x78) = 0x7f;
  *(undefined1 *)(param_1 + 0x79) = 0x7f;
  *(undefined2 *)(param_1 + 0x7a) = 0;
  *(undefined2 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x74) = 0x40;
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  do {
    iVar3 = param_1 + iVar1 * 2;
    iVar1 = iVar1 + 2;
    *(undefined2 *)(iVar3 + 0xd0) = 0xffff;
    *(undefined2 *)(iVar3 + 0xd2) = 0xffff;
  } while (iVar1 < 0x10);
  iVar3 = 0;
  iVar1 = 0;
  do {
    iVar2 = iVar3 + 1;
    iVar1 = iVar1 + 2;
    *(undefined4 *)(param_1 + iVar3 * 4 + 0x90) = 0;
    iVar3 = iVar3 + 2;
    *(undefined4 *)(param_1 + iVar2 * 4 + 0x90) = 0;
  } while (iVar1 < 0x10);
  *(undefined1 *)(param_1 + 0x166) = 0;
  *(undefined1 *)(param_1 + 0x165) = 1;
  return;
}



void fn_0055df30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[7] = param_6;
  param_1[4] = param_5 + 8;
  param_1[3] = param_5;
  param_1[5] = param_5 + 0x10;
  param_1[6] = param_5 + 0x18;
  return;
}



void fn_0055df18(int param_1)

{
  if (*(int *)(param_1 + 0x78) == 0) {
    return;
  }
  fn_005558ac(*(undefined4 *)(param_1 + 0x24));
  return;
}



bool fn_0055defc(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0013c3d8(param_1 + 0xc);
  return iVar1 == 0;
}



void fn_0055db10(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x50) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x52) = 1;
  uVar1 = 0;
  if (*(int *)(param_1 + 0x220) != 0) {
    do {
      iVar2 = param_1 + uVar1 * 0x3c8;
      if (*(int *)(iVar2 + 0x228) != 0) {
        fn_00195f04(*(undefined4 *)(param_1 + 100));
        *(undefined4 *)(iVar2 + 0x228) = 0;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x220));
  }
  uVar1 = 0;
  if (*(int *)(param_1 + 0x220) != 0) {
    do {
      iVar2 = param_1 + uVar1 * 0x3c8;
      if (*(int *)(iVar2 + 0x22c) != 0) {
        fn_0018b010();
        *(undefined4 *)(iVar2 + 0x22c) = 0;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x220));
  }
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  fn_0015dfb8(param_1);
  return;
}



void fn_0055d9d4(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  fn_0055c3dc(param_1[0x18]);
  if (*(char *)((int)param_1 + 0xd) != '\0') {
    uVar1 = 0;
    if (param_1[0x88] != 0) {
      do {
        if (param_1[uVar1 * 0xf2 + 0x8b] == 0) {
          (**(code **)(*param_1 + 0x14))(param_1);
          *(undefined1 *)((int)param_1 + 0xf) = 1;
          return;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < (uint)param_1[0x88]);
    }
    uVar1 = 0;
    if (param_1[0x89] != 0) {
      do {
        fn_0055d490(param_1,param_1 + uVar1 * 9 + 0x81a);
        uVar1 = uVar1 + 1;
      } while (uVar1 < (uint)param_1[0x89]);
    }
  }
  if ((*(char *)((int)param_1 + 0x55) != '\0') && (iVar2 = fn_006e4594(param_1[0x18]), iVar2 == 0))
  {
    *(undefined1 *)((int)param_1 + 0x55) = 0;
    bVar4 = *(char *)((int)param_1 + 0xe) != '\0';
    uVar1 = (uint)bVar4;
    if ((int)(char)param_1[0x15] != uVar1) {
      uVar3 = 0;
      if (param_1[0x88] != 0) {
        do {
          if (param_1[uVar3 * 0xf2 + 0x8b] != 0) {
            fn_0055a27c(param_1[uVar3 * 0xf2 + 0x8b],uVar1);
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < (uint)param_1[0x88]);
      }
      *(bool *)(param_1 + 0x15) = bVar4;
    }
  }
  if (*(char *)((int)param_1 + 0x57) != '\0') {
    *(undefined1 *)((int)param_1 + 0x57) = 0;
  }
  return;
}


