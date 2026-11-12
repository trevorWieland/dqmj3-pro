#include "00320704_00321598b.h"



void fn_00321598(int param_1)

{
  *(undefined1 *)(param_1 + 8) = 1;
  fn_00147974(param_1 + 0xc,&DAT_00321610);
  fn_00147974(param_1 + 0x10,&DAT_00321610);
  fn_00147974(param_1 + 0x14,&DAT_00321610);
  fn_00147974(param_1 + 0x18,&DAT_00321610);
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  return;
}



void fn_00321584(int param_1,undefined1 param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 0x3d) = param_2;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  *(undefined4 *)(param_1 + 0x40) = param_3;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00321318) */

undefined4 fn_003212ec(int param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  undefined2 *puVar4;
  undefined4 **ppuVar5;
  undefined4 *puVar6;
  int iVar7;
  uint local_34;
  uint local_30;
  undefined4 *local_2c;
  undefined2 local_28 [2];
  
  local_28[0] = 0;
  local_34 = 0;
  local_30 = 0;
  fn_00177c88((int *)(param_1 + 0x18),0,*(undefined4 *)(*(int *)(param_1 + 0x18) + -4),local_28,0);
  ppuVar5 = (undefined4 **)(param_1 + 0x18);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x10) + -4);
  if (uVar1 < param_2) {
    fn_002ff628(9,&DAT_008c75f9,&DAT_008c75f9,param_2,uVar1);
  }
  iVar7 = *(int *)(param_1 + 0x10) + param_2 * 2;
  param_2 = *(int *)(*(int *)(param_1 + 0x10) + -4) - param_2;
  if (1 < param_2) {
    param_2 = 1;
  }
  if (0xfffffff1 < param_2) {
    fn_002ff628(8,&DAT_008c7612,&DAT_008c7612,param_2,0xfffffff1);
  }
  puVar6 = &DAT_008f9ce8;
  local_2c = &DAT_008f9cf4;
  if (param_2 != 0) {
    puVar3 = &local_30;
    if (0x20 < param_2) {
      puVar3 = &local_34;
    }
    local_34 = param_2;
    local_30 = 0x20;
    uVar1 = *puVar3;
    if (0xfffffff1 < uVar1) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar1,0xfffffff1);
    }
    if (uVar1 < param_2) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,param_2,uVar1);
    }
    if (uVar1 != 0) {
      puVar6 = (undefined4 *)fn_00100fc6((uVar1 + 8) * 2,0);
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
      }
      puVar4 = (undefined2 *)((int)puVar6 + param_2 * 2 + 0xc);
      *puVar6 = 0;
      puVar6[1] = uVar1;
      puVar6[2] = param_2;
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = 0;
      }
    }
    local_2c = puVar6 + 3;
  }
  if (iVar7 != 0) {
    fn_00301a9c(local_2c,iVar7,param_2 << 1);
  }
  piVar2 = local_2c + -3;
  if (*piVar2 + 1 == 0) {
    if (ppuVar5 != &local_2c) {
      local_30 = local_2c[-1];
      local_34 = 0;
      fn_00177c88(ppuVar5,0,(*ppuVar5)[-1],local_2c,local_30);
    }
  }
  else {
    if (piVar2 != &DAT_008f9ce8) {
      *piVar2 = *piVar2 + 1;
    }
    if (*ppuVar5 != &DAT_008f9cf4) {
      piVar2 = *ppuVar5 + -3;
      iVar7 = *piVar2;
      if ((iVar7 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar7 + -1, iVar7 == 0)))) {
        fn_001008c4(*ppuVar5 + -3,(*ppuVar5)[-2] + 8,0);
      }
    }
    *ppuVar5 = local_2c;
  }
  if (local_2c != &DAT_008f9cf4) {
    piVar2 = local_2c + -3;
    iVar7 = *piVar2;
    if ((iVar7 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar7 + -1, iVar7 == 0)))) {
      fn_001008c4(local_2c + -3,local_2c[-2] + 8,0);
    }
  }
  return *(undefined4 *)(param_1 + 0x18);
}



void fn_003212dc(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  *(undefined1 *)(param_1 + 0x38) = param_4;
  return;
}



void fn_003212cc(int param_1)

{
  fn_00147974(param_1 + 0xc);
  return;
}



void fn_003212bc(int param_1)

{
  fn_00147974(param_1 + 0x10);
  return;
}



void fn_003212ac(int param_1)

{
  fn_00147974(param_1 + 0x14);
  return;
}


