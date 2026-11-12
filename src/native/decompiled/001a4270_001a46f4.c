#include "001a4270_001a46f4.h"



undefined4 fn_001a46f4(int param_1)

{
  undefined4 uVar1;
  
  if (((param_1 < 1) || (DAT_00892808 <= param_1)) ||
     (*(short *)(DAT_00892804 + param_1 * 0x78 + 0x32) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



void fn_001a46b0(int param_1)

{
  if (*(char *)(param_1 + 0x98) != '\x04') {
    if ((*(int *)(param_1 + 0x1a8) != 0) && (*(char *)(param_1 + 0x13c) == '\0')) {
      fn_001a82f4(*(int *)(param_1 + 0x1a8),1);
    }
    *(undefined1 *)(param_1 + 0x98) = 4;
  }
  *(undefined1 *)(param_1 + 0x138) = 0;
  return;
}



void fn_001a4698(int param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    *(undefined4 *)(param_1 + 0x1a4) = 0;
  }
  return;
}



undefined4 fn_001a4628(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = iVar1 + -0x58;
    if (*(int *)(iVar1 + -0x18) <= param_2) {
      uVar5 = *(undefined4 *)(iVar1 + -0x50);
      pcVar3 = *(code **)(iVar1 + -0x4c);
      uVar4 = *(undefined4 *)(iVar1 + -0x48);
      fn_0017ea58(iVar2);
      fn_0018b010(iVar2);
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(iVar2,2,uVar4);
      }
      return uVar5;
    }
  }
  return 0;
}



void fn_001a4608(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  fn_001a834c(*(int *)(param_1 + 4),0,param_2,param_3);
  return;
}



void fn_001a4270(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  uint uVar10;
  bool bVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  float fVar23;
  undefined8 uVar22;
  float local_48 [13];
  
  bVar11 = *(char *)(param_1 + 5) != '\0';
  iVar4 = 0;
  if (bVar11) {
    iVar4 = *(int *)(param_1 + 0x130);
  }
  if (bVar11 && iVar4 != 0) {
    if ((int)*(short *)(param_1 + 0x90) < (int)*(short *)(param_1 + 0x8e)) {
      bVar1 = *(byte *)(param_1 + 0x8c);
      iVar4 = fn_00300f74(((uint)*(byte *)(param_1 + 0x8d) - (uint)bVar1) *
                           (int)*(short *)(param_1 + 0x90));
      uVar10 = iVar4 + (uint)bVar1 & 0xff;
    }
    else {
      uVar10 = (uint)*(byte *)(param_1 + 0x8d);
    }
    if ((int)*(short *)(param_1 + 0x96) < (int)*(short *)(param_1 + 0x94)) {
      bVar1 = *(byte *)(param_1 + 0x92);
      iVar4 = fn_00300f74(((uint)*(byte *)(param_1 + 0x93) - (uint)bVar1) *
                           (int)*(short *)(param_1 + 0x96));
      uVar5 = iVar4 + (uint)bVar1 & 0xff;
    }
    else {
      uVar5 = (uint)*(byte *)(param_1 + 0x93);
    }
    iVar4 = *(int *)(param_1 + 300);
    if ((int)*(short *)(iVar4 + 0x7c) < (int)*(short *)(iVar4 + 0x7a)) {
      bVar1 = *(byte *)(iVar4 + 0x78);
      iVar7 = fn_00300f74(((uint)*(byte *)(iVar4 + 0x79) - (uint)bVar1) *
                           (int)*(short *)(iVar4 + 0x7c));
      uVar6 = iVar7 + (uint)bVar1 & 0xff;
    }
    else {
      uVar6 = (uint)*(byte *)(iVar4 + 0x79);
    }
    iVar8 = (int)*(short *)(param_1 + 0xa8);
    fVar12 = (float)VectorUnsignedToFloat(uVar10 * uVar5 * uVar6,(byte)(in_fpscr >> 0x16) & 3);
    iVar7 = iVar8;
    if (*(short *)(param_1 + 0xa6) <= iVar8) {
      iVar7 = (int)*(char *)(param_1 + 0xa5);
    }
    fVar12 = *(float *)(param_1 + 8) * *(float *)(iVar4 + 0x14) *
             fVar12 * 4.881899e-07 * fVar12 * 4.881899e-07;
    if (iVar8 < *(short *)(param_1 + 0xa6)) {
      cVar2 = *(char *)(param_1 + 0xa4);
      cVar3 = fn_00300f74(((int)*(char *)(param_1 + 0xa5) - (int)cVar2) * iVar7);
      iVar7 = (int)(char)(cVar3 + cVar2);
    }
    fVar13 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x16) & 3);
    iVar8 = (int)*(short *)(param_1 + 0x9c);
    iVar7 = iVar8;
    if (*(short *)(param_1 + 0x9a) <= iVar8) {
      iVar7 = (int)*(char *)(param_1 + 0x99);
    }
    fVar14 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0xf1),(byte)(in_fpscr >> 0x16) & 3);
    uVar19 = CONCAT44(*(float *)(iVar4 + 0x18) * *(float *)(param_1 + 0xc),
                      fVar13 * 0.0078125 * fVar14);
    if (iVar8 < *(short *)(param_1 + 0x9a)) {
      cVar2 = *(char *)(param_1 + 0x98);
      cVar3 = fn_00300f74(((int)*(char *)(param_1 + 0x99) - (int)cVar2) * iVar7);
      iVar7 = (int)(char)(cVar3 + cVar2);
    }
    fVar14 = 0.015873017;
    fVar23 = 1.0;
    fVar13 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x16) & 3);
    fVar13 = fVar13 * 0.015873017;
    uVar10 = in_fpscr & 0xfffffff;
    uVar5 = uVar10 | (uint)(fVar13 < 1.0) << 0x1f | (uint)(fVar13 == 1.0) << 0x1e;
    uVar6 = uVar5 | (uint)NAN(fVar13) << 0x1c;
    bVar1 = (byte)(uVar5 >> 0x18);
    if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(uVar6 >> 0x1c) & 1)) {
      if (fVar13 < -1.0) {
        fVar13 = -1.0;
      }
    }
    else {
      uVar10 = uVar6;
      fVar13 = fVar23;
    }
    iVar8 = (int)*(short *)(param_1 + 0xa2);
    iVar7 = iVar8;
    if (*(short *)(param_1 + 0xa0) <= iVar8) {
      iVar7 = (int)*(char *)(param_1 + 0x9f);
    }
    uVar18 = CONCAT44(fVar12,*(float *)(param_1 + 0x10) + *(float *)(iVar4 + 0x1c) +
                             fVar13 * *(float *)(param_1 + 0x18) * *(float *)(iVar4 + 0x60));
    if (iVar8 < *(short *)(param_1 + 0xa0)) {
      cVar2 = *(char *)(param_1 + 0x9e);
      cVar3 = fn_00300f74(((int)*(char *)(param_1 + 0x9f) - (int)cVar2) * iVar7);
      iVar7 = (int)(char)(cVar3 + cVar2);
    }
    fVar12 = (float)VectorSignedToFloat(iVar7,(byte)(uVar10 >> 0x16) & 3);
    fVar12 = fVar12 * fVar14;
    uVar10 = uVar10 & 0xfffffff;
    uVar5 = uVar10 | (uint)(fVar12 < 2.0) << 0x1f | (uint)(fVar12 == 2.0) << 0x1e;
    uVar6 = uVar5 | (uint)NAN(fVar12) << 0x1c;
    bVar1 = (byte)(uVar5 >> 0x18);
    if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(uVar6 >> 0x1c) & 1)) {
      if (fVar12 < 0.0) {
        fVar12 = 0.0;
      }
    }
    else {
      uVar10 = uVar6;
      fVar12 = 2.0;
    }
    iVar7 = (int)*(char *)(param_1 + 0xfe);
    if (*(char *)(iVar4 + 0x2c) != -1) {
      iVar7 = (int)*(char *)(iVar4 + 0x2c);
    }
    uVar20 = CONCAT44(*(float *)(param_1 + 0x104) + *(float *)(iVar4 + 0x24),
                      fVar12 + *(float *)(param_1 + 0x14) + *(float *)(iVar4 + 0x20));
    uVar5 = 0;
    fVar12 = (float)VectorUnsignedToFloat
                              ((uint)*(byte *)(param_1 + 0xff),(byte)(uVar10 >> 0x16) & 3);
    fVar23 = fVar12 * 0.007874016 - fVar23;
    uVar22 = CONCAT44(fVar23,0x3c010204);
    uVar21 = (ulonglong)(uint)(fVar23 + *(float *)(iVar4 + 0x30));
    do {
      fn_001a8754(*(undefined4 *)(param_1 + 300),uVar5 & 0xff);
      iVar4 = param_1 + uVar5;
      pfVar9 = local_48 + uVar5;
      uVar5 = uVar5 + 1;
      fVar13 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(iVar4 + 0x100),(byte)(uVar10 >> 0x16) & 3);
      fVar12 = fVar12 + fVar13 * (float)uVar22;
      *pfVar9 = fVar12;
    } while ((int)uVar5 < 2);
    for (iVar4 = *(int *)(param_1 + 0x130); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x1ac)) {
      *(int *)(iVar4 + 0x140) = (int)((ulonglong)uVar18 >> 0x20);
      *(int *)(iVar4 + 0x164) = (int)uVar19;
      *(int *)(iVar4 + 0x144) = (int)((ulonglong)uVar19 >> 0x20);
      *(int *)(iVar4 + 0x148) = (int)uVar18;
      *(int *)(iVar4 + 0x14c) = (int)uVar20;
      *(int *)(iVar4 + 0x150) = (int)((ulonglong)uVar20 >> 0x20);
      fn_001a83d0(iVar4,iVar7);
      *(int *)(iVar4 + 0x158) = (int)uVar21;
      *(float *)(iVar4 + 0x15c) = local_48[0];
      *(float *)(iVar4 + 0x160) = local_48[1];
      uVar15 = *(undefined4 *)(param_1 + 0xb0);
      uVar16 = *(undefined4 *)(param_1 + 0xb4);
      uVar17 = *(undefined4 *)(param_1 + 0xb8);
      *(undefined4 *)(iVar4 + 0xb4) = *(undefined4 *)(param_1 + 0xac);
      *(undefined4 *)(iVar4 + 0xb8) = uVar15;
      *(undefined4 *)(iVar4 + 0xbc) = uVar16;
      *(undefined4 *)(iVar4 + 0xc0) = uVar17;
      *(undefined1 *)(iVar4 + 0x134) = *(undefined1 *)(param_1 + 0xec);
      uVar15 = *(undefined4 *)(param_1 + 0xc0);
      uVar16 = *(undefined4 *)(param_1 + 0xc4);
      uVar17 = *(undefined4 *)(param_1 + 200);
      *(undefined4 *)(iVar4 + 0xd4) = *(undefined4 *)(param_1 + 0xbc);
      *(undefined4 *)(iVar4 + 0xd8) = uVar15;
      *(undefined4 *)(iVar4 + 0xdc) = uVar16;
      *(undefined4 *)(iVar4 + 0xe0) = uVar17;
      *(undefined1 *)(iVar4 + 0x135) = *(undefined1 *)(param_1 + 0xed);
      uVar15 = *(undefined4 *)(param_1 + 0xd0);
      uVar16 = *(undefined4 *)(param_1 + 0xd4);
      uVar17 = *(undefined4 *)(param_1 + 0xd8);
      *(undefined4 *)(iVar4 + 0xf4) = *(undefined4 *)(param_1 + 0xcc);
      *(undefined4 *)(iVar4 + 0xf8) = uVar15;
      *(undefined4 *)(iVar4 + 0xfc) = uVar16;
      *(undefined4 *)(iVar4 + 0x100) = uVar17;
      *(undefined1 *)(iVar4 + 0x136) = *(undefined1 *)(param_1 + 0xee);
      uVar15 = *(undefined4 *)(param_1 + 0xdc);
      uVar16 = *(undefined4 *)(param_1 + 0xe0);
      uVar17 = *(undefined4 *)(param_1 + 0xe4);
      *(undefined4 *)(iVar4 + 0x120) = *(undefined4 *)(param_1 + 0xe8);
      *(undefined4 *)(iVar4 + 0x114) = uVar15;
      *(undefined4 *)(iVar4 + 0x118) = uVar16;
      *(undefined4 *)(iVar4 + 0x11c) = uVar17;
      *(undefined1 *)(iVar4 + 0x137) = *(undefined1 *)(param_1 + 0xef);
    }
  }
  return;
}


