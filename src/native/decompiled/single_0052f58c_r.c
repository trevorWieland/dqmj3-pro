#include "single_0052f58c_r.h"


extern undefined4 NAN;

void fn_0052f58c(int param_1,undefined4 *param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  float *pfVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint in_fpscr;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar31;
  undefined8 uVar30;
  float fVar32;
  float fVar33;
  float fVar34;
  
  iVar13 = *(int *)(param_1 + 0xdc);
  iVar14 = *(int *)(param_1 + 0x1c);
  fVar34 = 2.3283064e-10;
  fVar33 = 1.0;
  fVar17 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 0x8c),(byte)(in_fpscr >> 0x16) & 3);
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) * 0x41c64e6d + 0x3039;
  fVar19 = *(float *)(iVar13 + 0x2e0);
  fVar21 = *(float *)(iVar14 + 0x248);
  iVar3 = *(int *)(param_1 + 0xcc);
  fVar31 = *(float *)(iVar13 + 0x2dc) * *(float *)(iVar14 + 0x244);
  param_2[0x56] = 3;
  param_2[0x54] = param_1;
  fVar17 = 1.0 - fVar19 * fVar21 * fVar17 * 2.3283064e-10;
  if (iVar3 == 0) {
    param_2[0x4f] = param_1 + 0x28;
    param_2[0x50] = param_1 + 0x58;
  }
  else {
    fn_001781f0(param_2 + 0x37,param_1 + 0x28);
    fn_001781f0(param_2 + 0x43,param_1 + 0x58);
    param_2[0x4f] = param_2 + 0x37;
    param_2[0x50] = param_2 + 0x43;
  }
  if (*(char *)(iVar14 + 0x285) == '\0') {
    fVar19 = *(float *)(iVar13 + 0x2e8);
    fVar21 = *(float *)(iVar13 + 0x2ec);
    param_2[9] = ((float)param_2[9] + *(float *)(iVar13 + 0x2e4) * fVar31) * fVar17;
    param_2[10] = ((float)param_2[10] + fVar19 * fVar31) * fVar17;
    param_2[0xb] = ((float)param_2[0xb] + fVar21 * fVar31) * fVar17;
  }
  else {
    fVar19 = *(float *)(iVar14 + 0x25c);
    fVar21 = *(float *)(iVar14 + 0x260);
    param_2[9] = ((float)param_2[9] + *(float *)(iVar14 + 600) * fVar31) * fVar17;
    param_2[10] = ((float)param_2[10] + fVar19 * fVar31) * fVar17;
    param_2[0xb] = ((float)param_2[0xb] + fVar21 * fVar31) * fVar17;
  }
  iVar3 = DAT_008c356c;
  fVar32 = 0.0;
  uVar2 = *(ushort *)(param_1 + 0x88);
  *(ushort *)(param_1 + 0x88) = uVar2 + 1;
  pfVar4 = (float *)(iVar3 + (uVar2 & 0xffff01ff) * 0xc);
  fVar17 = (float)param_2[9] + *pfVar4 * *(float *)(iVar13 + 0x2f4);
  fVar19 = (float)param_2[10] + pfVar4[1] * *(float *)(iVar13 + 0x2f8);
  fVar21 = (float)param_2[0xb] + pfVar4[2] * *(float *)(iVar13 + 0x2fc);
  fVar31 = *(float *)(iVar13 + 0x318);
  uVar16 = in_fpscr & 0xfffffff;
  param_2[9] = fVar17;
  param_2[10] = fVar19;
  param_2[0xb] = fVar21;
  if (fVar31 != 0.0) {
    fVar17 = fVar17 + fVar17 * fVar31;
    fVar19 = fVar19 + fVar19 * fVar31;
    param_2[9] = fVar17;
    param_2[10] = fVar19;
    param_2[0xb] = fVar21 + fVar21 * fVar31;
  }
  fVar18 = *(float *)(iVar14 + 0x250);
  fVar22 = *(float *)(iVar14 + 0x1e0);
  fVar20 = *(float *)(iVar14 + 0x1e4);
  fVar29 = *(float *)(iVar14 + 0x1e8);
  fVar23 = *(float *)(iVar14 + 0x1f0);
  fVar24 = *(float *)(iVar14 + 500);
  fVar25 = *(float *)(iVar14 + 0x1f8);
  fVar31 = *(float *)(iVar14 + 0x254);
  fVar21 = *(float *)(iVar14 + 0x24c);
  fVar26 = *(float *)(iVar14 + 0x1d8);
  fVar28 = *(float *)(iVar14 + 0x1d0);
  fVar27 = *(float *)(iVar14 + 0x1d4);
  param_2[1] = 0;
  *param_2 = 0;
  fVar25 = fVar18 * fVar29 + fVar31 * fVar25 + (float)param_2[0xb] + fVar21 * fVar26;
  fVar17 = fVar18 * fVar22 + fVar31 * fVar23 + fVar17 + fVar21 * fVar28;
  fVar19 = fVar18 * fVar20 + fVar31 * fVar24 + fVar19 + fVar21 * fVar27;
  param_2[9] = fVar17;
  param_2[10] = fVar19;
  param_2[0xb] = fVar25;
  param_2[6] = fVar17;
  param_2[7] = fVar19;
  param_2[8] = fVar25;
  puVar5 = (uint *)fn_0052dfa0();
  uVar15 = puVar5[2];
  uVar7 = puVar5[3];
  uVar6 = *puVar5 ^ *puVar5 << 0xb;
  uVar6 = uVar6 ^ uVar6 >> 8 ^ uVar7 ^ uVar7 >> 0x13;
  puVar5[3] = uVar6;
  puVar5[2] = uVar7;
  *puVar5 = puVar5[1];
  puVar5[1] = uVar15;
  iVar3 = *(int *)(iVar13 + 0x31c);
  param_2[0x57] = uVar6;
  if (iVar3 == 0x7fffffff) {
    param_2[2] = 0x7fffffff;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x8c);
    uVar7 = *(uint *)(iVar13 + 800);
    *(uint *)(param_1 + 0x8c) = uVar6 * 0x41c64e6d + 0x3039;
    fVar17 = (float)VectorSignedToFloat(uVar6 * ((int)uVar7 >> 0x1f) +
                                        (int)((ulonglong)uVar7 * (ulonglong)uVar6 >> 0x20),
                                        (byte)(uVar16 >> 0x16) & 3);
    param_2[2] = (int)((*(float *)(param_1 + 0x170) - fVar17) *
                      *(float *)(*(int *)(param_1 + 0x20) + 8));
  }
  fVar17 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 0x8c),(byte)(uVar16 >> 0x16) & 3);
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) * 0x41c64e6d + 0x3039;
  iVar3 = param_2[2] + -1;
  fVar17 = fVar33 - *(float *)(iVar13 + 0x4e0) * fVar17 * fVar34;
  fVar19 = *(float *)(iVar14 + 0x214) * fVar17;
  fVar17 = *(float *)(iVar14 + 0x218) * fVar17;
  uVar30 = CONCAT44(fVar17,fVar19);
  if (iVar3 == 0) {
    pfVar4 = (float *)param_2[0x19];
    iVar3 = param_2[0x1c];
    pfVar4[2] = -NAN;
    pfVar4[3] = NAN;
    *pfVar4 = fVar32;
    pfVar4[1] = fVar32;
    uVar10 = *(undefined4 *)(iVar13 + 0x4bc);
    *(undefined4 *)(iVar3 + 0x10) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x14) = 0x7fffffff;
    uVar6 = DAT_008c62ec;
    param_2[0x18] = uVar10;
    if (((uVar6 & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62ec), iVar3 != 0)) {
      DAT_008c62f0 = fVar32;
      DAT_008c62f4 = fVar32;
    }
    fVar17 = DAT_008c62f4;
    pfVar4 = (float *)param_2[0x1c];
    *pfVar4 = DAT_008c62f0;
    pfVar4[1] = fVar17;
    if (((DAT_008c62ec & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62ec), iVar3 != 0)) {
      DAT_008c62f0 = fVar32;
      DAT_008c62f4 = fVar32;
    }
    fVar17 = DAT_008c62f4;
    iVar3 = param_2[0x1c];
    *(float *)(iVar3 + 8) = DAT_008c62f0;
    *(float *)(iVar3 + 0xc) = fVar17;
    fVar19 = *(float *)(iVar13 + 0x4e8);
    fVar17 = *(float *)(iVar13 + 0x4f0);
    param_2[0x1a] = *(float *)(iVar13 + 0x4ec) * *(float *)(iVar13 + 0x4e4) * (float)uVar30;
    param_2[0x1b] = fVar17 * fVar19 * (float)((ulonglong)uVar30 >> 0x20);
  }
  else {
    iVar8 = *(int *)(iVar13 + 0x4cc);
    pfVar4 = (float *)param_2[0x19];
    fVar21 = (float)((*(int *)(iVar13 + 0x4c8) * iVar3) / 100);
    pfVar4[2] = fVar21;
    pfVar4[3] = (float)((iVar8 * iVar3) / 100);
    if (fVar21 == 0.0) {
      *pfVar4 = fVar32;
    }
    else {
      fVar21 = (float)VectorSignedToFloat(fVar21,(byte)(uVar16 >> 0x16) & 3);
      *pfVar4 = *(float *)(iVar13 + 0x4c0) / fVar21;
    }
    iVar8 = param_2[0x19];
    if (*(int *)(iVar13 + 0x4cc) == 100) {
      *(float *)(iVar8 + 4) = fVar32;
    }
    else {
      fVar21 = (float)VectorSignedToFloat(iVar3 - *(int *)(iVar8 + 0xc),(byte)(uVar16 >> 0x16) & 3);
      *(float *)(iVar8 + 4) = *(float *)(iVar13 + 0x4c4) / fVar21;
    }
    iVar11 = param_2[0x1c];
    iVar9 = *(int *)(iVar13 + 0x4d8);
    iVar8 = *(int *)(iVar13 + 0x4dc);
    fVar25 = *(float *)(iVar13 + 0x4bc);
    fVar20 = *(float *)param_2[0x19];
    *(undefined4 *)(iVar11 + 0x10) = 0;
    pfVar4 = (float *)param_2[0x1c];
    iVar8 = (iVar8 * iVar3) / 100;
    *(undefined4 *)(iVar11 + 0x14) = 0;
    *(int *)(iVar11 + 0x10) = (iVar9 * iVar3) / 100;
    *(int *)(iVar11 + 0x14) = iVar8;
    fVar21 = (float)VectorSignedToFloat(pfVar4[4],(byte)(uVar16 >> 0x16) & 3);
    fVar18 = *(float *)(iVar13 + 0x4fc);
    fVar24 = *(float *)(iVar13 + 0x500);
    fVar31 = (float)VectorSignedToFloat(iVar3 - iVar8,(byte)(uVar16 >> 0x16) & 3);
    fVar32 = *(float *)(iVar13 + 0x4f4) * (fVar33 / fVar21);
    fVar21 = *(float *)(iVar13 + 0x4f8) * (fVar33 / fVar21);
    fVar23 = *(float *)(iVar13 + 0x4ec);
    fVar22 = *(float *)(iVar13 + 0x4f0);
    *pfVar4 = *(float *)(iVar13 + 0x4e4) * fVar32 * fVar19;
    *(float *)(param_2[0x1c] + 4) = *(float *)(iVar13 + 0x4e8) * fVar21 * fVar17;
    *(float *)(param_2[0x1c] + 8) = *(float *)(iVar13 + 0x4e4) * fVar18 * (fVar33 / fVar31) * fVar19
    ;
    *(float *)(param_2[0x1c] + 0xc) =
         *(float *)(iVar13 + 0x4e8) * fVar24 * (fVar33 / fVar31) * fVar17;
    fVar31 = *(float *)(iVar13 + 0x4e4);
    fVar18 = *(float *)(iVar13 + 0x4e8);
    param_2[0x18] = fVar25 - fVar20;
    param_2[0x1a] = fVar31 * (fVar23 - fVar32) * fVar19;
    param_2[0x1b] = fVar18 * (fVar22 - fVar21) * fVar17;
  }
  fVar17 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 0x8c),(byte)(uVar16 >> 0x16) & 3);
  iVar3 = *(int *)(param_1 + 0x8c) * 0x41c64e6d + 0x3039;
  fVar19 = *(float *)(iVar13 + 0x508) + *(float *)(iVar14 + 0x268) +
           *(float *)(iVar13 + 0x514) * fVar17 * fVar34;
  fVar17 = (float)VectorUnsignedToFloat(iVar3,(byte)(uVar16 >> 0x16) & 3);
  iVar8 = iVar3 * 0x41c64e6d + 0x3039;
  param_2[0x12] = fVar19;
  iVar3 = iVar8 * 0x41c64e6d + 0x3039;
  fVar21 = *(float *)(iVar13 + 0x50c) + *(float *)(iVar14 + 0x26c) +
           *(float *)(iVar13 + 0x518) * fVar17 * fVar34;
  fVar17 = (float)VectorUnsignedToFloat(iVar8,(byte)(uVar16 >> 0x16) & 3);
  param_2[0x13] = fVar21;
  fVar31 = *(float *)(iVar13 + 0x510) + *(float *)(iVar14 + 0x270) +
           *(float *)(iVar13 + 0x51c) * fVar17 * fVar34;
  fVar17 = (float)VectorUnsignedToFloat(iVar3,(byte)(uVar16 >> 0x16) & 3);
  iVar14 = iVar3 * 0x41c64e6d + 0x3039;
  param_2[0x14] = fVar31;
  iVar3 = iVar14 * 0x41c64e6d + 0x3039;
  fVar32 = *(float *)(iVar13 + 0x520) + *(float *)(iVar13 + 0x52c) * fVar17 * fVar34;
  fVar17 = (float)VectorUnsignedToFloat(iVar14,(byte)(uVar16 >> 0x16) & 3);
  param_2[0x15] = fVar32;
  fVar18 = *(float *)(iVar13 + 0x524) + *(float *)(iVar13 + 0x530) * fVar17 * fVar34;
  fVar17 = (float)VectorUnsignedToFloat(iVar3,(byte)(uVar16 >> 0x16) & 3);
  iVar3 = iVar3 * 0x41c64e6d + 0x3039;
  param_2[0x16] = fVar18;
  *(int *)(param_1 + 0x8c) = iVar3;
  cVar1 = *(char *)(iVar13 + 0x184);
  fVar17 = *(float *)(iVar13 + 0x528) + *(float *)(iVar13 + 0x534) * fVar17 * fVar34;
  param_2[0x17] = fVar17;
  if (cVar1 != '\0') {
    fVar25 = (float)VectorUnsignedToFloat(iVar3,(byte)(uVar16 >> 0x16) & 3);
    *(int *)(param_1 + 0x8c) = iVar3 * 0x41c64e6d + 0x3039;
    if (0x3f000000 < (int)(fVar25 * fVar34)) {
      param_2[0x12] = -fVar19;
      param_2[0x15] = -fVar32;
    }
  }
  if (*(char *)(iVar13 + 0x185) != '\0') {
    fVar19 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 0x8c),(byte)(uVar16 >> 0x16) & 3);
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) * 0x41c64e6d + 0x3039;
    if (0x3f000000 < (int)(fVar19 * fVar34)) {
      param_2[0x13] = -fVar21;
      param_2[0x16] = -fVar18;
    }
  }
  if (*(char *)(iVar13 + 0x186) != '\0') {
    fVar19 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 0x8c),(byte)(uVar16 >> 0x16) & 3);
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) * 0x41c64e6d + 0x3039;
    if (0x3f000000 < (int)(fVar19 * fVar34)) {
      param_2[0x14] = -fVar31;
      param_2[0x17] = -fVar17;
    }
  }
  if (*(int *)(iVar13 + 0x428) == 1) {
    iVar3 = iVar13 + ((uint)param_2[0x57] % 3) * 0x10;
    uVar10 = *(undefined4 *)(iVar3 + 0x430);
    uVar12 = *(undefined4 *)(iVar3 + 0x434);
    param_2[0x31] = *(undefined4 *)(iVar3 + 0x438);
    param_2[0x2f] = uVar10;
    param_2[0x30] = uVar12;
  }
  else {
    uVar10 = *(undefined4 *)(iVar13 + 0x434);
    uVar12 = *(undefined4 *)(iVar13 + 0x438);
    param_2[0x2f] = *(undefined4 *)(iVar13 + 0x430);
    param_2[0x30] = uVar10;
    param_2[0x31] = uVar12;
  }
  if (*(int *)(iVar13 + 0x42c) == 1) {
    iVar3 = iVar13 + ((uint)param_2[0x57] % 3) * 0x10;
    uVar10 = *(undefined4 *)(iVar3 + 0x460);
    uVar12 = *(undefined4 *)(iVar3 + 0x464);
    param_2[0x35] = *(undefined4 *)(iVar3 + 0x468);
    param_2[0x33] = uVar10;
    param_2[0x34] = uVar12;
  }
  else {
    uVar10 = *(undefined4 *)(iVar13 + 0x464);
    uVar12 = *(undefined4 *)(iVar13 + 0x468);
    param_2[0x33] = *(undefined4 *)(iVar13 + 0x460);
    param_2[0x34] = uVar10;
    param_2[0x35] = uVar12;
  }
  fVar17 = (float)VectorUnsignedToFloat(*(int *)(param_1 + 0x8c),(byte)(uVar16 >> 0x16) & 3);
  iVar14 = *(int *)(param_1 + 0x8c) * 0x41c64e6d + 0x3039;
  iVar3 = iVar14 * 0x41c64e6d + 0x3039;
  fVar19 = (float)VectorUnsignedToFloat(iVar14,(byte)(uVar16 >> 0x16) & 3);
  param_2[0x20] =
       (*(float *)(iVar13 + 0x37c) + *(float *)(iVar13 + 900)) -
       fVar17 * *(float *)(iVar13 + 900) * 4.656613e-10;
  param_2[0x21] =
       (*(float *)(iVar13 + 0x380) + *(float *)(iVar13 + 0x388)) -
       fVar19 * *(float *)(iVar13 + 0x388) * 4.656613e-10;
  fVar17 = (float)VectorUnsignedToFloat(iVar3,(byte)(uVar16 >> 0x16) & 3);
  iVar14 = iVar3 * 0x41c64e6d + 0x3039;
  iVar3 = iVar14 * 0x41c64e6d + 0x3039;
  fVar19 = (float)VectorUnsignedToFloat(iVar14,(byte)(uVar16 >> 0x16) & 3);
  param_2[0x22] =
       (*(float *)(iVar13 + 0x394) + *(float *)(iVar13 + 0x39c)) -
       fVar17 * *(float *)(iVar13 + 0x39c) * 4.656613e-10;
  param_2[0x23] =
       (*(float *)(iVar13 + 0x398) + *(float *)(iVar13 + 0x3a0)) -
       fVar19 * *(float *)(iVar13 + 0x3a0) * 4.656613e-10;
  *(int *)(param_1 + 0x8c) = iVar3 * 0x41c64e6d + 0x3039;
  fVar19 = *(float *)(iVar13 + 0x3ac);
  fVar21 = *(float *)(iVar13 + 0x3a8);
  fVar17 = (float)VectorUnsignedToFloat(iVar3,(byte)(uVar16 >> 0x16) & 3);
  uVar10 = *(undefined4 *)(iVar13 + 0x378);
  param_2[0x1e] = *(undefined4 *)(iVar13 + 0x374);
  param_2[0x1f] = uVar10;
  param_2[0x2d] = fVar33;
  param_2[0x2e] = fVar33;
  param_2[0x1d] = (fVar21 + fVar19) - fVar17 * fVar19 * 4.656613e-10;
  if ((*(uint *)(*(int *)(param_1 + 0xdc) + 4) & 0x400) == 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      *(undefined4 **)(param_1 + 0xe0) = param_2;
      param_2[0x52] = 0;
      param_2[0x53] = 0;
    }
    else {
      *(undefined4 **)(*(int *)(param_1 + 0xe0) + 0x148) = param_2;
      param_2[0x53] = *(undefined4 *)(param_1 + 0xe0);
      *(undefined4 **)(param_1 + 0xe0) = param_2;
      param_2[0x52] = 0;
    }
    if (*(int *)(param_1 + 0xe8) == 0) {
      *(undefined4 **)(param_1 + 0xe8) = param_2;
    }
  }
  else {
    if (*(int *)(param_1 + 0xe8) == 0) {
      *(undefined4 **)(param_1 + 0xe8) = param_2;
      param_2[0x52] = 0;
    }
    else {
      *(undefined4 **)(*(int *)(param_1 + 0xe8) + 0x14c) = param_2;
      param_2[0x52] = *(undefined4 *)(param_1 + 0xe8);
      *(undefined4 **)(param_1 + 0xe8) = param_2;
    }
    param_2[0x53] = 0;
    if (*(int *)(param_1 + 0xe0) == 0) {
      *(undefined4 **)(param_1 + 0xe0) = param_2;
    }
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}


