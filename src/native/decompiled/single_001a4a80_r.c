#include "single_001a4a80_r.h"


extern undefined4 INFINITY;

float fn_001a4a80(void)

{
  float fVar1;
  int iVar2;
  byte bVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  uint in_fpscr;
  float in_s0;
  float fVar11;
  float in_s1;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  iVar8 = 0;
  fVar16 = 1.0;
  uVar6 = (int)in_s1 * 2 + 0x2000000;
  bVar3 = (byte)((uint)in_s0 >> 0x18);
  fVar11 = in_s1;
  if (0x7effffff < (int)in_s0 - 0x800000U) {
    if (uVar6 < 0x40000000) goto LAB_001a4f38;
    goto LAB_001a4e94;
  }
  if (0x3fffffff < uVar6) goto LAB_001a4ac4;
LAB_001a4f38:
  uVar6 = (int)in_s1 * 2 + 0x2000000;
  if (uVar6 < 0x2000000) {
    if (uVar6 < 0x1000000) {
      fVar11 = (float)((int)in_s1 - 0x800000);
      goto LAB_001a4e94;
    }
LAB_001a4f88:
    fVar11 = ABS(in_s0);
    if (((int)fVar11 + 0x807fffffU < 0x3fffff) || ((int)ABS(in_s1) + 0x807fffffU < 0x3fffff)) {
      return in_s1;
    }
    if (in_s0 == 1.0 || ABS(in_s1) == 0.0) {
      return in_s1;
    }
    if ((uint)fVar11 < 0x7f800001) {
      fVar11 = ABS(in_s1);
    }
    if (0x7f800000 < (uint)fVar11) {
      return in_s1;
    }
    if (in_s0 == INFINITY) {
      if (((uint)in_s1 & 0x80000000) == 0) {
        return in_s1;
      }
      return in_s1;
    }
    uVar6 = (uint)ABS(in_s1) >> 0x17;
    if (uVar6 < 0x7f) {
LAB_001a5020:
      iVar8 = 0;
    }
    else if (uVar6 < 0x97) {
      uVar6 = 1 << (0x96 - uVar6 & 0xff);
      if ((uVar6 - 1 & (uint)in_s1) != 0) goto LAB_001a5020;
      if ((uVar6 & (uint)in_s1) == 0) goto LAB_001a5034;
      iVar8 = 1;
    }
    else {
LAB_001a5034:
      iVar8 = 2;
    }
    if (in_s0 == -INFINITY) {
      if (((uint)in_s1 & 0x80000000) == 0) {
        if (iVar8 == 1) {
          return in_s1;
        }
        return in_s1;
      }
joined_r0x001a5098:
      if (iVar8 == 1) {
        return in_s1;
      }
      return in_s1;
    }
    if (in_s0 == 0.0) {
      if (((uint)in_s1 & 0x80000000) == 0) {
        return in_s1;
      }
    }
    else {
      if (in_s0 != -0.0) {
        if (in_s0 == -1.0) {
          return in_s1;
        }
        fVar11 = (float)(((int)in_s1 >> 0x1f) + 1);
        if ((float)(uint)(0x7f000000 < (uint)((int)in_s0 * 2) || (int)in_s0 * -2 == -0x7f000000) ==
            fVar11) {
          return fVar11;
        }
        return fVar11;
      }
      if (in_s1 == INFINITY) {
        return INFINITY;
      }
      if (in_s1 != -INFINITY) {
        if (((uint)in_s1 & 0x80000000) == 0) {
          if (iVar8 == 0) {
            return in_s1;
          }
          goto joined_r0x001a5098;
        }
        if ((iVar8 != 0) && (iVar8 == 1)) {
          fVar11 = (float)fn_00102ca2(2);
          return fVar11;
        }
      }
    }
    fVar11 = (float)fn_00102ca2(2);
    return fVar11;
  }
  in_fpscr = in_fpscr & 0xfffffff;
  if (in_s1 == 0.0) {
    bVar10 = (bool)(bVar3 >> 7);
    if (ABS(in_s0) != 0.0) {
      bVar10 = (uint)((int)in_s0 * 2) < 0xff000001;
    }
    if (bVar10 && (ABS(in_s0) != 0.0 && (int)in_s0 * -2 != 0x1000000)) {
      return in_s1;
    }
  }
  else {
    in_s1 = (float)((uint)in_s1 & 0x80000000 | 0x1f800000);
    fVar11 = in_s1;
  }
LAB_001a4e94:
  if ((int)in_s0 + 0x7f800000U < 0x7f000000) {
LAB_001a4ea4:
    in_s0 = ABS(in_s0);
    uVar6 = (uint)ABS(in_s1) >> 0x17;
    if (uVar6 < 0x7f) {
LAB_001a4edc:
      fVar11 = (float)fn_00102ca2(1);
      return fVar11;
    }
    if (uVar6 < 0x97) {
      uVar6 = 1 << (0x96 - uVar6 & 0xff);
      if ((uVar6 - 1 & (uint)in_s1) != 0) goto LAB_001a4edc;
      if ((uVar6 & (uint)in_s1) != 0) {
        fVar16 = -1.0;
      }
    }
  }
  else {
    bVar10 = (bool)(bVar3 >> 7);
    bVar9 = ABS(in_s0) == 0.0;
    if (!bVar9) {
      bVar10 = (uint)((int)in_s0 * 2) < 0x1000001;
      bVar9 = (int)in_s0 * 2 == 0x1000000;
    }
    if (!bVar10 || bVar9) {
      if (0x7effffff < (int)in_s0 - 0x800000U) goto LAB_001a4f88;
    }
    else {
      iVar8 = -0x1b;
      in_s0 = in_s0 * 1.3421773e+08;
      if (((uint)in_s0 & 0x80000000) != 0) goto LAB_001a4ea4;
    }
  }
LAB_001a4ac4:
  fVar13 = 0.5;
  if ((int)in_s0 + 0xc0801000U < 0x2001) {
    fVar1 = in_s0 - 1.0;
    fVar4 = fVar1 * -0.0028168457 +
            -(fVar1 * fVar1 * (0.5 - fVar1 * (0.33333334 - fVar1 * 0.25))) * 23.08312;
    fVar14 = (float)((int)(fVar1 * 23.085938 + fVar4) + 0x800U & 0xfffff000);
    fVar4 = (fVar1 * 23.085938 - fVar14) + fVar4;
  }
  else {
    uVar6 = (int)in_s0 + 0x40000U >> 0x13;
    uVar5 = uVar6 & 0xf;
    iVar7 = ((uVar6 & 0xfff) >> 4) - 0x7f;
    fVar14 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
    fVar4 = (float)((int)in_s0 + iVar7 * -0x800000);
    fVar12 = fVar14 * 0.0625 + 1.0;
    fVar14 = (float)((int)(fVar4 + fVar12) + 0x800U & 0xfffff000);
    fVar15 = 1.0 / (fVar4 + fVar12);
    fVar1 = (float)((int)((fVar4 - fVar12) * fVar15) + 0x800U & 0xfffff000);
    fVar15 = (((fVar4 - fVar12) - fVar1 * fVar14) - fVar1 * ((fVar12 - fVar14) + fVar4)) * fVar15;
    fVar14 = (fVar1 + fVar15) * (fVar1 + fVar15);
    fVar4 = fVar15 * 1.0 + (fVar14 * 0.20008275 + 0.33333334) * fVar14 * (fVar1 + fVar15);
    fVar14 = (float)((int)(fVar1 * 1.0 + fVar4) + 0x800U & 0xfffff000);
    fVar4 = fVar14 * -0.0056336913 + ((fVar1 * 1.0 - fVar14) + fVar4) * 46.16624;
    fVar1 = (float)((int)(fVar14 * 46.171875 + fVar4) + 0x800U & 0xfffff000);
    fVar4 = (fVar14 * 46.171875 - fVar1) + fVar4;
    iVar2 = uVar5 * 8;
    fVar12 = (float)VectorSignedToFloat((iVar7 + iVar8) * 0x10,(byte)(in_fpscr >> 0x16) & 3);
    fVar14 = (float)((int)(fVar4 + *(float *)(&DAT_00812d4c + iVar2) + fVar1 +
                           *(float *)(&DAT_00812d48 + iVar2) + fVar12) + 0x800U & 0xfffff000);
    fVar4 = fVar4 - ((((fVar14 - fVar12) - *(float *)(&DAT_00812d48 + iVar2)) - fVar1) -
                    *(float *)(&DAT_00812d4c + iVar2));
  }
  fVar1 = (float)((int)fVar11 + 0x800U & 0xfffff000);
  fVar4 = fVar14 * (fVar11 - fVar1) + fVar4 * (fVar1 + (fVar11 - fVar1));
  fVar11 = (float)((int)(fVar14 * fVar1 + fVar4) + 0x800U & 0xfffff000);
  fVar4 = (fVar14 * fVar1 - fVar11) + fVar4;
  fVar14 = fVar11 + fVar4;
  if (fVar14 < 0.0) {
    fVar13 = -0.5;
  }
  uVar5 = (uint)(fVar13 + fVar14);
  fVar14 = (float)VectorSignedToFloat((int)uVar5 >> 4,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  uVar6 = uVar5 & 0xf;
  fVar13 = (float)VectorSignedToFloat(uVar5,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  fVar4 = (fVar11 - fVar13) + fVar4;
  fVar11 = ABS(fVar14);
  if (fVar11 < 126.0) {
    fVar11 = (float)fn_001a879c((fVar14 + 127.0) * 8388608.0);
    return fVar11;
  }
  fVar13 = 1.5845633e+29;
  if (192.0 <= fVar11) {
    if (0.0 <= fVar14) goto LAB_001a4e60;
  }
  else {
    iVar8 = (int)fVar14 / 2;
    fVar11 = (float)(((int)fVar14 - iVar8) * 0x800000 + 0x3f800000);
    fVar14 = (float)(iVar8 * 0x800000 + 0x3f800000) *
             fVar16 * (*(float *)(&DAT_00812e08 + uVar6 * 4) +
                       *(float *)(&DAT_00812e48 + uVar6 * 4) *
                       (fVar4 * (fVar4 * 1.35512055e-05 + 0.0009384123) + 0.0433217) * fVar4 +
                      *(float *)(&DAT_00812dc8 + uVar6 * 4)) * fVar11;
    if ((int)fVar14 * -2 == 0x1000000) {
LAB_001a4e60:
      fn_00102ca2(2);
      return (float)((uint)fVar16 & 0x80000000 | (uint)ABS(fVar13 * fVar13));
    }
    if (ABS(fVar14) != 0.0) {
      fVar11 = (float)fn_001a8760(fVar14);
      if (fVar11 == 5.60519e-45) {
        fVar11 = (float)fn_001a878c();
      }
      return fVar11;
    }
  }
  fn_00102ca2(2);
  fn_001a878c();
  return (float)((uint)fVar16 & 0x80000000 | (uint)ABS(fVar11));
}


