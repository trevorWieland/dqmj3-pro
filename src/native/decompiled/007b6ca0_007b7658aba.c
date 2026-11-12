#include "007b6ca0_007b7658aba.h"



void fn_007b6ef4(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4,int param_5,
                 code *param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int extraout_r1;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  
  iVar6 = 0;
  if (param_4 != 0) {
    iVar6 = param_5;
  }
  if (param_4 != 0 && iVar6 != 0) {
    if (iVar6 + param_4 != 2) {
      if (param_5 < param_4) {
        iVar10 = param_4 / 2;
        puVar8 = param_1 + iVar10;
        iVar6 = param_3 - (int)param_2 >> 2;
        puVar9 = param_2;
        while (iVar1 = iVar6, 0 < iVar1) {
          iVar6 = iVar1 / 2;
          iVar5 = (*param_6)(puVar9[iVar6],*puVar8);
          if (iVar5 != 0) {
            puVar9 = puVar9 + iVar6 + 1;
            iVar6 = (iVar1 - iVar6) + -1;
          }
        }
        iVar6 = (int)puVar9 - (int)param_2 >> 2;
      }
      else {
        iVar6 = param_5 / 2;
        puVar9 = param_2 + iVar6;
        iVar10 = (int)param_2 - (int)param_1 >> 2;
        puVar8 = param_1;
        while (iVar1 = iVar10, 0 < iVar1) {
          iVar10 = iVar1 / 2;
          iVar5 = (*param_6)(*puVar9,puVar8[iVar10]);
          if (iVar5 == 0) {
            puVar8 = puVar8 + iVar10 + 1;
            iVar10 = (iVar1 - iVar10) + -1;
          }
        }
        iVar10 = (int)puVar8 - (int)param_1 >> 2;
      }
      if (puVar8 != param_2 && param_2 != puVar9) {
        iVar1 = (int)param_2 - (int)puVar8 >> 2;
        iVar5 = (int)puVar9 - (int)puVar8 >> 2;
        iVar2 = iVar1;
        while (iVar2 != 0) {
          fn_00300f74(iVar5,iVar2);
          iVar5 = iVar2;
          iVar2 = extraout_r1;
        }
        while (iVar5 != 0) {
          iVar5 = iVar5 + -1;
          puVar7 = puVar8 + iVar5;
          uVar11 = *puVar7;
          puVar3 = puVar7;
          puVar4 = puVar7 + iVar1;
          while (puVar4 != puVar7) {
            *puVar3 = *puVar4;
            iVar2 = (int)puVar9 - (int)puVar4 >> 2;
            puVar3 = puVar4;
            if (iVar1 < iVar2) {
              puVar4 = puVar4 + iVar1;
            }
            else {
              puVar4 = puVar8 + (iVar1 - iVar2);
            }
          }
          *puVar3 = uVar11;
        }
      }
      fn_007b6ef4(param_1,puVar8,puVar8 + iVar6,iVar10,iVar6,param_6);
      fn_007b6ef4(puVar8 + iVar6,puVar9,param_3,param_4 - iVar10,param_5 - iVar6,param_6);
      return;
    }
    iVar6 = (*param_6)(*param_2,*param_1);
    if (iVar6 != 0) {
      uVar11 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar11;
    }
  }
  return;
}


