#include "00400f54_00401b70ba.h"



undefined4 fn_00401510(void)

{
  return 0xffffffff;
}



undefined4 fn_0040150c(void)

{
  return 0xffffffff;
}



undefined4 fn_00401050(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  bool bVar10;
  bool bVar11;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined1 local_37;
  uint local_30;
  uint auStack_2c [2];
  
  puVar9 = *(undefined4 **)(param_1 + 0x18);
  if (puVar9 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar9)(puVar9);
    do {
      if (puVar1 == &DAT_008968e0) goto LAB_0040109c;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar9 = (undefined4 *)0x0;
LAB_0040109c:
  *(undefined4 **)(param_1 + 0xb0) = puVar9;
  puVar9 = (undefined4 *)fn_001f74d8(param_1,0xe7);
  if (puVar9 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar9)(puVar9);
    do {
      if (puVar1 == &DAT_00896a84) goto LAB_004010e0;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar9 = (undefined4 *)0x0;
LAB_004010e0:
  *(undefined4 **)(param_1 + 0xb4) = puVar9;
  fn_002c330c(&local_64);
  local_64 = DAT_008968cc;
  local_60 = DAT_008968d0;
  local_5c = fn_006e8248(*(undefined4 *)(param_1 + 0xb0));
  uStack_58 = 0;
  local_37 = 1;
  puVar9 = (undefined4 *)fn_0022f750((char *)&DAT_004014b4);
  uVar2 = fn_00100b58();
  puVar1 = &DAT_008f9ce8;
  if (uVar2 == 0) {
    piVar4 = local_3c + -3;
    iVar7 = *piVar4;
    if (iVar7 != 0) {
      if ((local_3c != &DAT_008f9cf4) &&
         ((iVar7 == -1 || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar7 + -1, iVar7 == 0)))))) {
        fn_001008c4(local_3c + -3,local_3c[-2] + 8,0);
      }
      local_3c = &DAT_008f9cf4;
      goto LAB_00401334;
    }
    local_3c[-1] = 0;
    puVar9 = local_3c;
  }
  else {
    uVar8 = local_3c[-3] + 1;
    bVar11 = local_3c[-3] != -1;
    bVar10 = uVar8 == 1;
    if (uVar8 < 2) {
      bVar11 = (uint)local_3c[-2] <= uVar2;
      bVar10 = uVar2 == local_3c[-2];
    }
    if (bVar11 && !bVar10) {
LAB_00401184:
      uVar8 = local_3c[-1];
      local_30 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
      if (local_30 < uVar8 + 0x80) {
        local_30 = uVar8 + 0x80;
      }
      puVar3 = auStack_2c;
      if (uVar2 <= local_30) {
        puVar3 = &local_30;
      }
      auStack_2c[0] = uVar2;
      uVar8 = *puVar3;
      if (0xfffffff1 < uVar8) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar8,0xfffffff1);
      }
      if (uVar8 < uVar2) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar8);
      }
      if (uVar8 != 0) {
        puVar1 = (undefined4 *)fn_00100fc6((uVar8 + 8) * 2,0);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
        }
        puVar1[2] = uVar2;
        puVar6 = (undefined2 *)((int)puVar1 + uVar2 * 2 + 0xc);
        *puVar1 = 0;
        puVar1[1] = uVar8;
        if (puVar6 != (undefined2 *)0x0) {
          *puVar6 = 0;
        }
      }
      fn_00301a9c(puVar1 + 3,puVar9,uVar2 << 1);
      if (local_3c != &DAT_008f9cf4) {
        piVar4 = local_3c + -3;
        iVar7 = *piVar4;
        if ((iVar7 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar7 + -1, iVar7 == 0)))) {
          fn_001008c4(local_3c + -3,local_3c[-2] + 8,0);
        }
      }
      local_3c = puVar1 + 3;
      goto LAB_00401334;
    }
    if (puVar9 != (undefined4 *)0x0) {
      bVar10 = puVar9 <= local_3c;
      if (local_3c <= puVar9) {
        bVar10 = (undefined4 *)((int)local_3c + local_3c[-1] * 2) <= puVar9;
      }
      if (!bVar10) goto LAB_00401184;
    }
    fn_001006ac(local_3c,puVar9,uVar2);
    local_3c[-1] = uVar2;
    puVar9 = (undefined4 *)((int)local_3c + uVar2 * 2);
  }
  *(undefined2 *)puVar9 = 0;
LAB_00401334:
  fn_002c29a0(param_1,&local_64);
  fn_00689930(param_1,0xe7,0);
  if (*(char *)(*(int *)(param_1 + 0xb0) + 0x14) == '\0') {
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined1 *)(param_1 + 0xb8) = 1;
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 0xb0) + 0x14) = 0;
    uVar5 = fn_0022f584((char *)&DAT_004014d0);
    fn_0068974c(param_1,uVar5,0,1);
    *(undefined1 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  if (local_3c != &DAT_008f9cf4) {
    piVar4 = local_3c + -3;
    iVar7 = *piVar4;
    if ((iVar7 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar7 + -1, iVar7 == 0)))) {
      fn_001008c4(local_3c + -3,local_3c[-2] + 8,0);
    }
  }
  if (local_40 != &DAT_008f9cf4) {
    piVar4 = local_40 + -3;
    iVar7 = *piVar4;
    if ((iVar7 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar7 + -1, iVar7 == 0)))) {
      fn_001008c4(local_40 + -3,local_40[-2] + 8,0);
    }
  }
  if (local_44 != &DAT_008f9cf4) {
    piVar4 = local_44 + -3;
    iVar7 = *piVar4;
    if ((iVar7 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar7 + -1, iVar7 == 0)))) {
      fn_001008c4(local_44 + -3,local_44[-2] + 8,0);
    }
  }
  if (local_48 != &DAT_008f9cf4) {
    piVar4 = local_48 + -3;
    iVar7 = *piVar4;
    if ((iVar7 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar7 + -1, iVar7 == 0)))) {
      fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
    }
  }
  return 1;
}


