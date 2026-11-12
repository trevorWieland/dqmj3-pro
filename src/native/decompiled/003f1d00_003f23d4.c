#include "003f1d00_003f23d4.h"



void fn_003f23d4(int param_1)

{
  uint uVar1;
  
  uVar1 = fn_006f6ab4();
  if ((*(int *)(param_1 + 0xb4) != 0) && ((uVar1 & 0x100000) == 0)) {
    *(undefined1 *)(*(int *)(param_1 + 0xb4) + 0x18) = 2;
  }
  return;
}



void fn_003f23ac(int param_1)

{
  uint uVar1;
  
  uVar1 = fn_006f6ab4();
  if ((*(int *)(param_1 + 0xb4) != 0) && ((uVar1 & 0x200000) == 0)) {
    *(undefined1 *)(*(int *)(param_1 + 0xb4) + 0x18) = 1;
  }
  return;
}



void fn_003f2258(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar1 = (undefined4 *)fn_001f7510(param_1,0x49);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008942dc) goto LAB_003f22a8;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003f22a8:
  local_60 = 0;
  local_54 = 0;
  local_5c = 0;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0;
  local_40 = 0;
  local_48 = 0;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0;
  local_2c = 0;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  fn_0017d96c(&local_60,0x40,0x3f,DAT_00891bd8,param_2);
  uVar3 = fn_0022f584(&local_60,0);
  local_60 = 0;
  local_54 = 0;
  local_5c = 0;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0;
  local_40 = 0;
  local_48 = 0;
  local_44 = 0;
  local_3c = 0;
  local_38 = 0;
  local_2c = 0;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  fn_0017d96c(&local_60,0x40,0x3f,DAT_00891bdc,param_2);
  uVar4 = fn_0022f584(&local_60,0);
  fn_00321118(puVar1,uVar3,uVar4);
  fn_00689bd0(param_1,0x49,0,1);
  return;
}



void fn_003f2238(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_60;
  undefined4 uStack_5c;
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
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar1 = (undefined4 *)fn_006e810c(*(undefined4 *)(param_1 + 0xb0));
  uVar4 = *puVar1;
  puVar1 = (undefined4 *)fn_001f7510(param_1,0x49);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008942dc) goto LAB_003f22a8;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003f22a8:
  uStack_60 = 0;
  uStack_54 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_2c = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  fn_0017d96c(&uStack_60,0x40,0x3f,DAT_00891bd8,uVar4);
  uVar3 = fn_0022f584(&uStack_60,0);
  uStack_60 = 0;
  uStack_54 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_2c = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  fn_0017d96c(&uStack_60,0x40,0x3f,DAT_00891bdc,uVar4);
  uVar4 = fn_0022f584(&uStack_60,0);
  fn_00321118(puVar1,uVar3,uVar4);
  fn_00689bd0(param_1,0x49,0,1);
  return;
}



undefined4 fn_003f1d00(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  uint local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined1 local_38;
  uint local_30;
  uint auStack_2c [2];
  
  puVar8 = (undefined4 *)param_1[6];
  if (puVar8 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar8)(puVar8);
    do {
      if (puVar1 == &DAT_00891bc0) goto LAB_003f1d48;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar8 = (undefined4 *)0x0;
LAB_003f1d48:
  param_1[0x2c] = (int)puVar8;
  iVar2 = fn_006e8118(puVar8);
  if (iVar2 == 0) {
    uVar9 = 0;
    do {
      iVar2 = fn_002e2dc8(*(undefined4 *)(DAT_00897804 + 0x20),uVar9);
      if (iVar2 != 0) {
        local_68 = uVar9;
        fn_00599e48(param_1[0x2c],&local_68);
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < 6);
  }
  puVar8 = (undefined4 *)fn_001f74d8(param_1,0x2c);
  if (puVar8 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar8)(puVar8);
    do {
      if (puVar1 == &DAT_008951d8) goto LAB_003f1ddc;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar8 = (undefined4 *)0x0;
LAB_003f1ddc:
  param_1[0x2d] = (int)puVar8;
  puVar8 = (undefined4 *)fn_001f74ec(param_1,0x50);
  if (puVar8 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar8)(puVar8);
    do {
      if (puVar1 == &DAT_008944b4) goto LAB_003f1e20;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar8 = (undefined4 *)0x0;
LAB_003f1e20:
  param_1[0x2f] = (int)puVar8;
  fn_002c330c(&local_64);
  local_64 = DAT_00891bc8;
  local_60 = DAT_00891bcc;
  local_5c = fn_006e8118(param_1[0x2c]);
  local_58 = *(undefined4 *)(param_1[0x2c] + 0xc);
  puVar8 = (undefined4 *)fn_0022f584(DAT_00891bd0,0);
  uVar9 = fn_00100b58();
  puVar1 = &DAT_008f9ce8;
  if (uVar9 == 0) {
    piVar4 = local_48 + -3;
    iVar2 = *piVar4;
    if (iVar2 != 0) {
      if ((local_48 != &DAT_008f9cf4) &&
         ((iVar2 == -1 || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar2 + -1, iVar2 == 0)))))) {
        fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
      }
      local_48 = &DAT_008f9cf4;
      goto LAB_003f207c;
    }
    local_48[-1] = 0;
    puVar8 = local_48;
  }
  else {
    uVar7 = local_48[-3] + 1;
    bVar11 = local_48[-3] != -1;
    bVar10 = uVar7 == 1;
    if (uVar7 < 2) {
      bVar11 = (uint)local_48[-2] <= uVar9;
      bVar10 = uVar9 == local_48[-2];
    }
    if (bVar11 && !bVar10) {
LAB_003f1ecc:
      uVar7 = local_48[-1];
      local_30 = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
      if (local_30 < uVar7 + 0x80) {
        local_30 = uVar7 + 0x80;
      }
      puVar3 = auStack_2c;
      if (uVar9 <= local_30) {
        puVar3 = &local_30;
      }
      auStack_2c[0] = uVar9;
      uVar7 = *puVar3;
      if (0xfffffff1 < uVar7) {
        local_68 = 0xfffffff1;
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar7);
      }
      if (uVar7 < uVar9) {
        local_68 = uVar7;
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar9);
      }
      if (uVar7 != 0) {
        puVar1 = (undefined4 *)fn_00100fc6((uVar7 + 8) * 2,0);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
        }
        puVar1[2] = uVar9;
        puVar6 = (undefined2 *)((int)puVar1 + uVar9 * 2 + 0xc);
        *puVar1 = 0;
        puVar1[1] = uVar7;
        if (puVar6 != (undefined2 *)0x0) {
          *puVar6 = 0;
        }
      }
      fn_00301a9c(puVar1 + 3,puVar8,uVar9 << 1);
      if (local_48 != &DAT_008f9cf4) {
        piVar4 = local_48 + -3;
        iVar2 = *piVar4;
        if ((iVar2 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar2 + -1, iVar2 == 0)))) {
          fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
        }
      }
      local_48 = puVar1 + 3;
      goto LAB_003f207c;
    }
    if (puVar8 != (undefined4 *)0x0) {
      bVar10 = puVar8 <= local_48;
      if (local_48 <= puVar8) {
        bVar10 = (undefined4 *)((int)local_48 + local_48[-1] * 2) <= puVar8;
      }
      if (!bVar10) goto LAB_003f1ecc;
    }
    fn_001006ac(local_48,puVar8,uVar9);
    local_48[-1] = uVar9;
    puVar8 = (undefined4 *)((int)local_48 + uVar9 * 2);
  }
  *(undefined2 *)puVar8 = 0;
LAB_003f207c:
  local_38 = 0;
  fn_002c29a0(param_1,&local_64);
  (**(code **)(*param_1 + 0x124))(param_1);
  local_68 = 0xffffffff;
  fn_0031f8fc(param_1[0x1d],0,0);
  iVar2 = param_1[0x1d];
  *(undefined1 *)(iVar2 + 0x81) = 1;
  fn_0031f3f4(iVar2,0);
  fn_00689efc(param_1,0x2c,0);
  uVar5 = fn_006b64b0(*(undefined4 *)(DAT_00897804 + 8));
  *(undefined4 *)(param_1[0x2d] + 0x20) = uVar5;
  if (local_3c != &DAT_008f9cf4) {
    piVar4 = local_3c + -3;
    iVar2 = *piVar4;
    if ((iVar2 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_3c + -3,local_3c[-2] + 8,0);
    }
  }
  if (local_40 != &DAT_008f9cf4) {
    piVar4 = local_40 + -3;
    iVar2 = *piVar4;
    if ((iVar2 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_40 + -3,local_40[-2] + 8,0);
    }
  }
  if (local_44 != &DAT_008f9cf4) {
    piVar4 = local_44 + -3;
    iVar2 = *piVar4;
    if ((iVar2 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_44 + -3,local_44[-2] + 8,0);
    }
  }
  if (local_48 != &DAT_008f9cf4) {
    piVar4 = local_48 + -3;
    iVar2 = *piVar4;
    if ((iVar2 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
    }
  }
  return 1;
}


