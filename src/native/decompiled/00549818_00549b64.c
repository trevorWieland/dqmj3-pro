#include "00549818_00549b64.h"



void fn_00549b64(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint in_fpscr;
  uint uVar4;
  uint uVar5;
  float in_s0;
  float fVar6;
  float in_s1;
  float fVar7;
  float fVar8;
  float in_s2;
  float in_s3;
  float in_s4;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  
  fVar13 = 1.0;
  uVar14 = 0x3f800000;
  fVar12 = -0.0078125;
  fVar11 = -1.0;
  fVar10 = in_s1 - in_s0;
  fVar9 = 1.0 / (in_s4 - in_s3);
  fVar6 = 0.0;
  switch(param_2) {
  case 0:
    iVar3 = 0;
    while( true ) {
      fVar12 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
      fVar12 = (in_s3 + fVar12 * -0.0078125) * fVar9;
      uVar4 = in_fpscr & 0xfffffff;
      uVar5 = uVar4 | (uint)(fVar12 < 0.0) << 0x1f | (uint)(fVar12 == 0.0) << 0x1e;
      bVar2 = (byte)(uVar5 >> 0x18);
      if ((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != NAN(fVar12)) {
        if (fVar12 < -1.0) {
          fVar12 = fVar11;
        }
      }
      else {
        uVar4 = uVar5;
        fVar12 = fVar6;
      }
      fVar8 = -(*(float *)(param_3 + 0x2c) + *(float *)(param_3 + 0x28) * fVar12) /
              (*(float *)(param_3 + 0x3c) + *(float *)(param_3 + 0x38) * fVar12);
      uVar5 = uVar4 & 0xfffffff | (uint)(fVar8 == in_s0) << 0x1e;
      in_fpscr = uVar5 | (uint)(in_s0 <= fVar8) << 0x1d;
      fVar12 = fVar13;
      if (((bool)((byte)(in_fpscr >> 0x1d) & 1) && !SUB41(uVar5 >> 0x1e,0)) &&
         (uVar4 = uVar4 & 0xfffffff | (uint)(fVar8 < in_s1) << 0x1f | (uint)(fVar8 == in_s1) << 0x1e
         , in_fpscr = uVar4 | (uint)(NAN(fVar8) || NAN(in_s1)) << 0x1c,
         bVar2 = (byte)(uVar4 >> 0x18), fVar12 = fVar6,
         (bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1))) {
        fVar12 = (in_s1 - fVar8) / fVar10;
      }
      if (0x7f < iVar3) break;
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      *(float *)(param_1 + iVar1) = fVar12;
    }
    return;
  case 1:
    iVar3 = 0;
    while( true ) {
      fVar8 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
      fVar8 = (in_s3 + fVar8 * fVar12) * fVar9;
      uVar4 = in_fpscr & 0xfffffff;
      uVar5 = uVar4 | (uint)(fVar8 < fVar6) << 0x1f | (uint)(fVar8 == fVar6) << 0x1e;
      bVar2 = (byte)(uVar5 >> 0x18);
      if ((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(fVar8) || NAN(fVar6))) {
        if (fVar8 < fVar11) {
          fVar8 = fVar11;
        }
      }
      else {
        uVar4 = uVar5;
        fVar8 = fVar6;
      }
      fVar7 = (-*(float *)(param_3 + 0x2c) + -(*(float *)(param_3 + 0x28) * fVar8)) /
              (*(float *)(param_3 + 0x3c) + *(float *)(param_3 + 0x38) * fVar8);
      uVar5 = uVar4 & 0xfffffff | (uint)(fVar7 == in_s0) << 0x1e;
      in_fpscr = uVar5 | (uint)(in_s0 <= fVar7) << 0x1d;
      fVar8 = fVar13;
      if (((bool)((byte)(in_fpscr >> 0x1d) & 1) && !SUB41(uVar5 >> 0x1e,0)) &&
         (uVar4 = uVar4 & 0xfffffff | (uint)(fVar7 < in_s1) << 0x1f | (uint)(fVar7 == in_s1) << 0x1e
         , in_fpscr = uVar4 | (uint)(NAN(fVar7) || NAN(in_s1)) << 0x1c,
         bVar2 = (byte)(uVar4 >> 0x18), fVar8 = fVar6,
         (bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1))) {
        fVar8 = -(((fVar7 - in_s0) * in_s2) / fVar10);
        fn_006fa128();
      }
      if (0x7f < iVar3) break;
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      *(float *)(param_1 + iVar1) = fVar8;
    }
    break;
  case 2:
    iVar3 = 0;
    while( true ) {
      fVar8 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
      fVar8 = (in_s3 + fVar8 * fVar12) * fVar9;
      uVar4 = in_fpscr & 0xfffffff;
      uVar5 = uVar4 | (uint)(fVar8 < fVar6) << 0x1f | (uint)(fVar8 == fVar6) << 0x1e;
      bVar2 = (byte)(uVar5 >> 0x18);
      if ((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(fVar8) || NAN(fVar6))) {
        if (fVar8 < fVar11) {
          fVar8 = fVar11;
        }
      }
      else {
        uVar4 = uVar5;
        fVar8 = fVar6;
      }
      fVar7 = (-*(float *)(param_3 + 0x2c) + -(*(float *)(param_3 + 0x28) * fVar8)) /
              (*(float *)(param_3 + 0x3c) + *(float *)(param_3 + 0x38) * fVar8);
      uVar5 = uVar4 & 0xfffffff | (uint)(fVar7 == in_s0) << 0x1e;
      in_fpscr = uVar5 | (uint)(in_s0 <= fVar7) << 0x1d;
      fVar8 = fVar13;
      if (((bool)((byte)(in_fpscr >> 0x1d) & 1) && !SUB41(uVar5 >> 0x1e,0)) &&
         (uVar4 = uVar4 & 0xfffffff | (uint)(fVar7 < in_s1) << 0x1f | (uint)(fVar7 == in_s1) << 0x1e
         , in_fpscr = uVar4 | (uint)(NAN(fVar7) || NAN(in_s1)) << 0x1c,
         bVar2 = (byte)(uVar4 >> 0x18), fVar8 = fVar6,
         (bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1))) {
        fVar8 = ((fVar7 - in_s0) * in_s2) / fVar10;
        fVar8 = -(fVar8 * fVar8);
        fn_006fa128();
      }
      if (0x7f < iVar3) break;
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      *(float *)(param_1 + iVar1) = fVar8;
    }
    break;
  case 3:
    iVar3 = 0;
    while( true ) {
      fVar13 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
      fVar13 = (in_s3 + fVar13 * fVar12) * fVar9;
      uVar4 = in_fpscr & 0xfffffff;
      uVar5 = uVar4 | (uint)(fVar13 < fVar6) << 0x1f | (uint)(fVar13 == fVar6) << 0x1e;
      bVar2 = (byte)(uVar5 >> 0x18);
      if ((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(fVar13) || NAN(fVar6))) {
        if (fVar13 < fVar11) {
          fVar13 = fVar11;
        }
      }
      else {
        uVar4 = uVar5;
        fVar13 = fVar6;
      }
      fVar13 = (-*(float *)(param_3 + 0x2c) + -(*(float *)(param_3 + 0x28) * fVar13)) /
               (*(float *)(param_3 + 0x3c) + *(float *)(param_3 + 0x38) * fVar13);
      uVar4 = uVar4 & 0xfffffff | (uint)(fVar13 == in_s0) << 0x1e;
      in_fpscr = uVar4 | (uint)(in_s0 <= fVar13) << 0x1d;
      if (!(bool)((byte)(in_fpscr >> 0x1d) & 1) || SUB41(uVar4 >> 0x1e,0)) {
        fVar13 = (float)uVar14;
      }
      else {
        fVar13 = -(((fVar13 - in_s0) * in_s2) / fVar10);
        fn_006fa128();
      }
      if (0x7f < iVar3) break;
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      *(float *)(param_1 + iVar1) = fVar13;
    }
    break;
  case 4:
    iVar3 = 0;
    while( true ) {
      fVar13 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
      fVar8 = (in_s3 + fVar13 * fVar12) * fVar9;
      uVar4 = in_fpscr & 0xfffffff;
      uVar5 = uVar4 | (uint)(fVar8 < fVar6) << 0x1f | (uint)(fVar8 == fVar6) << 0x1e;
      bVar2 = (byte)(uVar5 >> 0x18);
      fVar13 = fVar6;
      if ((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(fVar8) || NAN(fVar6))) {
        uVar5 = uVar4;
        if (fVar8 < fVar11) {
          fVar13 = fVar11;
        }
        else {
          fVar13 = fVar8;
        }
      }
      fVar13 = (-*(float *)(param_3 + 0x2c) + -(*(float *)(param_3 + 0x28) * fVar13)) /
               (*(float *)(param_3 + 0x3c) + *(float *)(param_3 + 0x38) * fVar13);
      uVar4 = uVar5 & 0xfffffff | (uint)(fVar13 == in_s0) << 0x1e;
      in_fpscr = uVar4 | (uint)(in_s0 <= fVar13) << 0x1d;
      if (!(bool)((byte)(in_fpscr >> 0x1d) & 1) || SUB41(uVar4 >> 0x1e,0)) {
        fVar13 = (float)uVar14;
      }
      else {
        fVar13 = ((fVar13 - in_s0) * in_s2) / fVar10;
        fVar13 = -(fVar13 * fVar13);
        fn_006fa128();
      }
      if (0x7f < iVar3) break;
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      *(float *)(param_1 + iVar1) = fVar13;
    }
    break;
  default:
    return;
  }
  return;
}



void fn_005498c4(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  uint in_fpscr;
  float in_s0;
  float fVar6;
  float fVar7;
  float in_s1;
  float in_s2;
  float in_s3;
  float in_s4;
  float in_s5;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar9 = in_s1 - in_s0;
  fVar11 = 0.0;
  fVar10 = 1.0;
  fVar8 = (((in_s4 - in_s3) / in_s4) / in_s5) * 0.0078125;
  switch(param_2) {
  case 0:
    iVar5 = 0;
    while( true ) {
      fVar7 = (float)VectorUnsignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
      fVar6 = in_s3 + fVar7 * fVar8;
      uVar3 = in_fpscr & 0xfffffff;
      uVar2 = uVar3 | (uint)(fVar6 == in_s0) << 0x1e;
      in_fpscr = uVar2 | (uint)(in_s0 <= fVar6) << 0x1d;
      fVar7 = fVar10;
      if (((bool)((byte)(in_fpscr >> 0x1d) & 1) && !SUB41(uVar2 >> 0x1e,0)) &&
         (uVar3 = uVar3 | (uint)(fVar6 < in_s1) << 0x1f | (uint)(fVar6 == in_s1) << 0x1e,
         in_fpscr = uVar3 | (uint)(NAN(fVar6) || NAN(in_s1)) << 0x1c, bVar4 = (byte)(uVar3 >> 0x18),
         fVar7 = fVar11, (bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1))) {
        fVar7 = (in_s1 - fVar6) / fVar9;
      }
      if (0x7f < iVar5) break;
      iVar1 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      *(float *)(param_1 + iVar1) = fVar7;
    }
    return;
  case 1:
    iVar5 = 0;
    while( true ) {
      fVar7 = (float)VectorUnsignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
      fVar6 = in_s3 + fVar7 * fVar8;
      uVar3 = in_fpscr & 0xfffffff;
      uVar2 = uVar3 | (uint)(fVar6 == in_s0) << 0x1e;
      in_fpscr = uVar2 | (uint)(in_s0 <= fVar6) << 0x1d;
      fVar7 = fVar10;
      if (((bool)((byte)(in_fpscr >> 0x1d) & 1) && !SUB41(uVar2 >> 0x1e,0)) &&
         (uVar3 = uVar3 | (uint)(fVar6 < in_s1) << 0x1f | (uint)(fVar6 == in_s1) << 0x1e,
         in_fpscr = uVar3 | (uint)(NAN(fVar6) || NAN(in_s1)) << 0x1c, bVar4 = (byte)(uVar3 >> 0x18),
         fVar7 = fVar11, (bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1))) {
        fVar7 = -(((fVar6 - in_s0) * in_s2) / fVar9);
        fn_006fa128();
      }
      if (0x7f < iVar5) break;
      iVar1 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      *(float *)(param_1 + iVar1) = fVar7;
    }
    break;
  case 2:
    iVar5 = 0;
    while( true ) {
      fVar7 = (float)VectorUnsignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
      fVar6 = in_s3 + fVar7 * fVar8;
      uVar3 = in_fpscr & 0xfffffff;
      uVar2 = uVar3 | (uint)(fVar6 == in_s0) << 0x1e;
      in_fpscr = uVar2 | (uint)(in_s0 <= fVar6) << 0x1d;
      fVar7 = fVar10;
      if (((bool)((byte)(in_fpscr >> 0x1d) & 1) && !SUB41(uVar2 >> 0x1e,0)) &&
         (uVar3 = uVar3 | (uint)(fVar6 < in_s1) << 0x1f | (uint)(fVar6 == in_s1) << 0x1e,
         in_fpscr = uVar3 | (uint)(NAN(fVar6) || NAN(in_s1)) << 0x1c, bVar4 = (byte)(uVar3 >> 0x18),
         fVar7 = fVar11, (bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1))) {
        fVar7 = ((fVar6 - in_s0) * in_s2) / fVar9;
        fVar7 = -(fVar7 * fVar7);
        fn_006fa128();
      }
      if (0x7f < iVar5) break;
      iVar1 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      *(float *)(param_1 + iVar1) = fVar7;
    }
    break;
  case 3:
    iVar5 = 0;
    while( true ) {
      fVar11 = (float)VectorUnsignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
      fVar7 = in_s3 + fVar11 * fVar8;
      uVar3 = in_fpscr & 0xfffffff | (uint)(fVar7 == in_s0) << 0x1e;
      in_fpscr = uVar3 | (uint)(in_s0 <= fVar7) << 0x1d;
      fVar11 = fVar10;
      if ((bool)((byte)(in_fpscr >> 0x1d) & 1) && !SUB41(uVar3 >> 0x1e,0)) {
        fVar10 = -(((fVar7 - in_s0) * in_s2) / fVar9);
        fn_006fa128();
      }
      if (0x7f < iVar5) break;
      iVar1 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      *(float *)(param_1 + iVar1) = fVar10;
      fVar10 = fVar11;
    }
    break;
  case 4:
    iVar5 = 0;
    while( true ) {
      fVar11 = (float)VectorUnsignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
      fVar7 = in_s3 + fVar11 * fVar8;
      uVar3 = in_fpscr & 0xfffffff | (uint)(fVar7 == in_s0) << 0x1e;
      in_fpscr = uVar3 | (uint)(in_s0 <= fVar7) << 0x1d;
      fVar11 = fVar10;
      if ((bool)((byte)(in_fpscr >> 0x1d) & 1) && !SUB41(uVar3 >> 0x1e,0)) {
        fVar10 = ((fVar7 - in_s0) * in_s2) / fVar9;
        fVar10 = -(fVar10 * fVar10);
        fn_006fa128();
      }
      if (0x7f < iVar5) break;
      iVar1 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      *(float *)(param_1 + iVar1) = fVar10;
      fVar10 = fVar11;
    }
    break;
  default:
    return;
  }
  return;
}



bool fn_00549868(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  fVar1 = fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4;
  if (fVar1 != 0.0) {
    fVar2 = 1.0 / SQRT(fVar1);
    *param_1 = fVar5 * fVar2;
    param_1[1] = fVar3 * fVar2;
    param_1[2] = fVar4 * fVar2;
  }
  return fVar1 != 0.0;
}



uint fn_00549818(void)

{
  float in_s0;
  uint uVar1;
  
  if (1.0 < in_s0) {
    in_s0 = 1.0;
  }
  else if (in_s0 < 0.0) {
    in_s0 = 0.0;
  }
  uVar1 = VectorFloatToUnsigned(in_s0 * 255.0 + 0.5,3);
  return uVar1 & 0xff;
}


