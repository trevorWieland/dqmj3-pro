#include "00790dd0_00790dd0.h"



void fn_00790dd0(int *param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  uint uVar8;
  int iVar9;
  
  puVar7 = (undefined2 *)param_1[1];
  uVar6 = ((int)puVar7 - *param_1) / 0x430;
  if (uVar6 < (uint)((param_1[2] - *param_1) / 0x430)) {
    param_1[1] = (int)(puVar7 + 0x218);
    if (puVar7 != (undefined2 *)0x0) {
      fn_003d5d00(puVar7,puVar7 + -0x218);
    }
    puVar1 = puVar7 + -0x218;
    while (param_2 != puVar1) {
      puVar7[-0x218] = puVar1[-0x218];
      puVar7[-0x217] = puVar1[-0x217];
      fn_0017821c(puVar7 + -0x214,puVar1 + -0x214,0x418);
      fn_0079e834(puVar7 + -8,puVar1 + -8);
      puVar7 = puVar7 + -0x218;
      puVar1 = puVar1 + -0x218;
    }
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    fn_0017821c(param_2 + 4,param_3 + 4,0x418);
    fn_0079e834(param_2 + 0x210,param_3 + 0x210);
    return;
  }
  uVar8 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
  if (uVar8 < uVar6 + 0x20) {
    uVar8 = uVar6 + 0x20;
  }
  iVar2 = fn_00100fc6(uVar8 * 0x430,0);
  iVar3 = iVar2;
  for (puVar7 = (undefined2 *)*param_1; puVar7 != param_2; puVar7 = puVar7 + 0x218) {
    if (iVar3 != 0) {
      fn_003d5d00(iVar3,puVar7);
    }
    iVar3 = iVar3 + 0x430;
  }
  iVar3 = iVar2 + (((int)param_2 - *param_1) / 0x430) * 0x430;
  if (iVar3 != 0) {
    fn_003d5d00(iVar3,param_3);
  }
  puVar7 = (undefined2 *)param_1[1];
  iVar3 = iVar2 + (((int)param_2 - *param_1) / 0x430) * 0x430;
  for (; param_2 != puVar7; param_2 = param_2 + 0x218) {
    iVar3 = iVar3 + 0x430;
    if (iVar3 != 0) {
      fn_003d5d00(iVar3,param_2);
    }
  }
  iVar3 = *param_1;
  iVar9 = param_1[1];
  iVar4 = iVar9 - iVar3;
  for (; iVar3 != iVar9; iVar3 = iVar3 + 0x430) {
    uVar5 = *(uint *)(iVar3 + 0x420);
    uVar6 = uVar5;
    if (*(uint *)(iVar3 + 0x424) < uVar5) {
      do {
        uVar6 = uVar6 + 2;
      } while (uVar6 != *(uint *)(iVar3 + 0x424));
    }
    fn_001008c4(uVar5,(int)(*(int *)(iVar3 + 0x428) - uVar5) >> 1,0);
  }
  fn_001008c4(*param_1,(param_1[2] - *param_1) / 0x430,0);
  *param_1 = iVar2;
  param_1[1] = iVar2 + (iVar4 / 0x430) * 0x430 + 0x430;
  param_1[2] = iVar2 + uVar8 * 0x430;
  return;
}


