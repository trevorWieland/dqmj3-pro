#include "0069b4c0_0069b4c0.h"



undefined1 *
fn_0069b4c0(int param_1,int param_2,undefined4 *param_3,float *param_4,undefined4 *param_5)

{
  char cVar1;
  undefined1 **ppuVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 *local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined1 auStack_19c [4];
  undefined1 auStack_198 [244];
  undefined1 local_a4;
  undefined4 local_a0;
  int local_9c;
  undefined4 local_98;
  undefined1 local_94;
  undefined1 local_93;
  undefined1 auStack_92 [34];
  undefined1 *local_70;
  undefined4 *local_6c;
  undefined4 *local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float local_4c;
  float fStack_48;
  float local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  fn_0065fdf0(auStack_19c);
  fVar26 = 0.0;
  local_1c0 = (undefined1 *)0x0;
  local_1bc = 0;
  local_1b8 = 0;
  local_1b4 = 0.0;
  local_1b0 = 0.0;
  local_1ac = 0.0;
  fn_0065fd88(auStack_19c);
  local_a0 = 0xffffffff;
  local_9c = 0xffffffff;
  local_98 = 0;
  local_94 = 0xff;
  local_93 = 1;
  fn_00158f6c(auStack_92,0x20);
  local_1c0 = (undefined1 *)*param_3;
  local_1bc = param_3[1];
  local_1b8 = param_3[2];
  local_1b4 = *param_4;
  local_1b0 = param_4[1];
  local_1ac = param_4[2];
  local_1a8 = *param_5;
  uStack_1a4 = param_5[1];
  uStack_1a0 = param_5[2];
  uVar3 = fn_002febd8(param_2);
  fn_00301a9c(auStack_92,param_2,uVar3);
  local_34 = 0;
  local_30 = 0;
  fn_0019bc50(&local_34,param_2 + 2);
  local_a0 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),&local_34);
  local_9c = *(char *)(param_2 + 8) + -0x41;
  if (*(char *)(param_2 + 9) == 'L') {
    local_70 = local_1c0;
    local_6c = (undefined4 *)local_1bc;
    local_68 = (undefined4 *)local_1b8;
    local_40 = local_1a8;
    uStack_3c = uStack_1a4;
    in_fpscr = in_fpscr & 0xfffffff;
    fVar16 = ABS(local_1b0 * 40.743664);
    fVar15 = ABS(local_1ac * 40.743664);
    for (fVar21 = ABS(local_1b4 * 40.743664); 0x477fffff < (int)fVar21; fVar21 = fVar21 - 65536.0) {
    }
    for (; 0x477fffff < (int)fVar16; fVar16 = fVar16 - 65536.0) {
    }
    for (; 0x477fffff < (int)fVar15; fVar15 = fVar15 - 65536.0) {
    }
    uVar17 = VectorFloatToUnsigned(fVar21,3);
    uVar18 = VectorFloatToUnsigned(fVar16,3);
    uVar8 = uVar17 & 0xff;
    uVar19 = VectorFloatToUnsigned(fVar15,3);
    uVar13 = uVar19 & 0xff;
    fVar22 = (float)VectorUnsignedToFloat(uVar17 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    uVar17 = uVar18 & 0xff;
    fVar23 = (float)VectorUnsignedToFloat(uVar18 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    fVar20 = (float)VectorUnsignedToFloat(uVar19 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    fVar24 = (float)(&DAT_007d6f20)[uVar8 * 4] +
             (fVar21 - fVar22) * (float)(&DAT_007d6f28)[uVar8 * 4];
    fVar25 = (float)(&DAT_007d6f20)[uVar17 * 4] +
             (fVar16 - fVar23) * (float)(&DAT_007d6f28)[uVar17 * 4];
    fVar21 = (float)(&DAT_007d6f24)[uVar8 * 4] +
             (fVar21 - fVar22) * (float)(&DAT_007d6f2c)[uVar8 * 4];
    if (local_1b4 * 40.743664 < fVar26) {
      fVar24 = -fVar24;
    }
    fVar22 = (float)(&DAT_007d6f20)[uVar13 * 4] +
             (fVar15 - fVar20) * (float)(&DAT_007d6f28)[uVar13 * 4];
    fVar15 = (float)(&DAT_007d6f24)[uVar13 * 4] +
             (fVar15 - fVar20) * (float)(&DAT_007d6f2c)[uVar13 * 4];
    local_44 = (float)(&DAT_007d6f24)[uVar17 * 4] +
               (fVar16 - fVar23) * (float)(&DAT_007d6f2c)[uVar17 * 4];
    if (local_1b0 * 40.743664 < fVar26) {
      fVar25 = -fVar25;
    }
    if (local_1ac * 40.743664 < fVar26) {
      fVar22 = -fVar22;
    }
    local_64 = fVar15 * local_44;
    local_60 = fVar22 * local_44;
    local_50 = fVar24 * local_44;
    local_44 = fVar21 * local_44;
    local_5c = -fVar25;
    local_4c = fVar24 * fVar22 + fVar21 * fVar15 * fVar25;
    fStack_54 = fVar21 * fVar15 + fVar24 * fVar22 * fVar25;
    local_58 = fVar24 * fVar15 * fVar25 - fVar21 * fVar22;
    fStack_48 = fVar21 * fVar22 * fVar25 - fVar24 * fVar15;
    local_38 = fVar26;
    fn_0065fd9c(auStack_19c,&local_70);
  }
  else if (*(char *)(param_2 + 9) == 'S') {
    fn_0065fdd0(auStack_19c);
  }
  puVar4 = &DAT_007bfc40;
  cVar1 = *(char *)(param_2 + 10);
  if ((cVar1 != 'r') || (*(char *)(param_2 + 0xb) != 'u')) {
    puVar4 = &DAT_007bfc44;
    if (((cVar1 == 'd') && (*(char *)(param_2 + 0xb) == 'r')) ||
       ((puVar4 = &DAT_007bfc48, cVar1 == 'w' && (*(char *)(param_2 + 0xb) == 'm')))) {
      local_94 = puVar4[3];
      goto LAB_0069b898;
    }
    puVar4 = &DAT_007bfc4c;
    if ((cVar1 != 'e') || (*(char *)(param_2 + 0xb) != 'f')) goto LAB_0069b898;
  }
  local_94 = puVar4[3];
LAB_0069b898:
  iVar5 = fn_00102d78(param_2 + 0xd);
  if (iVar5 == 0) {
    local_98 = 0x10001b2;
  }
  else if (iVar5 == 1) {
    local_98 = 0x10001b5;
  }
  else if (iVar5 == 2) {
    local_98 = 0x10001cc;
  }
  else if (iVar5 == 3) {
    local_98 = 0x10001f2;
  }
  else if (iVar5 == 4) {
    local_98 = 0x10001fa;
  }
  else if (iVar5 == 5) {
    local_98 = 0x10001fb;
  }
  else if (iVar5 == 6) {
    local_98 = 0x10001bc;
  }
  piVar12 = (int *)(param_1 + 8);
  puVar10 = *(undefined4 **)(param_1 + 0xc);
  if (puVar10 == *(undefined4 **)(param_1 + 0x10)) {
    uVar17 = ((int)puVar10 - *piVar12) / 0x150;
    local_6c = puVar10;
    if (uVar17 < (uint)(((int)*(undefined4 **)(param_1 + 0x10) - *piVar12) / 0x150)) {
      *(undefined4 **)(param_1 + 0xc) = puVar10 + 0x54;
      ppuVar2 = &local_1c0;
      puVar6 = puVar10;
      puVar14 = puVar10;
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = puVar10[-0x54];
        puVar10[1] = puVar10[-0x53];
        puVar10[2] = puVar10[-0x52];
        puVar10[3] = puVar10[-0x51];
        puVar10[4] = puVar10[-0x50];
        puVar10[5] = puVar10[-0x4f];
        puVar10[6] = puVar10[-0x4e];
        puVar10[7] = puVar10[-0x4d];
        puVar10[8] = puVar10[-0x4c];
        puVar10[9] = &DAT_00850c64;
        local_70 = (undefined1 *)&local_1c0;
        fn_0017821c(puVar10 + 10,puVar10 + -0x4a,0xf4);
        *(undefined1 *)(puVar10 + 0x47) = *(undefined1 *)(puVar10 + -0xd);
        puVar10[0x48] = puVar10[-0xc];
        puVar10[0x49] = puVar10[-0xb];
        puVar10[0x4a] = puVar10[-10];
        *(undefined1 *)(puVar10 + 0x4b) = *(undefined1 *)(puVar10 + -9);
        *(undefined1 *)((int)puVar10 + 0x12d) = *(undefined1 *)((int)puVar10 + -0x23);
        fn_00301a9c((int)puVar10 + 0x12e,(int)puVar10 + -0x22,0x20);
        ppuVar2 = (undefined1 **)local_70;
        puVar6 = local_6c;
      }
      while( true ) {
        puVar11 = local_6c;
        local_70 = (undefined1 *)ppuVar2;
        if (local_6c == puVar14 + -0x54) break;
        uVar3 = puVar14[-0xa7];
        uVar9 = puVar14[-0xa6];
        puVar10[-0x54] = puVar14[-0xa8];
        puVar10[-0x53] = uVar3;
        puVar10[-0x52] = uVar9;
        uVar3 = puVar14[-0xa4];
        uVar9 = puVar14[-0xa3];
        puVar10[-0x51] = puVar14[-0xa5];
        puVar10[-0x50] = uVar3;
        puVar10[-0x4f] = uVar9;
        uVar3 = puVar14[-0xa1];
        uVar9 = puVar14[-0xa0];
        puVar10[-0x4e] = puVar14[-0xa2];
        puVar10[-0x4d] = uVar3;
        puVar10[-0x4c] = uVar9;
        local_6c = puVar6;
        fn_0017821c(puVar10 + -0x4a,puVar14 + -0x9e,0xf4);
        *(undefined1 *)(puVar10 + -0xd) = *(undefined1 *)(puVar14 + -0x61);
        puVar10[-0xc] = puVar14[-0x60];
        puVar10[-0xb] = puVar14[-0x5f];
        puVar10[-10] = puVar14[-0x5e];
        *(undefined1 *)(puVar10 + -9) = *(undefined1 *)(puVar14 + -0x5d);
        *(undefined1 *)((int)puVar10 + -0x23) = *(undefined1 *)((int)puVar14 + -0x173);
        fn_00301a9c((int)puVar10 + -0x22,(int)puVar14 + -0x172,0x20);
        puVar10 = puVar10 + -0x54;
        ppuVar2 = (undefined1 **)local_70;
        puVar6 = local_6c;
        puVar14 = puVar14 + -0x54;
        local_6c = puVar11;
      }
      *puVar6 = local_1c0;
      puVar6[1] = local_1bc;
      puVar6[2] = local_1b8;
      puVar6[3] = local_1b4;
      puVar6[4] = local_1b0;
      puVar6[5] = local_1ac;
      puVar6[6] = local_1a8;
      puVar6[7] = uStack_1a4;
      puVar6[8] = uStack_1a0;
      local_6c = puVar6;
      fn_0017821c(puVar6 + 10,(undefined1 *)((int)ppuVar2 + 0x28),0xf4);
      *(undefined1 *)(puVar6 + 0x47) = *(undefined1 *)((int)ppuVar2 + 0x11c);
      puVar6[0x48] = local_a0;
      puVar6[0x49] = local_9c;
      puVar6[0x4a] = local_98;
      *(undefined1 *)(puVar6 + 0x4b) = *(undefined1 *)((int)ppuVar2 + 300);
      *(undefined1 *)((int)puVar6 + 0x12d) = *(undefined1 *)((int)ppuVar2 + 0x12d);
      fn_00301a9c((int)puVar6 + 0x12e,(undefined1 *)((int)ppuVar2 + 0x12e),0x20);
    }
    else {
      local_64 = (float)(uVar17 + (uVar17 >> 1) + (uVar17 >> 3));
      if ((uint)local_64 < uVar17 + 0x20) {
        local_64 = (float)(uVar17 + 0x20);
      }
      local_70 = (undefined1 *)&local_1c0;
      puVar6 = (undefined4 *)fn_00100fc6((int)local_64 * 0x150,0);
      puVar14 = local_6c;
      local_68 = puVar6;
      puVar4 = local_70;
      for (puVar10 = (undefined4 *)*piVar12; local_70 = puVar4, puVar10 != puVar14;
          puVar10 = puVar10 + 0x54) {
        if (puVar6 != (undefined4 *)0x0) {
          uVar3 = puVar10[1];
          uVar9 = puVar10[2];
          *puVar6 = *puVar10;
          puVar6[1] = uVar3;
          puVar6[2] = uVar9;
          uVar3 = puVar10[4];
          uVar9 = puVar10[5];
          puVar6[3] = puVar10[3];
          puVar6[4] = uVar3;
          puVar6[5] = uVar9;
          uVar3 = puVar10[7];
          uVar9 = puVar10[8];
          puVar6[6] = puVar10[6];
          puVar6[7] = uVar3;
          puVar6[8] = uVar9;
          puVar6[9] = &DAT_00850c64;
          fn_0017821c(puVar6 + 10,puVar10 + 10,0xf4);
          *(undefined1 *)(puVar6 + 0x47) = *(undefined1 *)(puVar10 + 0x47);
          puVar6[0x48] = puVar10[0x48];
          puVar6[0x49] = puVar10[0x49];
          puVar6[0x4a] = puVar10[0x4a];
          *(undefined1 *)(puVar6 + 0x4b) = *(undefined1 *)(puVar10 + 0x4b);
          *(undefined1 *)((int)puVar6 + 0x12d) = *(undefined1 *)((int)puVar10 + 0x12d);
          fn_00301a9c((int)puVar6 + 0x12e,(int)puVar10 + 0x12e,0x20);
        }
        puVar6 = puVar6 + 0x54;
        puVar4 = local_70;
      }
      puVar10 = local_68 + (((int)local_6c - *piVar12) / 0x150) * 0x54;
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = local_1c0;
        puVar10[1] = local_1bc;
        puVar10[2] = local_1b8;
        puVar10[3] = local_1b4;
        puVar10[4] = local_1b0;
        puVar10[5] = local_1ac;
        puVar10[6] = local_1a8;
        puVar10[7] = uStack_1a4;
        puVar10[8] = uStack_1a0;
        puVar10[9] = &DAT_00850c64;
        fn_0017821c(puVar10 + 10,puVar4 + 0x28,0xf4);
        *(undefined1 *)(puVar10 + 0x47) = puVar4[0x11c];
        puVar10[0x48] = local_a0;
        puVar10[0x49] = local_9c;
        puVar10[0x4a] = local_98;
        *(undefined1 *)(puVar10 + 0x4b) = puVar4[300];
        *(undefined1 *)((int)puVar10 + 0x12d) = puVar4[0x12d];
        fn_00301a9c((int)puVar10 + 0x12e,puVar4 + 0x12e,0x20);
      }
      puVar14 = *(undefined4 **)(param_1 + 0xc);
      puVar10 = local_68 + (((int)local_6c - *piVar12) / 0x150) * 0x54;
      for (puVar6 = local_6c; puVar6 != puVar14; puVar6 = puVar6 + 0x54) {
        puVar11 = puVar10 + 0x54;
        if (puVar11 != (undefined4 *)0x0) {
          uVar3 = puVar6[1];
          uVar9 = puVar6[2];
          *puVar11 = *puVar6;
          puVar10[0x55] = uVar3;
          puVar10[0x56] = uVar9;
          uVar3 = puVar6[4];
          uVar9 = puVar6[5];
          puVar10[0x57] = puVar6[3];
          puVar10[0x58] = uVar3;
          puVar10[0x59] = uVar9;
          uVar3 = puVar6[7];
          uVar9 = puVar6[8];
          puVar10[0x5a] = puVar6[6];
          puVar10[0x5b] = uVar3;
          puVar10[0x5c] = uVar9;
          puVar10[0x5d] = &DAT_00850c64;
          fn_0017821c(puVar10 + 0x5e,puVar6 + 10,0xf4);
          *(undefined1 *)(puVar10 + 0x9b) = *(undefined1 *)(puVar6 + 0x47);
          puVar10[0x9c] = puVar6[0x48];
          puVar10[0x9d] = puVar6[0x49];
          puVar10[0x9e] = puVar6[0x4a];
          *(undefined1 *)(puVar10 + 0x9f) = *(undefined1 *)(puVar6 + 0x4b);
          *(undefined1 *)((int)puVar10 + 0x27d) = *(undefined1 *)((int)puVar6 + 0x12d);
          fn_00301a9c((int)puVar10 + 0x27e,(int)puVar6 + 0x12e,0x20);
        }
        puVar10 = puVar11;
      }
      iVar5 = *piVar12;
      iVar7 = *(int *)(param_1 + 0xc) - iVar5;
      for (; iVar5 != *(int *)(param_1 + 0xc); iVar5 = iVar5 + 0x150) {
      }
      fn_001008c4(*piVar12,(*(int *)(param_1 + 0x10) - *piVar12) / 0x150,0);
      *piVar12 = (int)local_68;
      *(undefined4 **)(param_1 + 0xc) = local_68 + (iVar7 / 0x150) * 0x54 + 0x54;
      *(undefined4 **)(param_1 + 0x10) = local_68 + (int)local_64 * 0x54;
    }
  }
  else {
    *(undefined4 **)(param_1 + 0xc) = puVar10 + 0x54;
    if (puVar10 != (undefined4 *)0x0) {
      *puVar10 = local_1c0;
      puVar10[1] = local_1bc;
      puVar10[2] = local_1b8;
      puVar10[3] = local_1b4;
      puVar10[4] = local_1b0;
      puVar10[5] = local_1ac;
      puVar10[6] = local_1a8;
      puVar10[7] = uStack_1a4;
      puVar10[8] = uStack_1a0;
      puVar10[9] = &DAT_00850c64;
      fn_0017821c(puVar10 + 10,auStack_198,0xf4);
      *(undefined1 *)(puVar10 + 0x47) = local_a4;
      puVar10[0x48] = local_a0;
      puVar10[0x49] = local_9c;
      puVar10[0x4a] = local_98;
      *(undefined1 *)(puVar10 + 0x4b) = local_94;
      *(undefined1 *)((int)puVar10 + 0x12d) = local_93;
      fn_00301a9c((int)puVar10 + 0x12e,auStack_92,0x20);
    }
  }
  return auStack_19c;
}


