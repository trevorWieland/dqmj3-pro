#include "007a5948_007a5ce0ba.h"



void fn_007a5bf0(undefined4 *param_1,undefined4 *param_2,code *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  
  puVar5 = param_1;
  if (param_1 == param_2) {
    return;
  }
  while (puVar1 = puVar5 + 1, puVar1 != param_2) {
    uVar7 = *puVar1;
    iVar4 = (*param_3)(uVar7,*param_1);
    if (iVar4 == 0) {
      iVar4 = (*param_3)(uVar7,*puVar5);
      puVar3 = puVar1;
      while (puVar2 = puVar5, iVar4 != 0) {
        *puVar3 = *puVar2;
        iVar4 = (*param_3)(uVar7,puVar2[-1]);
        puVar5 = puVar2 + -1;
        puVar3 = puVar2;
      }
      *puVar3 = uVar7;
      puVar5 = puVar1;
    }
    else {
      puVar5 = puVar5 + 2;
      puVar3 = puVar1;
      if (param_1 < puVar1) {
        if (0 < (int)puVar1 - (int)param_1) {
          iVar4 = (int)puVar1 - (int)param_1 >> 2;
          iVar6 = 0;
          do {
            iVar4 = iVar4 + -1;
            puVar5[iVar6 + -1] = puVar1[iVar6 + -1];
            iVar6 = iVar6 + -1;
          } while (iVar4 != 0);
        }
      }
      else {
        while (param_1 != puVar3) {
          puVar5 = puVar5 + -1;
          *puVar5 = puVar3[-1];
          puVar3 = puVar3 + -1;
        }
      }
      *param_1 = uVar7;
      puVar5 = puVar1;
    }
  }
  return;
}


