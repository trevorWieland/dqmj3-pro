#include "005d3df0_005d969c.h"



void fn_005d969c(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = fn_006ba220();
  if (iVar2 != 0) {
    return;
  }
  iVar2 = fn_006ba284(param_1);
  uVar5 = param_2 + iVar2 * 8;
  uVar6 = *(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0xc0) >> 3;
  if (uVar6 <= uVar5) {
    fn_002ff628(9,&DAT_008c7635,&DAT_008c7635,uVar5);
    param_4 = uVar6;
  }
  sVar1 = *(short *)(*(int *)(param_1 + 0xc0) + uVar5 * 8 + 4);
  if (sVar1 == 0) {
    fn_0068ab44(param_1,0x100094d);
    return;
  }
  uVar3 = fn_00231d50();
  uVar4 = fn_0022f244((int)sVar1);
  fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar3,uVar4,*(undefined4 *)(param_1 + 0x58),param_4);
  fn_00689bd0(param_1,0x49,0);
  return;
}



void fn_005d58b8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint *puVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  uint uVar15;
  uint local_a0 [2];
  undefined **local_98;
  undefined1 local_94;
  undefined4 local_90;
  int local_8c;
  undefined4 local_88;
  undefined2 local_84;
  undefined2 local_82;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [8];
  uint local_58;
  uint local_54;
  uint local_4c;
  uint uStack_48;
  
  uVar14 = *(undefined4 *)(param_1 + 0x220);
  iVar1 = fn_0023d0d4(uVar14);
  if (iVar1 != 0) {
    uVar2 = fn_0023d0ec(uVar14);
    *(undefined4 *)(param_1 + 0x624) = uVar2;
    *(undefined4 *)(param_1 + 0x634) = *(undefined4 *)(param_1 + 0x620);
    fn_0023d11c(uVar14);
    uVar2 = fn_0023d104(uVar14);
    *(undefined4 *)(param_1 + 0x628) = uVar2;
    *(undefined4 *)(param_1 + 0x638) = *(undefined4 *)(param_1 + 0x230);
    fn_0023d270(uVar14);
    uVar2 = fn_0023cd94(uVar14);
    *(undefined4 *)(param_1 + 0x62c) = uVar2;
    *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x61c);
    fn_0023cdac(uVar14);
    uVar2 = fn_0023d150(uVar14);
    *(undefined4 *)(param_1 + 0x630) = uVar2;
    fn_0023d2e4(uVar14);
    uVar14 = fn_0023d150(uVar14);
    *(undefined4 *)(param_1 + 0x640) = uVar14;
    return;
  }
  uVar14 = *(undefined4 *)(param_1 + 0x230);
  iVar1 = fn_0023c2a8();
  local_98 = (undefined **)&DAT_00853388;
  local_94 = *(undefined1 *)(iVar1 + 0x34);
  local_90 = *(undefined4 *)(iVar1 + 0x38);
  local_8c = *(int *)(iVar1 + 0x3c);
  local_88 = *(undefined4 *)(iVar1 + 0x40);
  local_84 = *(undefined2 *)(iVar1 + 0x44);
  local_82 = *(undefined2 *)(iVar1 + 0x46);
  local_80 = *(undefined4 *)(iVar1 + 0x48);
  local_7c = *(undefined4 *)(iVar1 + 0x4c);
  local_78 = *(undefined4 *)(iVar1 + 0x50);
  local_74 = *(undefined4 *)(iVar1 + 0x54);
  iVar3 = fn_004b637c(auStack_70,iVar1 + 0x58);
  *(undefined ***)(iVar3 + -0x28) = &PTR_FUN_00854c0c;
  *(undefined1 *)(iVar3 + 8) = *(undefined1 *)(iVar1 + 0x60);
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar1 + 100);
  iVar3 = fn_004b637c(iVar3 + 0x10,iVar1 + 0x68);
  *(undefined4 *)(iVar3 + 8) = 0;
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined4 *)(iVar3 + 0x10) = 0;
  local_a0[0] = *(int *)(iVar1 + 0x74) - *(int *)(iVar1 + 0x70) >> 2;
  local_a0[1] = 0x20;
  puVar6 = local_a0;
  if (local_a0[0] < 0x20) {
    puVar6 = local_a0 + 1;
  }
  uVar15 = *puVar6;
  puVar4 = (undefined4 *)fn_0015ece0(uVar15 << 2);
  *(int *)(iVar3 + 8) = (int)puVar4;
  puVar12 = *(undefined4 **)(iVar1 + 0x74);
  for (puVar9 = *(undefined4 **)(iVar1 + 0x70); puVar9 != puVar12; puVar9 = puVar9 + 1) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *puVar9;
    }
    puVar4 = puVar4 + 1;
  }
  iVar5 = *(int *)(iVar3 + 8);
  *(uint *)(iVar3 + 0xc) = (*(int *)(iVar1 + 0x74) - *(int *)(iVar1 + 0x70) & 0xfffffffcU) + iVar5;
  *(uint *)(iVar3 + 0x10) = iVar5 + uVar15 * 4;
  *(undefined4 *)(iVar3 + 0x14) = 0;
  *(undefined4 *)(iVar3 + 0x18) = 0;
  *(undefined4 *)(iVar3 + 0x1c) = 0;
  local_a0[1] = 0x20;
  local_a0[0] = *(int *)(iVar1 + 0x80) - *(int *)(iVar1 + 0x7c);
  puVar6 = local_a0;
  if (local_a0[0] < 0x20) {
    puVar6 = local_a0 + 1;
  }
  uVar15 = *puVar6;
  puVar7 = (undefined1 *)fn_0015ece0();
  *(int *)(iVar3 + 0x14) = (int)puVar7;
  puVar13 = *(undefined1 **)(iVar1 + 0x80);
  for (puVar10 = *(undefined1 **)(iVar1 + 0x7c); puVar10 != puVar13; puVar10 = puVar10 + 1) {
    if (puVar7 != (undefined1 *)0x0) {
      *puVar7 = *puVar10;
    }
    puVar7 = puVar7 + 1;
  }
  iVar5 = *(int *)(iVar1 + 0x80);
  iVar11 = *(int *)(iVar1 + 0x7c);
  iVar8 = *(int *)(iVar3 + 0x14);
  *(uint *)(iVar3 + 0x1c) = iVar8 + uVar15;
  *(int *)(iVar3 + 0x18) = (iVar5 - iVar11) + iVar8;
  iVar3 = fn_004b9b4c(iVar3 + 0x20,iVar1 + 0x88);
  iVar3 = fn_004b9b4c(iVar3 + 8,iVar1 + 0x90);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar1 + 0x98);
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar1 + 0x9c);
  *(undefined ***)(iVar3 + -0x60) = &PTR_FUN_00853b40;
  iVar1 = fn_006f5dec(DAT_00898840);
  local_a0[0] = (uint)(iVar1 == local_8c);
  fn_0023cdcc(*(undefined4 *)(param_1 + 0x220),*(undefined4 *)(param_1 + 0x620),uVar14,
               *(undefined4 *)(param_1 + 0x61c));
  *(undefined4 *)(param_1 + 0x624) = *(undefined4 *)(param_1 + 0x620);
  *(undefined4 *)(param_1 + 0x628) = uVar14;
  *(undefined4 *)(param_1 + 0x634) = *(undefined4 *)(param_1 + 0x620);
  *(undefined4 *)(param_1 + 0x638) = uVar14;
  iVar1 = fn_0023c2a8();
  *(undefined4 *)(param_1 + 0x62c) = *(undefined4 *)(iVar1 + 0x27bc);
  *(undefined4 *)(param_1 + 0x630) = 0;
  *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(param_1 + 0x61c);
  *(undefined4 *)(param_1 + 0x640) = 0;
  local_98 = &PTR_FUN_00854c0c;
  uVar15 = local_4c;
  if (local_4c < uStack_48) {
    if (0 < (int)(uStack_48 - local_4c)) {
      for (iVar1 = (int)(uStack_48 - local_4c) >> 1; iVar1 != 0; iVar1 = iVar1 + -1) {
      }
    }
  }
  else {
    for (; uVar15 != uStack_48; uVar15 = uVar15 + 1) {
    }
  }
  fn_0014f1bc(local_4c);
  if (local_58 < local_54) {
    if (0 < (int)(local_54 - local_58)) {
      for (iVar1 = (int)(local_54 - local_58) >> 3; iVar1 != 0; iVar1 = iVar1 + -1) {
      }
    }
  }
  else {
    for (; local_58 != local_54; local_58 = local_58 + 4) {
    }
  }
  fn_0014f1bc();
  iVar1 = fn_00170f54(auStack_60);
  fn_004bb560(iVar1 + -0x38);
  return;
}



undefined4 fn_005d3df0(int param_1)

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
  wchar16 *pwStack_64;
  char *pcStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  uint local_30;
  uint uStack_2c;
  undefined4 local_28;
  
  local_28 = fn_002f68a4();
  fn_002c330c(&pwStack_64);
  local_50 = 2;
  local_5c = 2;
  pwStack_64 = L"rom:/data/Layout/common/common_0100.arc";
  pcStack_60 = (char *)&DAT_005d41b0;
  local_58 = fn_002f70cc(param_1);
  puVar1 = (undefined4 *)fn_002f6534(param_1);
  uVar2 = fn_00100b58();
  puVar9 = &DAT_008f9ce8;
  if (uVar2 == 0) {
    piVar4 = local_48 + -3;
    iVar7 = *piVar4;
    if (iVar7 != 0) {
      if ((local_48 != &DAT_008f9cf4) &&
         ((iVar7 == -1 || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar7 + -1, iVar7 == 0)))))) {
        fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
      }
      local_48 = &DAT_008f9cf4;
      goto LAB_005d4054;
    }
    local_48[-1] = 0;
    puVar1 = local_48;
  }
  else {
    uVar8 = local_48[-3] + 1;
    bVar11 = local_48[-3] != -1;
    bVar10 = uVar8 == 1;
    if (uVar8 < 2) {
      bVar11 = (uint)local_48[-2] <= uVar2;
      bVar10 = uVar2 == local_48[-2];
    }
    if (bVar11 && !bVar10) {
LAB_005d3ea4:
      uVar8 = local_48[-1];
      local_30 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
      if (local_30 < uVar8 + 0x80) {
        local_30 = uVar8 + 0x80;
      }
      puVar3 = &uStack_2c;
      if (uVar2 <= local_30) {
        puVar3 = &local_30;
      }
      uStack_2c = uVar2;
      uVar8 = *puVar3;
      if (0xfffffff1 < uVar8) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar8,0xfffffff1);
      }
      if (uVar8 < uVar2) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar8);
      }
      if (uVar8 != 0) {
        puVar9 = (undefined4 *)fn_00100fc6((uVar8 + 8) * 2,0);
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
        }
        puVar9[2] = uVar2;
        puVar6 = (undefined2 *)((int)puVar9 + uVar2 * 2 + 0xc);
        *puVar9 = 0;
        puVar9[1] = uVar8;
        if (puVar6 != (undefined2 *)0x0) {
          *puVar6 = 0;
        }
      }
      fn_00301a9c(puVar9 + 3,puVar1,uVar2 << 1);
      if (local_48 != &DAT_008f9cf4) {
        piVar4 = local_48 + -3;
        iVar7 = *piVar4;
        if ((iVar7 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar7 + -1, iVar7 == 0)))) {
          fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
        }
      }
      local_48 = puVar9 + 3;
      goto LAB_005d4054;
    }
    if (puVar1 != (undefined4 *)0x0) {
      bVar10 = puVar1 <= local_48;
      if (local_48 <= puVar1) {
        bVar10 = (undefined4 *)((int)local_48 + local_48[-1] * 2) <= puVar1;
      }
      if (!bVar10) goto LAB_005d3ea4;
    }
    fn_001006ac(local_48,puVar1,uVar2);
    local_48[-1] = uVar2;
    puVar1 = (undefined4 *)((int)local_48 + uVar2 * 2);
  }
  *(undefined2 *)puVar1 = 0;
LAB_005d4054:
  fn_002c29a0(param_1,&pwStack_64);
  uVar2 = 0;
  do {
    fn_0015b0f8(local_28);
    uVar5 = fn_0022f750((&DAT_00896fd0)[uVar2]);
    fn_0031b78c(param_1,uVar2,0,uVar5);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  *(undefined **)(param_1 + 0xc4) = &DAT_005d4238;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined **)(param_1 + 0xbc) = &DAT_005d4238;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined **)(param_1 + 0xb4) = &DAT_005d4238;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  fn_00689efc(param_1,0xf1,1,0);
  fn_002f6490(0);
  fn_0015a41c(0x100003b);
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


