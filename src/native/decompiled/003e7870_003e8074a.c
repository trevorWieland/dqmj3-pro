#include "003e7870_003e8074a.h"



void fn_003e7dec(int param_1,undefined4 param_2)

{
  fn_0044a960();
  *(undefined4 *)(*(int *)(param_1 + 0x164) + 8) = param_2;
  return;
}



void fn_003e78d4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 *local_48;
  uint local_30;
  uint auStack_2c [2];
  
  puVar8 = *(undefined4 **)(param_1 + 0x18);
  if (puVar8 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar8)(puVar8);
    do {
      if (puVar1 == &DAT_008968a8) goto LAB_003e791c;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar8 = (undefined4 *)0x0;
LAB_003e791c:
  *(undefined4 **)(param_1 + 0x164) = puVar8;
  fn_0044a90c(param_1);
  iVar2 = fn_006b876c(*(undefined4 *)(DAT_00897804 + 0x38));
  fn_002c330c(&local_64);
  local_64 = DAT_00896888;
  local_60 = DAT_0089688c;
  uStack_5c = 9;
  if (iVar2 == *(int *)(*(int *)(param_1 + 0x164) + 0x18)) {
    local_58 = *(undefined4 *)(*(int *)(param_1 + 0x164) + 8);
    local_54 = *(undefined4 *)(*(int *)(param_1 + 0x164) + 0xc);
  }
  else {
    local_58 = 0;
    local_54 = 0;
  }
  local_50 = iVar2;
  uVar3 = fn_00100b58(&DAT_003e7c6c);
  puVar8 = &DAT_008f9ce8;
  if (uVar3 == 0) {
    piVar4 = local_48 + -3;
    iVar2 = *piVar4;
    if (iVar2 == 0) {
      local_48[-1] = 0;
      *(undefined2 *)local_48 = 0;
    }
    else {
      if ((local_48 != &DAT_008f9cf4) &&
         ((iVar2 == -1 || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar2 + -1, iVar2 == 0)))))) {
        fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
      }
      local_48 = &DAT_008f9cf4;
    }
  }
  else {
    if ((local_48[-3] + 1 < 2) && (uVar3 <= (uint)local_48[-2])) {
      bVar9 = (undefined4 *)((int)&DAT_003e7c68 + 3) < local_48;
      if (local_48 < &UNK_003e7c6d) {
        bVar9 = (undefined2 *)((int)local_48 + local_48[-1] * 2) < &UNK_003e7c6d;
      }
      if (bVar9) {
        fn_001006ac(local_48,&DAT_003e7c6c,uVar3);
        local_48[-1] = uVar3;
        *(undefined2 *)((int)local_48 + uVar3 * 2) = 0;
        goto LAB_003e7ba4;
      }
    }
    uVar5 = local_48[-1];
    local_30 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
    if (local_30 < uVar5 + 0x80) {
      local_30 = uVar5 + 0x80;
    }
    puVar6 = auStack_2c;
    if (uVar3 <= local_30) {
      puVar6 = &local_30;
    }
    auStack_2c[0] = uVar3;
    uVar5 = *puVar6;
    if (0xfffffff1 < uVar5) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar5,0xfffffff1);
    }
    if (uVar5 < uVar3) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar3,uVar5);
    }
    if (uVar5 != 0) {
      puVar8 = (undefined4 *)fn_00100fc6((uVar5 + 8) * 2,0);
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
      }
      puVar7 = (undefined2 *)((int)puVar8 + uVar3 * 2 + 0xc);
      *puVar8 = 0;
      puVar8[1] = uVar5;
      puVar8[2] = uVar3;
      if (puVar7 != (undefined2 *)0x0) {
        *puVar7 = 0;
      }
    }
    fn_00301a9c(puVar8 + 3,&DAT_003e7c6c,uVar3 << 1);
    if (local_48 != &DAT_008f9cf4) {
      piVar4 = local_48 + -3;
      iVar2 = *piVar4;
      if ((iVar2 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar2 + -1, iVar2 == 0)))) {
        fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
      }
    }
    local_48 = puVar8 + 3;
  }
LAB_003e7ba4:
  fn_002c29a0(param_1,&local_64);
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_003e78a0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_006ba274();
  fn_0039e5e0(param_1);
  fn_0039e7c4(param_1,uVar1);
  fn_0039f458(param_1,uVar1);
  return;
}



void fn_003e7870(int param_1)

{
  fn_0039f2d4();
  fn_0039e774(param_1);
  fn_0039e5ac(param_1);
  fn_002c4100(param_1);
  *(undefined4 *)(param_1 + 0x158) = 0;
  return;
}


