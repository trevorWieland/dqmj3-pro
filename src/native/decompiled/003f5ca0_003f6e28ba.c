#include "003f5ca0_003f6e28ba.h"



void fn_003f6b10(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((param_1[0x2c] == 1) && (iVar1 = (**(code **)(*param_1 + 0x14c))(param_1), iVar1 != 0)) {
    fn_002c3d68(param_1);
    puVar2 = (undefined4 *)fn_001f74ec(param_1,0xd4);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      do {
        if (puVar3 == &DAT_0089292c) goto LAB_003f6b88;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    puVar2 = (undefined4 *)0x0;
LAB_003f6b88:
    fn_005aeb2c(puVar2);
    fn_006899f4(param_1,0xd4,0);
    param_1[0x2c] = 3;
  }
  return;
}



int fn_003f62a8(int param_1)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  short *psVar14;
  undefined4 *puVar15;
  uint *puVar16;
  
  iVar13 = 1;
  puVar15 = *(undefined4 **)(param_1 + 0x18);
  if (puVar15 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar15)(puVar15);
    do {
      if (puVar2 == &DAT_0089292c) goto LAB_003f62f0;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar15 = (undefined4 *)0x0;
LAB_003f62f0:
  uVar3 = fn_0037c0a4(puVar15[3]);
  uVar11 = *(uint *)(param_1 + 0xb4);
  uVar12 = *(uint *)(param_1 + 0xb8);
  if (uVar11 != uVar12) {
    uVar4 = uVar11;
    if (uVar12 <= uVar11) {
      do {
        uVar4 = uVar4 + 2;
      } while (uVar4 != uVar12);
    }
    *(uint *)(param_1 + 0xb8) = uVar12 - (uVar12 - uVar11 & 0xfffffffe);
  }
  iVar5 = fn_001746f4();
  if (1 < iVar5) {
    do {
      sVar1 = (short)iVar13;
      iVar13 = fn_0028bbf4();
      if (iVar13 != 0) {
        uVar6 = fn_00660e2c((int)sVar1);
        iVar13 = fn_0037c110(uVar3,uVar6);
        if (iVar13 != 0) {
          psVar14 = *(short **)(param_1 + 0xb8);
          puVar16 = (uint *)(param_1 + 0xb4);
          if (psVar14 == *(short **)(param_1 + 0xbc)) {
            uVar11 = (int)((int)psVar14 - *puVar16) >> 1;
            if (uVar11 < (uint)((int)((int)*(short **)(param_1 + 0xbc) - *puVar16) >> 1)) {
              *(short **)(param_1 + 0xb8) = psVar14 + 1;
              if (psVar14 != (short *)0x0) {
                *psVar14 = psVar14[-1];
              }
              psVar8 = psVar14 + -1;
              psVar9 = psVar14;
              if (psVar14 < psVar8) {
                iVar13 = (int)psVar8 - (int)psVar14;
                if (0 < iVar13) {
                  if (iVar13 * 0x40000000 < 0) {
                    psVar8 = psVar14 + -2;
                    psVar9 = psVar14 + -1;
                    *psVar9 = *psVar8;
                  }
                  for (iVar13 = iVar13 >> 2; iVar13 != 0; iVar13 = iVar13 + -1) {
                    psVar9[-1] = psVar8[-1];
                    psVar8 = psVar8 + -2;
                    psVar9 = psVar9 + -2;
                    *psVar9 = *psVar8;
                  }
                }
              }
              else {
                while (psVar14 != psVar8) {
                  psVar8 = psVar8 + -1;
                  psVar9[-1] = *psVar8;
                  psVar9 = psVar9 + -1;
                }
              }
              *psVar14 = sVar1;
            }
            else {
              uVar12 = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
              if (uVar12 < uVar11 + 0x20) {
                uVar12 = uVar11 + 0x20;
              }
              psVar7 = (short *)fn_00100fc6(uVar12 << 1,0);
              psVar9 = psVar7;
              for (psVar8 = (short *)*puVar16; psVar8 != psVar14; psVar8 = psVar8 + 1) {
                if (psVar9 != (short *)0x0) {
                  *psVar9 = *psVar8;
                }
                psVar9 = psVar9 + 1;
              }
              psVar8 = (short *)(((int)psVar14 - *puVar16 & 0xfffffffe) + (int)psVar7);
              if (psVar8 != (short *)0x0) {
                *psVar8 = sVar1;
              }
              psVar9 = *(short **)(param_1 + 0xb8);
              psVar8 = (short *)(((int)psVar14 - *puVar16 & 0xfffffffe) + (int)psVar7);
              for (; psVar14 != psVar9; psVar14 = psVar14 + 1) {
                psVar8 = psVar8 + 1;
                if (psVar8 != (short *)0x0) {
                  *psVar8 = *psVar14;
                }
              }
              uVar4 = *puVar16;
              uVar10 = *(uint *)(param_1 + 0xb8);
              uVar11 = uVar4;
              if (uVar10 < uVar4) {
                do {
                  uVar11 = uVar11 + 2;
                } while (uVar11 != uVar10);
              }
              fn_001008c4(uVar4,(int)(*(int *)(param_1 + 0xbc) - uVar4) >> 1,0);
              *(short **)(param_1 + 0xbc) = psVar7 + uVar12;
              *(short **)(param_1 + 0xb8) = psVar7 + ((int)(uVar10 - uVar4) >> 1) + 1;
              *puVar16 = (uint)psVar7;
            }
          }
          else {
            *(short **)(param_1 + 0xb8) = psVar14 + 1;
            if (psVar14 != (short *)0x0) {
              *psVar14 = sVar1;
            }
          }
        }
      }
      iVar13 = (int)(short)(sVar1 + 1);
      iVar5 = fn_001746f4();
    } while (iVar13 < iVar5);
  }
  return *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4) >> 1;
}


