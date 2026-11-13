#include "0055afe8_0055b900.h"



void fn_0055b900(int param_1)

{
  fn_0055be4c();
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 0xb94) = 3;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0xcf8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}



void fn_0055b720(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *(undefined1 *)(param_1 + 0xf) = 1;
  if (*(char *)(param_1 + 0xa2) != '\0') {
    uVar1 = fn_00172fc4();
    fn_001a071c(uVar1,param_1 + 0x50);
    *(undefined1 *)(param_1 + 0xa2) = 0;
  }
  if (*(char *)(param_1 + 0xd) != '\0') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 0xc) == '\0') goto LAB_0055b7c0;
  uVar1 = fn_0018c8e8();
  fn_0017d904(uVar1,param_1 + 0x44);
  if (*(int *)(param_1 + 0x9c) != 0) {
    if (*(char *)(*(int *)(param_1 + 0x9c) + 0x139) != '\0') {
      fn_0055b1c4(param_1);
      fn_001a46b0(*(undefined4 *)(param_1 + 0x9c));
      if (*(int *)(param_1 + 0x9c) == 0) goto LAB_0055b7bc;
    }
    fn_001a4698(*(undefined4 *)(param_1 + 0x9c));
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
LAB_0055b7bc:
  *(undefined1 *)(param_1 + 0xc) = 0;
LAB_0055b7c0:
  if (*(char *)(param_1 + 0xa1) != '\0') {
    fn_0015dfb8(param_1);
    *(undefined1 *)(param_1 + 0xa1) = 0;
  }
  iVar3 = *(int *)(param_1 + 0xa8);
  if (iVar3 != 0) {
    iVar4 = *(int *)(param_1 + 0xa4);
    iVar2 = fn_0013c3d8(iVar3 + 0xc);
    if (iVar2 == 0) {
      fn_0017d948(iVar4 + 0x20,iVar4 + 0x24,iVar3 + 0x44);
    }
    else {
      if (*(int *)(iVar3 + 0x3c) != 0) {
        fn_005558ac(*(undefined4 *)(iVar3 + 0x24));
      }
      fn_0017d948(iVar4 + 0x14,iVar4 + 0x18,iVar3 + 0x44);
    }
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  return;
}



void fn_0055b414(int param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0xf) = 1;
  if (*(char *)(param_1 + 0xa2) != '\0') {
    uVar1 = fn_00172fc4();
    fn_001a071c(uVar1,param_1 + 0x50);
    *(undefined1 *)(param_1 + 0xa2) = 0;
  }
  if (*(char *)(param_1 + 0xd) != '\0') {
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  return;
}



void fn_0055b1c4(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  float *pfVar6;
  undefined4 uVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  byte local_58 [8];
  float local_50 [13];
  
  if (*(int *)(param_1 + 0x9c) != 0) {
    uVar1 = (uint)*(byte *)(param_1 + 0x91);
    uVar16 = (ulonglong)*(uint *)(param_1 + 0x14);
    fVar12 = *(float *)(param_1 + 0x88) * *(float *)(param_1 + 0x18);
    fVar14 = 0.0;
    if (uVar1 < 2) {
      fVar9 = (float)VectorSignedToFloat(uVar1 - 0x3f,(byte)(in_fpscr >> 0x16) & 3);
    }
    else {
      fVar9 = (float)VectorSignedToFloat(uVar1 - 0x40,(byte)(in_fpscr >> 0x16) & 3);
    }
    uVar1 = (uint)*(byte *)(param_1 + 0x92);
    if (uVar1 < 0x40) {
      fVar10 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
      fVar10 = fVar10 * 0.015873017;
    }
    else {
      fVar10 = (float)VectorUnsignedToFloat(uVar1 + 1,(byte)(in_fpscr >> 0x16) & 3);
      fVar10 = fVar10 * 0.015625;
    }
    uVar1 = (uint)*(byte *)(param_1 + 0x97);
    if ((int)*(char *)(param_1 + 0x2c) != 0xffffffff) {
      uVar1 = (int)*(char *)(param_1 + 0x2c);
    }
    fVar13 = *(float *)(param_1 + 0x20) + fVar10 + 0.0;
    fVar10 = (float)VectorSignedToFloat(*(byte *)(param_1 + 0x96) - 0x40,
                                        (byte)(in_fpscr >> 0x16) & 3);
    fVar15 = 0.007874016;
    uVar5 = 0;
    VectorUnsignedToFloat((uint)*(byte *)(param_1 + 0x98),(byte)(in_fpscr >> 0x16) & 3);
    fVar10 = *(float *)(param_1 + 0x24) + fVar10 * 0.015625;
    lVar11 = (ulonglong)
             (uint)(*(float *)(param_1 + 0x1c) +
                   *(float *)(param_1 + 0x60) * (fVar9 * 0.015873017 + 0.0)) << 0x20;
    fVar9 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)(param_1 + 0x93),(byte)(in_fpscr >> 0x16) & 3);
    local_58[0] = *(byte *)(param_1 + 0x94);
    local_58[1] = *(undefined1 *)(param_1 + 0x95);
    fVar9 = *(float *)(param_1 + 0x30) + (fVar9 * 0.007874016 - 1.0);
    do {
      pfVar6 = local_50 + uVar5;
      *pfVar6 = fVar14;
      fVar8 = (float)VectorUnsignedToFloat((uint)local_58[uVar5],(byte)(in_fpscr >> 0x16) & 3);
      fVar8 = fVar14 + fVar8 * fVar15;
      *pfVar6 = fVar8;
      fn_001a8754(param_1,uVar5 & 0xff);
      uVar3 = (undefined4)((ulonglong)lVar11 >> 0x20);
      uVar4 = (undefined4)uVar16;
      uVar5 = uVar5 + 1;
      *pfVar6 = fVar8 + *pfVar6;
    } while ((int)uVar5 < 2);
    fn_0055a178(*(undefined4 *)(*(int *)(param_1 + 0x9c) + 0x1a8),*(undefined1 *)(param_1 + 0x34));
    fn_0055a198(*(undefined4 *)(*(int *)(param_1 + 0x9c) + 0x1a8),*(undefined1 *)(param_1 + 0x35));
    *(undefined4 *)(*(int *)(param_1 + 0x9c) + 0x140) = uVar4;
    *(float *)(*(int *)(param_1 + 0x9c) + 0x144) = fVar12;
    *(undefined4 *)(*(int *)(param_1 + 0x9c) + 0x148) = uVar3;
    *(float *)(*(int *)(param_1 + 0x9c) + 0x150) = fVar10;
    fn_001a83d0(*(undefined4 *)(param_1 + 0x9c),uVar1);
    *(float *)(*(int *)(param_1 + 0x9c) + 0x158) = fVar9;
    *(float *)(*(int *)(param_1 + 0x9c) + 0x15c) = local_50[0];
    *(float *)(*(int *)(param_1 + 0x9c) + 0x160) = local_50[1];
    *(float *)(*(int *)(param_1 + 0x9c) + 0x14c) = fVar13;
    iVar2 = *(int *)(param_1 + 0x9c);
    uVar3 = *(undefined4 *)(param_1 + 0x7c);
    uVar4 = *(undefined4 *)(param_1 + 0x80);
    uVar7 = *(undefined4 *)(param_1 + 0x84);
    *(undefined4 *)(iVar2 + 0xb4) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(iVar2 + 0xb8) = uVar3;
    *(undefined4 *)(iVar2 + 0xbc) = uVar4;
    *(undefined4 *)(iVar2 + 0xc0) = uVar7;
    fn_0055ea6c(*(undefined4 *)(param_1 + 0x9c),(int)*(char *)(param_1 + 0xa3));
  }
  return;
}



undefined4 fn_0055b068(int param_1)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_98 [4];
  int local_94;
  int local_90;
  uint local_88;
  undefined1 auStack_20 [16];
  
  bVar1 = *(byte *)(param_1 + 0x5e);
  fn_005591cc(auStack_20,*(undefined4 *)(param_1 + 0x68),(int)*(char *)(param_1 + 0x5f));
  iVar3 = fn_006e31a0(auStack_20,auStack_98,0);
  if (iVar3 == 0) {
    return 0;
  }
  uVar5 = 0;
  if (*(char *)(param_1 + 0x70) == '\0') {
    uVar5 = *(uint *)(param_1 + 0x74);
  }
  else if (*(char *)(param_1 + 0x70) == '\x01') {
    lVar2 = (longlong)*(int *)(param_1 + 0x74) * (longlong)local_90;
    uVar5 = fn_0011c134((int)lVar2,(int)((ulonglong)lVar2 >> 0x20),1000,0);
  }
  if (uVar5 <= local_88) {
    if (2 < local_94) {
      local_94 = 2;
    }
    iVar3 = fn_0055eae8(local_94,bVar1 + 0x40,&LAB_0055b3f8,param_1);
    if (iVar3 != 0) {
      fn_00140dd8(auStack_20,*(undefined4 *)(param_1 + 100));
      iVar4 = fn_006e3d54(auStack_20,param_1 + 0x88,*(undefined4 *)(param_1 + 0x6c));
      if (iVar4 == 0) {
        return 0;
      }
      fn_00558278(iVar3 + 0x98,*(undefined1 *)(param_1 + 0x8c));
      fn_005581e0(iVar3 + 0x98,*(undefined1 *)(param_1 + 0x8f));
      fn_00558200(iVar3 + 0x98,*(undefined1 *)(param_1 + 0x8d));
      *(undefined1 *)(iVar3 + 0xb0) = *(undefined1 *)(param_1 + 0x8e);
      fn_0055814c(iVar3 + 0x98,*(undefined1 *)(param_1 + 0x90));
      *(undefined1 *)(iVar3 + 0x13c) = *(undefined1 *)(param_1 + 0x5d);
      fn_00195d80(*(undefined4 *)(iVar3 + 0x1a8),(int)*(char *)(param_1 + 0x2e));
      fn_0055edf0(iVar3,auStack_98,0xffffffff,uVar5);
      *(int *)(param_1 + 0x9c) = iVar3;
      *(undefined1 *)(param_1 + 0x5c) = 1;
      return 1;
    }
  }
  return 0;
}



void fn_0055afe8(int param_1)

{
  fn_0055b880();
  *(undefined1 *)(param_1 + 0x5d) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x5e) = 0x40;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x91) = 0x40;
  *(undefined1 *)(param_1 + 0x92) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x95) = 0;
  *(undefined1 *)(param_1 + 0x93) = 0x7f;
  fn_0017df94(param_1 + 0x78);
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined1 *)(param_1 + 0x5f) = 0xff;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa2) = 0;
  *(undefined1 *)(param_1 + 0xa3) = 0;
  *(undefined1 *)(param_1 + 0xa1) = 1;
  return;
}



void fn_0055b880(int param_1)

{
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0xff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}


