#include "0060167c_00601bc4ba.h"



void fn_00601b0c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined1 *)(param_1 + 0x14) = 1;
  return;
}



uint * fn_006019ac(uint *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint local_28;
  uint local_24 [2];
  
  puVar9 = (undefined4 *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_28 = 3;
  uVar10 = (int)(param_1[1] - *param_1) >> 2;
  local_24[0] = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
  if (local_24[0] < uVar10 + 0x20) {
    local_24[0] = uVar10 + 0x20;
  }
  puVar1 = local_24;
  if (local_24[0] < 4) {
    puVar1 = &local_28;
  }
  uVar10 = *puVar1;
  puVar2 = (undefined4 *)fn_00100fc6(uVar10 << 2,0);
  puVar7 = puVar2;
  for (puVar5 = (undefined4 *)*param_1; puVar5 != (undefined4 *)0x0; puVar5 = puVar5 + 1) {
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = *puVar5;
    }
    puVar7 = puVar7 + 1;
  }
  iVar6 = 3;
  puVar5 = (undefined4 *)((-*param_1 & 0xfffffffc) + (int)puVar2);
  do {
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = 0;
    }
    iVar6 = iVar6 + -1;
    puVar5 = puVar5 + 1;
  } while (iVar6 != 0);
  puVar7 = (undefined4 *)param_1[1];
  puVar5 = puVar2 + ((int)-*param_1 >> 2) + 3;
  if (puVar7 != (undefined4 *)0x0) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar9;
      }
      puVar9 = puVar9 + 1;
      puVar5 = puVar5 + 1;
    } while (puVar9 != puVar7);
  }
  uVar3 = *param_1;
  uVar8 = param_1[1];
  uVar4 = uVar3;
  if (uVar8 < uVar3) {
    do {
      uVar4 = uVar4 + 4;
    } while (uVar4 != uVar8);
  }
  fn_001008c4(uVar3,(int)(param_1[2] - uVar3) >> 2,0);
  param_1[2] = (uint)(puVar2 + uVar10);
  param_1[1] = (uint)(puVar2 + ((int)(uVar8 - uVar3) >> 2) + 3);
  *param_1 = (uint)puVar2;
  return param_1;
}



void fn_006018e8(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_0084ec90;
  uVar1 = param_1[0x43];
  uVar2 = uVar1;
  if ((uint)param_1[0x44] < uVar1) {
    do {
      uVar2 = uVar2 + 8;
    } while (uVar2 != param_1[0x44]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x45] - uVar1) >> 3,0);
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_006018ac(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = &DAT_0084ec90;
  fn_00301f50(puVar1 + 2,0x104);
  puVar1[0x43] = 0;
  puVar1[0x44] = 0;
  puVar1[0x45] = 0;
  return puVar1;
}


