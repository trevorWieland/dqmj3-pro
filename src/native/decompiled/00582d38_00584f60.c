#include "00582d38_00584f60.h"



undefined4 fn_00584f60(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint *puVar6;
  int iVar7;
  undefined2 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  bool bVar11;
  bool bVar12;
  wchar16 *pwStack_64;
  char *pcStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined1 local_38;
  undefined1 local_37;
  uint local_30;
  uint local_2c [2];
  
  fn_002c330c(&pwStack_64);
  local_50 = 4;
  local_5c = 4;
  pwStack_64 = L"rom:/data/Layout/common/common_0100.arc";
  pcStack_60 = (char *)&DAT_00585318;
  local_58 = fn_002f70cc(param_1);
  puVar1 = (undefined4 *)fn_0022f750((char *)&DAT_0058532c);
  uVar2 = fn_00100b58();
  puVar10 = &DAT_008f9ce8;
  if (uVar2 == 0) {
    piVar3 = local_48 + -3;
    iVar7 = *piVar3;
    if (iVar7 != 0) {
      if ((local_48 != &DAT_008f9cf4) &&
         ((iVar7 == -1 || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))))) {
        fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
      }
      local_48 = &DAT_008f9cf4;
      goto LAB_005851b8;
    }
    local_48[-1] = 0;
    puVar1 = local_48;
  }
  else {
    uVar9 = local_48[-3] + 1;
    bVar12 = local_48[-3] != -1;
    bVar11 = uVar9 == 1;
    if (uVar9 < 2) {
      bVar12 = (uint)local_48[-2] <= uVar2;
      bVar11 = uVar2 == local_48[-2];
    }
    if (bVar12 && !bVar11) {
LAB_00585008:
      uVar9 = local_48[-1];
      local_30 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
      if (local_30 < uVar9 + 0x80) {
        local_30 = uVar9 + 0x80;
      }
      local_2c[0] = uVar2;
      puVar6 = &local_30;
      if (local_30 < uVar2) {
        puVar6 = local_2c;
      }
      uVar9 = *puVar6;
      if (0xfffffff1 < uVar9) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar9,0xfffffff1);
      }
      if (uVar9 < uVar2) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar9);
      }
      if (uVar9 != 0) {
        puVar10 = (undefined4 *)fn_00100fc6((uVar9 + 8) * 2,0);
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
        }
        puVar10[2] = uVar2;
        puVar8 = (undefined2 *)((int)puVar10 + uVar2 * 2 + 0xc);
        *puVar10 = 0;
        puVar10[1] = uVar9;
        if (puVar8 != (undefined2 *)0x0) {
          *puVar8 = 0;
        }
      }
      fn_00301a9c(puVar10 + 3,puVar1,uVar2 << 1);
      if (local_48 != &DAT_008f9cf4) {
        piVar3 = local_48 + -3;
        iVar7 = *piVar3;
        if ((iVar7 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))) {
          fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
        }
      }
      local_48 = puVar10 + 3;
      goto LAB_005851b8;
    }
    if (puVar1 != (undefined4 *)0x0) {
      bVar11 = puVar1 <= local_48;
      if (local_48 <= puVar1) {
        bVar11 = (undefined4 *)((int)local_48 + local_48[-1] * 2) <= puVar1;
      }
      if (!bVar11) goto LAB_00585008;
    }
    fn_001006ac(local_48,puVar1,uVar2);
    local_48[-1] = uVar2;
    puVar1 = (undefined4 *)((int)local_48 + uVar2 * 2);
  }
  *(undefined2 *)puVar1 = 0;
LAB_005851b8:
  local_38 = 0;
  local_37 = 0;
  uVar4 = fn_002c29a0(param_1,&pwStack_64);
  uVar2 = 0;
  do {
    uVar5 = fn_0022f750((&DAT_007caf9c)[uVar2]);
    fn_0031b78c(param_1,uVar2,0,uVar5);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  fn_00689efc(param_1,0xee,0);
  *(undefined **)(param_1 + 0xc4) = &DAT_00585388;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined **)(param_1 + 0xbc) = &DAT_00585388;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined **)(param_1 + 0xb4) = &DAT_00585388;
  *(undefined4 *)(param_1 + 0xb8) = 0;
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
  return uVar4;
}



void fn_00584ee0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}



undefined4 fn_00583848(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  int local_7c;
  undefined1 auStack_6c [16];
  undefined1 local_5c;
  undefined1 local_5b;
  undefined4 local_54;
  undefined1 auStack_4c [8];
  undefined1 auStack_44 [4];
  undefined1 local_40;
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [12];
  
  puVar4 = (undefined4 *)param_1[6];
  if (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar1 == &DAT_00896b78) goto LAB_00583890;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_00583890:
  param_1[0x3e] = (int)puVar4;
  uVar5 = 0;
  do {
    fn_003c9218(auStack_20,uVar5 & 0xff);
    iVar2 = fn_006c7f20(auStack_20);
    if (iVar2 == 0) {
      uVar6 = uVar5;
      break;
    }
    uVar5 = uVar5 + 1;
    uVar6 = 5;
  } while ((int)uVar5 < 5);
  param_1[0x40] = uVar6;
  fn_00398180(&local_88);
  local_88 = DAT_00896c38;
  local_84 = DAT_00896c3c;
  uVar3 = fn_0022f750((char *)&DAT_00583a78);
  fn_00147974(auStack_6c,uVar3);
  local_80 = param_1[0x40];
  local_54 = 2;
  uVar3 = fn_0022f750((char *)&DAT_00583a88);
  fn_00147974(auStack_4c,uVar3);
  uVar3 = fn_0022f750((char *)&DAT_00583aa0);
  fn_00147974(auStack_44,uVar3);
  local_5c = 0;
  local_5b = 0;
  iVar2 = fn_006e979c(param_1[0x3e]);
  local_7c = (param_1[0x40] - iVar2) + -1;
  local_40 = 0;
  uVar3 = fn_0022f584((char *)&DAT_00583aac,0);
  fn_00147974(auStack_3c,uVar3);
  fn_00397ff4(param_1,&local_88);
  (**(code **)(*param_1 + 0x124))(param_1);
  fn_003dd564(param_1[0x3f]);
  uVar3 = fn_006cb254(param_1[0x3f]);
  fn_00689930(param_1,uVar3,0);
  iVar2 = fn_001588d4(auStack_2c);
  iVar2 = fn_001588d4(iVar2 + -4);
  iVar2 = fn_001588d4(iVar2 + -4);
  iVar2 = fn_001588d4(iVar2 + -4);
  iVar2 = fn_001588d4(iVar2 + -4);
  fn_00100414(iVar2 + -0x14,&LAB_0059e0e0,8,2);
  iVar2 = fn_001588d4(iVar2 + -0x24);
  iVar2 = fn_001588d4(iVar2 + -4);
  iVar2 = fn_001588d4(iVar2 + -4);
  fn_001588d4(iVar2 + -4);
  return 1;
}



void fn_00583320(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  iVar1 = *(int *)(param_1 + 0x9c);
  uVar2 = fn_0022f750((char *)&DAT_00583484);
  fn_0031c154(*(undefined4 *)(param_1 + 0x94),uVar2);
  fn_0036eb98(*(undefined4 *)(*(int *)(param_1 + 0x74) + 0x10),0);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x10);
  iVar4 = 0;
  do {
    iVar6 = *(int *)(param_1 + 0xa8);
    uVar3 = fn_0036e9e4(uVar2,iVar4,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x48));
    *(undefined4 *)(iVar6 + iVar4 * 4) = uVar3;
    local_30 = *(undefined4 *)(param_1 + 0x68);
    uStack_2c = *(undefined4 *)(param_1 + 0x6c);
    iVar8 = *(int *)(param_1 + 0xb4);
    uVar3 = fn_0036eaa8(uVar2,iVar4,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x48));
    iVar6 = iVar4 + 1;
    *(undefined4 *)(iVar8 + iVar4 * 4) = uVar3;
    iVar4 = iVar6;
  } while (iVar6 < 4);
  uVar5 = 0;
  do {
    uVar7 = uVar5 & 0xff;
    iVar4 = iVar1 + uVar5 * 0xf0;
    iVar6 = iVar4 + 0x530;
    if ((iVar6 != 0) && (iVar4 = fn_001a46f4((int)*(short *)(iVar4 + 0x54c)), iVar4 != 0)) {
      if (uVar7 < (uint)(*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2)) {
        local_30 = 1;
        uStack_2c = 0;
        local_28 = 0;
        fn_002b415c(*(undefined4 *)(*(int *)(param_1 + 0xa8) + uVar7 * 4),iVar6,0);
        local_30 = 0;
        fn_0036e68c(*(undefined4 *)(*(int *)(param_1 + 0xb4) + uVar7 * 4),iVar6,2,0);
        iVar4 = fn_0020bbc4(&local_30,iVar6);
        if (iVar4 != 0) {
          iVar4 = iVar4 + 4;
        }
        uVar2 = fn_006bfe90(iVar4);
        fn_001cab7c(uVar2);
      }
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 4);
  return;
}



void fn_00583300(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  fn_0039c400();
  fn_00583248(param_1);
  iVar1 = *(int *)(param_1 + 0x9c);
  uVar2 = fn_0022f750("morau");
  fn_0031c154(*(undefined4 *)(param_1 + 0x94),uVar2);
  fn_0036eb98(*(undefined4 *)(*(int *)(param_1 + 0x74) + 0x10),0);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x10);
  iVar4 = 0;
  do {
    iVar6 = *(int *)(param_1 + 0xa8);
    uVar3 = fn_0036e9e4(uVar2,iVar4,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x48));
    *(undefined4 *)(iVar6 + iVar4 * 4) = uVar3;
    uStack_30 = *(undefined4 *)(param_1 + 0x68);
    uStack_2c = *(undefined4 *)(param_1 + 0x6c);
    iVar8 = *(int *)(param_1 + 0xb4);
    uVar3 = fn_0036eaa8(uVar2,iVar4,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x48));
    iVar6 = iVar4 + 1;
    *(undefined4 *)(iVar8 + iVar4 * 4) = uVar3;
    iVar4 = iVar6;
  } while (iVar6 < 4);
  uVar5 = 0;
  do {
    uVar7 = uVar5 & 0xff;
    iVar4 = iVar1 + uVar5 * 0xf0;
    iVar6 = iVar4 + 0x530;
    if ((iVar6 != 0) && (iVar4 = fn_001a46f4((int)*(short *)(iVar4 + 0x54c)), iVar4 != 0)) {
      if (uVar7 < (uint)(*(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 2)) {
        uStack_30 = 1;
        uStack_2c = 0;
        uStack_28 = 0;
        fn_002b415c(*(undefined4 *)(*(int *)(param_1 + 0xa8) + uVar7 * 4),iVar6,0);
        uStack_30 = 0;
        fn_0036e68c(*(undefined4 *)(*(int *)(param_1 + 0xb4) + uVar7 * 4),iVar6,2,0);
        iVar4 = fn_0020bbc4(&uStack_30,iVar6);
        if (iVar4 != 0) {
          iVar4 = iVar4 + 4;
        }
        uVar2 = fn_006bfe90(iVar4);
        fn_001cab7c(uVar2);
      }
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 4);
  return;
}



void fn_00582d38(int *param_1)

{
  undefined4 uVar1;
  
  fn_0022da78(param_1[0x2d] + 4,(&DAT_007c6fe1)[param_1[0x3f] * 2],0);
  uVar1 = fn_00231cb8((&DAT_007c6fe0)[param_1[0x3f] * 2]);
  fn_00243550(param_1[0x37],uVar1);
                    /* WARNING: Could not recover jumptable at 0x00582d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1b4))(param_1);
  return;
}


