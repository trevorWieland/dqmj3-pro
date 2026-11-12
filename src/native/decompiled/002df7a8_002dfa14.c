#include "002df7a8_002dfa14.h"



undefined4 fn_002dfa14(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + iVar2 * 4 + 0x140);
    if (iVar1 != 0) {
      fn_00683320(iVar1,param_2,param_3);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  return 1;
}



void fn_002df7a8(int param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  int iVar14;
  
  uVar8 = *(uint *)(param_1 + 400);
  uVar9 = *(uint *)(param_1 + 0x18c);
  if (uVar9 != uVar8) {
    uVar1 = uVar9;
    if (uVar8 <= uVar9) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar8);
    }
    *(uint *)(param_1 + 400) = uVar8 - (uVar8 - uVar9 & 0xfffffffc);
  }
  uVar8 = 0;
  if (param_2[1] - *param_2 >> 2 != 0) {
    do {
      piVar2 = (int *)fn_006f7508(DAT_008977e0);
      piVar2 = (int *)(**(code **)(*piVar2 + 0x94))();
      uVar3 = (**(code **)(*piVar2 + 0x4c))(piVar2,*(undefined4 *)(*param_2 + uVar8 * 4));
      puVar12 = *(undefined4 **)(param_1 + 400);
      puVar13 = (uint *)(param_1 + 0x18c);
      if (puVar12 == *(undefined4 **)(param_1 + 0x194)) {
        uVar9 = (int)((int)puVar12 - *puVar13) >> 2;
        if (uVar9 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x194) - *puVar13) >> 2)) {
          *(undefined4 **)(param_1 + 400) = puVar12 + 1;
          if (puVar12 != (undefined4 *)0x0) {
            *puVar12 = puVar12[-1];
          }
          puVar5 = puVar12 + -1;
          puVar6 = puVar12;
          if (puVar12 < puVar5) {
            if (0 < (int)puVar5 - (int)puVar12) {
              iVar14 = (int)puVar5 - (int)puVar12 >> 2;
              iVar10 = 0;
              do {
                iVar14 = iVar14 + -1;
                puVar12[iVar10 + -1] = puVar5[iVar10 + -1];
                iVar10 = iVar10 + -1;
              } while (iVar14 != 0);
            }
          }
          else {
            while (puVar12 != puVar5) {
              puVar5 = puVar5 + -1;
              puVar6[-1] = *puVar5;
              puVar6 = puVar6 + -1;
            }
          }
          *puVar12 = uVar3;
        }
        else {
          uVar1 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
          if (uVar1 < uVar9 + 0x20) {
            uVar1 = uVar9 + 0x20;
          }
          puVar4 = (undefined4 *)fn_00100fc6(uVar1 << 2,0);
          puVar6 = puVar4;
          for (puVar5 = (undefined4 *)*puVar13; puVar5 != puVar12; puVar5 = puVar5 + 1) {
            if (puVar6 != (undefined4 *)0x0) {
              *puVar6 = *puVar5;
            }
            puVar6 = puVar6 + 1;
          }
          puVar5 = (undefined4 *)(((int)puVar12 - *puVar13 & 0xfffffffc) + (int)puVar4);
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = uVar3;
          }
          puVar6 = *(undefined4 **)(param_1 + 400);
          puVar5 = (undefined4 *)(((int)puVar12 - *puVar13 & 0xfffffffc) + (int)puVar4);
          for (; puVar12 != puVar6; puVar12 = puVar12 + 1) {
            puVar5 = puVar5 + 1;
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = *puVar12;
            }
          }
          uVar7 = *(uint *)(param_1 + 400);
          uVar11 = *puVar13;
          uVar9 = uVar11;
          if (uVar7 <= uVar11) {
            for (; uVar9 != uVar7; uVar9 = uVar9 + 4) {
            }
          }
          fn_001008c4(uVar11,(int)(*(int *)(param_1 + 0x194) - uVar11) >> 2,0);
          *(undefined4 **)(param_1 + 0x194) = puVar4 + uVar1;
          *(undefined4 **)(param_1 + 400) = puVar4 + ((int)(uVar7 - uVar11) >> 2) + 1;
          *puVar13 = (uint)puVar4;
        }
      }
      else {
        *(undefined4 **)(param_1 + 400) = puVar12 + 1;
        if (puVar12 != (undefined4 *)0x0) {
          *puVar12 = uVar3;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)(param_2[1] - *param_2 >> 2));
  }
  return;
}


