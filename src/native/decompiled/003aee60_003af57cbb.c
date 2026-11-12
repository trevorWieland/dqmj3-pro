#include "003aee60_003af57cbb.h"



void fn_003af57c(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  fn_002c3e78();
  bVar1 = *(byte *)(*(int *)(param_1 + 0x9c) + 0xcc);
  uVar8 = 0;
  do {
    uVar7 = (short)(ushort)bVar1 * 10 + uVar8 + 1 & 0xff;
    if ((uVar7 == 0) || (0x59 < uVar7)) {
      uVar7 = 0;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uVar2 = fn_006c75c8(param_1,DAT_00891a44,uVar7);
    fn_00101a50(&uStack_58,0x18,DAT_00891a50,uVar7,uVar2);
    fn_0031b78c(param_1,uVar8,0,&uStack_58);
    if (((uVar7 == 0) || (0x59 < uVar7)) &&
       (*(int *)(*(int *)(param_1 + 0x9c) + 0xcc) == *(int *)(*(int *)(param_1 + 0x9c) + 200) + -1))
    {
      piVar3 = *(int **)(*(int *)(param_1 + 0x78) + uVar8 * 4);
      (**(code **)(*piVar3 + 0x20))(piVar3,0);
    }
    else {
      uVar4 = (**(code **)(**(int **)(param_1 + 0x9c) + 0x5c))();
      if (uVar4 != uVar8) {
        fn_0031b3c4(*(undefined4 *)(*(int *)(param_1 + 0x78) + uVar8 * 4),1);
      }
    }
    if ((uVar7 != 0) && (uVar7 < 0x5a)) {
      bVar6 = (&DAT_007c0d1c)[uVar7];
      if (0x59 < bVar6) {
        bVar6 = 0;
      }
      iVar5 = fn_002e2e44(*(undefined4 *)(DAT_00897804 + 0x20),bVar6);
      if (iVar5 == 0) {
        uVar7 = (uint)(byte)(&DAT_007c0d1c)[uVar7];
        if (0x59 < uVar7) {
          uVar7 = 0;
        }
        fn_00154ac8(uVar7 + 500);
      }
    }
    fn_002c32c4(param_1,uVar8);
    uVar8 = uVar8 + 1 & 0xff;
  } while (uVar8 < 10);
  return;
}



undefined4 fn_003af15c(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  uint *puVar4;
  undefined2 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  bool bVar9;
  bool bVar10;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_50;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined1 local_38;
  uint local_30;
  uint auStack_2c [2];
  
  fn_002c330c(&local_64);
  local_64 = DAT_00891a38;
  local_60 = DAT_00891a3c;
  local_50 = 0x59;
  local_5c = 10;
  uStack_58 = 0;
  puVar1 = (undefined4 *)fn_0022f750(DAT_00891a40);
  uVar2 = fn_00100b58();
  puVar8 = &DAT_008f9ce8;
  if (uVar2 == 0) {
    piVar3 = local_48 + -3;
    iVar6 = *piVar3;
    if (iVar6 != 0) {
      if ((local_48 != &DAT_008f9cf4) &&
         ((iVar6 == -1 || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar6 + -1, iVar6 == 0)))))) {
        fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
      }
      local_48 = &DAT_008f9cf4;
      goto LAB_003af3b8;
    }
    local_48[-1] = 0;
    puVar1 = local_48;
  }
  else {
    uVar7 = local_48[-3] + 1;
    bVar10 = local_48[-3] != -1;
    bVar9 = uVar7 == 1;
    if (uVar7 < 2) {
      bVar10 = (uint)local_48[-2] <= uVar2;
      bVar9 = uVar2 == local_48[-2];
    }
    if (bVar10 && !bVar9) {
LAB_003af208:
      uVar7 = local_48[-1];
      local_30 = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
      if (local_30 < uVar7 + 0x80) {
        local_30 = uVar7 + 0x80;
      }
      puVar4 = auStack_2c;
      if (uVar2 <= local_30) {
        puVar4 = &local_30;
      }
      auStack_2c[0] = uVar2;
      uVar7 = *puVar4;
      if (0xfffffff1 < uVar7) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar7,0xfffffff1);
      }
      if (uVar7 < uVar2) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar7);
      }
      if (uVar7 != 0) {
        puVar8 = (undefined4 *)fn_00100fc6((uVar7 + 8) * 2,0);
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
        }
        puVar8[2] = uVar2;
        puVar5 = (undefined2 *)((int)puVar8 + uVar2 * 2 + 0xc);
        *puVar8 = 0;
        puVar8[1] = uVar7;
        if (puVar5 != (undefined2 *)0x0) {
          *puVar5 = 0;
        }
      }
      fn_00301a9c(puVar8 + 3,puVar1,uVar2 << 1);
      if (local_48 != &DAT_008f9cf4) {
        piVar3 = local_48 + -3;
        iVar6 = *piVar3;
        if ((iVar6 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar6 + -1, iVar6 == 0)))) {
          fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
        }
      }
      local_48 = puVar8 + 3;
      goto LAB_003af3b8;
    }
    if (puVar1 != (undefined4 *)0x0) {
      bVar9 = puVar1 <= local_48;
      if (local_48 <= puVar1) {
        bVar9 = (undefined4 *)((int)local_48 + local_48[-1] * 2) <= puVar1;
      }
      if (!bVar9) goto LAB_003af208;
    }
    fn_001006ac(local_48,puVar1,uVar2);
    local_48[-1] = uVar2;
    puVar1 = (undefined4 *)((int)local_48 + uVar2 * 2);
  }
  *(undefined2 *)puVar1 = 0;
LAB_003af3b8:
  local_38 = 1;
  fn_002c29a0(param_1,&local_64);
  fn_003af59c(param_1,*(undefined1 *)(param_1 + 0xb4));
  fn_00689efc(param_1,0x43,0);
  puVar1 = (undefined4 *)fn_001f74e4(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18),0x43);
  if (puVar1 != (undefined4 *)0x0) {
    puVar8 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar8 == &DAT_00891a34) goto LAB_003af430;
      puVar8 = (undefined4 *)*puVar8;
    } while (puVar8 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003af430:
  *(undefined4 **)(param_1 + 0xb0) = puVar1;
  *(undefined4 *)(*(int *)(param_1 + 0x9c) + 0x18) = 0x100094c;
  *(undefined4 *)(*(int *)(param_1 + 0x9c) + 0x1c) = 0x100094f;
  if (local_3c != &DAT_008f9cf4) {
    piVar3 = local_3c + -3;
    iVar6 = *piVar3;
    if ((iVar6 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar6 + -1, iVar6 == 0)))) {
      fn_001008c4(local_3c + -3,local_3c[-2] + 8,0);
    }
  }
  if (local_40 != &DAT_008f9cf4) {
    piVar3 = local_40 + -3;
    iVar6 = *piVar3;
    if ((iVar6 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar6 + -1, iVar6 == 0)))) {
      fn_001008c4(local_40 + -3,local_40[-2] + 8,0);
    }
  }
  if (local_44 != &DAT_008f9cf4) {
    piVar3 = local_44 + -3;
    iVar6 = *piVar3;
    if ((iVar6 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar6 + -1, iVar6 == 0)))) {
      fn_001008c4(local_44 + -3,local_44[-2] + 8,0);
    }
  }
  if (local_48 != &DAT_008f9cf4) {
    piVar3 = local_48 + -3;
    iVar6 = *piVar3;
    if ((iVar6 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar6 + -1, iVar6 == 0)))) {
      fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
    }
  }
  return 1;
}


