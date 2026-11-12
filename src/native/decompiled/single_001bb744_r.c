#include "single_001bb744_r.h"


extern undefined4 SUB_00040080;

void fn_001bb744(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined *extraout_r1;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  undefined4 local_a0;
  int local_9c;
  uint local_98;
  undefined4 local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined *puStack_7c;
  uint local_78;
  undefined1 *local_74;
  int local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  uint local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar9 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(iVar9 + 0x6c8) = 0;
  *(undefined4 *)(iVar9 + 0x6cc) = 0;
  *(undefined4 *)(iVar9 + 0x710) = 0;
  *(undefined4 *)(iVar9 + 0x734) = 0;
  *(undefined4 *)(iVar9 + 0x738) = 0;
  *(undefined4 *)(iVar9 + 0x75c) = 0;
  *(undefined4 *)(iVar9 + 0x774) = 0;
  fn_0012bc84(0x201,&local_6c);
  if (local_6c != 0) {
    fn_0011b40c();
  }
  fn_0012bc84(0x207,&local_98);
  fn_0012bb50(1,iVar9 + 0x694);
  fn_0012b2f0(*(undefined4 *)(iVar9 + 0x694));
  fn_0012b604(0x1000,0x20);
  fn_0012bc84(0x206,iVar9 + 0x698);
  fn_0012b2f0(local_98);
  fn_0012bc84(0x207,&DAT_008bf530);
  fn_0012b2f0(*(undefined4 *)(iVar9 + 0x694));
  if (0 < *(int *)(iVar9 + 0x69c)) {
    fn_0012b574();
    *(undefined4 *)(iVar9 + 0x69c) = 0;
  }
  fn_00735114();
  fn_00146578();
  fn_00735084(&DAT_008bf534);
  fn_007350e4(0x801);
  iVar8 = *(int *)(param_1 + 0x6c);
  iVar4 = *(int *)(iVar8 + 0x68c);
  fn_0012bc84(0x206,&local_98);
  uVar3 = local_98;
  fn_00734b4c(&DAT_008bf540,0x38,1);
  fn_0012bc84(0x202,&local_8c);
  iVar5 = *(int *)(iVar8 + 0x6c8);
  *(int *)(iVar8 + 0x6c8) = iVar5 + 1;
  *(uint *)(iVar8 + iVar5 * 4 + 0x6d0) = (local_8c & 0xfffffffc) + uVar3;
  puStack_7c = (undefined *)0xf0040;
  local_80 = 2;
  fn_00734b4c(&local_80,8,1);
  local_44 = 0x802f00c0;
  uStack_40 = 0;
  local_3c = 0;
  local_48 = DAT_008e9988 | DAT_008e9988 << 0x10 | 0xee00ee0;
  fn_00734b4c(&local_48,0x10,1);
  fn_001becc4(param_1,iVar8 + 0x414,uVar3);
  fn_006ae8b8(iVar8 + 0xe8,&DAT_008e9938);
  iVar10 = *(int *)(param_1 + 0x6c);
  local_74 = (undefined1 *)0x0;
  local_80 = 0;
  puStack_7c = &DAT_00200080;
  local_78 = 0;
  fn_00734b4c(&local_80,0x10,1);
  fn_0012bc84(0x202,&local_88);
  iVar5 = *(int *)(iVar10 + 0x75c);
  *(int *)(iVar10 + 0x75c) = iVar5 + 1;
  *(uint *)(iVar10 + iVar5 * 4 + 0x760) = (local_88 & 0xfffffffc) + uVar3;
  fn_0012bc84(0x208,&local_94);
  local_74 = &SUB_00040080;
  local_80 = 0;
  puStack_7c = (undefined *)0x10080;
  local_78 = 0x10000;
  fn_00301a9c(local_94,&local_80,0x10);
  fn_001467e4(0x10);
  bVar12 = -1 < iVar4;
  puVar7 = extraout_r1;
  if (bVar12) {
    puVar7 = &DAT_007e0d14;
  }
  local_68 = 0xeee0eee;
  uStack_64 = 0x802f00c0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_54 = 0xf00c3;
  if (bVar12) {
    local_58 = *(undefined4 *)(puVar7 + *(int *)(iVar8 + 0x5dc) * 4);
  }
  else {
    local_58 = DAT_008bf524;
  }
  fn_00734b4c(&local_68,0x18,1);
  fn_006ae8b8(iVar8,&DAT_008e9938);
  iVar4 = *(int *)(iVar8 + 0x564);
  if (5 < iVar4) {
    iVar4 = 5;
  }
  uVar11 = *(uint *)(&DAT_007e1350 + iVar4 * 4);
  iVar4 = fn_001afe98();
  if (iVar4 == 0) {
    uVar1 = (uVar11 & 0xffff) >> 10;
    uVar2 = (uVar11 & 0xff) >> 3;
    uVar11 = (uVar11 & 0xffffff) >> 0x13;
    uVar11 = uVar2 << 3 | (int)uVar2 >> 2 | (uVar1 << 2 | (int)uVar1 >> 4) << 8 |
             (uVar11 << 3 | (int)uVar11 >> 2) << 0x10 | 0xff000000;
  }
  local_34 = 0xf00c3;
  local_38 = uVar11;
  fn_00734b4c(&local_38,8,1);
  fn_006ae8b8(iVar8 + 0x3a0,&DAT_008e9938);
  if (*(int *)(iVar8 + 0x578) != 0) {
    fn_0012bc84(0x202,&local_8c);
    iVar4 = *(int *)(iVar8 + 0x6cc);
    *(int *)(iVar8 + 0x6cc) = iVar4 + 1;
    *(uint *)(iVar8 + iVar4 * 4 + 0x6f0) = (local_8c & 0xfffffffc) + uVar3;
    local_84 = 0xf0040;
    local_88 = 1;
    fn_00734b4c(&local_88,8,1);
  }
  fn_006ae8b8(iVar8 + 0x15c,&DAT_008e9938);
  fn_0012bc84(0x202,&local_8c);
  *(uint *)(iVar8 + 0x774) = (local_8c & 0xfffffffc) + uVar3;
  local_2c = 0xf00c3;
  local_30 = *(undefined4 *)(iVar8 + 0x770);
  fn_00734b4c(&local_30,8,1);
  fn_006ae8b8(iVar8 + 0x244,&DAT_008e9938);
  if (*(int *)(iVar8 + 0x448) != 0) {
    iVar4 = *(int *)(iVar8 + 0x648);
    if (0xb < iVar4) {
      iVar4 = 0xb;
    }
    uVar11 = *(uint *)(&DAT_007e1390 + iVar4 * 4);
    local_84 = 0x802f00c0;
    local_80 = 0;
    puStack_7c = (undefined *)0x8;
    local_74 = (undefined1 *)0xf00c3;
    local_78 = uVar11 & 0xff000000 |
               (uVar11 & 0xff) >> 1 | ((uVar11 & 0xffff) >> 9) << 8 |
               ((uVar11 & 0xffffff) >> 0x11) << 0x10;
    local_88 = DAT_008e9988 | 0xeee0ee0;
    fn_00734b4c(&local_88,0x18,1);
    fn_001becc4(param_1,iVar8 + 0x448,uVar3);
    fn_006ae8b8(iVar8 + 0x74,&DAT_008e9938);
  }
  if (*(int *)(iVar8 + 0x578) != 0) {
    fn_0012bc84(0x202,&local_98);
    iVar4 = *(int *)(iVar8 + 0x6c8);
    *(int *)(iVar8 + 0x6c8) = iVar4 + 1;
    *(uint *)(iVar8 + iVar4 * 4 + 0x6d0) = (local_98 & 0xfffffffc) + uVar3;
    local_9c = 0xf0040;
    local_a0 = 2;
    fn_00734b4c(&local_a0,8,1);
  }
  fn_00734b4c(&DAT_008bf5b0,0x18,1);
  *(undefined1 *)(iVar9 + 0x6a0) = 1;
  fn_007351a0(&local_9c,iVar9 + 0x69c,iVar9 + 0x6a4,iVar9 + 0x6a8);
  fn_00146578();
  fn_0012b2f0(DAT_008bf530);
  fn_007350e4(DAT_008bf534);
  fn_00146578();
  fn_0012bc84(0x207,&local_98);
  fn_0012bb50(1,iVar9 + 0x6b0);
  fn_0012b2f0(*(undefined4 *)(iVar9 + 0x6b0));
  fn_0012b604(0x800,0x20);
  fn_0012bc84(0x206,iVar9 + 0x6b4);
  fn_0012b2f0(local_98);
  fn_0012bc84(0x207,&DAT_008bf530);
  fn_0012b2f0(*(undefined4 *)(iVar9 + 0x6b0));
  if (0 < *(int *)(iVar9 + 0x6b8)) {
    fn_0012b574();
    *(undefined4 *)(iVar9 + 0x6b8) = 0;
  }
  fn_00735114();
  fn_00146578();
  fn_00735084(&DAT_008bf534);
  fn_007350e4(0x801);
  iVar8 = *(int *)(param_1 + 0x6c);
  fn_0012bc84(0x206,&local_9c);
  iVar4 = local_9c;
  fn_00734b4c(&DAT_008bf578,0x38,1);
  fn_0012bc84(0x202,&local_78);
  iVar5 = *(int *)(iVar8 + 0x6c8);
  *(int *)(iVar8 + 0x6c8) = iVar5 + 1;
  *(uint *)(iVar8 + iVar5 * 4 + 0x6d0) = (local_78 & 0xfffffffc) + iVar4;
  local_74 = (undefined1 *)0xf0040;
  local_78 = 2;
  fn_00734b4c(&local_78,8,1);
  local_8c = 0x802f00c0;
  local_88 = 0;
  local_84 = 0;
  local_90 = DAT_008e9988 | DAT_008e9988 << 0x10 | 0xee00ee0;
  fn_00734b4c(&local_90,0x10,1);
  iVar5 = *(int *)(param_1 + *(int *)(param_1 + 0x60) * 4 + 0x70);
  if (iVar5 != 0) {
    uVar6 = fn_001becc4(param_1,iVar5,iVar4);
    *(undefined4 *)(iVar8 + 0x734) = uVar6;
    fn_006ae8b8(iVar8 + 0x2b8,&DAT_008e9938);
  }
  fn_001becc4(param_1,iVar8 + 0x47c,iVar4);
  fn_006ae8b8(iVar8 + 0x32c,&DAT_008e9938);
  if (*(int *)(iVar8 + 0x4b0) != 0) {
    local_68 = 0;
    uStack_64 = 0xf0040;
    uStack_60 = 0x10001;
    uStack_5c = 0xf00c2;
    uStack_54 = 0xf00c3;
    local_58 = *(undefined4 *)(&DAT_007e0d4c + *(int *)(iVar8 + 0x5ec) * 4);
    fn_00734b4c(&local_68,0x18,1);
    fn_001becc4(param_1,iVar8 + 0x4b0,iVar4);
    fn_006ae8b8(iVar8 + 0x1d0,&DAT_008e9938);
  }
  fn_00734b4c(&DAT_008bf5b0,0x18,1);
  *(undefined1 *)(iVar9 + 0x6bc) = 1;
  fn_007351a0(&local_a0,iVar9 + 0x6b8,iVar9 + 0x6c0,iVar9 + 0x6c4);
  fn_00146578();
  fn_0012b2f0(DAT_008bf530);
  fn_007350e4(DAT_008bf534);
  fn_00146578();
  if (local_6c != 0) {
    fn_0011b34c();
  }
  return;
}


