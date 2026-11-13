#include "00584c08_00585f04aa.h"



void fn_00584ef0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x18,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00584f20(iVar1,param_1);
  return;
}



void fn_00584e3c(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_00842fb4;
  fn_005848d4(param_1);
  param_1[8] = 0;
  uVar1 = param_1[10];
  uVar2 = uVar1;
  if ((uint)param_1[0xb] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0xb]);
  }
  fn_001008c4(uVar1,(int)(param_1[0xc] - uVar1) >> 2,0);
  uVar1 = param_1[4];
  uVar2 = uVar1;
  if ((uint)param_1[5] <= uVar1) {
    for (; uVar2 != param_1[5]; uVar2 = uVar2 + 8) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[6] - uVar1) >> 3,0);
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_00584c08(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 uVar10;
  uint local_20;
  uint local_1c [2];
  
  param_1[3] = 0;
  *param_1 = &DAT_00842fb4;
  param_1[1] = param_2;
  param_1[2] = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  local_20 = 0x20;
  puVar8 = param_1 + 4;
  if ((uint)((int)(param_1[6] - param_1[4]) >> 3) < 0x20) {
    uVar9 = (int)(param_1[5] - param_1[4]) >> 3;
    local_1c[0] = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
    if (local_1c[0] < uVar9 + 0x20) {
      local_1c[0] = uVar9 + 0x20;
    }
    puVar5 = local_1c;
    if (local_1c[0] < 0x21) {
      puVar5 = &local_20;
    }
    uVar9 = *puVar5;
    puVar1 = (undefined4 *)fn_00100fc6(uVar9 << 3,0);
    puVar6 = (undefined4 *)param_1[5];
    puVar2 = puVar1;
    for (puVar4 = (undefined4 *)*puVar8; puVar4 != puVar6; puVar4 = puVar4 + 2) {
      if (puVar2 != (undefined4 *)0x0) {
        uVar10 = puVar4[1];
        *puVar2 = *puVar4;
        puVar2[1] = uVar10;
      }
      puVar2 = puVar2 + 2;
    }
    uVar7 = *puVar8;
    uVar3 = uVar7;
    if ((uint)param_1[5] < uVar7) {
      do {
        uVar3 = uVar3 + 8;
      } while (uVar3 != param_1[5]);
    }
    fn_001008c4(uVar7,(int)(param_1[6] - uVar7) >> 3,0);
    uVar3 = *puVar8;
    param_1[4] = puVar1;
    param_1[5] = (param_1[5] - uVar3 & 0xfffffff8) + (int)puVar1;
    param_1[6] = puVar1 + uVar9 * 2;
  }
  local_20 = 8;
  puVar8 = param_1 + 10;
  if ((uint)((int)(param_1[0xc] - param_1[10]) >> 2) < 8) {
    uVar9 = (int)(param_1[0xb] - param_1[10]) >> 2;
    local_1c[0] = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
    if (local_1c[0] < uVar9 + 0x20) {
      local_1c[0] = uVar9 + 0x20;
    }
    puVar5 = local_1c;
    if (local_1c[0] < 9) {
      puVar5 = &local_20;
    }
    uVar9 = *puVar5;
    puVar1 = (undefined4 *)fn_00100fc6(uVar9 << 2,0);
    puVar6 = (undefined4 *)param_1[0xb];
    puVar2 = puVar1;
    for (puVar4 = (undefined4 *)*puVar8; puVar4 != puVar6; puVar4 = puVar4 + 1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar4;
      }
      puVar2 = puVar2 + 1;
    }
    uVar7 = *puVar8;
    uVar3 = uVar7;
    if ((uint)param_1[0xb] < uVar7) {
      do {
        uVar3 = uVar3 + 4;
      } while (uVar3 != param_1[0xb]);
    }
    fn_001008c4(uVar7,(int)(param_1[0xc] - uVar7) >> 2,0);
    uVar3 = *puVar8;
    param_1[10] = puVar1;
    param_1[0xb] = (param_1[0xb] - uVar3 & 0xfffffffc) + (int)puVar1;
    param_1[0xc] = puVar1 + uVar9;
  }
  return param_1;
}


