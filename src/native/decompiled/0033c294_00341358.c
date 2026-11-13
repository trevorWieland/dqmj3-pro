#include "0033c294_00341358.h"



void fn_00341358(int param_1)

{
  if (*(int *)(&DAT_008920ac + param_1 * 4) < 1) {
    return;
  }
  fn_00154ac8(*(int *)(&DAT_008920ac + param_1 * 4));
  return;
}



undefined1 * fn_0033fe38(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint *puVar17;
  undefined4 *puVar18;
  int iVar19;
  uint *puVar20;
  float fVar21;
  uint uVar22;
  float fVar23;
  uint uVar24;
  float fVar25;
  uint uVar26;
  float fVar27;
  uint uVar28;
  uint uVar29;
  float fVar30;
  uint uVar31;
  uint uVar32;
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint uStack_f0;
  uint local_ec;
  uint uStack_e8;
  int local_e4;
  uint local_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint local_c4;
  uint local_c0;
  uint uStack_bc;
  undefined1 auStack_b8 [68];
  undefined1 auStack_74 [3];
  undefined1 auStack_71 [3];
  undefined1 auStack_6e [26];
  uint local_54;
  uint uStack_50;
  uint uStack_4c;
  undefined1 auStack_30 [4];
  undefined4 local_2c;
  
  fn_00340d24();
  fn_00692eac(auStack_30);
  local_2c = param_2;
  fn_00183718(&local_108,auStack_30,&DAT_00340134);
  local_c4 = local_f8;
  local_d4 = local_108;
  uStack_d0 = uStack_104;
  uStack_cc = uStack_100;
  uStack_c8 = local_fc;
  uVar15 = 0;
  local_c0 = local_f4;
  uStack_bc = uStack_f0;
  if (local_108 != 0) {
    do {
      fn_00176ec8(auStack_b8,&uStack_d0,uVar15);
      fn_0017821c(auStack_74,auStack_b8,0x44);
      iVar7 = fn_00147e6c(auStack_74,&DAT_0034013c);
      if (iVar7 == 0) {
        uVar8 = fn_00102d78(auStack_71);
        fn_00102d78(auStack_6e);
        local_fc = local_54;
        local_f8 = uStack_50;
        local_f4 = uStack_4c;
        fn_0033f858(param_1,uVar8);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < local_d4);
  }
  puVar16 = *(undefined4 **)(param_1 + 0x10);
  puVar18 = *(undefined4 **)(param_1 + 0x14);
  if (puVar16 != puVar18) {
    fn_007aaaa4(puVar16,puVar18,((int)puVar18 - (int)puVar16) / 0x14,fn_006113f4);
    if ((int)puVar18 - (int)puVar16 < 0x141) {
      fn_007a351c(puVar16,puVar18);
    }
    else {
      fn_007a351c(puVar16,puVar16 + 0x50);
      for (puVar16 = puVar16 + 0x50; puVar16 != puVar18; puVar16 = puVar16 + 5) {
        puVar9 = (undefined4 *)fn_0034194c(&local_f4,puVar16);
        iVar7 = fn_006113f4();
        puVar5 = puVar16 + -5;
        puVar2 = puVar16;
        while (puVar1 = puVar5, iVar7 != 0) {
          *puVar2 = *puVar1;
          puVar2[1] = puVar1[1];
          fn_0078e228(puVar2 + 2,puVar1 + 2);
          iVar7 = fn_006113f4(puVar9,puVar1 + -5);
          puVar5 = puVar1 + -5;
          puVar2 = puVar1;
        }
        *puVar2 = *puVar9;
        puVar2[1] = puVar9[1];
        fn_0078e228(puVar2 + 2,puVar9 + 2);
        for (uVar15 = local_ec; uVar15 != uStack_e8; uVar15 = uVar15 + 0x20) {
        }
        fn_001008c4(local_ec,(int)(local_e4 - local_ec) >> 5);
      }
    }
  }
  uVar15 = 0;
  iVar11 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  iVar7 = iVar11 >> 0x1f;
  if (iVar11 / 0x14 + iVar7 != iVar7) {
    do {
      iVar7 = *(int *)(param_1 + 0x10) + uVar15 * 0x14;
      puVar17 = *(uint **)(iVar7 + 8);
      puVar20 = *(uint **)(iVar7 + 0xc);
      if (puVar17 != puVar20) {
        fn_007aa4d4(puVar17,puVar20,(int)puVar20 - (int)puVar17 >> 5,fn_0061140c);
        if ((int)puVar20 - (int)puVar17 < 0x201) {
          fn_007a325c(puVar17,puVar20,fn_0061140c);
        }
        else {
          fn_007a325c(puVar17,puVar17 + 0x80,fn_0061140c);
          for (puVar17 = puVar17 + 0x80; puVar17 != puVar20; puVar17 = puVar17 + 8) {
            local_108 = *puVar17;
            uStack_104 = puVar17[1];
            uStack_100 = puVar17[2];
            local_fc = puVar17[3];
            local_f8 = puVar17[4];
            local_f4 = puVar17[5];
            uStack_f0 = puVar17[6];
            local_ec = puVar17[7];
            iVar7 = fn_0061140c(&local_108);
            puVar6 = puVar17 + -8;
            puVar4 = puVar17;
            while (puVar3 = puVar6, iVar7 != 0) {
              uVar22 = puVar3[1];
              uVar24 = puVar3[2];
              uVar26 = puVar3[3];
              uVar28 = puVar3[4];
              uVar29 = puVar3[5];
              uVar31 = puVar3[6];
              uVar32 = puVar3[7];
              *puVar4 = *puVar3;
              puVar4[1] = uVar22;
              puVar4[2] = uVar24;
              puVar4[3] = uVar26;
              puVar4[4] = uVar28;
              puVar4[5] = uVar29;
              puVar4[6] = uVar31;
              puVar4[7] = uVar32;
              iVar7 = fn_0061140c(&local_108,puVar3 + -8);
              puVar6 = puVar3 + -8;
              puVar4 = puVar3;
            }
            *puVar4 = local_108;
            puVar4[1] = uStack_104;
            puVar4[2] = uStack_100;
            puVar4[3] = local_fc;
            puVar4[4] = local_f8;
            puVar4[5] = local_f4;
            puVar4[6] = uStack_f0;
            puVar4[7] = local_ec;
          }
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < (uint)((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0x14));
  }
  iVar11 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  iVar7 = iVar11 >> 0x1f;
  if (iVar11 / 0x14 + iVar7 != iVar7) {
    uVar15 = 0;
    do {
      iVar7 = *(int *)(param_1 + 0x10) + uVar15 * 0x14;
      iVar7 = *(int *)(iVar7 + 0xc) - *(int *)(iVar7 + 8) >> 5;
      iVar19 = iVar7 + -1;
      iVar11 = 0;
      fVar30 = 0.0;
      if (0 < iVar19) {
        do {
          iVar14 = *(int *)(*(int *)(param_1 + 0x10) + uVar15 * 0x14 + 8);
          iVar12 = iVar14 + (iVar11 + 1) * 0x20;
          iVar14 = iVar14 + iVar11 * 0x20;
          fVar23 = *(float *)(iVar12 + 4) - *(float *)(iVar14 + 4);
          fVar25 = *(float *)(iVar12 + 0xc) - *(float *)(iVar14 + 0xc);
          fVar21 = *(float *)(iVar12 + 8) - *(float *)(iVar14 + 8);
          fVar27 = SQRT(fVar23 * fVar23 + fVar21 * fVar21 + fVar25 * fVar25);
          *(float *)(*(int *)(*(int *)(param_1 + 0x10) + uVar15 * 0x14 + 8) + iVar11 * 0x20 + 0x1c)
               = fVar27;
          fVar30 = fVar27 + fVar30;
          iVar12 = *(int *)(*(int *)(param_1 + 0x10) + uVar15 * 0x14 + 8) + iVar11 * 0x20;
          if (fVar27 != 0.0) {
            fVar27 = 1.0 / fVar27;
            *(float *)(iVar12 + 0x10) = fVar23 * fVar27;
            *(float *)(iVar12 + 0x14) = fVar21 * fVar27;
            *(float *)(iVar12 + 0x18) = fVar25 * fVar27;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar19);
      }
      if (1 < iVar7) {
        iVar11 = *(int *)(*(int *)(param_1 + 0x10) + uVar15 * 0x14 + 8);
        iVar7 = iVar11 + (iVar7 + -2) * 0x20;
        iVar11 = iVar11 + iVar19 * 0x20;
        fVar21 = *(float *)(iVar7 + 0x10);
        uVar8 = *(undefined4 *)(iVar7 + 0x14);
        fVar23 = *(float *)(iVar7 + 0x18);
        *(float *)(iVar11 + 0x10) = fVar21;
        *(undefined4 *)(iVar11 + 0x14) = uVar8;
        *(float *)(iVar11 + 0x18) = fVar23;
        *(undefined4 *)(iVar11 + 0x14) = 0;
        fVar25 = 1.0 / SQRT(fVar21 * fVar21 + 0.0 + fVar23 * fVar23);
        *(float *)(iVar11 + 0x10) = fVar21 * fVar25;
        *(float *)(iVar11 + 0x14) = fVar25 * 0.0;
        *(float *)(iVar11 + 0x18) = fVar23 * fVar25;
      }
      uVar22 = uVar15 + 1;
      *(float *)(*(int *)(param_1 + 0x10) + uVar15 * 0x14 + 4) = fVar30;
      uVar15 = uVar22;
    } while (uVar22 < (uint)((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0x14));
  }
  iVar7 = fn_006c17a4(param_1,**(undefined4 **)(param_1 + 0x10));
  if ((iVar7 == 0) || (*(int *)(iVar7 + 0xc) - *(int *)(iVar7 + 8) >> 5 == 0)) {
    puVar16 = &DAT_008c9358;
  }
  else {
    puVar16 = (undefined4 *)(*(int *)(iVar7 + 8) + 4);
  }
  uVar8 = puVar16[1];
  uVar13 = puVar16[2];
  *(undefined4 *)(param_1 + 0x44) = *puVar16;
  *(undefined4 *)(param_1 + 0x48) = uVar8;
  *(undefined4 *)(param_1 + 0x4c) = uVar13;
  iVar7 = fn_006c17a4(param_1,**(undefined4 **)(param_1 + 0x10));
  if ((iVar7 == 0) || (*(int *)(iVar7 + 0xc) - *(int *)(iVar7 + 8) >> 5 == 0)) {
    pfVar10 = (float *)&DAT_008c9364;
  }
  else {
    pfVar10 = (float *)(*(int *)(iVar7 + 8) + 0x10);
  }
  fVar30 = *pfVar10;
  fn_00525bd0();
  *(float *)(param_1 + 0x50) = fVar30 * 0.024543693;
  return auStack_30;
}



void fn_0033e798(undefined1 *param_1)

{
  undefined1 uVar1;
  
  switch(*param_1) {
  case 0:
    fn_0033d924(param_1);
    return;
  case 1:
    fn_0033e4e8(param_1);
    return;
  case 2:
    fn_00337790(*(undefined4 *)(param_1 + 0x10));
    return;
  case 3:
    fn_00337d5c(*(undefined4 *)(param_1 + 0x10));
    if (*(int *)(param_1 + 0x14) != -1) {
      uVar1 = 0;
      goto LAB_0033e810;
    }
    *param_1 = 4;
    break;
  case 4:
    fn_0033e6c8(param_1);
    uVar1 = 0xff;
LAB_0033e810:
    *param_1 = uVar1;
    return;
  }
  return;
}



void fn_0033ce74(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = &DAT_00824e38;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  param_1[7] = 0;
  return;
}



void fn_0033c294(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint local_44;
  undefined4 local_40;
  uint local_3c [2];
  int iStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  iStack_28 = param_4;
  local_40 = fn_00231d50((int)*(short *)(*(int *)(param_1 + 8) + param_4 * 4));
  uVar1 = fn_00100b58();
  puVar7 = &DAT_008f9ce8;
  puVar6 = &DAT_008f9cf4;
  if (uVar1 != 0) {
    puVar2 = local_3c;
    if (0x20 < uVar1) {
      puVar2 = &local_44;
    }
    local_44 = uVar1;
    local_3c[0] = 0x20;
    uVar5 = *puVar2;
    if (0xfffffff1 < uVar5) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar5,0xfffffff1);
    }
    if (uVar5 < uVar1) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar1,uVar5);
    }
    if (uVar5 != 0) {
      puVar7 = (undefined4 *)fn_00100fc6((uVar5 + 8) * 2,0);
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
      }
      *puVar7 = 0;
      puVar7[1] = uVar5;
      puVar7[2] = uVar1;
      puVar3 = (undefined2 *)((int)puVar7 + uVar1 * 2 + 0xc);
      if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
      }
    }
    puVar6 = puVar7 + 3;
  }
  fn_00301a9c(puVar6,local_40,uVar1 << 1);
  fn_0037cee4(local_30,uStack_2c,puVar6);
  fn_0037ce88(local_30,uStack_2c,1);
  fn_00305a6c(local_30,uStack_2c);
  fn_0037ce70(local_30,uStack_2c,&LAB_0033c438);
  if (puVar6 != &DAT_008f9cf4) {
    iVar4 = puVar6[-3];
    if ((iVar4 == -1) || ((puVar6 + -3 != &DAT_008f9ce8 && (puVar6[-3] = iVar4 + -1, iVar4 == 0))))
    {
      fn_002feef8(puVar6 + -3,puVar6[-2] + 8,0);
      return;
    }
  }
  return;
}


