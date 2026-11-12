#include "003d46d4_003d4e64.h"



uint * fn_003d4e64(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[3];
  uVar2 = uVar1;
  if (param_1[4] < uVar1) {
    do {
      uVar2 = uVar2 + 0x54;
    } while (uVar2 != param_1[4]);
  }
  fn_001008c4(uVar1,(int)(param_1[5] - uVar1) / 0x54,0);
  uVar1 = *param_1;
  uVar2 = uVar1;
  if (param_1[1] < uVar1) {
    do {
      uVar2 = uVar2 + 0x54;
    } while (uVar2 != param_1[1]);
  }
  fn_001008c4(uVar1,(int)(param_1[2] - uVar1) / 0x54,0);
  return param_1;
}



void fn_003d4e14(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_s0;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)(param_1 + 0x1c) = *param_2;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = in_s0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



void fn_003d4df8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  fn_003d46d4(param_1,param_1 + 0xc,param_2,param_3,param_4);
  return;
}



void fn_003d46d4(undefined4 param_1,uint *param_2,float *param_3,float *param_4,float *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  float local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  float local_34;
  
  uVar20 = 0;
  uVar3 = in_fpscr & 0xfffffff;
  fVar11 = ABS(-(param_4[1] * 40.743664));
  fVar10 = ABS(param_4[2] * 40.743664);
  for (fVar12 = ABS(*param_4 * 40.743664); 0x477fffff < (int)fVar12; fVar12 = fVar12 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar11; fVar11 = fVar11 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar10; fVar10 = fVar10 - 65536.0) {
  }
  uVar13 = VectorFloatToUnsigned(fVar12,3);
  uVar14 = VectorFloatToUnsigned(fVar11,3);
  uVar15 = VectorFloatToUnsigned(fVar10,3);
  uVar4 = uVar13 & 0xff;
  fVar17 = (float)VectorUnsignedToFloat(uVar13 & 0xffff,(byte)(uVar3 >> 0x16) & 3);
  uVar13 = uVar14 & 0xff;
  fVar19 = (float)VectorUnsignedToFloat(uVar14 & 0xffff,(byte)(uVar3 >> 0x16) & 3);
  uVar14 = uVar15 & 0xff;
  fVar18 = (float)VectorUnsignedToFloat(uVar15 & 0xffff,(byte)(uVar3 >> 0x16) & 3);
  fVar16 = (float)(&DAT_007d6f20)[uVar4 * 4] + (fVar12 - fVar17) * (float)(&DAT_007d6f28)[uVar4 * 4]
  ;
  fVar17 = (float)(&DAT_007d6f24)[uVar4 * 4] + (fVar12 - fVar17) * (float)(&DAT_007d6f2c)[uVar4 * 4]
  ;
  local_cc = (float)(&DAT_007d6f24)[uVar13 * 4] +
             (fVar11 - fVar19) * (float)(&DAT_007d6f2c)[uVar13 * 4];
  fVar12 = (float)(&DAT_007d6f20)[uVar13 * 4] +
           (fVar11 - fVar19) * (float)(&DAT_007d6f28)[uVar13 * 4];
  if (*param_4 * 40.743664 < 0.0) {
    fVar16 = -fVar16;
  }
  fVar11 = (float)(&DAT_007d6f20)[uVar14 * 4] +
           (fVar10 - fVar18) * (float)(&DAT_007d6f28)[uVar14 * 4];
  fVar10 = (float)(&DAT_007d6f24)[uVar14 * 4] +
           (fVar10 - fVar18) * (float)(&DAT_007d6f2c)[uVar14 * 4];
  if (-(param_4[1] * 40.743664) < 0.0) {
    fVar12 = -fVar12;
  }
  if (param_4[2] * 40.743664 < 0.0) {
    fVar11 = -fVar11;
  }
  local_f4 = fVar10 * local_cc;
  local_d4 = -fVar12;
  local_e4 = fVar11 * local_cc;
  local_d0 = fVar16 * local_cc;
  local_cc = fVar17 * local_cc;
  local_ec = fVar16 * fVar11 + fVar17 * fVar10 * fVar12;
  local_f0 = fVar16 * fVar10 * fVar12 - fVar17 * fVar11;
  local_dc = fVar17 * fVar11 * fVar12 - fVar16 * fVar10;
  local_e0 = fVar17 * fVar10 + fVar16 * fVar11 * fVar12;
  local_b4 = 0;
  local_a4 = 0;
  local_94 = 0;
  local_e8 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_100 = *param_3;
  fStack_fc = param_3[1];
  fStack_f8 = param_3[2];
  local_c0 = local_f4;
  local_bc = local_f0;
  local_b8 = local_ec;
  local_b0 = local_e4;
  local_ac = local_e0;
  local_a8 = local_dc;
  local_a0 = local_d4;
  local_9c = local_d0;
  local_98 = local_cc;
  fn_001781f0(&local_90,&local_c0);
  local_84 = *param_3 - *param_5;
  local_90 = 0x3f800000;
  uStack_8c = 0;
  local_74 = param_3[1] - param_5[1];
  local_88 = 0;
  local_64 = param_3[2] - param_5[2];
  local_80 = 0;
  local_7c = 0x3f800000;
  uStack_78 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0x3f800000;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62fc), iVar1 != 0)) {
    DAT_008f9e2c = uVar20;
    DAT_008f9e30 = uVar20;
    DAT_008f9e34 = uVar20;
  }
  local_118 = DAT_008f9e2c;
  uStack_114 = DAT_008f9e30;
  uStack_110 = DAT_008f9e34;
  fn_0016947c(&local_118,&local_90);
  fn_001781f0(&local_60,&local_c0);
  local_54 = *param_3 + *param_5;
  local_44 = param_3[1] + param_5[1];
  local_34 = param_3[2] + param_5[2];
  local_5c = 0;
  local_60 = 0x3f800000;
  local_58 = 0;
  local_50 = 0;
  uStack_4c = 0x3f800000;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  uStack_38 = 0x3f800000;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62fc), iVar1 != 0)) {
    DAT_008f9e2c = uVar20;
    DAT_008f9e30 = uVar20;
    DAT_008f9e34 = uVar20;
  }
  local_10c = DAT_008f9e2c;
  uStack_108 = DAT_008f9e30;
  uStack_104 = DAT_008f9e34;
  fn_0016947c(&local_10c,&local_60);
  puVar7 = (undefined4 *)param_2[1];
  if (puVar7 != (undefined4 *)param_2[2]) {
    param_2[1] = (uint)(puVar7 + 0x15);
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = local_118;
      puVar7[1] = uStack_114;
      puVar7[2] = uStack_110;
      puVar7[3] = local_10c;
      puVar7[4] = uStack_108;
      puVar7[5] = uStack_104;
      puVar7[6] = local_100;
      puVar7[7] = fStack_fc;
      puVar7[8] = fStack_f8;
      fn_001781f0(puVar7 + 9,&local_f4);
    }
    return;
  }
  uVar3 = (int)((int)puVar7 - *param_2) / 0x54;
  if ((uint)((int)((int)param_2[2] - *param_2) / 0x54) <= uVar3) {
    uVar13 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
    if (uVar13 < uVar3 + 0x20) {
      uVar13 = uVar3 + 0x20;
    }
    puVar2 = (undefined4 *)fn_00100fc6(uVar13 * 0x54,0);
    puVar6 = puVar2;
    for (puVar8 = (undefined4 *)*param_2; puVar8 != puVar7; puVar8 = puVar8 + 0x15) {
      if (puVar6 != (undefined4 *)0x0) {
        uVar20 = puVar8[1];
        uVar5 = puVar8[2];
        *puVar6 = *puVar8;
        puVar6[1] = uVar20;
        puVar6[2] = uVar5;
        uVar20 = puVar8[4];
        uVar5 = puVar8[5];
        puVar6[3] = puVar8[3];
        puVar6[4] = uVar20;
        puVar6[5] = uVar5;
        uVar20 = puVar8[7];
        uVar5 = puVar8[8];
        puVar6[6] = puVar8[6];
        puVar6[7] = uVar20;
        puVar6[8] = uVar5;
        fn_001781f0(puVar6 + 9,puVar8 + 9);
      }
      puVar6 = puVar6 + 0x15;
    }
    puVar8 = puVar2 + ((int)((int)puVar7 - *param_2) / 0x54) * 0x15;
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = local_118;
      puVar8[1] = uStack_114;
      puVar8[2] = uStack_110;
      puVar8[3] = local_10c;
      puVar8[4] = uStack_108;
      puVar8[5] = uStack_104;
      puVar8[6] = local_100;
      puVar8[7] = fStack_fc;
      puVar8[8] = fStack_f8;
      fn_001781f0(puVar8 + 9,&local_f4);
    }
    puVar6 = (undefined4 *)param_2[1];
    puVar8 = puVar2 + ((int)((int)puVar7 - *param_2) / 0x54) * 0x15;
    for (; puVar7 != puVar6; puVar7 = puVar7 + 0x15) {
      puVar9 = puVar8 + 0x15;
      if (puVar9 != (undefined4 *)0x0) {
        uVar20 = puVar7[1];
        uVar5 = puVar7[2];
        *puVar9 = *puVar7;
        puVar8[0x16] = uVar20;
        puVar8[0x17] = uVar5;
        uVar20 = puVar7[4];
        uVar5 = puVar7[5];
        puVar8[0x18] = puVar7[3];
        puVar8[0x19] = uVar20;
        puVar8[0x1a] = uVar5;
        uVar20 = puVar7[7];
        uVar5 = puVar7[8];
        puVar8[0x1b] = puVar7[6];
        puVar8[0x1c] = uVar20;
        puVar8[0x1d] = uVar5;
        fn_001781f0(puVar8 + 0x1e,puVar7 + 9);
      }
      puVar8 = puVar9;
    }
    uVar4 = *param_2;
    uVar14 = param_2[1];
    uVar3 = uVar4;
    if (uVar14 < uVar4) {
      do {
        uVar3 = uVar3 + 0x54;
      } while (uVar3 != uVar14);
    }
    fn_001008c4(uVar4,(int)(param_2[2] - uVar4) / 0x54,0);
    *param_2 = (uint)puVar2;
    param_2[1] = (uint)(puVar2 + ((int)(uVar14 - uVar4) / 0x54) * 0x15 + 0x15);
    param_2[2] = (uint)(puVar2 + uVar13 * 0x15);
    return;
  }
  param_2[1] = (uint)(puVar7 + 0x15);
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = puVar7[-0x15];
    puVar7[1] = puVar7[-0x14];
    puVar7[2] = puVar7[-0x13];
    puVar7[3] = puVar7[-0x12];
    puVar7[4] = puVar7[-0x11];
    puVar7[5] = puVar7[-0x10];
    puVar7[6] = puVar7[-0xf];
    puVar7[7] = puVar7[-0xe];
    puVar7[8] = puVar7[-0xd];
    fn_001781f0(puVar7 + 9,puVar7 + -0xc);
  }
  puVar8 = puVar7 + -0x15;
  puVar6 = puVar7;
  if (puVar7 < puVar8) {
    if (0 < (int)puVar8 - (int)puVar7) {
      uVar3 = ((int)puVar8 - (int)puVar7) / 0x54;
      if ((uVar3 & 1) != 0) {
        puVar8 = puVar7 + -0x2a;
        puVar6 = puVar7 + -0x15;
        fn_0017821c(puVar6,puVar8,0x54);
      }
      for (iVar1 = (int)uVar3 >> 1; iVar1 != 0; iVar1 = iVar1 + -1) {
        fn_0017821c(puVar6 + -0x15,puVar8 + -0x15,0x54);
        puVar8 = puVar8 + -0x2a;
        puVar6 = puVar6 + -0x2a;
        fn_0017821c(puVar6,puVar8,0x54);
      }
    }
  }
  else {
    while (puVar7 != puVar8) {
      puVar8 = puVar8 + -0x15;
      fn_0017821c(puVar6 + -0x15,puVar8,0x54);
      puVar6 = puVar6 + -0x15;
    }
  }
  fn_0017821c(puVar7,&local_118,0x54);
  return;
}


