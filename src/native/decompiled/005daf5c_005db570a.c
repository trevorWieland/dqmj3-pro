#include "005daf5c_005db570a.h"



void fn_005db3d0(int param_1,undefined4 param_2)

{
  fn_0017821c(param_1 + 0x8e4,param_2,0x8d8);
  return;
}



bool fn_005db3b4(int param_1)

{
  return *(int *)(param_1 + 0x11c0) - 1U < 8;
}



void fn_005db3a4(int param_1,undefined4 param_2)

{
  fn_0017821c(param_1 + 0xc,param_2,0x8d8);
  return;
}



void fn_005db2c8(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_0084d1d8;
  uVar1 = param_1[0xe];
  uVar2 = uVar1;
  if ((uint)param_1[0xf] < uVar1) {
    do {
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_1[0xf]);
  }
  fn_001008c4(uVar1,param_1[0x10] - uVar1,0);
  uVar1 = param_1[0xb];
  uVar2 = uVar1;
  if ((uint)param_1[0xc] < uVar1) {
    do {
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_1[0xc]);
  }
  fn_001008c4(uVar1,param_1[0xd] - uVar1,0);
  uVar1 = param_1[8];
  uVar2 = uVar1;
  if ((uint)param_1[9] <= uVar1) {
    for (; uVar2 != param_1[9]; uVar2 = uVar2 + 1) {
    }
  }
  fn_001008c4(uVar1,param_1[10] - uVar1,0);
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_005dafb8(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint *puVar9;
  undefined1 *puVar10;
  uint *puVar11;
  uint local_28;
  uint local_24 [2];
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = &DAT_0084d1d8;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  fn_00788fb0(puVar1 + 8);
  fn_00788fb0(puVar1 + 0xb);
  fn_00788fb0(puVar1 + 0xe);
  uVar2 = fn_006a7ad8();
  local_28 = uVar2;
  puVar11 = puVar1 + 8;
  if ((uint)(puVar1[10] - puVar1[8]) < uVar2) {
    uVar7 = puVar1[9] - puVar1[8];
    local_24[0] = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
    if (local_24[0] < uVar7 + 0x20) {
      local_24[0] = uVar7 + 0x20;
    }
    puVar9 = local_24;
    if (local_24[0] <= uVar2) {
      puVar9 = &local_28;
    }
    uVar7 = *puVar9;
    puVar3 = (undefined1 *)fn_00100fc6(uVar7,0);
    puVar10 = (undefined1 *)puVar1[9];
    puVar4 = puVar3;
    for (puVar8 = (undefined1 *)*puVar11; puVar8 != puVar10; puVar8 = puVar8 + 1) {
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = *puVar8;
      }
      puVar4 = puVar4 + 1;
    }
    uVar5 = *puVar11;
    uVar6 = uVar5;
    if ((uint)puVar1[9] < uVar5) {
      do {
        uVar6 = uVar6 + 1;
      } while (uVar6 != puVar1[9]);
    }
    fn_001008c4(uVar5,puVar1[10] - uVar5,0);
    uVar6 = *puVar11;
    puVar1[8] = puVar3;
    puVar1[9] = puVar3 + (puVar1[9] - uVar6);
    puVar1[10] = puVar3 + uVar7;
  }
  puVar11 = puVar1 + 0xb;
  local_28 = uVar2;
  if ((uint)(puVar1[0xd] - puVar1[0xb]) < uVar2) {
    uVar7 = puVar1[0xc] - puVar1[0xb];
    local_24[0] = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
    if (local_24[0] < uVar7 + 0x20) {
      local_24[0] = uVar7 + 0x20;
    }
    puVar9 = local_24;
    if (local_24[0] <= uVar2) {
      puVar9 = &local_28;
    }
    uVar7 = *puVar9;
    puVar3 = (undefined1 *)fn_00100fc6(uVar7,0);
    puVar10 = (undefined1 *)puVar1[0xc];
    puVar4 = puVar3;
    for (puVar8 = (undefined1 *)*puVar11; puVar8 != puVar10; puVar8 = puVar8 + 1) {
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = *puVar8;
      }
      puVar4 = puVar4 + 1;
    }
    uVar5 = *puVar11;
    uVar6 = uVar5;
    if ((uint)puVar1[0xc] < uVar5) {
      do {
        uVar6 = uVar6 + 1;
      } while (uVar6 != puVar1[0xc]);
    }
    fn_001008c4(uVar5,puVar1[0xd] - uVar5,0);
    uVar6 = *puVar11;
    puVar1[0xb] = puVar3;
    puVar1[0xc] = puVar3 + (puVar1[0xc] - uVar6);
    puVar1[0xd] = puVar3 + uVar7;
  }
  puVar11 = puVar1 + 0xe;
  local_28 = uVar2;
  if ((uint)(puVar1[0x10] - puVar1[0xe]) < uVar2) {
    uVar7 = puVar1[0xf] - puVar1[0xe];
    local_24[0] = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
    if (local_24[0] < uVar7 + 0x20) {
      local_24[0] = uVar7 + 0x20;
    }
    puVar9 = local_24;
    if (local_24[0] <= uVar2) {
      puVar9 = &local_28;
    }
    uVar2 = *puVar9;
    puVar3 = (undefined1 *)fn_00100fc6(uVar2,0);
    puVar10 = (undefined1 *)puVar1[0xf];
    puVar4 = puVar3;
    for (puVar8 = (undefined1 *)*puVar11; puVar8 != puVar10; puVar8 = puVar8 + 1) {
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = *puVar8;
      }
      puVar4 = puVar4 + 1;
    }
    uVar6 = *puVar11;
    uVar7 = uVar6;
    if ((uint)puVar1[0xf] < uVar6) {
      do {
        uVar7 = uVar7 + 1;
      } while (uVar7 != puVar1[0xf]);
    }
    fn_001008c4(uVar6,puVar1[0x10] - uVar6,0);
    uVar7 = *puVar11;
    *puVar11 = (uint)puVar3;
    puVar1[0xf] = puVar3 + (puVar1[0xf] - uVar7);
    puVar1[0x10] = puVar3 + uVar2;
  }
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1[3] = 0;
  *(undefined1 *)((int)puVar1 + 9) = 0;
  puVar1[4] = 0;
  *(undefined1 *)((int)puVar1 + 10) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined1 *)((int)puVar1 + 0xb) = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  *(undefined1 *)((int)puVar1 + 0x1d) = 0;
  return puVar1;
}



void fn_005dafac(int param_1,int param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + param_2 + 8) = param_3;
  return;
}



void fn_005daf5c(int param_1)

{
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  fn_00788fb0(param_1 + 0x20);
  fn_00788fb0(param_1 + 0x2c);
  fn_00788fb0(param_1 + 0x38);
  return;
}


