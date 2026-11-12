#include "00398f64_003ab1f4.h"



void fn_003ab1f4(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 *local_18 [2];
  
  uVar2 = DAT_00898b3c;
  uVar6 = DAT_00898b18;
  switch(*(undefined1 *)(param_1 + 0x79)) {
  case 1:
    local_18[0] = &DAT_008f9cf4;
    fn_0036c054(*(undefined4 *)(param_1 + 0x5c),local_18);
    uVar6 = DAT_00898b14;
    *(undefined1 *)(param_1 + 0x79) = 4;
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x100094b;
    uVar6 = fn_0022f584(uVar6,0);
    fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar6);
    if (local_18[0] != &DAT_008f9cf4) {
      piVar4 = local_18[0] + -3;
      iVar5 = *piVar4;
      if ((iVar5 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar5 + -1, iVar5 == 0)))) {
        fn_001008c4(local_18[0] + -3,local_18[0][-2] + 8,0);
      }
    }
    break;
  case 2:
    local_20 = 0x1000950;
    uStack_1c = 0;
    fn_003ab988(param_1,DAT_00898b10,1,0);
    uVar3 = 3;
    goto LAB_003ab6c4;
  case 3:
    bVar1 = *(byte *)(*(int *)(param_1 + 0x5c) + 0x31);
    if (1 < bVar1) {
      if (bVar1 == 2) {
        local_20 = 0;
        uStack_1c = 0x1000950;
        fn_003ab988(param_1,DAT_00898b40,0,0);
        *(undefined1 *)(param_1 + 0x79) = 0x13;
        return;
      }
      if (bVar1 == 3) {
        local_20 = 0;
        uStack_1c = 0x100094b;
        fn_003ab988(param_1,DAT_00898b0c,0,1);
        uVar6 = DAT_00898b14;
        *(undefined1 *)(param_1 + 0x79) = 4;
        *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x100094b;
        uVar6 = fn_0022f584(uVar6,0);
        fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar6);
        return;
      }
    }
    break;
  case 4:
    *(undefined1 *)(param_1 + 0x79) = 5;
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x100094b;
    uVar6 = fn_0022f584(uVar6,0);
    fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar6);
    return;
  case 5:
    fn_00526460(1);
    fn_005f3c48(8);
    fn_005f3aac(8);
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x5e) = 1;
    uVar6 = DAT_00898b54;
    *(undefined1 *)(param_1 + 0x79) = 6;
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x1000950;
    uVar6 = fn_0022f584(uVar6,0);
    fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar6);
    return;
  case 6:
    fn_003aac44(param_1);
    return;
  case 7:
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 0;
    iVar5 = fn_0031559c();
    uVar6 = DAT_00898b1c;
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 0x79) = 0x12;
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x100094d;
      uVar6 = fn_0022f584(uVar6,0);
      fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar6);
      *(undefined1 *)(param_1 + 0x78) = 6;
      return;
    }
    iVar5 = fn_00315764(*(undefined4 *)(param_1 + 100));
    uVar6 = DAT_00898b4c;
    if (iVar5 == 0) {
      uVar3 = 2;
    }
    else {
      *(undefined1 *)(param_1 + 0x79) = 0x12;
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x100094d;
      uVar6 = fn_0022f584(uVar6,0);
      fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar6);
      uVar3 = 6;
    }
    goto LAB_003ab540;
  case 9:
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 0;
    iVar5 = fn_003ab710(param_1);
    uVar2 = DAT_00898b68;
    uVar6 = DAT_00898b20;
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 0x79) = 10;
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x1000950;
      uVar6 = fn_0022f584(uVar6,0);
      fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar6);
    }
    else {
      *(undefined1 *)(param_1 + 0x79) = 10;
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x1000950;
      uVar6 = fn_0022f584(uVar2,0);
      fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar6);
    }
    uVar3 = 6;
    goto LAB_003ab540;
  case 0xb:
    *(undefined1 *)(param_1 + 0x78) = 3;
    fn_003aaa60(param_1);
    *(undefined1 *)(param_1 + 0x94) = 1;
    return;
  case 0xc:
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x5e) = 1;
    uVar6 = DAT_00898b30;
    *(undefined1 *)(param_1 + 0x79) = 0xd;
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x100094b;
    uVar6 = fn_0022f584(uVar6,0);
    fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar6);
    return;
  case 0xd:
    *(undefined1 *)(param_1 + 0x78) = 4;
    fn_003aaa60(param_1);
    *(undefined1 *)(param_1 + 0x94) = 1;
    return;
  case 0xe:
    fn_003aba10(param_1);
    return;
  case 0x10:
    *(undefined1 *)(param_1 + 0x79) = 0x12;
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x100094b;
    uVar6 = fn_0022f584(uVar2,0);
    fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar6);
    fn_002d1e58(*(undefined4 *)(param_1 + 0x88),2);
    return;
  case 0x11:
  case 0x12:
    uVar3 = 0x13;
LAB_003ab6c4:
    *(undefined1 *)(param_1 + 0x79) = uVar3;
    return;
  case 0x13:
    local_20 = 0xff000000;
    fn_00163988(DAT_0089780c,&local_20,10);
    uVar3 = 7;
LAB_003ab540:
    *(undefined1 *)(param_1 + 0x78) = uVar3;
    return;
  }
  return;
}



undefined4 fn_00398f64(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  undefined2 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  bool bVar12;
  bool bVar13;
  uint local_80;
  uint local_7c [2];
  wchar16 *pwStack_74;
  char *pcStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_60;
  undefined4 *local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined1 local_48;
  undefined4 local_34 [4];
  
  fn_00689efc(param_1,0x90,0);
  local_34[0] = 0;
  fn_00163988(DAT_00897810,local_34,1);
  fn_00416c80(param_1);
  iVar8 = 1;
  uVar10 = *(undefined4 *)(DAT_00897804 + 0x24);
  do {
    iVar1 = fn_006b7b34(uVar10);
    if (iVar1 != 0) {
      iVar1 = fn_00661094((int)(short)iVar8);
      iVar1 = param_1 + iVar1 * 4;
      *(int *)(iVar1 + 0xdc) = *(int *)(iVar1 + 0xdc) + 1;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x3ff);
  *(undefined4 *)(param_1 + 0xdc) = 1;
  uVar10 = *(undefined4 *)(*(int *)(param_1 + 0xd0) + 0xc);
  uVar9 = *(undefined4 *)(*(int *)(param_1 + 0xd0) + 0x10);
  fn_002c330c(local_7c + 2);
  local_60 = 10;
  local_6c = 10;
  pwStack_74 = L"rom:/data/Layout/common/common_0100.arc";
  pcStack_70 = (char *)&DAT_003993c0;
  uStack_68 = uVar9;
  puVar2 = (undefined4 *)fn_00416d24(param_1);
  uVar3 = fn_00100b58();
  puVar11 = &DAT_008f9ce8;
  if (uVar3 == 0) {
    piVar5 = local_58 + -3;
    iVar8 = *piVar5;
    if (iVar8 != 0) {
      if ((local_58 != &DAT_008f9cf4) &&
         ((iVar8 == -1 || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar8 + -1, iVar8 == 0)))))) {
        fn_001008c4(local_58 + -3,local_58[-2] + 8,0);
      }
      local_58 = &DAT_008f9cf4;
      goto LAB_00399258;
    }
    local_58[-1] = 0;
    puVar2 = local_58;
  }
  else {
    uVar7 = local_58[-3] + 1;
    bVar13 = local_58[-3] != -1;
    bVar12 = uVar7 == 1;
    if (uVar7 < 2) {
      bVar13 = (uint)local_58[-2] <= uVar3;
      bVar12 = uVar3 == local_58[-2];
    }
    if (bVar13 && !bVar12) {
LAB_003990a8:
      uVar7 = local_58[-1];
      local_80 = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
      if (local_80 < uVar7 + 0x80) {
        local_80 = uVar7 + 0x80;
      }
      puVar4 = local_7c;
      if (uVar3 <= local_80) {
        puVar4 = &local_80;
      }
      local_7c[0] = uVar3;
      uVar7 = *puVar4;
      if (0xfffffff1 < uVar7) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar7,0xfffffff1);
      }
      if (uVar7 < uVar3) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar3,uVar7);
      }
      if (uVar7 != 0) {
        puVar11 = (undefined4 *)fn_00100fc6((uVar7 + 8) * 2,0);
        if (puVar11 != (undefined4 *)0x0) {
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11[2] = 0;
        }
        puVar11[2] = uVar3;
        puVar6 = (undefined2 *)((int)puVar11 + uVar3 * 2 + 0xc);
        *puVar11 = 0;
        puVar11[1] = uVar7;
        if (puVar6 != (undefined2 *)0x0) {
          *puVar6 = 0;
        }
      }
      fn_00301a9c(puVar11 + 3,puVar2,uVar3 << 1);
      if (local_58 != &DAT_008f9cf4) {
        piVar5 = local_58 + -3;
        iVar8 = *piVar5;
        if ((iVar8 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar8 + -1, iVar8 == 0)))) {
          fn_001008c4(local_58 + -3,local_58[-2] + 8,0);
        }
      }
      local_58 = puVar11 + 3;
      goto LAB_00399258;
    }
    if (puVar2 != (undefined4 *)0x0) {
      bVar12 = puVar2 <= local_58;
      if (local_58 <= puVar2) {
        bVar12 = (undefined4 *)((int)local_58 + local_58[-1] * 2) <= puVar2;
      }
      if (!bVar12) goto LAB_003990a8;
    }
    fn_001006ac(local_58,puVar2,uVar3);
    local_58[-1] = uVar3;
    puVar2 = (undefined4 *)((int)local_58 + uVar3 * 2);
  }
  *(undefined2 *)puVar2 = 0;
LAB_00399258:
  local_48 = 1;
  fn_002c29a0(param_1,local_7c + 2);
  fn_0031f8fc(*(undefined4 *)(param_1 + 0x74),0,0,0,0xffffffff);
  iVar8 = *(int *)(param_1 + 0x74);
  *(undefined1 *)(iVar8 + 0x81) = 0;
  fn_0031f3f4(iVar8,0);
  if (local_4c != &DAT_008f9cf4) {
    piVar5 = local_4c + -3;
    iVar8 = *piVar5;
    if ((iVar8 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar8 + -1, iVar8 == 0)))) {
      fn_001008c4(local_4c + -3,local_4c[-2] + 8,0);
    }
  }
  if (local_50 != &DAT_008f9cf4) {
    piVar5 = local_50 + -3;
    iVar8 = *piVar5;
    if ((iVar8 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar8 + -1, iVar8 == 0)))) {
      fn_001008c4(local_50 + -3,local_50[-2] + 8,0);
    }
  }
  if (local_54 != &DAT_008f9cf4) {
    piVar5 = local_54 + -3;
    iVar8 = *piVar5;
    if ((iVar8 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar8 + -1, iVar8 == 0)))) {
      fn_001008c4(local_54 + -3,local_54[-2] + 8,0);
    }
  }
  if (local_58 != &DAT_008f9cf4) {
    piVar5 = local_58 + -3;
    iVar8 = *piVar5;
    if ((iVar8 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar8 + -1, iVar8 == 0)))) {
      fn_001008c4(local_58 + -3,local_58[-2] + 8,0);
    }
  }
  fn_0025f2d0(*(undefined4 *)(param_1 + 0x9c),uVar10);
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x3c) = uVar10;
  fn_00399494(param_1);
  iVar8 = fn_00154ac8(0x332);
  if (iVar8 == 0) {
    uVar10 = fn_0022eefc(0x130,0);
    local_80 = 0;
    local_7c[1] = 1;
    local_7c[0] = 0;
    fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar10,1,0,1,1);
    fn_00689bd0(param_1,0x48,0);
    fn_00144834(0x332,1);
  }
  return 1;
}


