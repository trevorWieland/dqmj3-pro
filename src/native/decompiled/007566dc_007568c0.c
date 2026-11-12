#include "007566dc_007568c0.h"



int * fn_007568c0(int *param_1)

{
  param_1[2] = param_1[1];
  if ((int *)*param_1 != (int *)0x0 && param_1[1] != 0) {
    (**(code **)(*(int *)*param_1 + 0xc))();
  }
  return param_1;
}



bool fn_007566dc(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  bVar11 = true;
  iVar3 = param_1[2] - param_1[1] >> 4;
  if ((int)param_2 < iVar3) {
    bVar11 = (int)param_2 < 0;
    if (bVar11) {
      param_2 = 0;
    }
    bVar11 = !bVar11;
    for (uVar2 = param_2; (int)uVar2 < iVar3; uVar2 = uVar2 + 1) {
    }
    iVar3 = param_1[1] + param_2 * 0x10;
  }
  else {
    if ((int)(param_1[3] & 0x3fffffffU) < (int)param_2) {
      piVar4 = (int *)*param_1;
      if (((piVar4 == (int *)0x0) || ((param_1[3] & 0xc0000000U) != 0x40000000)) ||
         (puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4,param_2 << 4,0x20),
         puVar5 == (undefined4 *)0x0)) {
        bVar11 = false;
        param_2 = param_1[3] & 0x3fffffff;
      }
      else {
        iVar3 = 0;
        puVar8 = (undefined4 *)param_1[1];
        puVar9 = (undefined4 *)param_1[2];
        puVar6 = puVar5;
        if (puVar8 != puVar9) {
          do {
            if (puVar6 != (undefined4 *)0x0) {
              uVar12 = puVar8[1];
              uVar13 = puVar8[2];
              uVar14 = puVar8[3];
              *puVar6 = *puVar8;
              puVar6[1] = uVar12;
              puVar6[2] = uVar13;
              puVar6[3] = uVar14;
            }
            puVar8 = puVar8 + 4;
            puVar6 = puVar6 + 4;
          } while (puVar8 != puVar9);
          iVar3 = param_1[2] - param_1[1] >> 4;
        }
        uVar2 = param_1[1];
        if (uVar2 != 0) {
          uVar10 = param_1[2];
          uVar1 = uVar2;
          if (uVar2 < uVar10) {
            iVar7 = 1;
            if (1 < ((int)(uVar10 - uVar2) >> 4) + 1) {
              do {
                iVar7 = iVar7 + 1;
              } while (iVar7 < ((int)(uVar10 - uVar2) >> 4) + 1);
            }
          }
          else {
            for (; uVar1 != uVar10; uVar1 = uVar1 + 0x10) {
            }
          }
          param_1[2] = uVar2;
          (**(code **)(*(int *)*param_1 + 0xc))((int *)*param_1,param_1[1]);
        }
        param_1[2] = (int)(puVar5 + iVar3 * 4);
        param_1[1] = (int)puVar5;
        param_1[3] = param_1[3] & 0xc0000000U | param_2;
      }
    }
    for (iVar3 = param_1[2] - param_1[1] >> 4; iVar3 < (int)param_2; iVar3 = iVar3 + 1) {
      puVar5 = (undefined4 *)(param_1[1] + iVar3 * 0x10);
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
      }
    }
    iVar3 = param_1[1] + param_2 * 0x10;
  }
  param_1[2] = iVar3;
  return bVar11;
}


