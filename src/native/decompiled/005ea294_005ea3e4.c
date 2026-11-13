#include "005ea294_005ea3e4.h"



void fn_005ea3e4(int param_1,int param_2,undefined4 *param_3)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)(*(int *)(*(int *)(**(int **)(param_1 + 4) + 0x148) + 4) + param_2 * 0x158);
  *(undefined4 *)(puVar1 + 0x18) = *param_3;
  *puVar1 = *puVar1 | 0x400;
  return;
}



void fn_005ea3b8(int param_1,int param_2,undefined4 *param_3)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)(*(int *)(*(int *)(param_1 + 0x148) + 4) + param_2 * 0x158);
  *(undefined4 *)(puVar1 + 0x16) = *param_3;
  *puVar1 = *puVar1 | 0x400;
  return;
}



void fn_005ea38c(int param_1,int param_2,undefined4 *param_3)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)(*(int *)(*(int *)(param_1 + 0x148) + 4) + param_2 * 0x158);
  *(undefined4 *)(puVar1 + 0x14) = *param_3;
  *puVar1 = *puVar1 | 0x400;
  return;
}



void fn_005ea380(int param_1,int param_2,undefined4 *param_3)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)(*(int *)(*(int *)(**(int **)(param_1 + 4) + 0x148) + 4) + param_2 * 0x158);
  *(undefined4 *)(puVar1 + 0x14) = *param_3;
  *puVar1 = *puVar1 | 0x400;
  return;
}



void fn_005ea354(int param_1,int param_2,undefined4 *param_3)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)(*(int *)(*(int *)(param_1 + 0x148) + 4) + param_2 * 0x158);
  *(undefined4 *)(puVar1 + 0x12) = *param_3;
  *puVar1 = *puVar1 | 0x400;
  return;
}



void fn_005ea348(int param_1,int param_2,undefined4 *param_3)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)(*(int *)(*(int *)(**(int **)(param_1 + 4) + 0x148) + 4) + param_2 * 0x158);
  *(undefined4 *)(puVar1 + 0x12) = *param_3;
  *puVar1 = *puVar1 | 0x400;
  return;
}



int fn_005ea33c(int param_1)

{
  return *(int *)(param_1 + 0x148) + 0xc;
}



void fn_005ea2ac(int param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int unaff_r5;
  
  piVar6 = *(int **)(param_1 + 4);
  iVar2 = fn_006eb61c(param_3);
  iVar5 = *piVar6;
  iVar3 = fn_006ec02c(iVar2);
  if (iVar3 == 0xc) {
    unaff_r5 = 1;
  }
  if (iVar3 != 0xc) {
    unaff_r5 = 0;
  }
  iVar3 = *(int *)(*(int *)(iVar5 + 0x148) + 4) + param_2 * 0x158;
  uVar4 = (*(undefined4 **)(iVar2 + 4))[1];
  *(undefined4 *)(iVar3 + 0x140) = **(undefined4 **)(iVar2 + 4);
  *(undefined4 *)(iVar3 + 0x144) = uVar4;
  if (unaff_r5 == 0) {
    bVar1 = *(byte *)(iVar3 + 2) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(iVar3 + 2) | 1;
  }
  *(byte *)(iVar3 + 2) = bVar1;
  return;
}



void fn_005ea294(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  uint *puVar3;
  byte *pbVar4;
  ushort *puVar5;
  uint uVar6;
  float *pfVar7;
  ushort *puVar8;
  uint uVar9;
  float *pfVar10;
  float *pfVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  float *pfVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  undefined1 auStack_b0 [16];
  int *local_a0;
  undefined1 auStack_80 [76];
  int *piStack_34;
  int local_30;
  int iStack_2c;
  float *pfStack_28;
  
  local_30 = param_2 + 0x148;
  iStack_2c = param_2 + 0x178;
  pfVar11 = (float *)(param_1 + 0x8c);
  piVar2 = *(int **)(param_1 + 0x148);
  piStack_34 = piVar2;
  pfStack_28 = pfVar11;
  if ((*(byte *)*piVar2 & 2) == 0) {
    if ((*(byte *)(piVar2 + 0x26) & 8) != 0) {
      uVar17 = 0;
      if (*(int *)(*piVar2 + 0x6c) != 0) {
        do {
          piVar12 = (int *)(*(int *)(*piVar2 + 0x68) + uVar17 * 0x1c);
          uVar9 = piVar12[1];
          piVar16 = (int *)(piVar2[0xf] + uVar17 * 8);
          while (uVar9 = uVar9 - 1, -1 < (int)uVar9) {
            pbVar4 = (byte *)(*piVar12 + uVar9 * 8);
            uVar6 = (uint)*pbVar4;
            if (uVar6 == uVar9) {
              pfVar15 = (float *)(*piVar16 + uVar9 * 0x18);
              iVar13 = piVar12[2] + uVar9 * 0x18;
              fn_0016947c(&local_dc,pfVar11,iVar13);
              fVar20 = *(float *)(iVar13 + 0xc);
              fVar21 = *(float *)(iVar13 + 0x10);
              fVar22 = *(float *)(iVar13 + 0x14);
              fVar19 = ABS(*(float *)(param_1 + 0x94)) * fVar22 +
                       ABS(*(float *)(param_1 + 0x90)) * fVar21 + ABS(*pfVar11) * fVar20;
              fVar23 = ABS(*(float *)(param_1 + 0xa4)) * fVar22 +
                       ABS(*(float *)(param_1 + 0xa0)) * fVar21 +
                       ABS(*(float *)(param_1 + 0x9c)) * fVar20;
              fVar20 = ABS(*(float *)(param_1 + 0xb4)) * fVar22 +
                       ABS(*(float *)(param_1 + 0xb0)) * fVar21 +
                       ABS(*(float *)(param_1 + 0xac)) * fVar20;
              *pfVar15 = local_dc - fVar19;
              pfVar15[1] = local_d8 - fVar23;
              pfVar15[2] = local_d4 - fVar20;
              pfVar15[3] = local_dc + fVar19;
              pfVar15[4] = local_d8 + fVar23;
              pfVar15[5] = local_d4 + fVar20;
            }
            else {
              iVar13 = *piVar16;
              pfVar10 = (float *)(iVar13 + uVar6 * 0x18);
              pfVar7 = (float *)(iVar13 + (uint)pbVar4[1] * 0x18);
              pfVar15 = (float *)(iVar13 + uVar9 * 0x18);
              fVar20 = *pfVar10;
              if (*pfVar7 < *pfVar10) {
                fVar20 = *pfVar7;
              }
              *pfVar15 = fVar20;
              fVar20 = pfVar7[3];
              if (pfVar7[3] <= pfVar10[3]) {
                fVar20 = pfVar10[3];
              }
              pfVar15[3] = fVar20;
              fVar20 = pfVar10[1];
              if (pfVar7[1] < pfVar10[1]) {
                fVar20 = pfVar7[1];
              }
              pfVar15[1] = fVar20;
              fVar20 = pfVar7[4];
              if (pfVar7[4] <= pfVar10[4]) {
                fVar20 = pfVar10[4];
              }
              pfVar15[4] = fVar20;
              fVar20 = pfVar10[2];
              if (pfVar7[2] < pfVar10[2]) {
                fVar20 = pfVar7[2];
              }
              pfVar15[2] = fVar20;
              fVar20 = pfVar10[5];
              if (pfVar10[5] < pfVar7[5]) {
                fVar20 = pfVar7[5];
              }
              pfVar15[5] = fVar20;
            }
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < *(uint *)(*piVar2 + 0x6c));
      }
      *(byte *)(piVar2 + 0x26) = *(byte *)(piVar2 + 0x26) & 0xf7;
    }
    fn_001ad2a0(auStack_80,pfVar11);
    fn_001ad184(auStack_b0,pfVar11);
    fn_001ad06c(piVar2 + 0x28,auStack_80,auStack_b0);
  }
  else {
    bVar1 = false;
    iVar13 = 0;
    do {
      if (piVar2[iVar13 + 0x1e] != 0) {
        iVar14 = *(int *)(piVar2[iVar13 + 0x1e] + 4);
        puVar3 = (uint *)(piVar2[6] + iVar14 * 0x40);
        *puVar3 = *puVar3 | 0x10;
        fn_007571cc(piVar2 + 3,pfVar11,piVar2[iVar13 + 0x1e]);
        bVar1 = true;
        puVar3 = (uint *)(piVar2[6] + iVar14 * 0x40);
        *puVar3 = *puVar3 & 0xffffffef;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < 5);
    if (!bVar1) {
      fn_007568f4(piVar2 + 3,pfVar11,0);
    }
    local_a0 = piVar2 + 3;
    if ((*(byte *)(piVar2 + 0x26) & 8) != 0) {
      uVar17 = 0;
      if (*(int *)(*piVar2 + 0x6c) != 0) {
        do {
          piVar16 = (int *)(piVar2[0xf] + uVar17 * 8);
          piVar12 = (int *)(*(int *)(*piVar2 + 0x68) + uVar17 * 0x1c);
          uVar9 = piVar12[1];
          pfVar11 = (float *)(local_a0[5] + (uint)*(ushort *)((int)piVar12 + 0x1a) * 0x30);
          while (uVar9 = uVar9 - 1, -1 < (int)uVar9) {
            pbVar4 = (byte *)(*piVar12 + uVar9 * 8);
            uVar6 = (uint)*pbVar4;
            if (uVar6 == uVar9) {
              pfVar15 = (float *)(*piVar16 + uVar9 * 0x18);
              iVar13 = piVar12[2] + uVar9 * 0x18;
              fn_0016947c(&local_e8,pfVar11,iVar13);
              fVar22 = *(float *)(iVar13 + 0xc);
              fVar20 = *(float *)(iVar13 + 0x10);
              fVar23 = *(float *)(iVar13 + 0x14);
              fVar19 = ABS(pfVar11[2]) * fVar23 + ABS(pfVar11[1]) * fVar20 + ABS(*pfVar11) * fVar22;
              fVar21 = ABS(pfVar11[6]) * fVar23 +
                       ABS(pfVar11[5]) * fVar20 + ABS(pfVar11[4]) * fVar22;
              fVar20 = ABS(pfVar11[10]) * fVar23 +
                       ABS(pfVar11[9]) * fVar20 + ABS(pfVar11[8]) * fVar22;
              *pfVar15 = local_e8 - fVar19;
              pfVar15[1] = local_e4 - fVar21;
              pfVar15[2] = local_e0 - fVar20;
              pfVar15[3] = local_e8 + fVar19;
              pfVar15[4] = local_e4 + fVar21;
              pfVar15[5] = local_e0 + fVar20;
            }
            else {
              iVar13 = *piVar16;
              pfVar15 = (float *)(iVar13 + uVar6 * 0x18);
              pfVar10 = (float *)(iVar13 + (uint)pbVar4[1] * 0x18);
              pfVar7 = (float *)(iVar13 + uVar9 * 0x18);
              fVar20 = *pfVar15;
              if (*pfVar10 < *pfVar15) {
                fVar20 = *pfVar10;
              }
              *pfVar7 = fVar20;
              fVar20 = pfVar15[3];
              if (pfVar15[3] < pfVar10[3]) {
                fVar20 = pfVar10[3];
              }
              pfVar7[3] = fVar20;
              fVar20 = pfVar10[1];
              if (pfVar15[1] <= pfVar10[1]) {
                fVar20 = pfVar15[1];
              }
              pfVar7[1] = fVar20;
              fVar20 = pfVar15[4];
              if (pfVar15[4] < pfVar10[4]) {
                fVar20 = pfVar10[4];
              }
              pfVar7[4] = fVar20;
              fVar20 = pfVar15[2];
              if (pfVar10[2] < pfVar15[2]) {
                fVar20 = pfVar10[2];
              }
              pfVar7[2] = fVar20;
              fVar20 = pfVar10[5];
              if (pfVar10[5] <= pfVar15[5]) {
                fVar20 = pfVar15[5];
              }
              pfVar7[5] = fVar20;
            }
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < *(uint *)(*piVar2 + 0x6c));
      }
      *(byte *)(piVar2 + 0x26) = *(byte *)(piVar2 + 0x26) & 0xf7;
    }
    if ((*(byte *)(piVar2 + 3) & 1) != 0) {
      fn_00548320(piVar2 + 3,local_30,iStack_2c);
    }
  }
  puVar5 = (ushort *)piVar2[1];
  puVar8 = puVar5 + piVar2[2] * 0xac;
  if (puVar5 < puVar8) {
    iVar14 = (int)puVar8 - (int)puVar5;
    iVar13 = 1;
    if (1 < iVar14 / 0x158 + 1) {
      do {
        if ((*puVar5 & 0x80) != 0) {
          iVar18 = *(int *)(puVar5 + 0xe);
          *(uint *)(puVar5 + 0xe) = iVar18 + 1U;
          if (1 < iVar18 + 1U) {
            puVar5[0xe] = 0;
            puVar5[0xf] = 0;
          }
          *puVar5 = *puVar5 & 0xff7f;
        }
        iVar13 = iVar13 + 1;
        puVar5 = puVar5 + 0xac;
      } while (iVar13 < iVar14 / 0x158 + 1);
      return;
    }
  }
  else {
    for (; puVar5 != puVar8; puVar5 = puVar5 + 0xac) {
      if ((*puVar5 & 0x80) != 0) {
        iVar13 = *(int *)(puVar5 + 0xe);
        *(uint *)(puVar5 + 0xe) = iVar13 + 1U;
        if (1 < iVar13 + 1U) {
          puVar5[0xe] = 0;
          puVar5[0xf] = 0;
        }
        *puVar5 = *puVar5 & 0xff7f;
      }
    }
  }
  return;
}


