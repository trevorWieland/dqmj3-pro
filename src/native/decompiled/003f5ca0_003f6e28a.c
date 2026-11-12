#include "003f5ca0_003f6e28a.h"



undefined4 * fn_003f60d0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 unaff_r4;
  
  iVar1 = fn_00145b00(200,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_003f59d0(iVar1,param_1);
  *puVar2 = &DAT_00835388;
  puVar3 = (undefined4 *)fn_001f74d8(puVar2,0xec);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_00892b1c) goto LAB_003f6614;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_003f6614:
  puVar2[0x31] = puVar3;
  fn_00689efc(puVar2,0xec,0,0,unaff_r4);
  return puVar2;
}



void fn_003f6060(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(int *)(*(int *)(param_1 + 0x9c) + 0xcc) *
          (*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2) + param_2;
  uVar1 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4) >> 1;
  if (uVar1 <= uVar2) {
    fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar2,uVar1);
  }
  *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x1c) =
       *(undefined2 *)(*(int *)(param_1 + 0xb4) + uVar2 * 2);
  return;
}



int fn_003f5ca0(int param_1)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  uint uVar7;
  short *psVar8;
  short *psVar9;
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
      if (puVar2 == &DAT_0089292c) goto LAB_003f5ce8;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar14 = (undefined4 *)0x0;
LAB_003f5ce8:
  iVar3 = fn_0037c074(puVar14[3]);
  uVar7 = *(uint *)(param_1 + 0xb4);
  uVar11 = *(uint *)(param_1 + 0xb8);
  if (uVar7 != uVar11) {
    uVar4 = uVar7;
    if (uVar11 <= uVar7) {
      do {
        uVar4 = uVar4 + 2;
      } while (uVar4 != uVar11);
    }
    *(uint *)(param_1 + 0xb8) = uVar11 - (uVar11 - uVar7 & 0xfffffffe);
  }
  iVar5 = fn_00660c48();
  if (1 < iVar5) {
    do {
      sVar1 = (short)iVar12;
      iVar12 = fn_0028bbd8();
      if ((iVar12 != 0) && (iVar12 = fn_0025be70((int)sVar1), iVar3 == 0 || iVar3 == iVar12)) {
        psVar13 = *(short **)(param_1 + 0xb8);
        puVar15 = (uint *)(param_1 + 0xb4);
        if (psVar13 == *(short **)(param_1 + 0xbc)) {
          uVar7 = (int)((int)psVar13 - *puVar15) >> 1;
          if (uVar7 < (uint)((int)((int)*(short **)(param_1 + 0xbc) - *puVar15) >> 1)) {
            *(short **)(param_1 + 0xb8) = psVar13 + 1;
            if (psVar13 != (short *)0x0) {
              *psVar13 = psVar13[-1];
            }
            psVar8 = psVar13 + -1;
            psVar9 = psVar13;
            if (psVar13 < psVar8) {
              iVar12 = (int)psVar8 - (int)psVar13;
              if (0 < iVar12) {
                if (iVar12 * 0x40000000 < 0) {
                  psVar8 = psVar13 + -2;
                  psVar9 = psVar13 + -1;
                  *psVar9 = *psVar8;
                }
                for (iVar12 = iVar12 >> 2; iVar12 != 0; iVar12 = iVar12 + -1) {
                  psVar9[-1] = psVar8[-1];
                  psVar8 = psVar8 + -2;
                  psVar9 = psVar9 + -2;
                  *psVar9 = *psVar8;
                }
              }
            }
            else {
              while (psVar13 != psVar8) {
                psVar8 = psVar8 + -1;
                psVar9[-1] = *psVar8;
                psVar9 = psVar9 + -1;
              }
            }
            *psVar13 = sVar1;
          }
          else {
            uVar11 = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
            if (uVar11 < uVar7 + 0x20) {
              uVar11 = uVar7 + 0x20;
            }
            psVar6 = (short *)fn_00100fc6(uVar11 << 1,0);
            psVar9 = psVar6;
            for (psVar8 = (short *)*puVar15; psVar8 != psVar13; psVar8 = psVar8 + 1) {
              if (psVar9 != (short *)0x0) {
                *psVar9 = *psVar8;
              }
              psVar9 = psVar9 + 1;
            }
            psVar8 = (short *)(((int)psVar13 - *puVar15 & 0xfffffffe) + (int)psVar6);
            if (psVar8 != (short *)0x0) {
              *psVar8 = sVar1;
            }
            psVar9 = *(short **)(param_1 + 0xb8);
            psVar8 = (short *)(((int)psVar13 - *puVar15 & 0xfffffffe) + (int)psVar6);
            for (; psVar13 != psVar9; psVar13 = psVar13 + 1) {
              psVar8 = psVar8 + 1;
              if (psVar8 != (short *)0x0) {
                *psVar8 = *psVar13;
              }
            }
            uVar4 = *puVar15;
            uVar10 = *(uint *)(param_1 + 0xb8);
            uVar7 = uVar4;
            if (uVar10 < uVar4) {
              do {
                uVar7 = uVar7 + 2;
              } while (uVar7 != uVar10);
            }
            fn_001008c4(uVar4,(int)(*(int *)(param_1 + 0xbc) - uVar4) >> 1,0);
            *(short **)(param_1 + 0xbc) = psVar6 + uVar11;
            *(short **)(param_1 + 0xb8) = psVar6 + ((int)(uVar10 - uVar4) >> 1) + 1;
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
      iVar5 = fn_00660c48();
    } while (iVar12 < iVar5);
  }
  return *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4) >> 1;
}


