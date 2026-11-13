#include "001e7160_001e7160.h"



/* WARNING: Removing unreachable block (ram,0x001e7aa8) */
/* WARNING: Removing unreachable block (ram,0x001e7ac0) */

void fn_001e7160(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  bool bVar9;
  uint in_fpscr;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_e4;
  float local_e0 [10];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c;
  float local_98;
  float local_94;
  float local_90;
  undefined4 local_8c;
  float local_88;
  float local_84;
  float local_80;
  undefined4 local_7c;
  float local_64;
  float local_60;
  float local_5c;
  
  iVar1 = fn_006f7a48(DAT_008977e0);
  iVar2 = DAT_008977e0;
  fVar23 = 0.0;
  if ((*(char *)(iVar1 + 4) == '\0' || *(char *)(iVar1 + 4) == '\x04') &&
     (*(char *)(DAT_008977e0 + 0x170) != '\x01')) {
    if (*(char *)(DAT_008977e0 + 0x170) != '\0') {
      if ((param_1[0x115] != 0) ||
         (iVar6 = param_1[0x116], param_1[0x116] = iVar6 + -1, iVar6 + -1 != 0)) {
        iVar2 = fn_006a7d74(iVar1);
        bVar9 = iVar2 != 0;
        iVar2 = 0;
        if (bVar9) {
          iVar2 = param_1[0x10e];
        }
        fVar22 = 1.0;
        iVar6 = 0;
        if (bVar9) {
          iVar6 = iVar2 + -4;
        }
        if ((iVar6 < 0 != (bVar9 && SBORROW4(iVar2,4))) &&
           (iVar2 = fn_006f751c(DAT_008977e0), *(int *)(iVar2 + 0x34) != 0)) {
          uVar3 = fn_006f751c(DAT_008977e0);
          fn_0033f830(uVar3,1);
          param_1[0x110] = (int)fVar22;
          fn_006f751c(DAT_008977e0);
          iVar2 = fn_00341920();
          fVar11 = *(float *)(iVar2 + 100);
          fVar13 = (float)param_1[0x112];
          uVar10 = in_fpscr & 0xfffffff | (uint)(fVar11 < fVar13) << 0x1f |
                   (uint)(fVar11 == fVar13) << 0x1e;
          in_fpscr = uVar10 | (uint)(NAN(fVar11) || NAN(fVar13)) << 0x1c;
          bVar8 = (byte)(uVar10 >> 0x18);
          if (!(bool)(bVar8 >> 6 & 1) && bVar8 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
            fn_006f751c(DAT_008977e0);
            iVar2 = fn_00341920();
            param_1[0x112] = *(int *)(iVar2 + 100);
          }
          fn_006f751c(DAT_008977e0);
          iVar2 = fn_00341920();
          param_1[0x114] = *(int *)(iVar2 + 0x5c);
        }
        iVar2 = fn_006f751c(DAT_008977e0);
        if (*(int *)(iVar2 + 0x30) != 0) {
          fn_006f751c(DAT_008977e0);
          fn_003403d0();
          param_1[0x110] = (int)fVar22;
          fn_006f751c(DAT_008977e0);
          iVar2 = fn_00341920();
          if ((float)param_1[0x112] < *(float *)(iVar2 + 8)) {
            fn_006f751c(DAT_008977e0);
            iVar2 = fn_00341920();
            param_1[0x112] = *(int *)(iVar2 + 8);
          }
          fn_006f751c(DAT_008977e0);
          iVar2 = fn_00341920();
          param_1[0x113] = (int)*(float *)(iVar2 + 0x14);
                    /* WARNING: Subroutine does not return */
          fn_001638a0();
        }
        fVar11 = -1.0;
        if (param_1[0x113] != 0) {
          param_1[0x113] = param_1[0x113] + -1;
        }
        iVar2 = param_1[0x114];
        if (iVar2 != 0) {
          iVar2 = iVar2 + -1;
          param_1[0x114] = iVar2;
        }
        if (iVar2 == 0) {
          fVar11 = fVar22;
          if (param_1[0x113] != 0) {
            fn_006f751c(DAT_008977e0);
            iVar2 = fn_00341920();
            fVar11 = *(float *)(iVar2 + 8);
          }
        }
        else if (param_1[0x113] == 0) {
          fn_006f751c(DAT_008977e0);
          iVar2 = fn_00341920();
          fVar11 = *(float *)(iVar2 + 100);
        }
        fVar13 = (float)param_1[0x112];
        uVar15 = in_fpscr & 0xfffffff | (uint)(fVar13 < fVar11) << 0x1f |
                 (uint)(fVar13 == fVar11) << 0x1e;
        uVar10 = uVar15 | (uint)(NAN(fVar13) || NAN(fVar11)) << 0x1c;
        bVar8 = (byte)(uVar15 >> 0x18);
        bVar7 = bVar8 >> 7;
        bVar9 = (bool)(bVar8 >> 6 & 1);
        bVar8 = (byte)(uVar10 >> 0x1c) & 1;
        if (!bVar9 && bVar7 == bVar8) {
          uVar10 = in_fpscr & 0xfffffff | (uint)(fVar11 < fVar23) << 0x1f |
                   (uint)(fVar11 == fVar23) << 0x1e | (uint)(NAN(fVar11) || NAN(fVar23)) << 0x1c;
          bVar8 = (byte)(uVar10 >> 0x18);
          bVar7 = bVar8 >> 7;
          bVar9 = (bool)(bVar8 >> 6 & 1);
          bVar8 = bVar8 >> 4 & 1;
        }
        if (!bVar9 && bVar7 == bVar8) {
          fn_006f751c(DAT_008977e0);
          iVar2 = fn_00341920();
          fVar13 = (float)param_1[0x112] - *(float *)(iVar2 + 0xc);
          param_1[0x112] = (int)fVar13;
          uVar15 = uVar10 & 0xfffffff | (uint)(fVar13 < fVar11) << 0x1f |
                   (uint)(fVar13 == fVar11) << 0x1e;
          uVar10 = uVar15 | (uint)(NAN(fVar13) || NAN(fVar11)) << 0x1c;
          bVar8 = (byte)(uVar15 >> 0x18);
          if (!(bool)(bVar8 >> 6 & 1) && bVar8 >> 7 == ((byte)(uVar10 >> 0x1c) & 1)) {
            fVar11 = fVar13;
          }
          param_1[0x112] = (int)fVar11;
        }
        if (param_1[0x10f] == 0) {
          (**(code **)(*param_1 + 0x58))(param_1,1);
          fn_0017fde4(param_1[99]);
          iVar2 = fn_005ea4fc();
          *(undefined1 *)(iVar2 + 8) = 1;
        }
        else {
          bVar9 = *(char *)((int)param_1 + 0x59) == '\0';
          (**(code **)(*param_1 + 0x58))(param_1,bVar9);
          fn_0017fde4(param_1[99]);
          iVar2 = fn_005ea4fc();
          *(bool *)(iVar2 + 8) = bVar9;
          param_1[0x10f] = param_1[0x10f] + -1;
        }
        if (param_1[0x10e] < 4) {
          if (param_1[0x110] < 0x3f800000) {
            fn_006f751c(DAT_008977e0);
            iVar2 = fn_00341920();
            fVar13 = fVar22 - *(float *)(iVar2 + 0x40);
            fn_006f751c(DAT_008977e0);
            iVar2 = fn_00341920();
            fVar11 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x44),
                                                (byte)(uVar10 >> 0x16) & 3);
            fVar11 = fVar13 / fVar11 + (float)param_1[0x110];
            param_1[0x110] = (int)fVar11;
            if (0x3f800000 < (int)fVar11) {
              fVar11 = fVar22;
            }
            param_1[0x110] = (int)fVar11;
          }
        }
        else {
          iVar2 = fn_006a9938(param_1);
          if (iVar2 == 0) {
            param_1[0x110] = (int)((float)param_1[0x110] * 0.9);
          }
        }
        iVar6 = param_1[100];
        uVar21 = CONCAT44(*(undefined4 *)(iVar6 + 0x18),*(undefined4 *)(iVar6 + 0x24));
        fn_006f751c(DAT_008977e0);
        iVar2 = fn_00341920();
        *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar2 + 0x20);
        iVar6 = param_1[100];
        fn_006f751c(DAT_008977e0);
        iVar2 = fn_00341920();
        fVar13 = 2.16;
        *(undefined4 *)(iVar6 + 0x24) = *(undefined4 *)(iVar2 + 0x24);
        fn_006f751c(DAT_008977e0);
        pfVar4 = (float *)fn_00341920();
        fVar11 = *pfVar4 * (float)param_1[0x112] * (float)param_1[0x110] * 0.033333335;
        uVar10 = uVar10 & 0xfffffff;
        if (fVar13 < fVar11) {
          fVar11 = fVar13 + (fVar11 - fVar13) * (float)param_1[0x117];
        }
        *(float *)(param_1[100] + 0x28) = fVar11;
        *(float *)(param_1[100] + 0x2c) = fVar11;
        fn_006f751c(DAT_008977e0);
        fn_00341920();
        fn_001da640(param_1);
        if ((char)param_1[0x82] != -1) {
          fn_001747e8(param_1[99]);
        }
        fn_006f751c(DAT_008977e0);
        iVar2 = fn_00341920();
        fVar14 = (float)param_1[0x117];
        fVar12 = (float)VectorSignedToFloat(*(undefined4 *)(iVar2 + 0x10),(byte)(uVar10 >> 0x16) & 3
                                           );
        fVar12 = fVar22 / fVar12;
        fVar11 = fVar12 + fVar14;
        param_1[0x117] = (int)fVar11;
        if (0x3f800000 < (int)fVar11) {
          fVar11 = fVar22;
        }
        param_1[0x117] = (int)fVar11;
        *(undefined1 *)((int)param_1 + 0x401) = 0;
        local_b8 = fVar23;
        local_b4 = fVar23;
        local_b0 = fVar23;
        local_64 = fVar23;
        local_60 = fVar23;
        local_5c = fVar23;
        fn_006f7a84(DAT_008977e0);
        fn_006a7fac();
        fVar24 = fVar22;
        local_b8 = fVar11;
        local_b4 = fVar14;
        local_b0 = fVar12;
        if (0x3f800000 < param_1[0x112]) {
          fn_006f751c(DAT_008977e0);
          iVar2 = fn_00341920();
          fVar24 = *(float *)(iVar2 + 0x1c);
          fn_006f751c(DAT_008977e0);
          iVar2 = fn_00341920();
          fVar24 = fVar24 + (fVar22 - fVar24) *
                            (fVar22 - ((float)param_1[0x112] - fVar22) /
                                      (*(float *)(iVar2 + 8) - fVar22));
        }
        fn_006f751c(DAT_008977e0);
        iVar2 = fn_00341920();
        fVar24 = fVar24 * 0.01;
        local_b8 = local_b8 + *(float *)(iVar2 + 0x3c) * *(float *)(param_1[0x11e] + 0x10) * fVar24;
        fn_006f751c(DAT_008977e0);
        iVar2 = fn_00341920();
        local_b0 = local_b0 + *(float *)(iVar2 + 0x3c) * *(float *)(param_1[0x11e] + 0x18) * fVar24;
        fVar11 = fVar22 / SQRT(local_b8 * local_b8 + local_b4 * local_b4 + local_b0 * local_b0);
        local_b8 = local_b8 * fVar11;
        local_b4 = local_b4 * fVar11;
        fVar11 = local_b0 * fVar11;
        local_b0 = fVar11;
        fn_006a7cb0(iVar1);
        uVar10 = uVar10 & 0xfffffff;
        fVar12 = 0.1;
        if ((fVar11 == fVar23) || (3 < param_1[0x10e])) {
          param_1[0x111] = (int)fVar23;
        }
        else {
          fn_006f751c(DAT_008977e0);
          iVar2 = fn_00341920();
          fVar12 = *(float *)(iVar2 + 0x38) * fVar12;
          fn_0017fe34();
          fVar11 = fVar12;
          fn_006a7cb0(iVar1);
          fVar12 = fVar12 * fVar11;
          param_1[0x111] = (int)fVar12;
          fn_00764608();
          param_1[0x111] = (int)fVar12;
        }
        if (param_1[0x112] < 0x3f800001) {
          fVar22 = (float)param_1[0x111];
        }
        else {
          fn_006f751c(DAT_008977e0);
          iVar2 = fn_00341920();
          fVar11 = *(float *)(iVar2 + 0x18);
          fn_006f751c(DAT_008977e0);
          iVar2 = fn_00341920();
          fVar22 = (fVar11 + (fVar22 - fVar11) *
                             (fVar22 - ((float)param_1[0x112] - fVar22) /
                                       (*(float *)(iVar2 + 8) - fVar22))) * (float)param_1[0x111];
          param_1[0x111] = (int)fVar22;
        }
        uVar10 = uVar10 & 0xfffffff;
        for (fVar11 = ABS(-(fVar22 * 40.743664)); fVar12 = fVar23, 0x477fffff < (int)fVar11;
            fVar11 = fVar11 - 65536.0) {
        }
        for (; 0x477fffff < (int)fVar12; fVar12 = fVar12 - 65536.0) {
        }
        uVar15 = VectorFloatToUnsigned(fVar23,3);
        uVar16 = VectorFloatToUnsigned(fVar11,3);
        uVar5 = uVar15 & 0xff;
        uVar17 = VectorFloatToUnsigned(fVar12,3);
        fVar20 = (float)VectorUnsignedToFloat(uVar15 & 0xffff,(byte)(uVar10 >> 0x16) & 3);
        uVar15 = uVar16 & 0xff;
        fVar24 = (float)VectorUnsignedToFloat(uVar16 & 0xffff,(byte)(uVar10 >> 0x16) & 3);
        uVar16 = uVar17 & 0xff;
        fVar19 = (float)VectorUnsignedToFloat(uVar17 & 0xffff,(byte)(uVar10 >> 0x16) & 3);
        fVar14 = (float)(&DAT_007d6f20)[uVar5 * 4] +
                 (fVar23 - fVar20) * (float)(&DAT_007d6f28)[uVar5 * 4];
        fVar18 = (float)(&DAT_007d6f24)[uVar5 * 4] +
                 (fVar23 - fVar20) * (float)(&DAT_007d6f2c)[uVar5 * 4];
        fVar20 = (float)(&DAT_007d6f20)[uVar15 * 4] +
                 (fVar11 - fVar24) * (float)(&DAT_007d6f28)[uVar15 * 4];
        local_80 = (float)(&DAT_007d6f24)[uVar15 * 4] +
                   (fVar11 - fVar24) * (float)(&DAT_007d6f2c)[uVar15 * 4];
        fVar11 = (float)(&DAT_007d6f20)[uVar16 * 4] +
                 (fVar12 - fVar19) * (float)(&DAT_007d6f28)[uVar16 * 4];
        fVar12 = (float)(&DAT_007d6f24)[uVar16 * 4] +
                 (fVar12 - fVar19) * (float)(&DAT_007d6f2c)[uVar16 * 4];
        if (-(fVar22 * 40.743664) < fVar23) {
          fVar20 = -fVar20;
        }
        local_a8 = fVar12 * local_80;
        local_84 = fVar14 * local_80;
        local_98 = fVar11 * local_80;
        local_80 = fVar18 * local_80;
        local_88 = -fVar20;
        local_a4 = fVar14 * fVar12 * fVar20 - fVar18 * fVar11;
        local_90 = fVar18 * fVar11 * fVar20 - fVar14 * fVar12;
        local_a0 = fVar14 * fVar11 + fVar18 * fVar12 * fVar20;
        local_94 = fVar18 * fVar12 + fVar14 * fVar11 * fVar20;
        local_9c = 0;
        local_8c = 0;
        local_7c = 0;
        fn_0016947c(&local_b8,&local_a8);
        fn_0023f0f4(param_1[100],&local_b8);
        fVar22 = local_b8;
        fn_00525bd0();
        param_1[0xc] = (int)(fVar22 * 0.024543693);
        fn_001dd0a8(param_1,&local_b8);
        fn_001e2a4c(param_1,&local_b8,0);
        if ((*(char *)(param_1[100] + 0x3c) == '\0') &&
           ((iVar2 = fn_006a9938(param_1), iVar2 != 0 ||
            (iVar2 = fn_006a99b0(param_1), iVar2 != 0)))) {
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
        }
        if (*(char *)((int)param_1 + 0x325) != '\0') {
          *(undefined1 *)((int)param_1 + 0x325) = 0;
          uVar3 = 0;
        }
        bVar9 = local_b8 == fVar23;
        fVar22 = local_b8;
        if (bVar9) {
          fVar22 = local_b4;
        }
        if ((((!bVar9 || (!bVar9 || fVar22 != fVar23)) || local_b0 != fVar23) &&
            ((**(code **)(*param_1 + 0x30))(param_1,&local_b8,0,uVar3,&local_64),
            *(char *)((int)param_1 + 0x325) != '\0')) && (*(char *)(param_1[100] + 0x3c) == '\0')) {
          param_1[0x4c] = param_1[0x4c] & 0xffffffef;
        }
        *(undefined1 *)(param_1 + 0xe3) = 0;
        if ((*(char *)(param_1[100] + 0x3c) != '\0') ||
           ((iVar2 = fn_006a9938(param_1), iVar2 == 0 &&
            (iVar2 = fn_006a99b0(param_1), iVar2 == 0)))) {
          local_e4 = (float)param_1[199] + local_b4;
          local_e0[0] = fVar23;
          pfVar4 = local_e0;
          if ((float)param_1[199] + local_b4 <= fVar23) {
            pfVar4 = &local_e4;
          }
          param_1[199] = (int)*pfVar4;
          if ((*(char *)(param_1[100] + 0x3c) == '\0') && (local_60 < fVar23)) {
            fn_006b6328(*(undefined4 *)(DAT_00897804 + 8));
            fn_0025b480(*(undefined4 *)(DAT_00897804 + 8));
          }
        }
        bVar9 = local_b8 == fVar23;
        fVar22 = local_b8;
        if (bVar9) {
          fVar22 = local_b4;
        }
        if ((bVar9 && (bVar9 && fVar22 == fVar23)) && local_b0 == fVar23) {
                    /* WARNING: Subroutine does not return */
          fn_001638a0();
        }
        fn_001e49d4(param_1,&local_b8);
        fn_001dd254(param_1);
        param_1[0x11] = (int)local_b8;
        param_1[0x12] = (int)local_b4;
        param_1[0x13] = (int)local_b0;
        if (((*(char *)(param_1[100] + 0x3c) == '\0') && (iVar2 = fn_006a9938(param_1), iVar2 == 0)
            ) && (iVar2 = fn_006a99b0(param_1), iVar2 == 0)) {
          fn_001e4f84(param_1);
        }
        if ((*(char *)(param_1[100] + 0x3c) == '\0') && ((char)param_1[0x82] != -1)) {
          fn_006aa538(param_1);
          iVar2 = fn_00242b6c();
          if (iVar2 == 2) {
            fn_001e4f84(param_1);
          }
        }
        if ((*(char *)(param_1[0x101] + 0x38) == '\0') &&
           (iVar2 = (**(code **)(*param_1 + 300))(param_1), iVar2 != 0)) {
          fn_001dc1e8(param_1);
        }
        *(float *)(param_1[100] + 0x28) = fVar13;
        *(int *)(param_1[100] + 0x18) = (int)((ulonglong)uVar21 >> 0x20);
        *(int *)(param_1[100] + 0x24) = (int)uVar21;
        uVar3 = fn_006f751c(DAT_008977e0);
        fn_006c19d0(uVar3,param_1 + 0x118,param_1 + 8,0);
        iVar2 = fn_001e0f94(param_1);
        if (iVar2 == 0) {
          fn_001e0e24(param_1);
          return;
        }
        fn_006f751c(DAT_008977e0);
        fn_00341a14();
        return;
      }
      fn_001f0fb4(*(undefined4 *)(iVar2 + 0x30),0xf,0);
      if (*(char *)((int)param_1 + 0x22d) != '\a') {
        param_1[0xcf] = (int)fVar23;
        param_1[0xcd] = 0x1e;
        param_1[0xce] = param_1[0x3e];
        param_1[0xcc] = 0;
        param_1[0x4e] = param_1[0x4e] | 2;
                    /* WARNING: Subroutine does not return */
        fn_001638a0();
      }
    }
  }
  else {
    fn_001dd254(param_1);
  }
  return;
}


