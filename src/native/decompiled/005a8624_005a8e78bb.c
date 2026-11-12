#include "005a8624_005a8e78bb.h"



void fn_005a8e78(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  
  uVar12 = 0;
  if (param_2 != 0) {
    do {
      iVar1 = fn_00145b00(0x154,&DAT_00812c8c);
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = fn_00578de8(iVar1,param_3,*(undefined4 *)(param_1 + 0x20),(int)(char)uVar12,0xc);
      }
      puVar10 = *(undefined4 **)(param_1 + 8);
      puVar11 = (uint *)(param_1 + 4);
      if (puVar10 == *(undefined4 **)(param_1 + 0xc)) {
        uVar4 = (int)((int)puVar10 - *puVar11) >> 2;
        if (uVar4 < (uint)((int)((int)*(undefined4 **)(param_1 + 0xc) - *puVar11) >> 2)) {
          *(undefined4 **)(param_1 + 8) = puVar10 + 1;
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = puVar10[-1];
          }
          puVar7 = puVar10 + -1;
          puVar8 = puVar10;
          if (puVar10 < puVar7) {
            if (0 < (int)puVar7 - (int)puVar10) {
              iVar1 = (int)puVar7 - (int)puVar10 >> 2;
              iVar5 = 0;
              do {
                iVar1 = iVar1 + -1;
                puVar10[iVar5 + -1] = puVar7[iVar5 + -1];
                iVar5 = iVar5 + -1;
              } while (iVar1 != 0);
            }
          }
          else {
            while (puVar10 != puVar7) {
              puVar7 = puVar7 + -1;
              puVar8[-1] = *puVar7;
              puVar8 = puVar8 + -1;
            }
          }
          *puVar10 = uVar2;
        }
        else {
          uVar6 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
          uVar13 = uVar4 + 0x20;
          if (uVar4 + 0x20 <= uVar6) {
            uVar13 = uVar6;
          }
          puVar3 = (undefined4 *)fn_00100fc6(uVar13 << 2,0);
          puVar8 = puVar3;
          for (puVar7 = (undefined4 *)*puVar11; puVar7 != puVar10; puVar7 = puVar7 + 1) {
            if (puVar8 != (undefined4 *)0x0) {
              *puVar8 = *puVar7;
            }
            puVar8 = puVar8 + 1;
          }
          puVar7 = (undefined4 *)(((int)puVar10 - *puVar11 & 0xfffffffc) + (int)puVar3);
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = uVar2;
          }
          puVar8 = *(undefined4 **)(param_1 + 8);
          puVar7 = (undefined4 *)(((int)puVar10 - *puVar11 & 0xfffffffc) + (int)puVar3);
          for (; puVar10 != puVar8; puVar10 = puVar10 + 1) {
            puVar7 = puVar7 + 1;
            if (puVar7 != (undefined4 *)0x0) {
              *puVar7 = *puVar10;
            }
          }
          uVar6 = *puVar11;
          uVar9 = *(uint *)(param_1 + 8);
          uVar4 = uVar6;
          if (uVar9 < uVar6) {
            do {
              uVar4 = uVar4 + 4;
            } while (uVar4 != uVar9);
          }
          fn_001008c4(uVar6,(int)(*(int *)(param_1 + 0xc) - uVar6) >> 2,0);
          *(undefined4 **)(param_1 + 0xc) = puVar3 + uVar13;
          *(undefined4 **)(param_1 + 8) = puVar3 + ((int)(uVar9 - uVar6) >> 2) + 1;
          *puVar11 = (uint)puVar3;
        }
      }
      else {
        *(undefined4 **)(param_1 + 8) = puVar10 + 1;
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = uVar2;
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < param_2);
  }
  *(uint *)(param_1 + 0x24) = param_2;
  return;
}



void fn_005a8e3c(int param_1,undefined1 param_2,uint param_3,int param_4)

{
  if ((-1 < (int)param_3) && (param_3 < 4)) {
    param_1 = param_1 + param_4 * 8;
    *(undefined1 *)(param_1 + 0x2d) = param_2;
    *(uint *)(param_1 + 0x30) = param_3;
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  return;
}


