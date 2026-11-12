#include "0075f658_0075fdd0.h"



void fn_0075fbf8(int param_1,float *param_2,float *param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  float in_s0;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auStack_88 [72];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  uVar3 = 0;
  uVar1 = *(uint *)(param_1 + 0x40) & 0x333;
  if (uVar1 != 0x300 && uVar1 != 0) {
    local_40 = 0.0;
    local_3c = 0.0;
    local_38 = 0.0;
    local_34 = 0.0;
    if (param_4 != 0) {
      fn_0017821c(auStack_88,param_1,0x48);
      fn_0019bed8(auStack_88,&local_40,param_4,param_5);
    }
    uVar3 = CONCAT44(local_3c + local_34,local_40 + local_38);
    in_s0 = local_40;
  }
  fVar4 = 0.5;
  uVar1 = *(uint *)(param_1 + 0x40) & 0x30;
  if (uVar1 == 0x10) {
    in_s0 = (float)uVar3 * 0.5;
    fn_006f9f20();
    in_s0 = *param_2 - in_s0;
LAB_0075fcc8:
    *param_2 = in_s0;
  }
  else if (uVar1 == 0x20) {
    in_s0 = *param_2 - (float)uVar3;
    goto LAB_0075fcc8;
  }
  uVar1 = *(uint *)(param_1 + 0x40) & 0x300;
  fVar2 = (float)((ulonglong)uVar3 >> 0x20);
  if (uVar1 == 0x100) {
    fVar2 = fVar2 * fVar4;
    fn_006f9f20();
    in_s0 = *param_3 - fVar2;
  }
  else {
    if (uVar1 != 0x200) goto LAB_0075fd04;
    in_s0 = *param_3 - fVar2;
  }
  *param_3 = in_s0;
LAB_0075fd04:
  fVar2 = (float)uVar3;
  uVar1 = *(uint *)(param_1 + 0x40) & 3;
  if (uVar1 == 1) {
    fn_0075fdd0(param_1,param_4,param_5);
    fVar2 = fVar2 * fVar4;
    in_s0 = in_s0 * fVar4;
    fn_006f9f20();
    fn_006f9f20();
    in_s0 = *param_2 + (fVar2 - in_s0);
    *(float *)(param_1 + 0x10) = in_s0;
  }
  else if (uVar1 == 2) {
    fn_0075fdd0(param_1,param_4,param_5);
    in_s0 = *param_2 + (fVar2 - in_s0);
    *(float *)(param_1 + 0x10) = in_s0;
  }
  else {
    *(float *)(param_1 + 0x10) = *param_2;
  }
  if ((~*(uint *)(param_1 + 0x40) & 0x300) == 0) {
    *(float *)(param_1 + 0x14) = *param_3;
  }
  else {
    fn_006e60c4(param_1);
    *(float *)(param_1 + 0x14) = in_s0 + *param_3;
  }
  return;
}



undefined1 * fn_0075fdd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 auStack_68 [16];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar1 = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  uStack_14 = param_1;
  uStack_10 = param_2;
  uStack_c = param_3;
  fn_0017821c(auStack_68,param_1,0x48);
  local_58 = uVar1;
  local_54 = uVar1;
  fn_001a24d0(auStack_68,&local_78,&uStack_10,param_3);
  return auStack_68;
}



void fn_0075f658(undefined1 *param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  code *pcVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint in_fpscr;
  uint in_s0;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar18;
  longlong lVar17;
  longlong lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int local_140 [4];
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 auStack_128 [16];
  float local_118;
  byte local_112;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  int local_e0;
  code *local_dc;
  uint local_d8;
  int local_d4;
  undefined1 *local_d0;
  int local_cc;
  int local_c8;
  float local_c4;
  uint local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  uint local_b4;
  undefined4 local_b0;
  float local_a8 [4];
  undefined1 *local_98;
  int local_94;
  int local_90;
  float fStack_8c;
  uint uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint local_7c;
  uint local_78;
  uint local_70 [4];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  
  uVar10 = 0;
  local_a8[0] = *(float *)(param_1 + 0x10);
  fVar15 = 0.0;
  local_70[0] = *(uint *)(param_1 + 0x14);
  lVar19 = (ulonglong)local_70[0] << 0x20;
  bVar1 = *(int *)(param_1 + 0x30) < 0x7f7fffff;
  fVar13 = fVar15;
  local_140[0] = param_3;
  fn_0075edd0(param_1,local_a8,local_70,param_2);
  lVar17 = (ulonglong)in_s0 << 0x20;
  uVar20 = CONCAT44((float)((ulonglong)lVar19 >> 0x20) - *(float *)(param_1 + 0x14),fVar15);
  uStack_bc = *(undefined4 *)(param_1 + 8);
  uStack_b8 = *(undefined4 *)(param_1 + 0xc);
  local_c8 = param_2 + param_3;
  local_c4 = local_a8[0];
  local_c0 = local_70[0];
  local_b4 = 0;
  local_b0 = (uint)((unsigned int)(local_b0) >> 16) & 0xffff << 0x10;
  local_d0 = param_1;
  local_cc = param_2;
  fn_006e6544(&local_e0,*(undefined4 *)(param_1 + 0x24),0);
  local_e0 = param_2;
  (**(code **)(**(int **)(param_1 + 0x44) + 0x14))(*(int **)(param_1 + 0x44),&local_d0);
  piVar9 = (int *)((int)local_a8 + ((int)local_d8 >> 1) + -0x38);
  if ((local_d8 & 1) == 0) {
    pcVar8 = local_dc;
  }
  else {
    pcVar8 = *(code **)(local_dc + *piVar9);
  }
  uVar5 = (*pcVar8)(piVar9);
  uVar18 = (undefined4)((ulonglong)lVar19 >> 0x20);
  if (local_e0 - param_2 <= param_3) {
    uVar21 = CONCAT44(0x3f000000,fVar13);
    iVar11 = param_2;
    iVar12 = param_2;
    do {
      uVar18 = (undefined4)((ulonglong)lVar17 >> 0x20);
      if (uVar5 < 0x20) {
        local_b4 = uVar10 ^ 1;
        local_cc = local_e0;
        if ((bVar1 && uVar5 != 10) && iVar11 != iVar12) {
          local_98 = local_d0;
          local_94 = local_e0;
          local_90 = local_c8;
          fStack_8c = local_c4;
          uStack_88 = local_c0;
          uStack_84 = uStack_bc;
          uStack_80 = uStack_b8;
          local_78 = local_b0;
          local_7c = local_b4;
          fn_0017821c(auStack_128,param_1,0x48);
          local_60 = (float)uVar21;
          local_98 = auStack_128;
          local_5c = local_60;
          local_58 = local_60;
          local_54 = local_60;
          (**(code **)(**(int **)(param_1 + 0x44) + 0x10))
                    (*(int **)(param_1 + 0x44),&local_60,uVar5,&local_98);
          fVar15 = local_58 - local_60;
          fVar14 = (float)uVar21;
          uVar2 = in_fpscr & 0xfffffff;
          uVar3 = uVar2 | (uint)(fVar15 < fVar14) << 0x1f | (uint)(fVar15 == fVar14) << 0x1e;
          in_fpscr = uVar3 | (uint)(NAN(fVar15) || NAN(fVar14)) << 0x1c;
          bVar4 = (byte)(uVar3 >> 0x18);
          if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
            fVar14 = *(float *)(param_1 + 0x30);
            fVar15 = local_118 - local_c4;
            uVar2 = uVar2 | (uint)(fVar15 < fVar14) << 0x1f | (uint)(fVar15 == fVar14) << 0x1e;
            in_fpscr = uVar2 | (uint)(NAN(fVar15) || NAN(fVar14)) << 0x1c;
            bVar4 = (byte)(uVar2 >> 0x18);
            if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
              local_b0 = local_b0 & 0xffff0000;
              uVar5 = 10;
              local_e0 = iVar11;
              goto LAB_0075fb88;
            }
          }
        }
        iVar6 = (**(code **)(**(int **)(param_1 + 0x44) + 0xc))
                          (*(int **)(param_1 + 0x44),uVar5,&local_d0);
        uVar18 = (undefined4)((ulonglong)lVar19 >> 0x20);
        fVar14 = (float)((ulonglong)lVar17 >> 0x20);
        fVar13 = *(float *)(param_1 + 0x10);
        fVar15 = fVar13 - local_a8[0];
        if (iVar6 == 3) {
          fVar16 = (float)uVar21;
          if ((*(uint *)(param_1 + 0x40) & 3) == 1) {
            iVar6 = local_cc - param_2;
            local_d4 = local_cc;
            local_f8 = fVar16;
            local_f4 = fVar16;
            local_f0 = fVar16;
            local_ec = fVar16;
            fn_0017821c(local_140,param_1,0x48);
            local_130 = (undefined4)uVar21;
            local_12c = local_130;
            fn_0075f024(local_140,&local_f8,&local_d4,param_3 - iVar6);
            fVar16 = (float)((ulonglong)uVar21 >> 0x20);
            fVar13 = fVar14 * fVar16;
            fVar16 = (local_f0 - local_f8) * fVar16;
            fn_006f9f20(local_140);
            lVar17 = CONCAT44(fVar14,fVar13);
            fn_006f9f20();
            *(float *)(param_1 + 0x10) = local_c4 + ((float)lVar17 - fVar16);
          }
          else if ((*(uint *)(param_1 + 0x40) & 3) == 2) {
            iVar6 = local_cc - param_2;
            local_d4 = local_cc;
            local_f8 = fVar16;
            local_f4 = fVar16;
            local_f0 = fVar16;
            local_ec = fVar16;
            fn_0017821c(local_140,param_1,0x48);
            local_130 = (undefined4)uVar21;
            local_12c = local_130;
            fn_0075f024(local_140,&local_f8,&local_d4,param_3 - iVar6);
            *(float *)(param_1 + 0x10) =
                 local_c4 + ((float)((ulonglong)lVar17 >> 0x20) - (local_f0 - local_f8));
          }
          else {
            *(float *)(param_1 + 0x10) = local_c4;
            fVar13 = fVar13 - local_c4;
            uVar10 = in_fpscr & 0xfffffff | (uint)(fVar13 < fVar14) << 0x1f |
                     (uint)(fVar13 == fVar14) << 0x1e;
            in_fpscr = uVar10 | (uint)(NAN(fVar13) || NAN(fVar14)) << 0x1c;
            bVar4 = (byte)(uVar10 >> 0x18);
            if ((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
              fVar13 = fVar14;
            }
            lVar17 = (ulonglong)(uint)fVar13 << 0x20;
          }
          if (bVar1) {
            iVar12 = local_e0;
          }
LAB_0075f900:
          uVar10 = 0;
        }
        else {
          if (iVar6 == 1) goto LAB_0075f900;
          if (iVar6 == 2) {
            uVar10 = 1;
          }
          else if (iVar6 == 4) break;
        }
        local_e0 = local_cc;
LAB_0075fb4c:
        if (bVar1) {
          iVar11 = local_e0;
        }
        if ((local_d8 & 1) == 0) {
          pcVar8 = local_dc;
        }
        else {
          pcVar8 = *(code **)(local_dc + *(int *)((int)local_a8 + ((int)local_d8 >> 1) + -0x38));
        }
        uVar5 = (*pcVar8)();
        fVar13 = fVar15;
      }
      else {
        lVar19 = CONCAT44((int)((ulonglong)lVar19 >> 0x20),*(undefined4 *)(param_1 + 0x14));
        fVar15 = fVar13;
        uVar7 = (**(code **)(**(int **)(param_1 + 0x24) + 0x4c))
                          (*(int **)(param_1 + 0x24),local_b0 & 0xffff,uVar5);
        fVar14 = (float)VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x16) & 3);
        lVar17 = CONCAT44(uVar18,fVar14 * *(float *)(param_1 + 8));
        fn_005617e0(&local_118);
        (**(code **)(**(int **)(param_1 + 0x24) + 0x44))(*(int **)(param_1 + 0x24),&local_118,uVar5)
        ;
        if (uVar10 != 0) {
          fVar14 = *(float *)(param_1 + 0x34);
        }
        if (uVar10 != 0) {
          fVar15 = fVar14 + fVar15;
        }
        if (param_1[0x2c] == '\0') {
          fVar14 = (float)VectorUnsignedToFloat((uint)local_112,(byte)(in_fpscr >> 0x16) & 3);
          fVar14 = fVar14 * *(float *)(param_1 + 8);
        }
        else {
          fVar14 = *(float *)(param_1 + 0x1c);
        }
        fVar15 = fVar14 + fVar15 + (float)lVar17;
        if (!bVar1 || iVar11 == iVar12) {
LAB_0075fadc:
          if (uVar10 == 0) {
            fVar13 = *(float *)(param_1 + 0x10);
          }
          else {
            fVar13 = *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x34);
            *(float *)(param_1 + 0x10) = fVar13;
          }
          uVar10 = 1;
          *(float *)(param_1 + 0x10) = fVar13 + (float)lVar17;
          iVar6 = (**(code **)(**(int **)(param_1 + 0x24) + 0x54))();
          fVar13 = (float)VectorSignedToFloat(-iVar6,(byte)(in_fpscr >> 0x16) & 3);
          *(float *)(param_1 + 0x14) =
               *(float *)(param_1 + 0x14) + fVar13 * *(float *)(param_1 + 0xc);
          fn_0055f674(param_1,&local_118);
          *(int *)(param_1 + 0x14) = (int)lVar19;
          local_b0 = CONCAT22(((unsigned int)(local_b0) >> 16) & 0xffff,(short)uVar5);
          goto LAB_0075fb4c;
        }
        fVar16 = *(float *)(param_1 + 0x30);
        fVar14 = fVar15 - (float)uVar20;
        uVar2 = in_fpscr & 0xfffffff | (uint)(fVar14 < fVar16) << 0x1f |
                (uint)(fVar14 == fVar16) << 0x1e;
        in_fpscr = uVar2 | (uint)(NAN(fVar14) || NAN(fVar16)) << 0x1c;
        bVar4 = (byte)(uVar2 >> 0x18);
        if ((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1))
        goto LAB_0075fadc;
        uVar5 = 10;
        local_b0 = local_b0 & 0xffff0000;
        local_e0 = iVar11;
      }
LAB_0075fb88:
      uVar18 = (undefined4)((ulonglong)lVar19 >> 0x20);
    } while (local_e0 - param_2 <= param_3);
  }
  if ((*(uint *)(param_1 + 0x40) & 0x300) == 0x100 || (*(uint *)(param_1 + 0x40) & 0x300) == 0x200)
  {
    *(undefined4 *)(param_1 + 0x14) = uVar18;
  }
  else {
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + (float)((ulonglong)uVar20 >> 0x20);
  }
  (**(code **)(**(int **)(param_1 + 0x44) + 0x18))(*(int **)(param_1 + 0x44),&local_d0);
  return;
}


