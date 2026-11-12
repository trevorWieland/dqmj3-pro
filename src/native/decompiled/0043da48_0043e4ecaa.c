#include "0043da48_0043e4ecaa.h"



void fn_0043dea4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc0,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0043e3c8(iVar1,param_1);
  return;
}



undefined4 fn_0043da48(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  bool bVar9;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  uint local_30;
  uint auStack_2c [2];
  
  puVar8 = *(undefined4 **)(param_1 + 0x18);
  if (puVar8 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar8)(puVar8);
    do {
      if (puVar1 == &DAT_00893b10) goto LAB_0043da90;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar8 = (undefined4 *)0x0;
LAB_0043da90:
  *(undefined4 **)(param_1 + 0xb0) = puVar8;
  puVar8 = (undefined4 *)fn_001f74d8(param_1,0xe8);
  if (puVar8 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar8)(puVar8);
    do {
      if (puVar1 == &DAT_00896a84) goto LAB_0043dad4;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar8 = (undefined4 *)0x0;
LAB_0043dad4:
  *(undefined4 **)(param_1 + 0xb4) = puVar8;
  fn_002c330c(&local_64);
  local_64 = DAT_008966c4;
  local_60 = DAT_008966c8;
  uStack_5c = 4;
  local_58 = *(undefined4 *)(*(int *)(param_1 + 0xb0) + 8);
  puVar8 = (undefined4 *)fn_0022f584((char *)&DAT_0043de78,0);
  uVar2 = fn_00100b58();
  puVar1 = &DAT_008f9ce8;
  if (uVar2 == 0) {
    piVar3 = local_48 + -3;
    iVar7 = *piVar3;
    if (iVar7 != 0) {
      if ((local_48 != &DAT_008f9cf4) &&
         ((iVar7 == -1 || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))))) {
        fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
      }
      local_48 = &DAT_008f9cf4;
      goto LAB_0043dd24;
    }
    local_48[-1] = 0;
    puVar8 = local_48;
  }
  else {
    if ((1 < local_48[-3] + 1) || ((uint)local_48[-2] < uVar2)) {
LAB_0043db74:
      uVar4 = local_48[-1];
      local_30 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
      if (local_30 < uVar4 + 0x80) {
        local_30 = uVar4 + 0x80;
      }
      puVar5 = auStack_2c;
      if (uVar2 <= local_30) {
        puVar5 = &local_30;
      }
      auStack_2c[0] = uVar2;
      uVar4 = *puVar5;
      if (0xfffffff1 < uVar4) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar4,0xfffffff1);
      }
      if (uVar4 < uVar2) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar4);
      }
      if (uVar4 != 0) {
        puVar1 = (undefined4 *)fn_00100fc6((uVar4 + 8) * 2,0);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
        }
        *puVar1 = 0;
        puVar1[1] = uVar4;
        puVar1[2] = uVar2;
        puVar6 = (undefined2 *)((int)puVar1 + uVar2 * 2 + 0xc);
        if (puVar6 != (undefined2 *)0x0) {
          *puVar6 = 0;
        }
      }
      fn_00301a9c(puVar1 + 3,puVar8,uVar2 << 1);
      if (local_48 != &DAT_008f9cf4) {
        piVar3 = local_48 + -3;
        iVar7 = *piVar3;
        if ((iVar7 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))) {
          fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
        }
      }
      local_48 = puVar1 + 3;
      goto LAB_0043dd24;
    }
    if (puVar8 != (undefined4 *)0x0) {
      bVar9 = puVar8 <= local_48;
      if (local_48 <= puVar8) {
        bVar9 = (undefined4 *)((int)local_48 + local_48[-1] * 2) <= puVar8;
      }
      if (!bVar9) goto LAB_0043db74;
    }
    fn_001006ac(local_48,puVar8,uVar2);
    local_48[-1] = uVar2;
    puVar8 = (undefined4 *)((int)local_48 + uVar2 * 2);
  }
  *(undefined2 *)puVar8 = 0;
LAB_0043dd24:
  fn_002c29a0(param_1,&local_64);
  fn_0029376c(*(undefined4 *)(param_1 + 0xb4));
  fn_00689efc(param_1,0xe8,0);
  if (local_3c != &DAT_008f9cf4) {
    piVar3 = local_3c + -3;
    iVar7 = *piVar3;
    if ((iVar7 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))) {
      fn_001008c4(local_3c + -3,local_3c[-2] + 8,0);
    }
  }
  if (local_40 != &DAT_008f9cf4) {
    piVar3 = local_40 + -3;
    iVar7 = *piVar3;
    if ((iVar7 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))) {
      fn_001008c4(local_40 + -3,local_40[-2] + 8,0);
    }
  }
  if (local_44 != &DAT_008f9cf4) {
    piVar3 = local_44 + -3;
    iVar7 = *piVar3;
    if ((iVar7 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))) {
      fn_001008c4(local_44 + -3,local_44[-2] + 8,0);
    }
  }
  if (local_48 != &DAT_008f9cf4) {
    piVar3 = local_48 + -3;
    iVar7 = *piVar3;
    if ((iVar7 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))) {
      fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
    }
  }
  return 1;
}


