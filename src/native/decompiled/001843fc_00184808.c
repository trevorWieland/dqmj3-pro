#include "001843fc_00184808.h"



undefined8 fn_001847ac(undefined4 param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = param_3 >> 0xb | param_2 << 0x15;
  uVar2 = fn_00184808(param_1,param_2 >> 0xb,uVar1,param_4 + -0x3c01);
  if (((uint)uVar2 & 0x7fffffff) + 1 < 0x800) {
    return CONCAT44(uVar1,(int)((ulonglong)uVar2 >> 0x20) + (uint)uVar2 * 0x100000);
  }
  return 0x7ff00000;
}



undefined8 fn_00184808(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint unaff_r6;
  int unaff_r11;
  bool bVar3;
  bool bVar4;
  
  uVar2 = param_4;
  if ((int)param_4 < 0) {
    unaff_r6 = (unaff_r6 | unaff_r6 << 0x10) >> 0x10;
    if ((int)param_4 < -0x3f) {
      uVar1 = unaff_r6 | param_3;
      uVar2 = 0;
      param_3 = 0;
      unaff_r6 = (uVar1 | uVar1 << 0x10) >> 0x10 | param_2;
      param_2 = 0;
      if ((int)param_4 < -0x40) {
        unaff_r6 = (unaff_r6 | unaff_r6 << 0x10) >> 0x10;
      }
    }
    else {
      if ((int)param_4 < -0x1f) {
        unaff_r6 = unaff_r6 | param_3;
        param_4 = param_4 + 0x20;
        param_2 = 0;
        param_3 = param_2;
      }
      uVar1 = -param_4;
      uVar2 = 0;
      if (uVar1 != 0) {
        unaff_r6 = (unaff_r6 | unaff_r6 << 0x10) >> 0x10 | param_3 << (param_4 + 0x20 & 0xff);
        param_3 = param_3 >> (uVar1 & 0xff) | param_2 << (param_4 + 0x20 & 0xff);
        param_2 = param_2 >> (uVar1 & 0xff);
        uVar2 = 0;
      }
    }
  }
  bVar4 = SUB41(unaff_r6 >> 0x1f,0);
  if ((unaff_r6 & 0x7fffffff) == 0) {
    if (!bVar4) goto LAB_00184854;
    bVar4 = (bool)((byte)param_3 & 1);
  }
  bVar3 = unaff_r11 != -1;
  if (unaff_r11 == 0) {
    bVar3 = bVar4;
  }
  bVar3 = bVar3 && 0xfffffffe < param_3;
  uVar1 = param_2;
  if (bVar3) {
    uVar1 = param_2 + 1;
  }
  bVar3 = bVar3 && 0xfffffffe < param_2;
  if (bVar3) {
    uVar1 = 0x80000000;
  }
  uVar2 = uVar2 + bVar3;
  param_2 = uVar1;
LAB_00184854:
  return CONCAT44(param_2,uVar2 | param_1 & 0x80000000);
}



/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong fn_00184464(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint unaff_r4;
  uint unaff_r5;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  
  uVar10 = unaff_r4 >> 0x10;
  uVar9 = unaff_r5 >> 0x10;
  uVar12 = (uint)*(byte *)((unaff_r4 >> 0x18) + 0x1846ac);
  uVar23 = unaff_r5 & ~(uVar9 << 0x10);
  uVar19 = unaff_r4 & ~(uVar10 << 0x10);
  uVar1 = (uint)((byte)param_2 & 1) << 0x1f | param_3 >> 1;
  if ((bool)((byte)param_3 & 1)) {
    uVar3 = 0x80000000;
  }
  else {
    uVar3 = 0;
  }
  iVar13 = ((0x800000 - (uVar10 * uVar12 + uVar12)) * uVar12 >> 0x13) + 2;
  uVar20 = 0x20000000 - ((unaff_r4 >> 0xd) * iVar13 + iVar13);
  uVar12 = uVar20 >> 0x10;
  uVar22 = uVar12 * iVar13 + ((uVar20 & ~(uVar12 << 0x10)) * iVar13 >> 0x10) >> 6;
  uVar12 = uVar22 * (param_2 >> 0x10) >> 0x10;
  uVar4 = uVar1 - uVar12 * uVar9;
  uVar20 = uVar12 * uVar23;
  bVar24 = uVar20 * 0x10000 <= uVar3;
  uVar3 = uVar3 + uVar20 * -0x10000;
  uVar20 = uVar20 >> 0x10;
  bVar2 = uVar4 - uVar20 < (uint)bVar24;
  bVar25 = uVar20 < uVar4 || bVar2;
  uVar5 = uVar4 - (uVar20 + !bVar24);
  uVar14 = uVar12 * uVar19;
  if (uVar20 < uVar4 || bVar2) {
    bVar25 = uVar14 * 0x10000 <= uVar5;
  }
  uVar5 = uVar5 + uVar14 * -0x10000;
  uVar4 = ((param_2 >> 1) - (uVar10 * uVar12 + (uint)(uVar1 < uVar12 * uVar9))) -
          ((uVar14 >> 0x10) + (uint)!bVar25);
  uVar1 = uVar22 * (uVar4 >> 2) >> 0x10;
  uVar20 = uVar1 * uVar9;
  bVar24 = uVar20 * 0x80000 <= uVar3;
  uVar3 = uVar3 + uVar20 * -0x80000;
  uVar20 = uVar20 >> 0xd;
  bVar2 = uVar5 - uVar20 < (uint)bVar24;
  bVar25 = uVar20 < uVar5 || bVar2;
  uVar14 = uVar5 - (uVar20 + !bVar24);
  uVar15 = uVar10 * uVar1;
  if (uVar20 < uVar5 || bVar2) {
    bVar25 = uVar15 * 0x80000 <= uVar14;
  }
  uVar14 = uVar14 + uVar15 * -0x80000;
  uVar20 = uVar1 * uVar23;
  bVar26 = uVar20 * 8 <= uVar3;
  uVar5 = uVar20 >> 0x1d;
  bVar2 = uVar14 - uVar5 < (uint)bVar26;
  bVar24 = uVar5 < uVar14 || bVar2;
  uVar6 = uVar14 - (uVar5 + !bVar26);
  uVar16 = uVar1 * uVar19;
  if (uVar5 < uVar14 || bVar2) {
    bVar24 = uVar16 * 8 <= uVar6;
  }
  uVar6 = uVar6 + uVar16 * -8;
  uVar5 = ((uVar4 - ((uVar15 >> 0xd) + (uint)!bVar25)) - ((uVar16 >> 0x1d) + (uint)!bVar24)) *
          0x4000000 | uVar6 >> 6;
  uVar14 = uVar6 * 0x4000000 | uVar3 + uVar20 * -8 >> 6;
  uVar21 = uVar22 * (uVar5 >> 0xf);
  uVar20 = uVar20 * -0x20000000;
  uVar3 = uVar21 >> 0x10;
  uVar15 = uVar14 - uVar3 * uVar9;
  uVar4 = uVar3 * uVar23;
  bVar24 = uVar4 * 0x10000 <= uVar20;
  uVar20 = uVar20 + uVar4 * -0x10000;
  uVar4 = uVar4 >> 0x10;
  bVar2 = uVar15 - uVar4 < (uint)bVar24;
  bVar25 = uVar4 < uVar15 || bVar2;
  uVar6 = uVar15 - (uVar4 + !bVar24);
  uVar16 = uVar3 * uVar19;
  if (uVar4 < uVar15 || bVar2) {
    bVar25 = uVar16 * 0x10000 <= uVar6;
  }
  uVar6 = uVar6 + uVar16 * -0x10000;
  uVar14 = (uVar5 - (uVar10 * uVar3 + (uint)(uVar14 < uVar3 * uVar9))) -
           ((uVar16 >> 0x10) + (uint)!bVar25);
  uVar4 = uVar22 * (uVar14 >> 2) >> 0x10;
  uVar5 = uVar4 * uVar9;
  bVar24 = uVar5 * 0x80000 <= uVar20;
  uVar20 = uVar20 + uVar5 * -0x80000;
  uVar5 = uVar5 >> 0xd;
  bVar2 = uVar6 - uVar5 < (uint)bVar24;
  bVar25 = uVar5 < uVar6 || bVar2;
  uVar15 = uVar6 - (uVar5 + !bVar24);
  uVar16 = uVar10 * uVar4;
  if (uVar5 < uVar6 || bVar2) {
    bVar25 = uVar16 * 0x80000 <= uVar15;
  }
  uVar15 = uVar15 + uVar16 * -0x80000;
  uVar5 = uVar4 * uVar23;
  bVar26 = uVar5 * 8 <= uVar20;
  uVar6 = uVar5 >> 0x1d;
  bVar2 = uVar15 - uVar6 < (uint)bVar26;
  bVar24 = uVar6 < uVar15 || bVar2;
  uVar7 = uVar15 - (uVar6 + !bVar26);
  uVar17 = uVar4 * uVar19;
  if (uVar6 < uVar15 || bVar2) {
    bVar24 = uVar17 * 8 <= uVar7;
  }
  uVar7 = uVar7 + uVar17 * -8;
  uVar16 = ((uVar14 - ((uVar16 >> 0xd) + (uint)!bVar25)) - ((uVar17 >> 0x1d) + (uint)!bVar24)) *
           0x4000000 | uVar7 >> 6;
  uVar11 = uVar3 * 0x400000 + uVar4 * 0x200;
  uVar22 = uVar22 * (uVar16 >> 0xf);
  uVar7 = uVar7 * 0x4000000 | uVar20 + uVar5 * -8 >> 6;
  uVar5 = uVar5 * -0x20000000;
  uVar14 = uVar22 >> 0x10;
  uVar20 = uVar14 << 0x1c;
  uVar17 = uVar7 - uVar14 * uVar9;
  uVar6 = uVar14 * uVar23;
  bVar24 = uVar6 * 0x10000 <= uVar5;
  uVar15 = uVar6 >> 0x10;
  bVar2 = uVar17 - uVar15 < (uint)bVar24;
  bVar25 = uVar15 < uVar17 || bVar2;
  uVar8 = uVar17 - (uVar15 + !bVar24);
  uVar18 = uVar14 * uVar19;
  if (uVar15 < uVar17 || bVar2) {
    bVar25 = uVar18 * 0x10000 <= uVar8;
  }
  uVar8 = uVar8 + uVar18 * -0x10000;
  uVar22 = uVar22 >> 0x14;
  uVar17 = uVar11 + uVar22;
  uVar15 = ((uVar16 - (uVar10 * uVar14 + (uint)(uVar7 < uVar14 * uVar9))) -
           ((uVar18 >> 0x10) + (uint)!bVar25)) * 0x4000 | uVar8 >> 0x12;
  uVar14 = uVar8 * 0x4000 | uVar5 + uVar6 * -0x10000 >> 0x12;
  uVar5 = uVar6 * -0x40000000;
  uVar19 = uVar19 | uVar10 << 0x10;
  uVar23 = uVar23 | uVar9 << 0x10;
  bVar2 = uVar15 - uVar19 < (uint)(uVar23 <= uVar14);
  uVar10 = uVar15;
  if (uVar19 < uVar15 || bVar2) {
    uVar10 = uVar15 - (uVar19 + (uVar23 > uVar14));
    uVar14 = uVar14 - uVar23;
  }
  uVar6 = uVar6 * -0x80000000;
  bVar24 = CARRY4(uVar14,uVar14) || CARRY4(uVar14 * 2,(uint)CARRY4(uVar5,uVar5));
  uVar9 = uVar14 * 2 + (uint)CARRY4(uVar5,uVar5);
  bVar25 = CARRY4(uVar10 * 2,(uint)bVar24);
  bVar26 = CARRY4(uVar10,uVar10) || bVar25;
  uVar5 = uVar10 * 2 + (uint)bVar24;
  bVar24 = bVar26 < (uVar19 < uVar5 || uVar5 - uVar19 < (uint)(uVar23 <= uVar9));
  if ((CARRY4(uVar10,uVar10) || bVar25) || bVar24) {
    uVar5 = uVar5 - (uVar19 + (uVar23 > uVar9));
    uVar9 = uVar9 - uVar23;
  }
  bVar27 = CARRY4(uVar9,uVar9) || CARRY4(uVar9 * 2,(uint)CARRY4(uVar6,uVar6));
  uVar10 = uVar9 * 2 + (uint)CARRY4(uVar6,uVar6);
  bVar25 = CARRY4(uVar5 * 2,(uint)bVar27);
  bVar28 = CARRY4(uVar5,uVar5) || bVar25;
  uVar9 = uVar5 * 2 + (uint)bVar27;
  bVar27 = bVar28 < (uVar19 < uVar9 || uVar9 - uVar19 < (uint)(uVar23 <= uVar10));
  if ((CARRY4(uVar5,uVar5) || bVar25) || bVar27) {
    uVar9 = uVar9 - (uVar19 + (uVar23 > uVar10));
    uVar10 = uVar10 - uVar23;
  }
  if (uVar9 != 0 || uVar10 != 0) {
    uVar20 = uVar20 | 1;
  }
  uVar10 = (((uint)(uVar19 < uVar15 || bVar2) * 2 + (uint)(bVar26 || bVar24)) * 2 +
           (uint)(bVar28 || bVar27)) * 0x10000000;
  uVar9 = uVar17 + CARRY4(uVar20,uVar10);
  iVar13 = uVar12 * 0x10000 + uVar1 * 8 + (uVar21 >> 0x1a) +
           (uint)CARRY4(uVar3 * 0x400000,uVar4 * 0x200) + (uint)CARRY4(uVar11,uVar22) +
           (uint)CARRY4(uVar17,(uint)CARRY4(uVar20,uVar10));
  if (iVar13 < 0) {
    return CONCAT44(iVar13,param_1 ^ param_4) & 0xffffffff80000000;
  }
  return CONCAT44(iVar13 * 2 +
                  (uint)(CARRY4(uVar9,uVar9) ||
                        CARRY4(uVar9 * 2,(uint)CARRY4(uVar20 + uVar10,uVar20 + uVar10))),
                  param_1 ^ param_4) & 0xffffffff80000000;
}



undefined8 fn_001843fc(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  if ((param_2 & 0x80000000) == 0) {
    return CONCAT44(param_2,param_1);
  }
  uVar1 = param_2 & 0x7fffffff;
  if (uVar1 == 0) {
    if (param_3 >> 0x10 == 0) {
      param_3 = param_3 << 0x10;
      iVar2 = 0x10;
    }
    else {
      iVar2 = 0;
    }
    if (param_3 >> 0x18 == 0) {
      param_3 = param_3 << 8;
      iVar2 = iVar2 + 8;
    }
    if (param_3 >> 0x1c == 0) {
      param_3 = param_3 << 4;
      iVar2 = iVar2 + 4;
    }
    if (param_3 >> 0x1e == 0) {
      param_3 = param_3 << 2;
      iVar2 = iVar2 + 2;
    }
    if (-1 < (int)param_3) {
      param_3 = param_3 << 1;
      iVar2 = iVar2 + 1;
    }
    return CONCAT44(param_3,(param_1 + -0x1f) - iVar2);
  }
  if (uVar1 >> 0x10 == 0) {
    uVar1 = param_2 << 0x10;
    iVar2 = 0x10;
  }
  else {
    iVar2 = 0;
  }
  if (uVar1 >> 0x18 == 0) {
    uVar1 = uVar1 << 8;
    iVar2 = iVar2 + 8;
  }
  if (uVar1 >> 0x1c == 0) {
    uVar1 = uVar1 << 4;
    iVar2 = iVar2 + 4;
  }
  if (uVar1 >> 0x1e == 0) {
    uVar1 = uVar1 << 2;
    iVar2 = iVar2 + 2;
  }
  if (-1 < (int)uVar1) {
    iVar2 = iVar2 + 1;
  }
  if (-1 < (int)uVar1) {
    uVar1 = uVar1 << 1;
  }
  return CONCAT44(uVar1 | param_3 >> (0x20U - iVar2 & 0xff),(param_1 - iVar2) + 1);
}


