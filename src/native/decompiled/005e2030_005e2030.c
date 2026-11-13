#include "005e2030_005e2030.h"



void fn_005e2030(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  int *piVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  float fVar30;
  ulonglong uVar31;
  float fVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined1 local_94 [12];
  undefined1 local_88 [12];
  int local_7c;
  float local_78;
  float local_74;
  float local_70;
  int local_6c;
  int iStack_30;
  int local_2c;
  int local_28;
  
  iVar7 = *(int *)(param_1 + 4);
  uVar21 = 0;
  piVar22 = *(int **)(iVar7 + 0xdc);
  local_7c = (*(int *)(iVar7 + 0x188) - *(int *)(iVar7 + 0x184)) / 0x28;
  iStack_30 = iVar7;
  local_2c = param_2;
  if (0 < local_7c) {
    uVar33 = 0x4500000040000000;
    uVar34 = 0;
    uVar29 = 0x45fff80000000000;
    uVar31 = 0x45800000;
    local_28 = param_3;
    do {
      iVar8 = *(int *)(iVar7 + 0x184);
      iVar9 = fn_006ec6f4();
      iVar19 = 0;
      if (0 < iVar9) {
        local_6c = (uVar21 & 0xffff) * 0x278 + 4;
        do {
          iVar10 = fn_006ec714(iVar8 + uVar21 * 0x28,iVar19);
          cVar1 = *(char *)(iVar10 + 0x48);
          uVar2 = fn_006eb248(iVar10);
          *(undefined1 *)(*piVar22 + (uVar21 & 0xffff) * 0x100 + iVar19 * 0x20 + 0x1c) = uVar2;
          iVar11 = fn_006eb248(iVar10);
          uVar15 = (undefined4)((ulonglong)uVar29 >> 0x20);
          if (iVar11 != 0) {
            fn_0016947c(local_88,local_2c + 0x148,iVar10 + 0x24);
            fn_0016947c(local_94,local_28 + 0x148,iVar10 + 0x24);
            if (cVar1 != '\0') {
              *(byte *)(iVar7 + 0x164) = *(byte *)(iVar7 + 0x164) | 1;
              uVar2 = 0;
              iVar11 = *(int *)(iVar7 + 0xc) + local_6c + iVar19 * 0x2c;
              uVar12 = fn_0044eca8();
              iVar13 = fn_0044eca8();
              *(uint *)(iVar11 + 0x14) = uVar12 | iVar13 << 0x10;
              uVar14 = fn_0044eca8();
              *(undefined4 *)(iVar11 + 0x18) = uVar14;
              *(undefined1 *)(iVar11 + 0x1c) = uVar2;
            }
            if (cVar1 != '\0') {
              uVar31 = uVar31 & 0xffffffff;
              puVar20 = (uint *)(**(int **)(iVar7 + 0xdc) + (uVar21 & 0xffff) * 0x100 +
                                iVar19 * 0x20);
              uVar12 = fn_0044eca8();
              iVar11 = fn_0044eca8();
              *puVar20 = uVar12 | iVar11 << 0x10;
              uVar12 = fn_0044eca8();
              iVar11 = fn_0044eca8();
              puVar20[1] = uVar12 | iVar11 << 0x10;
              uVar3 = fn_0044eca8();
              *(undefined2 *)(puVar20 + 2) = uVar3;
              uVar3 = fn_0044eca8();
              *(undefined2 *)((int)puVar20 + 10) = uVar3;
            }
            fVar23 = *(float *)(iVar10 + 0x30);
            fVar27 = *(float *)(iVar10 + 0x34);
            fVar25 = *(float *)(iVar10 + 0x38);
            local_74 = *(float *)(local_2c + 0x158) * fVar23 + *(float *)(local_2c + 0x15c) * fVar27
                       + *(float *)(local_2c + 0x160) * fVar25;
            local_70 = *(float *)(local_2c + 0x168) * fVar23 + *(float *)(local_2c + 0x16c) * fVar27
                       + *(float *)(local_2c + 0x170) * fVar25;
            local_78 = *(float *)(local_2c + 0x148) * fVar23 + *(float *)(local_2c + 0x14c) * fVar27
                       + *(float *)(local_2c + 0x150) * fVar25;
            fVar25 = *(float *)(iVar10 + 0x30);
            fVar23 = *(float *)(iVar10 + 0x34);
            fVar27 = *(float *)(iVar10 + 0x38);
            uVar28 = CONCAT44(*(float *)(local_28 + 0x158) * fVar25 +
                              *(float *)(local_28 + 0x15c) * fVar23 +
                              *(float *)(local_28 + 0x160) * fVar27,
                              *(float *)(local_28 + 0x148) * fVar25 +
                              *(float *)(local_28 + 0x14c) * fVar23 +
                              *(float *)(local_28 + 0x150) * fVar27);
            uVar29 = CONCAT44(uVar15,*(float *)(local_28 + 0x168) * fVar25 +
                                     *(float *)(local_28 + 0x16c) * fVar23 +
                                     *(float *)(local_28 + 0x170) * fVar27);
            fn_005e2770(iVar7,uVar21 & 0xffff,iVar19,cVar1,&local_78);
            if (cVar1 == '\0') {
              uVar31 = uVar31 & 0xffffffff;
              puVar20 = (uint *)(**(int **)(iVar7 + 0xdc) + (uVar21 & 0xffff) * 0x100 +
                                iVar19 * 0x20);
              uVar12 = fn_0044eca8();
              iVar11 = fn_0044eca8();
              *puVar20 = uVar12 | iVar11 << 0x10;
              uVar12 = fn_0044eca8();
              iVar11 = fn_0044eca8();
              puVar20[1] = uVar12 | iVar11 << 0x10;
              uVar3 = fn_0044eca8();
              *(undefined2 *)(puVar20 + 2) = uVar3;
              uVar3 = fn_0044eca8();
              *(undefined2 *)((int)puVar20 + 10) = uVar3;
            }
            uVar2 = fn_006eb218(iVar10);
            *(undefined1 *)(*piVar22 + (uVar21 & 0xffff) * 0x100 + iVar19 * 0x20 + 0x1d) = uVar2;
            iVar10 = fn_006eb218(iVar10);
            if (iVar10 != 0) {
              iVar10 = *piVar22 + (uVar21 & 0xffff) * 0x100 + iVar19 * 0x20;
              fVar27 = -local_78;
              fVar25 = (float)uVar34;
              fVar32 = (float)uVar33;
              fVar26 = (float)((ulonglong)uVar33 >> 0x20);
              fVar23 = (float)((ulonglong)uVar29 >> 0x20);
              fVar30 = (float)uVar31;
              if ((fVar27 == fVar25) || ((uint)ABS(fVar27) >> 0x17 == 0xff)) {
                uVar12 = 0;
              }
              else {
                fVar24 = (fVar27 + fVar32) * fVar26;
                fVar27 = fVar25;
                if ((fVar24 < fVar25) ||
                   ((fVar27 = fVar23, (int)fVar24 < 0x46000000 &&
                    (fVar27 = fVar24, (int)fVar24 < 0x45800000)))) {
                  uVar12 = VectorFloatToUnsigned(fVar27 + fVar30,3);
                }
                else {
                  uVar12 = VectorFloatToUnsigned(fVar27 - fVar30,3);
                }
              }
              fVar27 = -local_74;
              if ((fVar27 == fVar25) || ((uint)ABS(fVar27) >> 0x17 == 0xff)) {
                iVar11 = 0;
              }
              else {
                fVar24 = (fVar27 + fVar32) * fVar26;
                fVar27 = fVar25;
                if ((fVar24 < fVar25) ||
                   ((fVar27 = fVar23, (int)fVar24 < 0x46000000 &&
                    (fVar27 = fVar24, (int)fVar24 < 0x45800000)))) {
                  iVar11 = VectorFloatToUnsigned(fVar27 + fVar30,3);
                }
                else {
                  iVar11 = VectorFloatToUnsigned(fVar27 - fVar30,3);
                }
              }
              fVar27 = -(float)uVar28;
              *(uint *)(iVar10 + 0xc) = uVar12 | iVar11 << 0x10;
              if ((fVar27 == fVar25) || ((uint)ABS(fVar27) >> 0x17 == 0xff)) {
                uVar12 = 0;
              }
              else {
                fVar24 = (fVar27 + fVar32) * fVar26;
                fVar27 = fVar25;
                if ((fVar24 < fVar25) ||
                   ((fVar27 = fVar23, (int)fVar24 < 0x46000000 &&
                    (fVar27 = fVar24, (int)fVar24 < 0x45800000)))) {
                  uVar12 = VectorFloatToUnsigned(fVar27 + fVar30,3);
                }
                else {
                  uVar12 = VectorFloatToUnsigned(fVar27 - fVar30,3);
                }
              }
              fVar27 = -(float)((ulonglong)uVar28 >> 0x20);
              if ((fVar27 == fVar25) || ((uint)ABS(fVar27) >> 0x17 == 0xff)) {
                iVar11 = 0;
              }
              else {
                fVar24 = (fVar27 + fVar32) * fVar26;
                fVar27 = fVar25;
                if ((fVar24 < fVar25) ||
                   ((fVar27 = fVar23, (int)fVar24 < 0x46000000 &&
                    (fVar27 = fVar24, (int)fVar24 < 0x45800000)))) {
                  iVar11 = VectorFloatToUnsigned(fVar27 + fVar30,3);
                }
                else {
                  iVar11 = VectorFloatToUnsigned(fVar27 - fVar30,3);
                }
              }
              fVar27 = -local_70;
              *(uint *)(iVar10 + 0x10) = uVar12 | iVar11 << 0x10;
              if ((fVar27 == fVar25) || ((uint)ABS(fVar27) >> 0x17 == 0xff)) {
                uVar15 = 0;
              }
              else {
                fVar24 = (fVar27 + fVar32) * fVar26;
                fVar27 = fVar25;
                if ((fVar24 < fVar25) ||
                   ((fVar27 = fVar23, (int)fVar24 < 0x46000000 &&
                    (fVar27 = fVar24, (int)fVar24 < 0x45800000)))) {
                  uVar15 = VectorFloatToUnsigned(fVar27 + fVar30,3);
                }
                else {
                  uVar15 = VectorFloatToUnsigned(fVar27 - fVar30,3);
                }
              }
              fVar27 = -(float)uVar29;
              *(undefined4 *)(iVar10 + 0x14) = uVar15;
              if ((fVar27 == fVar25) || ((uint)ABS(fVar27) >> 0x17 == 0xff)) {
                uVar15 = 0;
              }
              else {
                fVar26 = (fVar27 + fVar32) * fVar26;
                if ((fVar26 < fVar25) ||
                   (((int)fVar26 < 0x46000000 &&
                    (fVar25 = fVar26, fVar23 = fVar26, (int)fVar26 < 0x45800000)))) {
                  uVar15 = VectorFloatToUnsigned(fVar25 + fVar30,3);
                }
                else {
                  uVar15 = VectorFloatToUnsigned(fVar23 - fVar30,3);
                }
              }
              *(undefined4 *)(iVar10 + 0x18) = uVar15;
            }
          }
          iVar19 = iVar19 + 1;
        } while (iVar19 < iVar9);
      }
      uVar21 = uVar21 + 1;
    } while ((int)uVar21 < local_7c);
  }
  iVar9 = 0;
  iVar8 = 0;
  iVar7 = piVar22[0x12];
  iVar19 = piVar22[1];
  puVar4 = (undefined4 *)piVar22[iVar7 * 8 + 5];
  puVar17 = (undefined4 *)piVar22[iVar7 * 8 + 4];
  if (0 < iVar19) {
    do {
      iVar10 = 0;
      uVar21 = 0;
      puVar6 = puVar17;
      do {
        uVar12 = iVar10 * 0x10 + 0x144;
        puVar16 = (undefined4 *)(*piVar22 + iVar8 * 0x100 + iVar10 * 0x20);
        if (*(char *)(puVar16 + 7) != '\0') {
          *puVar6 = *puVar16;
          *puVar4 = puVar16[1];
          if (*(char *)((int)puVar16 + 0x1d) == '\0') {
            iVar11 = 1;
          }
          else {
            iVar11 = 4;
          }
          puVar6[1] = uVar12 | iVar11 << 0x14 | 0x800f0000;
          if (*(char *)((int)puVar16 + 0x1d) == '\0') {
            iVar11 = 1;
          }
          else {
            iVar11 = 4;
          }
          puVar4[1] = uVar12 | iVar11 << 0x14 | 0x800f0000;
          puVar18 = puVar6 + 3;
          puVar6[2] = (uint)*(ushort *)(puVar16 + 2);
          puVar5 = puVar4 + 3;
          puVar4[2] = (uint)*(ushort *)((int)puVar16 + 10);
          if (*(char *)((int)puVar16 + 0x1d) != '\0') {
            *puVar18 = puVar16[3];
            *puVar5 = puVar16[4];
            puVar18 = puVar6 + 5;
            puVar6[4] = puVar16[5];
            puVar5 = puVar4 + 5;
            puVar4[4] = puVar16[6];
          }
          puVar6 = puVar18 + 1;
          *puVar18 = 0;
          puVar4 = puVar5 + 1;
          *puVar5 = 0;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < 8);
      if (puVar6 != puVar17) {
        uVar21 = ((int)puVar6 - (int)puVar17 & 0xfffffffcU) + 8;
        if (((uVar21 & 0xf) != 0) && (uVar12 = 4 - ((uVar21 & 0xf) >> 2), 0 < (int)uVar12)) {
          puVar16 = puVar6 + -1;
          if ((uVar12 & 1) != 0) {
            *puVar6 = 0;
            puVar16 = puVar6;
          }
          for (iVar10 = (int)uVar12 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
            puVar16[1] = 0;
            puVar16 = puVar16 + 2;
            *puVar16 = 0;
          }
          puVar6 = puVar6 + uVar12;
        }
        if (((uVar21 & 0xf) != 0) && (uVar21 = 4 - ((uVar21 & 0xf) >> 2), 0 < (int)uVar21)) {
          puVar16 = puVar4 + -1;
          if ((uVar21 & 1) != 0) {
            *puVar4 = 0;
            puVar16 = puVar4;
          }
          for (iVar10 = (int)uVar21 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
            puVar16[1] = 0;
            puVar16 = puVar16 + 2;
            *puVar16 = 0;
          }
          puVar4 = puVar4 + uVar21;
        }
        puVar6 = (undefined4 *)fn_00189790(puVar6,1);
        puVar4 = (undefined4 *)fn_00189790(puVar4,1);
        uVar21 = (int)puVar6 - (int)puVar17 & 0xfffffffc;
        *(short *)(piVar22[iVar7 * 8 + 2] + iVar8 * 4) = (short)iVar9;
        iVar9 = iVar9 + uVar21;
      }
      iVar10 = iVar8 * 4;
      iVar8 = iVar8 + 1;
      *(short *)(piVar22[iVar7 * 8 + 2] + iVar10 + 2) = (short)uVar21;
      puVar17 = puVar6;
    } while (iVar8 < iVar19);
  }
  piVar22[iVar7 * 8 + 6] = iVar9;
  *(undefined1 *)(piVar22 + iVar7 * 8 + 9) = 1;
  return;
}


