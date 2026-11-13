#include "0040f1c0_0040ffb8aaa.h"



int fn_0040f1c0(int param_1)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  short *psVar13;
  undefined4 *puVar14;
  uint *puVar15;
  
  iVar12 = 1;
  puVar14 = *(undefined4 **)(param_1 + 0x18);
  if (puVar14 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar14)(puVar14);
    do {
      if (puVar2 == &DAT_0089292c) goto LAB_0040f208;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar14 = (undefined4 *)0x0;
LAB_0040f208:
  iVar3 = fn_0037c0d0(puVar14[3]);
  uVar10 = *(uint *)(param_1 + 0xb4);
  uVar11 = *(uint *)(param_1 + 0xb8);
  if (uVar10 != uVar11) {
    uVar4 = uVar10;
    if (uVar11 <= uVar10) {
      do {
        uVar4 = uVar4 + 2;
      } while (uVar4 != uVar11);
    }
    *(uint *)(param_1 + 0xb8) = uVar11 - (uVar11 - uVar10 & 0xfffffffe);
  }
  iVar5 = fn_0068f7e4();
  if (1 < iVar5) {
    do {
      sVar1 = (short)iVar12;
      iVar12 = fn_0028bc78();
      if ((iVar12 != 0) && ((iVar3 == 0 || (iVar12 = fn_0028bde4((int)sVar1), iVar12 == iVar3)))) {
        psVar13 = *(short **)(param_1 + 0xb8);
        puVar15 = (uint *)(param_1 + 0xb4);
        if (psVar13 == *(short **)(param_1 + 0xbc)) {
          uVar10 = (int)((int)psVar13 - *puVar15) >> 1;
          if (uVar10 < (uint)((int)((int)*(short **)(param_1 + 0xbc) - *puVar15) >> 1)) {
            *(short **)(param_1 + 0xb8) = psVar13 + 1;
            if (psVar13 != (short *)0x0) {
              *psVar13 = psVar13[-1];
            }
            psVar7 = psVar13 + -1;
            psVar8 = psVar13;
            if (psVar13 < psVar7) {
              iVar12 = (int)psVar7 - (int)psVar13;
              if (0 < iVar12) {
                if (iVar12 * 0x40000000 < 0) {
                  psVar7 = psVar13 + -2;
                  psVar8 = psVar13 + -1;
                  *psVar8 = *psVar7;
                }
                for (iVar12 = iVar12 >> 2; iVar12 != 0; iVar12 = iVar12 + -1) {
                  psVar8[-1] = psVar7[-1];
                  psVar7 = psVar7 + -2;
                  psVar8 = psVar8 + -2;
                  *psVar8 = *psVar7;
                }
              }
            }
            else {
              while (psVar13 != psVar7) {
                psVar7 = psVar7 + -1;
                psVar8[-1] = *psVar7;
                psVar8 = psVar8 + -1;
              }
            }
            *psVar13 = sVar1;
          }
          else {
            uVar11 = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
            if (uVar11 < uVar10 + 0x20) {
              uVar11 = uVar10 + 0x20;
            }
            psVar6 = (short *)fn_00100fc6(uVar11 << 1,0);
            psVar8 = psVar6;
            for (psVar7 = (short *)*puVar15; psVar7 != psVar13; psVar7 = psVar7 + 1) {
              if (psVar8 != (short *)0x0) {
                *psVar8 = *psVar7;
              }
              psVar8 = psVar8 + 1;
            }
            psVar7 = (short *)(((int)psVar13 - *puVar15 & 0xfffffffe) + (int)psVar6);
            if (psVar7 != (short *)0x0) {
              *psVar7 = sVar1;
            }
            psVar8 = *(short **)(param_1 + 0xb8);
            psVar7 = (short *)(((int)psVar13 - *puVar15 & 0xfffffffe) + (int)psVar6);
            for (; psVar13 != psVar8; psVar13 = psVar13 + 1) {
              psVar7 = psVar7 + 1;
              if (psVar7 != (short *)0x0) {
                *psVar7 = *psVar13;
              }
            }
            uVar4 = *puVar15;
            uVar9 = *(uint *)(param_1 + 0xb8);
            uVar10 = uVar4;
            if (uVar9 < uVar4) {
              do {
                uVar10 = uVar10 + 2;
              } while (uVar10 != uVar9);
            }
            fn_001008c4(uVar4,(int)(*(int *)(param_1 + 0xbc) - uVar4) >> 1,0);
            *(short **)(param_1 + 0xbc) = psVar6 + uVar11;
            *(short **)(param_1 + 0xb8) = psVar6 + ((int)(uVar9 - uVar4) >> 1) + 1;
            *puVar15 = (uint)psVar6;
          }
        }
        else {
          *(short **)(param_1 + 0xb8) = psVar13 + 1;
          if (psVar13 != (short *)0x0) {
            *psVar13 = sVar1;
          }
        }
      }
      iVar12 = (int)(short)(sVar1 + 1);
      iVar5 = fn_0068f7e4();
    } while (iVar12 < iVar5);
  }
  return *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4) >> 1;
}


