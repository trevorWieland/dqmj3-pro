#include "007a5948_007a5ce0a.h"



void fn_007a5a9c(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  puVar2 = param_1;
  if (param_1 == param_2) {
    return;
  }
  while (puVar2 = puVar2 + 3, puVar2 != param_2) {
    iVar6 = puVar2[1];
    uVar9 = *puVar2;
    uVar10 = puVar2[2];
    if (iVar6 < (int)param_1[1]) {
      puVar5 = puVar2 + 3;
      puVar3 = puVar2;
      if (param_1 < puVar2) {
        if (0 < (int)puVar2 - (int)param_1) {
          uVar1 = ((int)puVar2 - (int)param_1) / 0xc;
          if ((uVar1 & 1) != 0) {
            puVar3 = puVar2 + -3;
            puVar2[2] = puVar2[-1];
            *puVar2 = *puVar3;
            puVar2[1] = puVar2[-2];
            puVar5 = puVar2;
          }
          for (iVar4 = (int)uVar1 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
            uVar7 = puVar3[-3];
            uVar8 = puVar3[-2];
            puVar5[-1] = puVar3[-1];
            puVar5[-3] = uVar7;
            puVar5[-2] = uVar8;
            uVar7 = puVar3[-6];
            uVar8 = puVar3[-5];
            puVar5[-4] = puVar3[-4];
            puVar5[-6] = uVar7;
            puVar5[-5] = uVar8;
            puVar3 = puVar3 + -6;
            puVar5 = puVar5 + -6;
          }
        }
      }
      else {
        while (param_1 != puVar3) {
          uVar7 = puVar3[-3];
          uVar8 = puVar3[-2];
          puVar5[-1] = puVar3[-1];
          puVar5[-3] = uVar7;
          puVar5[-2] = uVar8;
          puVar5 = puVar5 + -3;
          puVar3 = puVar3 + -3;
        }
      }
      *param_1 = uVar9;
      param_1[1] = iVar6;
      param_1[2] = uVar10;
    }
    else {
      puVar5 = puVar2;
      while( true ) {
        if ((int)puVar5[-2] <= iVar6) break;
        *puVar5 = puVar5[-3];
        puVar5[1] = puVar5[-2];
        puVar5[2] = puVar5[-1];
        puVar5 = puVar5 + -3;
      }
      *puVar5 = uVar9;
      puVar5[1] = iVar6;
      puVar5[2] = uVar10;
    }
  }
  return;
}



void fn_007a5948(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  puVar2 = param_1;
  if (param_1 == param_2) {
    return;
  }
  while (puVar2 = puVar2 + 3, puVar2 != param_2) {
    iVar6 = puVar2[1];
    uVar9 = *puVar2;
    uVar10 = puVar2[2];
    if ((int)param_1[1] < iVar6) {
      puVar5 = puVar2 + 3;
      puVar3 = puVar2;
      if (param_1 < puVar2) {
        if (0 < (int)puVar2 - (int)param_1) {
          uVar1 = ((int)puVar2 - (int)param_1) / 0xc;
          if ((uVar1 & 1) != 0) {
            puVar3 = puVar2 + -3;
            puVar2[2] = puVar2[-1];
            *puVar2 = *puVar3;
            puVar2[1] = puVar2[-2];
            puVar5 = puVar2;
          }
          for (iVar4 = (int)uVar1 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
            uVar7 = puVar3[-3];
            uVar8 = puVar3[-2];
            puVar5[-1] = puVar3[-1];
            puVar5[-3] = uVar7;
            puVar5[-2] = uVar8;
            uVar7 = puVar3[-6];
            uVar8 = puVar3[-5];
            puVar5[-4] = puVar3[-4];
            puVar5[-6] = uVar7;
            puVar5[-5] = uVar8;
            puVar3 = puVar3 + -6;
            puVar5 = puVar5 + -6;
          }
        }
      }
      else {
        while (param_1 != puVar3) {
          uVar7 = puVar3[-3];
          uVar8 = puVar3[-2];
          puVar5[-1] = puVar3[-1];
          puVar5[-3] = uVar7;
          puVar5[-2] = uVar8;
          puVar5 = puVar5 + -3;
          puVar3 = puVar3 + -3;
        }
      }
      *param_1 = uVar9;
      param_1[1] = iVar6;
      param_1[2] = uVar10;
    }
    else {
      puVar5 = puVar2;
      while( true ) {
        if (iVar6 <= (int)puVar5[-2]) break;
        *puVar5 = puVar5[-3];
        puVar5[1] = puVar5[-2];
        puVar5[2] = puVar5[-1];
        puVar5 = puVar5 + -3;
      }
      *puVar5 = uVar9;
      puVar5[1] = iVar6;
      puVar5[2] = uVar10;
    }
  }
  return;
}


