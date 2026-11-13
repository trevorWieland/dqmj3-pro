#include "003f6fac_003f7514bb.h"



int fn_003f7514(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  
  puVar2 = (undefined4 *)fn_001f74d8(param_1,0x41,param_3,param_4,param_4);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00893a00) goto LAB_003f755c;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_003f755c:
  param_1[0x30] = (int)puVar2;
  fn_00689efc(param_1,0x41);
  *(undefined4 *)(param_1[6] + 8) = 0;
  *(undefined4 *)(param_1[6] + 0xc) = 0;
  iVar4 = fn_00410868(param_1);
  if (iVar4 != 0) {
    uVar8 = 0;
    uVar1 = param_1[0x32] - param_1[0x31] >> 4;
    if (uVar1 != 0) {
      do {
        if (*(int *)(param_1[0x31] + uVar8 * 0x10) == *(int *)(param_1[6] + 0x14)) {
          uVar5 = fn_006ba274(param_1);
          uVar9 = fn_00300f74(uVar8,uVar5);
          uVar7 = (undefined4)((ulonglong)uVar9 >> 0x20);
          *(undefined4 *)(param_1[0x2c] + 8) = uVar7;
          *(int *)(param_1[0x2c] + 0xc) = (int)uVar9;
          uVar5 = fn_006ba214(param_1);
          uVar6 = fn_006ba274(param_1);
          fn_002c3504(param_1,uVar6,uVar5,(int)uVar9,uVar7);
          (**(code **)(*param_1 + 0x124))(param_1);
          return iVar4;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar1);
    }
  }
  return iVar4;
}



int fn_003f72b4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  
  uVar1 = *(undefined4 *)(DAT_00897804 + 0x18);
  iVar2 = fn_006b4f84();
  iVar15 = 0;
  if (0 < iVar2) {
    do {
      puVar3 = (undefined4 *)fn_0024222c(uVar1,iVar15);
      puVar12 = *(undefined4 **)(param_1 + 200);
      puVar14 = (uint *)(param_1 + 0xc4);
      if (puVar12 == *(undefined4 **)(param_1 + 0xcc)) {
        uVar6 = (int)((int)puVar12 - *puVar14) >> 4;
        if (uVar6 < (uint)((int)((int)*(undefined4 **)(param_1 + 0xcc) - *puVar14) >> 4)) {
          *(undefined4 **)(param_1 + 200) = puVar12 + 4;
          if (puVar12 != (undefined4 *)0x0) {
            *puVar12 = puVar12[-4];
            puVar12[1] = puVar12[-3];
            puVar12[2] = puVar12[-2];
            puVar12[3] = puVar12[-1];
          }
          puVar8 = puVar12 + -4;
          puVar13 = puVar12;
          if (puVar12 < puVar8) {
            iVar4 = (int)puVar8 - (int)puVar12;
            if (0 < iVar4) {
              if (iVar4 * 0x8000000 < 0) {
                puVar8 = puVar12 + -8;
                puVar13 = puVar12 + -4;
                *puVar13 = *puVar8;
                puVar12[-3] = puVar12[-7];
                puVar12[-2] = puVar12[-6];
                puVar12[-1] = puVar12[-5];
              }
              for (iVar4 = iVar4 >> 5; iVar4 != 0; iVar4 = iVar4 + -1) {
                uVar10 = puVar8[-3];
                uVar11 = puVar8[-2];
                uVar17 = puVar8[-1];
                puVar13[-4] = puVar8[-4];
                puVar13[-3] = uVar10;
                puVar13[-2] = uVar11;
                puVar13[-1] = uVar17;
                uVar10 = puVar8[-7];
                uVar11 = puVar8[-6];
                uVar17 = puVar8[-5];
                puVar13[-8] = puVar8[-8];
                puVar13[-7] = uVar10;
                puVar13[-6] = uVar11;
                puVar13[-5] = uVar17;
                puVar8 = puVar8 + -8;
                puVar13 = puVar13 + -8;
              }
            }
          }
          else {
            while (puVar12 != puVar8) {
              uVar10 = puVar8[-3];
              uVar11 = puVar8[-2];
              uVar17 = puVar8[-1];
              puVar13[-4] = puVar8[-4];
              puVar13[-3] = uVar10;
              puVar13[-2] = uVar11;
              puVar13[-1] = uVar17;
              puVar13 = puVar13 + -4;
              puVar8 = puVar8 + -4;
            }
          }
          uVar10 = puVar3[1];
          uVar11 = puVar3[2];
          uVar17 = puVar3[3];
          *puVar12 = *puVar3;
          puVar12[1] = uVar10;
          puVar12[2] = uVar11;
          puVar12[3] = uVar17;
        }
        else {
          uVar7 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
          uVar16 = uVar6 + 0x20;
          if (uVar6 + 0x20 <= uVar7) {
            uVar16 = uVar7;
          }
          puVar5 = (undefined4 *)fn_00100fc6(uVar16 << 4,0);
          puVar13 = puVar5;
          for (puVar8 = (undefined4 *)*puVar14; puVar8 != puVar12; puVar8 = puVar8 + 4) {
            if (puVar13 != (undefined4 *)0x0) {
              uVar10 = puVar8[1];
              uVar11 = puVar8[2];
              uVar17 = puVar8[3];
              *puVar13 = *puVar8;
              puVar13[1] = uVar10;
              puVar13[2] = uVar11;
              puVar13[3] = uVar17;
            }
            puVar13 = puVar13 + 4;
          }
          puVar8 = (undefined4 *)(((int)puVar12 - *puVar14 & 0xfffffff0) + (int)puVar5);
          if (puVar8 != (undefined4 *)0x0) {
            uVar10 = puVar3[1];
            uVar11 = puVar3[2];
            uVar17 = puVar3[3];
            *puVar8 = *puVar3;
            puVar8[1] = uVar10;
            puVar8[2] = uVar11;
            puVar8[3] = uVar17;
          }
          puVar8 = *(undefined4 **)(param_1 + 200);
          puVar3 = (undefined4 *)(((int)puVar12 - *puVar14 & 0xfffffff0) + (int)puVar5);
          for (; puVar12 != puVar8; puVar12 = puVar12 + 4) {
            puVar13 = puVar3 + 4;
            if (puVar13 != (undefined4 *)0x0) {
              uVar10 = puVar12[1];
              uVar11 = puVar12[2];
              uVar17 = puVar12[3];
              *puVar13 = *puVar12;
              puVar3[5] = uVar10;
              puVar3[6] = uVar11;
              puVar3[7] = uVar17;
            }
            puVar3 = puVar13;
          }
          uVar7 = *puVar14;
          uVar9 = *(uint *)(param_1 + 200);
          uVar6 = uVar7;
          if (uVar9 < uVar7) {
            do {
              uVar6 = uVar6 + 0x10;
            } while (uVar6 != uVar9);
          }
          fn_001008c4(uVar7,(int)(*(int *)(param_1 + 0xcc) - uVar7) >> 4);
          *(undefined4 **)(param_1 + 0xcc) = puVar5 + uVar16 * 4;
          *(undefined4 **)(param_1 + 200) = puVar5 + ((int)(uVar9 - uVar7) >> 4) * 4 + 4;
          *puVar14 = (uint)puVar5;
        }
      }
      else {
        *(undefined4 **)(param_1 + 200) = puVar12 + 4;
        if (puVar12 != (undefined4 *)0x0) {
          uVar10 = puVar3[1];
          uVar11 = puVar3[2];
          uVar17 = puVar3[3];
          *puVar12 = *puVar3;
          puVar12[1] = uVar10;
          puVar12[2] = uVar11;
          puVar12[3] = uVar17;
        }
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < iVar2);
  }
  return *(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4) >> 4;
}



void fn_003f728c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00749ddc();
  *puVar1 = &DAT_008357a0;
  return;
}


