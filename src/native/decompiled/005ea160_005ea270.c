#include "005ea160_005ea270.h"



void fn_005ea270(int param_1,undefined4 param_2)

{
  bool bVar1;
  uint *puVar2;
  byte *pbVar3;
  ushort *puVar4;
  uint uVar5;
  float *pfVar6;
  ushort *puVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  float *pfVar11;
  int *piVar12;
  int *piVar13;
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
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined1 auStack_b0 [16];
  int *piStack_a0;
  undefined1 auStack_80 [76];
  int *piStack_34;
  int iStack_30;
  int iStack_2c;
  float *pfStack_28;
  
  piVar12 = *(int **)(param_1 + 4);
  iStack_2c = fn_006eb610(param_2);
  iVar8 = *piVar12;
  iStack_30 = iStack_2c + 0x148;
  iStack_2c = iStack_2c + 0x178;
  pfVar11 = (float *)(iVar8 + 0x8c);
  piVar12 = *(int **)(iVar8 + 0x148);
  piStack_34 = piVar12;
  pfStack_28 = pfVar11;
  if ((*(byte *)*piVar12 & 2) == 0) {
    if ((*(byte *)(piVar12 + 0x26) & 8) != 0) {
      uVar17 = 0;
      if (*(int *)(*piVar12 + 0x6c) != 0) {
        do {
          piVar13 = (int *)(*(int *)(*piVar12 + 0x68) + uVar17 * 0x1c);
          uVar9 = piVar13[1];
          piVar16 = (int *)(piVar12[0xf] + uVar17 * 8);
          while (uVar9 = uVar9 - 1, -1 < (int)uVar9) {
            pbVar3 = (byte *)(*piVar13 + uVar9 * 8);
            uVar5 = (uint)*pbVar3;
            if (uVar5 == uVar9) {
              pfVar15 = (float *)(*piVar16 + uVar9 * 0x18);
              iVar14 = piVar13[2] + uVar9 * 0x18;
              fn_0016947c(&fStack_dc,pfVar11,iVar14);
              fVar20 = *(float *)(iVar14 + 0xc);
              fVar21 = *(float *)(iVar14 + 0x10);
              fVar22 = *(float *)(iVar14 + 0x14);
              fVar19 = ABS(*(float *)(iVar8 + 0x94)) * fVar22 +
                       ABS(*(float *)(iVar8 + 0x90)) * fVar21 + ABS(*pfVar11) * fVar20;
              fVar23 = ABS(*(float *)(iVar8 + 0xa4)) * fVar22 +
                       ABS(*(float *)(iVar8 + 0xa0)) * fVar21 +
                       ABS(*(float *)(iVar8 + 0x9c)) * fVar20;
              fVar20 = ABS(*(float *)(iVar8 + 0xb4)) * fVar22 +
                       ABS(*(float *)(iVar8 + 0xb0)) * fVar21 +
                       ABS(*(float *)(iVar8 + 0xac)) * fVar20;
              *pfVar15 = fStack_dc - fVar19;
              pfVar15[1] = fStack_d8 - fVar23;
              pfVar15[2] = fStack_d4 - fVar20;
              pfVar15[3] = fStack_dc + fVar19;
              pfVar15[4] = fStack_d8 + fVar23;
              pfVar15[5] = fStack_d4 + fVar20;
            }
            else {
              iVar14 = *piVar16;
              pfVar10 = (float *)(iVar14 + uVar5 * 0x18);
              pfVar6 = (float *)(iVar14 + (uint)pbVar3[1] * 0x18);
              pfVar15 = (float *)(iVar14 + uVar9 * 0x18);
              fVar20 = *pfVar10;
              if (*pfVar6 < *pfVar10) {
                fVar20 = *pfVar6;
              }
              *pfVar15 = fVar20;
              fVar20 = pfVar6[3];
              if (pfVar6[3] <= pfVar10[3]) {
                fVar20 = pfVar10[3];
              }
              pfVar15[3] = fVar20;
              fVar20 = pfVar10[1];
              if (pfVar6[1] < pfVar10[1]) {
                fVar20 = pfVar6[1];
              }
              pfVar15[1] = fVar20;
              fVar20 = pfVar6[4];
              if (pfVar6[4] <= pfVar10[4]) {
                fVar20 = pfVar10[4];
              }
              pfVar15[4] = fVar20;
              fVar20 = pfVar10[2];
              if (pfVar6[2] < pfVar10[2]) {
                fVar20 = pfVar6[2];
              }
              pfVar15[2] = fVar20;
              fVar20 = pfVar10[5];
              if (pfVar10[5] < pfVar6[5]) {
                fVar20 = pfVar6[5];
              }
              pfVar15[5] = fVar20;
            }
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < *(uint *)(*piVar12 + 0x6c));
      }
      *(byte *)(piVar12 + 0x26) = *(byte *)(piVar12 + 0x26) & 0xf7;
    }
    fn_001ad2a0(auStack_80,pfVar11);
    fn_001ad184(auStack_b0,pfVar11);
    fn_001ad06c(piVar12 + 0x28,auStack_80,auStack_b0);
  }
  else {
    bVar1 = false;
    iVar8 = 0;
    do {
      if (piVar12[iVar8 + 0x1e] != 0) {
        iVar14 = *(int *)(piVar12[iVar8 + 0x1e] + 4);
        puVar2 = (uint *)(piVar12[6] + iVar14 * 0x40);
        *puVar2 = *puVar2 | 0x10;
        fn_007571cc(piVar12 + 3,pfVar11,piVar12[iVar8 + 0x1e]);
        bVar1 = true;
        puVar2 = (uint *)(piVar12[6] + iVar14 * 0x40);
        *puVar2 = *puVar2 & 0xffffffef;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 5);
    if (!bVar1) {
      fn_007568f4(piVar12 + 3,pfVar11,0);
    }
    piStack_a0 = piVar12 + 3;
    if ((*(byte *)(piVar12 + 0x26) & 8) != 0) {
      uVar17 = 0;
      if (*(int *)(*piVar12 + 0x6c) != 0) {
        do {
          piVar16 = (int *)(piVar12[0xf] + uVar17 * 8);
          piVar13 = (int *)(*(int *)(*piVar12 + 0x68) + uVar17 * 0x1c);
          uVar9 = piVar13[1];
          pfVar11 = (float *)(piStack_a0[5] + (uint)*(ushort *)((int)piVar13 + 0x1a) * 0x30);
          while (uVar9 = uVar9 - 1, -1 < (int)uVar9) {
            pbVar3 = (byte *)(*piVar13 + uVar9 * 8);
            uVar5 = (uint)*pbVar3;
            if (uVar5 == uVar9) {
              pfVar15 = (float *)(*piVar16 + uVar9 * 0x18);
              iVar8 = piVar13[2] + uVar9 * 0x18;
              fn_0016947c(&fStack_e8,pfVar11,iVar8);
              fVar22 = *(float *)(iVar8 + 0xc);
              fVar20 = *(float *)(iVar8 + 0x10);
              fVar23 = *(float *)(iVar8 + 0x14);
              fVar19 = ABS(pfVar11[2]) * fVar23 + ABS(pfVar11[1]) * fVar20 + ABS(*pfVar11) * fVar22;
              fVar21 = ABS(pfVar11[6]) * fVar23 +
                       ABS(pfVar11[5]) * fVar20 + ABS(pfVar11[4]) * fVar22;
              fVar20 = ABS(pfVar11[10]) * fVar23 +
                       ABS(pfVar11[9]) * fVar20 + ABS(pfVar11[8]) * fVar22;
              *pfVar15 = fStack_e8 - fVar19;
              pfVar15[1] = fStack_e4 - fVar21;
              pfVar15[2] = fStack_e0 - fVar20;
              pfVar15[3] = fStack_e8 + fVar19;
              pfVar15[4] = fStack_e4 + fVar21;
              pfVar15[5] = fStack_e0 + fVar20;
            }
            else {
              iVar8 = *piVar16;
              pfVar15 = (float *)(iVar8 + uVar5 * 0x18);
              pfVar10 = (float *)(iVar8 + (uint)pbVar3[1] * 0x18);
              pfVar6 = (float *)(iVar8 + uVar9 * 0x18);
              fVar20 = *pfVar15;
              if (*pfVar10 < *pfVar15) {
                fVar20 = *pfVar10;
              }
              *pfVar6 = fVar20;
              fVar20 = pfVar15[3];
              if (pfVar15[3] < pfVar10[3]) {
                fVar20 = pfVar10[3];
              }
              pfVar6[3] = fVar20;
              fVar20 = pfVar10[1];
              if (pfVar15[1] <= pfVar10[1]) {
                fVar20 = pfVar15[1];
              }
              pfVar6[1] = fVar20;
              fVar20 = pfVar15[4];
              if (pfVar15[4] < pfVar10[4]) {
                fVar20 = pfVar10[4];
              }
              pfVar6[4] = fVar20;
              fVar20 = pfVar15[2];
              if (pfVar10[2] < pfVar15[2]) {
                fVar20 = pfVar10[2];
              }
              pfVar6[2] = fVar20;
              fVar20 = pfVar10[5];
              if (pfVar10[5] <= pfVar15[5]) {
                fVar20 = pfVar15[5];
              }
              pfVar6[5] = fVar20;
            }
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < *(uint *)(*piVar12 + 0x6c));
      }
      *(byte *)(piVar12 + 0x26) = *(byte *)(piVar12 + 0x26) & 0xf7;
    }
    if ((*(byte *)(piVar12 + 3) & 1) != 0) {
      fn_00548320(piVar12 + 3,iStack_30,iStack_2c);
    }
  }
  puVar4 = (ushort *)piVar12[1];
  puVar7 = puVar4 + piVar12[2] * 0xac;
  if (puVar4 < puVar7) {
    iVar14 = (int)puVar7 - (int)puVar4;
    iVar8 = 1;
    if (1 < iVar14 / 0x158 + 1) {
      do {
        if ((*puVar4 & 0x80) != 0) {
          iVar18 = *(int *)(puVar4 + 0xe);
          *(uint *)(puVar4 + 0xe) = iVar18 + 1U;
          if (1 < iVar18 + 1U) {
            puVar4[0xe] = 0;
            puVar4[0xf] = 0;
          }
          *puVar4 = *puVar4 & 0xff7f;
        }
        iVar8 = iVar8 + 1;
        puVar4 = puVar4 + 0xac;
      } while (iVar8 < iVar14 / 0x158 + 1);
      return;
    }
  }
  else {
    for (; puVar4 != puVar7; puVar4 = puVar4 + 0xac) {
      if ((*puVar4 & 0x80) != 0) {
        iVar8 = *(int *)(puVar4 + 0xe);
        *(uint *)(puVar4 + 0xe) = iVar8 + 1U;
        if (1 < iVar8 + 1U) {
          puVar4[0xe] = 0;
          puVar4[0xf] = 0;
        }
        *puVar4 = *puVar4 & 0xff7f;
      }
    }
  }
  return;
}



undefined4 fn_005ea160(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  if (param_1 == 0) {
    return 0;
  }
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  uStack_2c = 0x3f800000;
  if (param_2 != (undefined4 *)0x0) {
    local_38 = *param_2;
    local_34 = param_2[1];
    local_30 = param_2[2];
    uStack_2c = param_2[3];
  }
  iVar1 = fn_00183654(param_1);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = fn_005ea654(param_1,iVar3);
      fn_005e7d48(uVar2,1);
      uVar2 = fn_006eba9c(uVar2,5);
      fn_005e8e44(uVar2,0x17);
      fn_005e8e30(uVar2,&local_38);
      fn_005e8e60(uVar2,0xf,0xe,0,0xf,0xe,0);
      fn_005e8b80(uVar2,8,0,0,0,0,0);
      fn_005e8b70(uVar2,2,0);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 1;
}


