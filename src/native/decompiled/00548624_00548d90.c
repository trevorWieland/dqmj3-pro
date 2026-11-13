#include "00548624_00548d90.h"



void fn_00548d90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  float in_s0;
  float fVar4;
  float fVar5;
  
  fVar5 = 0.0;
  uVar2 = 0;
  if ((in_s0 != 0.0) && ((uint)ABS(in_s0) >> 0x17 != 0xff)) {
    fVar4 = (in_s0 + 16.0) * 256.0;
    if (0.0 <= fVar4) {
      bVar3 = SBORROW4((int)fVar4,0x46000000);
      iVar1 = (int)fVar4 + -0x46000000;
      if ((int)fVar4 < 0x46000000) {
        bVar3 = SBORROW4((int)fVar4,0x45800000);
        iVar1 = (int)fVar4 + -0x45800000;
        fVar5 = fVar4;
      }
      else {
        fVar5 = 8191.0;
      }
      if (iVar1 < 0 == bVar3) {
        uVar2 = VectorFloatToUnsigned(fVar5 - 4096.0,3);
        goto LAB_00548e14;
      }
    }
    uVar2 = VectorFloatToUnsigned(fVar5 + 4096.0,3);
  }
LAB_00548e14:
  *(undefined4 *)(param_1 + 4) = uVar2;
  return;
}



undefined4 fn_00548750(int param_1,ushort *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  undefined8 uVar19;
  float local_138 [7];
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8 [6];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  float local_d0;
  undefined4 local_cc;
  float local_c8 [6];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  undefined4 local_9c;
  undefined1 auStack_98 [40];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50 [11];
  
  uVar10 = 0;
  uVar17 = 0x3f00000000000000;
  fVar14 = 0.0;
  fVar15 = 1.0;
  uVar19 = 0xbf800000bf000000;
  local_60 = 0;
  do {
    iVar9 = param_1 + uVar10 * 0x18;
    bVar1 = *(byte *)(iVar9 + 0x94);
    if ((bVar1 & 1) == 0) {
      if (*(char *)(iVar9 + 0x96) == '\x03') {
        if ((*(byte *)(*(int *)(param_3 + 0x40) + (*(char *)(iVar9 + 0x97) + 1) * 0x6c) & 1) == 0)
        goto LAB_005487ec;
        goto LAB_00548804;
      }
      if ((*(char *)(iVar9 + 0x96) == '\x04') && ((*(byte *)(param_3 + 0x48) & 1) != 0))
      goto LAB_00548804;
LAB_005487ec:
      if ((*param_2 & (&DAT_007d8524)[uVar10]) != 0) goto LAB_00548804;
    }
    else {
LAB_00548804:
      *(byte *)(iVar9 + 0x94) = bVar1 & 0xfe;
      cVar2 = *(char *)(iVar9 + 0x95);
      if (cVar2 == '\0') {
        fVar11 = *(float *)(iVar9 + 0x98);
        fVar12 = *(float *)(iVar9 + 0x9c);
        fVar13 = *(float *)(iVar9 + 0xa4);
        fVar16 = *(float *)(iVar9 + 0xa8);
        fn_0052534c(&local_5c,&local_58);
        local_138[0] = fVar11 * local_58;
        fVar18 = (float)((ulonglong)uVar17 >> 0x20);
        local_138[1] = -(fVar11 * local_5c);
        local_138[3] = (((local_5c * fVar18 - local_58 * fVar18) + fVar18) - fVar13) * fVar11;
        local_138[4] = fVar12 * local_5c;
        local_138[5] = fVar12 * local_58;
        local_11c = (((local_5c * (float)uVar19 - local_58 * fVar18) + fVar18) - fVar16) * fVar12;
        local_100 = fVar14;
        local_104 = fVar14;
        local_108 = fVar14;
        local_10c = fVar14;
        local_114 = fVar14;
        local_118 = fVar14;
        local_138[6] = fVar14;
        local_138[2] = fVar14;
        local_fc = fVar15;
        local_110 = fVar15;
      }
      else if (cVar2 == '\x01') {
        fVar11 = *(float *)(iVar9 + 0x98);
        fVar12 = *(float *)(iVar9 + 0x9c);
        fVar13 = *(float *)(iVar9 + 0xa4);
        fVar16 = *(float *)(iVar9 + 0xa8);
        fn_0052534c(&local_54,local_50);
        local_138[0] = fVar11 * local_50[0];
        local_138[1] = fVar11 * local_54;
        local_138[5] = fVar12 * local_50[0];
        local_11c = (local_54 * fVar13 - local_50[0] * fVar16) * fVar12;
        local_100 = fVar14;
        local_104 = fVar14;
        local_108 = fVar14;
        local_10c = fVar14;
        local_114 = fVar14;
        local_118 = fVar14;
        local_138[6] = fVar14;
        local_138[2] = fVar14;
        local_fc = fVar15;
        local_110 = fVar15;
        local_138[3] = (-(local_50[0] * fVar13) - local_54 * fVar16) * fVar11;
        local_138[4] = -(fVar12 * local_54);
      }
      else if (cVar2 == '\x02') {
        fVar16 = *(float *)(iVar9 + 0xa4);
        fVar11 = *(float *)(iVar9 + 0x98);
        fVar12 = *(float *)(iVar9 + 0x9c);
        fVar13 = *(float *)(iVar9 + 0xa8);
        fn_0052534c(&local_68,&local_64);
        fVar18 = (float)((ulonglong)uVar17 >> 0x20);
        local_138[0] = fVar11 * local_64;
        local_138[1] = -(fVar11 * local_68);
        local_138[5] = fVar12 * local_64;
        local_11c = fVar12 * local_68 * (-fVar16 - fVar18) + fVar12 * local_64 * (fVar13 - fVar18) +
                    fVar18;
        local_100 = fVar14;
        local_104 = fVar14;
        local_108 = fVar14;
        local_10c = fVar14;
        local_114 = fVar14;
        local_118 = fVar14;
        local_138[6] = fVar14;
        local_138[2] = fVar14;
        local_fc = fVar15;
        local_110 = fVar15;
        local_138[3] = (fVar11 * local_64 * (-fVar16 - fVar18) -
                       fVar11 * local_68 * (fVar13 - fVar18)) + fVar18;
        local_138[4] = fVar12 * local_68;
      }
      else {
        if (((DAT_008c6304 & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c6304), iVar4 != 0)) {
          DAT_008f9e68 = fVar15;
          DAT_008f9e6c = fVar14;
          DAT_008f9e70 = fVar14;
          DAT_008f9e74 = fVar14;
          DAT_008f9e78 = fVar14;
          DAT_008f9e7c = fVar15;
          DAT_008f9e80 = fVar14;
          DAT_008f9e84 = fVar14;
          DAT_008f9e88 = fVar14;
          DAT_008f9e8c = fVar14;
          DAT_008f9e90 = fVar15;
          DAT_008f9e94 = fVar14;
          DAT_008f9e98 = fVar14;
          DAT_008f9e9c = fVar14;
          DAT_008f9ea0 = fVar14;
          DAT_008f9ea4 = fVar15;
        }
        fn_001694c0(local_138,&DAT_008f9e68);
      }
      switch(*(undefined1 *)(iVar9 + 0x96)) {
      case 1:
        local_138[0] = *(float *)(param_3 + 0x10);
        local_138[1] = *(float *)(param_3 + 0x14);
        local_138[2] = *(float *)(param_3 + 0x18);
        local_138[3] = *(float *)(param_3 + 0x1c);
        local_138[4] = *(float *)(param_3 + 0x20);
        local_138[5] = *(float *)(param_3 + 0x24);
        local_138[6] = *(float *)(param_3 + 0x28);
        local_11c = *(float *)(param_3 + 0x2c);
        local_118 = *(float *)(param_3 + 0x30);
        local_114 = *(float *)(param_3 + 0x34);
        local_110 = *(float *)(param_3 + 0x38);
        local_10c = *(float *)(param_3 + 0x3c);
        break;
      case 3:
        iVar9 = *(int *)(param_3 + 0x40) + (*(char *)(iVar9 + 0x97) + 1) * 0x6c;
        if (uVar10 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = 2;
        }
        iVar4 = param_1 + iVar4 * 4;
        *(float *)(iVar4 + 0x80) = local_138[3];
        *(float *)(iVar4 + 0x84) = local_11c;
        local_138[3] = fVar14;
        local_11c = fVar14;
        fn_001ad06c(local_138,local_138,iVar9 + 4);
        fn_001ad06c(local_138,local_138,iVar9 + 0x34);
        *(undefined1 *)(param_1 + 0x90) = 1;
        break;
      case 4:
        *(float *)(param_1 + 0x80) = local_138[3];
        *(float *)(param_1 + 0x84) = local_11c;
        local_138[3] = fVar14;
        local_11c = fVar14;
        fn_001781f0(auStack_98,param_3 + 0x4c);
        cVar2 = *(char *)(param_3 + 0x49);
        if (cVar2 == '\0') {
          fVar11 = fVar15 / (*(float *)(param_3 + 0xb0) - *(float *)(param_3 + 0xac));
          uVar5 = fn_00171688();
          fn_001781f0(local_f8,uVar5);
          local_f8[1] = 0.0;
          local_f8[2] = 0.0;
          local_f8[3] = 0.0;
          local_f8[4] = 0.0;
          local_e0 = 0;
          local_dc = 0;
          local_d8 = 0;
          local_d4 = 0;
          local_cc = 0;
          local_f8[0] = fVar11;
          local_f8[5] = fVar11;
          local_d0 = fVar11;
          fn_001ad06c(local_138,local_138,local_f8);
        }
        else if (cVar2 == '\x01') {
          local_70 = (float)((ulonglong)uVar19 >> 0x20) /
                     (*(float *)(param_3 + 0xb0) - *(float *)(param_3 + 0xac));
          local_6c = *(float *)(param_3 + 0xac) * local_70;
        }
        else if (cVar2 == '\x02') {
          fVar11 = fVar15 / (*(float *)(param_3 + 0xb0) - *(float *)(param_3 + 0xac));
          uVar5 = fn_00171688();
          fn_001781f0(local_c8,uVar5);
          local_c8[1] = 0.0;
          local_c8[2] = 0.0;
          local_c8[3] = 0.0;
          local_c8[4] = 0.0;
          local_b0 = 0;
          local_ac = 0;
          local_a8 = 0;
          local_a4 = 0;
          local_9c = 0;
          local_c8[0] = fVar11;
          local_c8[5] = fVar11;
          local_a0 = fVar11;
          fn_001ad06c(local_138,local_138,local_c8);
        }
        fn_001ad06c(local_138,local_138,auStack_98);
        fn_001ad06c(local_138,local_138,param_3 + 0x7c);
        *(undefined1 *)(param_1 + 0x90) = 1;
      }
      uVar3 = *(ushort *)(&DAT_007e43b0 + (uint)*(byte *)((int)param_2 + 3) * 2) >>
              ((uVar10 & 0x3f) << 2);
      if ((uVar3 & 7) != 0) {
        uVar6 = 0;
        do {
          if (((uVar3 & 7 & 1 << (uVar6 & 0xff)) != 0) &&
             (iVar9 = 0, (&DAT_007e43bc)[uVar6] != '\0')) {
            do {
              iVar4 = iVar9 * 4;
              fVar11 = local_138[iVar9 * 4 + 1];
              fVar12 = local_138[iVar9 * 4 + 2];
              fVar13 = local_138[iVar9 * 4 + 3];
              iVar7 = (uint)(byte)(&DAT_007e43bf)[uVar6] + iVar9;
              iVar9 = iVar9 + 1;
              pfVar8 = (float *)(param_1 + iVar7 * 0x10);
              *pfVar8 = local_138[iVar4];
              pfVar8[1] = fVar11;
              pfVar8[2] = fVar12;
              pfVar8[3] = fVar13;
            } while (iVar9 < (int)(uint)(byte)(&DAT_007e43bc)[uVar6]);
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < 3);
        local_60 = 1;
      }
    }
    uVar10 = uVar10 + 1;
    if (2 < (int)uVar10) {
      return local_60;
    }
  } while( true );
}



void fn_00548624(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  puVar7 = *(undefined4 **)(param_2 + 0x5c);
  puVar8 = *(undefined4 **)(param_2 + 0x60);
  iVar1 = param_2 + *(int *)(param_2 + 0x48) * 0x20;
  uVar2 = ((int)puVar7 - *(int *)(param_2 + 0x54) & 0xfffffffcU) + 8;
  if (((uVar2 & 0xf) != 0) && (uVar2 = 4 - ((uVar2 & 0xf) >> 2), 0 < (int)uVar2)) {
    puVar3 = puVar7 + -1;
    if ((uVar2 & 1) != 0) {
      *puVar7 = 0;
      puVar3 = puVar7;
    }
    for (iVar4 = (int)uVar2 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar3[1] = 0;
      puVar3 = puVar3 + 2;
      *puVar3 = 0;
    }
    puVar7 = puVar7 + uVar2;
  }
  iVar4 = fn_00189790(puVar7,1);
  uVar2 = ((int)puVar8 - *(int *)(param_2 + 0x58) & 0xfffffffcU) + 8;
  if (((uVar2 & 0xf) != 0) && (uVar2 = 4 - ((uVar2 & 0xf) >> 2), 0 < (int)uVar2)) {
    puVar7 = puVar8 + -1;
    if ((uVar2 & 1) != 0) {
      *puVar8 = 0;
      puVar7 = puVar8;
    }
    for (iVar5 = (int)uVar2 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar7[1] = 0;
      puVar7 = puVar7 + 2;
      *puVar7 = 0;
    }
    puVar8 = puVar8 + uVar2;
  }
  fn_00189790(puVar8,1);
  uVar2 = iVar4 - *(int *)(param_2 + 0x54) & 0xfffffffc;
  *(uint *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + uVar2;
  if (*(char *)(param_2 + 0x4c) == '\0') {
    uVar6 = *(undefined4 *)(param_2 + 0x54);
  }
  else {
    uVar6 = *(undefined4 *)(param_2 + 0x58);
  }
  *(undefined4 *)(param_2 + 0x54) = 0;
  *(undefined4 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_2 + 0x5c) = 0;
  *(undefined4 *)(param_2 + 0x60) = 0;
  param_1[1] = uVar2;
  *param_1 = uVar6;
  return;
}


