#include "0053ad78_0053b400.h"



void fn_0053b400(float *param_1,float *param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int extraout_r1;
  uint uVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  
  iVar5 = (int)*(short *)(param_4 + 8);
  uVar4 = (uint)*(short *)(param_4 + 10);
  iVar1 = *(int *)(param_3 + 4);
  if (iVar5 == 0) {
    iVar1 = iVar1 * uVar4;
    iVar3 = *(int *)(param_3 + 8);
  }
  else {
    iVar3 = iVar5;
  }
  uVar2 = fn_00300f74(iVar1,iVar3);
  if ((*(char *)(param_4 + 2) == '\0') || (uVar2 < uVar4)) {
    if ((iVar5 != 0) && ((*(char *)(param_4 + 2) == '\0' && (*(char *)(param_4 + 1) != '\0')))) {
      uVar2 = uVar2 + *(int *)(param_3 + 0x15c);
    }
    fn_00169f1c(uVar2,uVar4);
    uVar8 = fn_00169f1c(*(undefined1 *)(extraout_r1 + param_4 + 0xc),*(undefined1 *)(param_4 + 3));
    fVar6 = (float)VectorSignedToFloat((int)((ulonglong)uVar8 >> 0x20),(byte)(in_fpscr >> 0x16) & 3)
    ;
    fVar7 = (float)VectorSignedToFloat((int)uVar8,(byte)(in_fpscr >> 0x16) & 3);
    *param_1 = *(float *)(param_4 + 0x30) * fVar6;
    *param_2 = *(float *)(param_4 + 0x34) * fVar7;
  }
  return;
}



void fn_0053b22c(undefined4 *param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined1 uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  uVar14 = 0;
  param_1[0x37] = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  uVar3 = param_1[0x23];
  uVar7 = *(uint *)(param_2 + 0x2d4);
  uVar15 = 0x3f800000;
  param_1[0x23] = uVar3 * 0x41c64e6d + 0x3039;
  param_1[0x24] =
       *(int *)(param_2 + 0x2d0) -
       (uVar3 * ((int)uVar7 >> 0x1f) + (int)((ulonglong)uVar7 * (ulonglong)uVar3 >> 0x20));
  param_1[0x25] = 0x3f800000;
  param_1[0x33] = *(undefined4 *)(param_2 + 400);
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x40] = *(undefined4 *)(param_2 + 0x138);
  param_1[0x8c] = 0;
  *(undefined1 *)(param_1 + 0x8d) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  if (((DAT_008c6300 & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c6300), iVar4 != 0)) {
    DAT_008f9e38 = uVar15;
    DAT_008f9e3c = uVar14;
    DAT_008f9e40 = uVar14;
    DAT_008f9e44 = uVar14;
    DAT_008f9e48 = uVar14;
    DAT_008f9e4c = uVar15;
    DAT_008f9e50 = uVar14;
    DAT_008f9e54 = uVar14;
    DAT_008f9e58 = uVar14;
    DAT_008f9e5c = uVar14;
    DAT_008f9e60 = uVar15;
    DAT_008f9e64 = uVar14;
  }
  fn_001781f0(param_1 + 0x74,&DAT_008f9e38);
  if (((DAT_008c6300 & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c6300), iVar4 != 0)) {
    DAT_008f9e38 = uVar15;
    DAT_008f9e3c = uVar14;
    DAT_008f9e40 = uVar14;
    DAT_008f9e44 = uVar14;
    DAT_008f9e48 = uVar14;
    DAT_008f9e4c = uVar15;
    DAT_008f9e50 = uVar14;
    DAT_008f9e54 = uVar14;
    DAT_008f9e58 = uVar14;
    DAT_008f9e5c = uVar14;
    DAT_008f9e60 = uVar15;
    DAT_008f9e64 = uVar14;
  }
  fn_001781f0(param_1 + 0x80,&DAT_008f9e38);
  param_1[0x29] = uVar14;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0x26] = param_1[0xd];
  param_1[0x27] = param_1[0x11];
  param_1[0x28] = param_1[0x15];
  fn_0053ad78(param_1);
  uVar8 = 0;
  iVar4 = param_1[0x37];
  fVar13 = *(float *)(iVar4 + 0x374);
  uVar5 = *(uint *)(iVar4 + 0x188);
  bVar2 = fVar13 == 0.0;
  uVar3 = (uVar5 & 4) >> 2;
  uVar7 = (uVar5 & 0x100) >> 8;
  if (bVar2) {
    fVar13 = *(float *)(iVar4 + 0x378);
  }
  uVar1 = (uVar5 & 0x200) >> 9;
  uVar5 = (uVar5 & 0x2000) >> 0xd;
  if (bVar2 && (bVar2 && fVar13 == 0.0)) {
    fVar13 = *(float *)(iVar4 + 0x38c);
    bVar2 = fVar13 == 0.0;
    if (bVar2) {
      fVar13 = *(float *)(iVar4 + 0x390);
    }
    bVar11 = false;
    if (bVar2 && (bVar2 && fVar13 == 0.0)) {
      bVar11 = *(float *)(iVar4 + 0x3a4) == 0.0;
    }
    if (bVar11) goto LAB_0053ac14;
  }
  uVar8 = 1;
LAB_0053ac14:
  fVar13 = *(float *)(iVar4 + 0x304);
  iVar6 = *(int *)(iVar4 + 0x300);
  bVar2 = fVar13 == 0.0;
  if (bVar2) {
    fVar13 = *(float *)(iVar4 + 0x308);
  }
  bVar11 = fVar13 == 0.0;
  if (bVar2 && (bVar2 && bVar11)) {
    fVar13 = *(float *)(iVar4 + 0x30c);
  }
  *(undefined1 *)((int)param_1 + 0x291) = 0;
  bVar2 = (!bVar2 || (!bVar2 || !bVar11)) || fVar13 != 0.0;
  bVar11 = iVar6 != 0x3f800000;
  bVar12 = param_1[0x33] == 2;
  if ((uVar3 & ~uVar7 & ~uVar1) != 0) {
    *(undefined1 *)((int)param_1 + 0x291) = 1;
  }
  if ((uVar7 & ~uVar3 & ~uVar1) != 0) {
    *(undefined1 *)((int)param_1 + 0x291) = 2;
  }
  uVar10 = uVar1 & ~(uVar3 | uVar7);
  uVar9 = (undefined1)uVar10;
  if (uVar10 != 0) {
    uVar9 = 3;
  }
  if (uVar10 != 0) {
    *(undefined1 *)((int)param_1 + 0x291) = uVar9;
  }
  if ((uVar7 & uVar3 & ~uVar1) != 0) {
    *(undefined1 *)((int)param_1 + 0x291) = 4;
  }
  if ((uVar3 & ~uVar7 & uVar1) != 0) {
    *(undefined1 *)((int)param_1 + 0x291) = 5;
  }
  if ((uVar1 & uVar7 & ~uVar3) != 0) {
    *(undefined1 *)((int)param_1 + 0x291) = 6;
  }
  *(undefined1 *)((int)param_1 + 0x292) = 0;
  if ((uVar5 & ~uVar8) != 0) {
    *(undefined1 *)((int)param_1 + 0x292) = 1;
  }
  if ((uVar8 & ~uVar5) != 0) {
    *(undefined1 *)((int)param_1 + 0x292) = 2;
  }
  if ((uVar8 & uVar5) != 0) {
    *(undefined1 *)((int)param_1 + 0x292) = 3;
  }
  *(undefined1 *)(param_1 + 0xa4) = 0;
  if ((bool)(bVar2 & ~bVar11 & ~bVar12)) {
    *(undefined1 *)(param_1 + 0xa4) = 1;
  }
  if ((bool)(bVar11 & ~bVar2 & ~bVar12)) {
    *(undefined1 *)(param_1 + 0xa4) = 0;
  }
  if ((bool)(bVar12 & ~(bVar2 || bVar11))) {
    *(undefined1 *)(param_1 + 0xa4) = 1;
  }
  if ((bool)((bVar2 && bVar11) & ~bVar12)) {
    *(undefined1 *)(param_1 + 0xa4) = 4;
  }
  if ((bool)(bVar2 & ~bVar11 & bVar12)) {
    *(undefined1 *)(param_1 + 0xa4) = 5;
  }
  if ((bool)(bVar11 & ~bVar2 & bVar12)) {
    *(undefined1 *)(param_1 + 0xa4) = 6;
  }
  if (bVar12 && (bVar2 && bVar11)) {
    *(bool *)(param_1 + 0xa4) = bVar12 && (bVar2 && bVar11) || bVar12;
  }
  *(undefined1 *)((int)param_1 + 0x293) = 0;
  *(undefined1 *)(param_1 + 0xa5) = 0;
  *(undefined1 *)((int)param_1 + 0x295) = 0;
  if ((*(uint *)(iVar4 + 0x188) & 0x10) != 0) {
    *(undefined1 *)((int)param_1 + 0x293) = 1;
  }
  if ((*(uint *)(iVar4 + 0x188) & 0x80) != 0) {
    *(undefined1 *)(param_1 + 0xa5) = 1;
  }
  if ((*(uint *)(iVar4 + 0x188) & 0x40) != 0) {
    *(undefined1 *)((int)param_1 + 0x295) = 1;
  }
  return;
}



void fn_0053ad78(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar5 = 0.0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if ((*(uint *)(param_1 + 8) & 2) == 0) {
    fVar6 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 0x8c),(byte)(in_fpscr >> 0x16) & 3);
    iVar2 = *(int *)(param_1 + 0x8c) * 0x41c64e6d + 0x3039;
    *(int *)(param_1 + 0x8c) = iVar2;
    iVar4 = *(int *)(param_1 + 0xdc);
    iVar1 = iVar2 * 0x41c64e6d + 0x3039;
    *(float *)(param_1 + 0xb4) = (fVar6 * 2.3283064e-10 * 2.0 - 1.0) * *(float *)(iVar4 + 0x22c);
    *(int *)(param_1 + 0x8c) = iVar1;
    fVar6 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
    *(float *)(param_1 + 0xb8) = (fVar6 * 2.3283064e-10 * 2.0 - 1.0) * *(float *)(iVar4 + 0x230);
    *(int *)(param_1 + 0x8c) = iVar1 * 0x41c64e6d + 0x3039;
    fVar6 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
    fVar6 = (fVar6 * 2.3283064e-10 * 2.0 - 1.0) * *(float *)(iVar4 + 0x234);
  }
  else {
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    fVar6 = fVar5;
  }
  *(float *)(param_1 + 0xbc) = fVar6;
  if ((*(uint *)(param_1 + 8) & 1) == 0) {
    fVar5 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 0x8c),(byte)(in_fpscr >> 0x16) & 3);
    iVar2 = *(int *)(param_1 + 0x8c) * 0x41c64e6d + 0x3039;
    *(int *)(param_1 + 0x8c) = iVar2;
    iVar4 = *(int *)(param_1 + 0xdc);
    iVar1 = iVar2 * 0x41c64e6d + 0x3039;
    *(float *)(param_1 + 0xc0) = (fVar5 * 2.3283064e-10 * 2.0 - 1.0) * *(float *)(iVar4 + 0x238);
    *(int *)(param_1 + 0x8c) = iVar1;
    fVar5 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
    *(float *)(param_1 + 0xc4) = (fVar5 * 2.3283064e-10 * 2.0 - 1.0) * *(float *)(iVar4 + 0x23c);
    *(int *)(param_1 + 0x8c) = iVar1 * 0x41c64e6d + 0x3039;
    fVar5 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
    fVar5 = (fVar5 * 2.3283064e-10 * 2.0 - 1.0) * *(float *)(iVar4 + 0x240);
  }
  else {
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
  }
  fVar16 = 6.8356525e+08;
  *(float *)(param_1 + 200) = fVar5;
  iVar1 = *(int *)(param_1 + 0xdc);
  iVar2 = *(int *)(param_1 + 0xdc);
  fVar21 = *(float *)(iVar1 + 0x208) + 0.0;
  fVar14 = *(float *)(iVar1 + 0x210) + 0.0;
  fVar11 = *(float *)(iVar1 + 0x20c) + 0.0;
  fVar20 = *(float *)(iVar2 + 0x214) + *(float *)(param_1 + 0xb4);
  iVar1 = *(int *)(param_1 + 0xdc);
  fVar18 = *(float *)(iVar2 + 0x218) + *(float *)(param_1 + 0xb8);
  fVar19 = *(float *)(iVar2 + 0x21c) + *(float *)(param_1 + 0xbc);
  fVar15 = *(float *)(iVar1 + 0x228) + *(float *)(param_1 + 200);
  fVar12 = *(float *)(iVar1 + 0x220) + *(float *)(param_1 + 0xc0);
  fVar13 = *(float *)(iVar1 + 0x224) + *(float *)(param_1 + 0xc4);
  uVar3 = fn_00191e2c(fVar20 * 6.8356525e+08);
  fVar17 = 5.9604645e-08;
  iVar1 = (uVar3 >> 0x18) * 0x10;
  fVar5 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar7 = *(float *)(&DAT_007f36ec + iVar1) +
          *(float *)(&DAT_007f36f0 + iVar1) * fVar5 * 5.9604645e-08;
  fVar10 = *(float *)(&DAT_007f36f4 + iVar1) +
           *(float *)(&DAT_007f36f8 + iVar1) * fVar5 * 5.9604645e-08;
  uVar3 = fn_00191e2c(fVar18 * fVar16);
  iVar1 = (uVar3 >> 0x18) * 0x10;
  fVar5 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar9 = *(float *)(&DAT_007f36ec + iVar1) + *(float *)(&DAT_007f36f0 + iVar1) * fVar5 * fVar17;
  fVar8 = *(float *)(&DAT_007f36f4 + iVar1) + *(float *)(&DAT_007f36f8 + iVar1) * fVar5 * fVar17;
  uVar3 = fn_00191e2c(fVar19 * fVar16);
  iVar1 = (uVar3 >> 0x18) * 0x10;
  fVar5 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar6 = *(float *)(&DAT_007f36f4 + iVar1) + *(float *)(&DAT_007f36f8 + iVar1) * fVar5 * fVar17;
  fVar5 = *(float *)(&DAT_007f36ec + iVar1) + *(float *)(&DAT_007f36f0 + iVar1) * fVar5 * fVar17;
  *(float *)(param_1 + 0x200) = fVar8 * fVar6 * fVar21;
  *(float *)(param_1 + 0x210) = fVar8 * fVar5 * fVar21;
  *(float *)(param_1 + 0x220) = -(fVar21 * fVar9);
  *(float *)(param_1 + 0x204) = fVar11 * (fVar7 * fVar9 * fVar6 - fVar10 * fVar5);
  *(float *)(param_1 + 0x214) = fVar11 * (fVar10 * fVar6 + fVar7 * fVar9 * fVar5);
  *(float *)(param_1 + 0x224) = fVar7 * fVar8 * fVar11;
  *(float *)(param_1 + 0x208) = (fVar7 * fVar5 + fVar10 * fVar6 * fVar9) * fVar14;
  *(float *)(param_1 + 0x218) = (fVar9 * fVar10 * fVar5 - fVar7 * fVar6) * fVar14;
  *(float *)(param_1 + 0x228) = fVar10 * fVar8 * fVar14;
  *(float *)(param_1 + 0x20c) = fVar12;
  *(float *)(param_1 + 0x21c) = fVar13;
  *(float *)(param_1 + 0x22c) = fVar15;
  uVar3 = fn_00191e2c(fVar20 * fVar16);
  iVar1 = (uVar3 >> 0x18) * 0x10;
  fVar5 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar7 = *(float *)(&DAT_007f36ec + iVar1) + *(float *)(&DAT_007f36f0 + iVar1) * fVar5 * fVar17;
  fVar10 = *(float *)(&DAT_007f36f4 + iVar1) + *(float *)(&DAT_007f36f8 + iVar1) * fVar5 * fVar17;
  uVar3 = fn_00191e2c(fVar18 * fVar16);
  iVar1 = (uVar3 >> 0x18) * 0x10;
  fVar5 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar8 = *(float *)(&DAT_007f36ec + iVar1) + *(float *)(&DAT_007f36f0 + iVar1) * fVar5 * fVar17;
  fVar9 = *(float *)(&DAT_007f36f4 + iVar1) + *(float *)(&DAT_007f36f8 + iVar1) * fVar5 * fVar17;
  uVar3 = fn_00191e2c(fVar19 * fVar16);
  iVar1 = (uVar3 >> 0x18) * 0x10;
  fVar5 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar6 = *(float *)(&DAT_007f36ec + iVar1) + *(float *)(&DAT_007f36f0 + iVar1) * fVar5 * fVar17;
  fVar5 = *(float *)(&DAT_007f36f4 + iVar1) + *(float *)(&DAT_007f36f8 + iVar1) * fVar5 * fVar17;
  *(float *)(param_1 + 0x1d0) = fVar9 * fVar5;
  *(float *)(param_1 + 0x1e0) = fVar9 * fVar6;
  *(float *)(param_1 + 0x1f0) = -fVar8;
  *(float *)(param_1 + 0x1d4) = fVar7 * fVar8 * fVar5 - fVar10 * fVar6;
  *(float *)(param_1 + 0x1e4) = fVar10 * fVar5 + fVar7 * fVar8 * fVar6;
  *(float *)(param_1 + 500) = fVar7 * fVar9;
  *(float *)(param_1 + 0x1d8) = fVar7 * fVar6 + fVar10 * fVar5 * fVar8;
  *(float *)(param_1 + 0x1e8) = fVar8 * fVar10 * fVar6 - fVar7 * fVar5;
  *(float *)(param_1 + 0x1f8) = fVar10 * fVar9;
  *(float *)(param_1 + 0x1dc) = fVar12;
  *(float *)(param_1 + 0x1ec) = fVar13;
  *(float *)(param_1 + 0x1fc) = fVar15;
  return;
}


