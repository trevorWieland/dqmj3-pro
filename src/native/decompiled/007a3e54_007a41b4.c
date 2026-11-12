#include "007a3e54_007a41b4.h"



void fn_007a41b4(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint unaff_r6;
  int iVar6;
  uint *in_r12;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  uint local_48;
  byte bStack_43;
  
  if (param_1 != param_2) {
    in_r12 = param_1 + 7;
  }
  if (param_1 == param_2 || in_r12 == param_2) {
    return;
  }
  do {
    uVar5 = in_r12[1];
    fVar17 = (float)in_r12[2];
    uVar9 = (uVar5 & 0xffff) >> 8;
    uVar7 = in_r12[3];
    uVar8 = in_r12[4];
    uVar10 = in_r12[5];
    uVar12 = in_r12[6];
    unaff_r6 = unaff_r6 & 0xffffff00 | (uint)(byte)*in_r12;
    if (uVar9 == *(byte *)((int)param_1 + 5)) {
      if (fVar17 < (float)param_1[2]) goto LAB_007a4230;
LAB_007a42f4:
      local_48 = CONCAT31(((unsigned int)(local_48) >> 8) & 0xffffff,(byte)*in_r12);
      puVar4 = in_r12 + -7;
      bStack_43 = (byte)(uVar5 >> 8);
      bVar1 = *(byte *)((int)in_r12 + -0x17);
      puVar2 = in_r12;
      if (bStack_43 != bVar1) goto joined_r0x007a433c;
      if (fVar17 < (float)in_r12[-5]) {
        do {
          while( true ) {
            puVar3 = puVar4;
            uVar9 = puVar3[1];
            uVar11 = puVar3[2];
            uVar13 = puVar3[3];
            uVar14 = puVar3[4];
            uVar15 = puVar3[5];
            uVar16 = puVar3[6];
            *puVar2 = *puVar3;
            puVar2[1] = uVar9;
            puVar2[2] = uVar11;
            puVar2[3] = uVar13;
            puVar2[4] = uVar14;
            puVar2[5] = uVar15;
            puVar2[6] = uVar16;
            puVar4 = puVar3 + -7;
            bVar1 = *(byte *)((int)puVar3 + -0x17);
            puVar2 = puVar3;
            if (bStack_43 != bVar1) break;
            if ((float)puVar3[-5] <= fVar17) goto LAB_007a4384;
          }
joined_r0x007a433c:
        } while (bStack_43 < bVar1);
      }
LAB_007a4384:
      *puVar2 = local_48;
      puVar2[1] = uVar5;
      puVar2[2] = (uint)fVar17;
      puVar2[3] = uVar7;
      puVar2[4] = uVar8;
      puVar2[5] = uVar10;
      puVar2[6] = uVar12;
    }
    else {
      if (*(byte *)((int)param_1 + 5) <= uVar9) goto LAB_007a42f4;
LAB_007a4230:
      puVar4 = in_r12 + 7;
      puVar2 = in_r12;
      if (param_1 < in_r12) {
        uVar9 = (int)in_r12 - (int)param_1;
        if (0 < (int)uVar9) {
          iVar6 = (int)((longlong)(int)uVar9 * -0x6db6db6d + ((ulonglong)uVar9 << 0x20) >> 0x20);
          if (((iVar6 >> 4) - (iVar6 >> 0x1f) & 1U) != 0) {
            puVar2 = in_r12 + -7;
            *in_r12 = *puVar2;
            in_r12[1] = in_r12[-6];
            in_r12[2] = in_r12[-5];
            in_r12[3] = in_r12[-4];
            in_r12[4] = in_r12[-3];
            in_r12[5] = in_r12[-2];
            in_r12[6] = in_r12[-1];
            puVar4 = in_r12;
          }
          iVar6 = (int)((longlong)(int)uVar9 * -0x6db6db6d + ((ulonglong)uVar9 << 0x20) >> 0x20);
          for (iVar6 = (iVar6 >> 4) - (iVar6 >> 0x1f) >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
            uVar9 = puVar2[-6];
            uVar11 = puVar2[-5];
            uVar13 = puVar2[-4];
            uVar14 = puVar2[-3];
            uVar15 = puVar2[-2];
            uVar16 = puVar2[-1];
            puVar4[-7] = puVar2[-7];
            puVar4[-6] = uVar9;
            puVar4[-5] = uVar11;
            puVar4[-4] = uVar13;
            puVar4[-3] = uVar14;
            puVar4[-2] = uVar15;
            puVar4[-1] = uVar16;
            uVar9 = puVar2[-0xd];
            uVar11 = puVar2[-0xc];
            uVar13 = puVar2[-0xb];
            uVar14 = puVar2[-10];
            uVar15 = puVar2[-9];
            uVar16 = puVar2[-8];
            puVar4[-0xe] = puVar2[-0xe];
            puVar4[-0xd] = uVar9;
            puVar4[-0xc] = uVar11;
            puVar4[-0xb] = uVar13;
            puVar4[-10] = uVar14;
            puVar4[-9] = uVar15;
            puVar4[-8] = uVar16;
            puVar2 = puVar2 + -0xe;
            puVar4 = puVar4 + -0xe;
          }
        }
      }
      else {
        while (param_1 != puVar2) {
          uVar9 = puVar2[-6];
          uVar11 = puVar2[-5];
          uVar13 = puVar2[-4];
          uVar14 = puVar2[-3];
          uVar15 = puVar2[-2];
          uVar16 = puVar2[-1];
          puVar4[-7] = puVar2[-7];
          puVar4[-6] = uVar9;
          puVar4[-5] = uVar11;
          puVar4[-4] = uVar13;
          puVar4[-3] = uVar14;
          puVar4[-2] = uVar15;
          puVar4[-1] = uVar16;
          puVar4 = puVar4 + -7;
          puVar2 = puVar2 + -7;
        }
      }
      param_1[1] = uVar5;
      *param_1 = unaff_r6;
      param_1[2] = (uint)fVar17;
      param_1[3] = uVar7;
      param_1[4] = uVar8;
      param_1[5] = uVar10;
      param_1[6] = uVar12;
    }
    in_r12 = in_r12 + 7;
    if (in_r12 == param_2) {
      return;
    }
  } while( true );
}



void fn_007a3fc0(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  
  if (param_1 == param_2) {
    return;
  }
  puVar1 = param_1;
  while (puVar1 = puVar1 + 7, puVar1 != param_2) {
    uVar3 = (uint)local_68 >> 8;
    local_68 = CONCAT31((int3)uVar3,*(undefined1 *)puVar1);
    local_64 = puVar1[1];
    uStack_60 = puVar1[2];
    local_5c = puVar1[3];
    local_58 = puVar1[4];
    local_54 = puVar1[5];
    local_50 = puVar1[6];
    iVar2 = (**(code **)(**(int **)(param_3 + 8) + 8))(*(int **)(param_3 + 8),&local_68,param_1);
    if (iVar2 == 0) {
      local_88 = CONCAT31(((unsigned int)(local_88) >> 8) & 0xffffff,(undefined1)local_68);
      local_84 = local_64;
      uStack_80 = uStack_60;
      local_7c = local_5c;
      local_78 = local_58;
      local_74 = local_54;
      local_70 = local_50;
      iVar2 = (**(code **)(**(int **)(param_3 + 8) + 8))(*(int **)(param_3 + 8),&local_88);
      puVar4 = puVar1;
      while (iVar2 != 0) {
        *puVar4 = puVar4[-7];
        puVar4[1] = puVar4[-6];
        puVar4[2] = puVar4[-5];
        puVar4[3] = puVar4[-4];
        puVar4[4] = puVar4[-3];
        puVar4[5] = puVar4[-2];
        puVar4[6] = puVar4[-1];
        iVar2 = (**(code **)(**(int **)(param_3 + 8) + 8))(*(int **)(param_3 + 8),&local_88);
        puVar4 = puVar4 + -7;
      }
      *puVar4 = local_88;
      puVar4[1] = local_84;
      puVar4[2] = uStack_80;
      puVar4[3] = local_7c;
      puVar4[4] = local_78;
      puVar4[5] = local_74;
      puVar4[6] = local_70;
    }
    else {
      puVar4 = puVar1 + 7;
      puVar5 = puVar1;
      if (param_1 < puVar1) {
        uVar3 = (int)puVar1 - (int)param_1;
        if (0 < (int)uVar3) {
          iVar2 = (int)((longlong)(int)uVar3 * -0x6db6db6d + ((ulonglong)uVar3 << 0x20) >> 0x20);
          if (((iVar2 >> 4) - (iVar2 >> 0x1f) & 1U) != 0) {
            puVar5 = puVar1 + -7;
            *puVar1 = *puVar5;
            puVar1[1] = puVar1[-6];
            puVar1[2] = puVar1[-5];
            puVar1[3] = puVar1[-4];
            puVar1[4] = puVar1[-3];
            puVar1[5] = puVar1[-2];
            puVar1[6] = puVar1[-1];
            puVar4 = puVar1;
          }
          iVar2 = (int)((longlong)(int)uVar3 * -0x6db6db6d + ((ulonglong)uVar3 << 0x20) >> 0x20);
          for (iVar2 = (iVar2 >> 4) - (iVar2 >> 0x1f) >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
            uVar6 = puVar5[-6];
            uVar7 = puVar5[-5];
            uVar8 = puVar5[-4];
            uVar9 = puVar5[-3];
            uVar10 = puVar5[-2];
            uVar11 = puVar5[-1];
            puVar4[-7] = puVar5[-7];
            puVar4[-6] = uVar6;
            puVar4[-5] = uVar7;
            puVar4[-4] = uVar8;
            puVar4[-3] = uVar9;
            puVar4[-2] = uVar10;
            puVar4[-1] = uVar11;
            uVar6 = puVar5[-0xd];
            uVar7 = puVar5[-0xc];
            uVar8 = puVar5[-0xb];
            uVar9 = puVar5[-10];
            uVar10 = puVar5[-9];
            uVar11 = puVar5[-8];
            puVar4[-0xe] = puVar5[-0xe];
            puVar4[-0xd] = uVar6;
            puVar4[-0xc] = uVar7;
            puVar4[-0xb] = uVar8;
            puVar4[-10] = uVar9;
            puVar4[-9] = uVar10;
            puVar4[-8] = uVar11;
            puVar4 = puVar4 + -0xe;
            puVar5 = puVar5 + -0xe;
          }
        }
      }
      else {
        while (param_1 != puVar5) {
          uVar6 = puVar5[-6];
          uVar7 = puVar5[-5];
          uVar8 = puVar5[-4];
          uVar9 = puVar5[-3];
          uVar10 = puVar5[-2];
          uVar11 = puVar5[-1];
          puVar4[-7] = puVar5[-7];
          puVar4[-6] = uVar6;
          puVar4[-5] = uVar7;
          puVar4[-4] = uVar8;
          puVar4[-3] = uVar9;
          puVar4[-2] = uVar10;
          puVar4[-1] = uVar11;
          puVar4 = puVar4 + -7;
          puVar5 = puVar5 + -7;
        }
      }
      *param_1 = local_68;
      param_1[1] = local_64;
      param_1[2] = uStack_60;
      param_1[3] = local_5c;
      param_1[4] = local_58;
      param_1[5] = local_54;
      param_1[6] = local_50;
    }
  }
  return;
}



void fn_007a3e54(float *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *local_30;
  float local_2c;
  float fStack_28;
  
  if (param_1 == param_2) {
    return;
  }
  pfVar1 = param_1;
  while (pfVar1 = pfVar1 + 2, pfVar1 != param_2) {
    local_2c = *pfVar1;
    fVar5 = *param_1 - *param_3;
    fVar7 = local_2c - *param_3;
    fStack_28 = pfVar1[1];
    fVar6 = param_1[1] - param_3[1];
    fVar8 = fStack_28 - param_3[1];
    if (SQRT(fVar5 * fVar5 + fVar6 * fVar6) <= SQRT(fVar7 * fVar7 + fVar8 * fVar8)) {
      local_30 = param_3;
      iVar3 = fn_006ee030(&local_30,&local_2c);
      pfVar2 = pfVar1;
      while (iVar3 != 0) {
        *pfVar2 = pfVar2[-2];
        pfVar2[1] = pfVar2[-1];
        iVar3 = fn_006ee030(&local_30,&local_2c);
        pfVar2 = pfVar2 + -2;
      }
      *pfVar2 = local_2c;
      pfVar2[1] = fStack_28;
    }
    else {
      pfVar2 = pfVar1 + 2;
      pfVar4 = pfVar1;
      if (param_1 < pfVar1) {
        iVar3 = (int)pfVar1 - (int)param_1;
        if (0 < iVar3) {
          if (iVar3 * 0x10000000 < 0) {
            pfVar4 = pfVar1 + -2;
            *pfVar1 = *pfVar4;
            pfVar1[1] = pfVar1[-1];
            pfVar2 = pfVar1;
          }
          for (iVar3 = iVar3 >> 4; iVar3 != 0; iVar3 = iVar3 + -1) {
            fVar5 = pfVar4[-1];
            pfVar2[-2] = pfVar4[-2];
            pfVar2[-1] = fVar5;
            fVar5 = pfVar4[-3];
            pfVar2[-4] = pfVar4[-4];
            pfVar2[-3] = fVar5;
            pfVar2 = pfVar2 + -4;
            pfVar4 = pfVar4 + -4;
          }
        }
      }
      else {
        while (param_1 != pfVar4) {
          fVar5 = pfVar4[-1];
          pfVar2[-2] = pfVar4[-2];
          pfVar2[-1] = fVar5;
          pfVar2 = pfVar2 + -2;
          pfVar4 = pfVar4 + -2;
        }
      }
      *param_1 = local_2c;
      param_1[1] = fStack_28;
    }
  }
  return;
}


