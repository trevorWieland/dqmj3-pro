#include "007b653c_007b6a60ba.h"



void fn_007b6840(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int extraout_r1;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *local_3c;
  int local_38;
  
  iVar4 = 0;
  if (param_4 != 0) {
    iVar4 = param_5;
  }
  if (param_4 != 0 && iVar4 != 0) {
    if (param_4 + param_5 != 2) {
      if (param_5 < param_4) {
        local_38 = param_4 / 2;
        puVar8 = param_1 + local_38;
        iVar4 = param_3 - (int)param_2 >> 2;
        local_3c = param_2;
        if (0 < iVar4) {
          do {
            iVar5 = iVar4 / 2;
            if (*(short *)((int)local_3c + iVar5 * 4 + 2) < *(short *)((int)puVar8 + 2)) {
              local_3c = local_3c + iVar5 + 1;
              iVar5 = (iVar4 - iVar5) + -1;
            }
            iVar4 = iVar5;
          } while (0 < iVar5);
        }
        iVar4 = (int)local_3c - (int)param_2 >> 2;
      }
      else {
        iVar4 = param_5 / 2;
        local_3c = param_2 + iVar4;
        iVar5 = (int)param_2 - (int)param_1 >> 2;
        puVar8 = param_1;
        if (0 < iVar5) {
          do {
            iVar9 = iVar5 / 2;
            if (*(short *)((int)puVar8 + iVar9 * 4 + 2) <= *(short *)((int)local_3c + 2)) {
              puVar8 = puVar8 + iVar9 + 1;
              iVar9 = (iVar5 - iVar9) + -1;
            }
            iVar5 = iVar9;
          } while (0 < iVar9);
        }
        local_38 = (int)puVar8 - (int)param_1 >> 2;
      }
      if (puVar8 != param_2 && param_2 != local_3c) {
        iVar5 = (int)param_2 - (int)puVar8 >> 2;
        iVar9 = (int)local_3c - (int)puVar8 >> 2;
        iVar1 = iVar5;
        while (iVar1 != 0) {
          fn_00300f74(iVar9,iVar1);
          iVar9 = iVar1;
          iVar1 = extraout_r1;
        }
        while (iVar9 != 0) {
          iVar9 = iVar9 + -1;
          puVar6 = puVar8 + iVar9;
          uVar7 = *puVar6;
          puVar2 = puVar6;
          puVar3 = puVar6 + iVar5;
          while (puVar3 != puVar6) {
            iVar1 = (int)local_3c - (int)puVar3 >> 2;
            *puVar2 = *puVar3;
            puVar2 = puVar3;
            if (iVar5 < iVar1) {
              puVar3 = puVar3 + iVar5;
            }
            else {
              puVar3 = puVar8 + (iVar5 - iVar1);
            }
          }
          *puVar2 = uVar7;
        }
      }
      fn_007b6840(param_1,puVar8,puVar8 + iVar4,local_38,iVar4);
      fn_007b6840(puVar8 + iVar4,local_3c,param_3,param_4 - local_38,param_5 - iVar4);
      return;
    }
    if (*(short *)((int)param_2 + 2) < *(short *)((int)param_1 + 2)) {
      uVar7 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar7;
    }
  }
  return;
}


