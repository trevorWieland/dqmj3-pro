#include "004450b8_0044a864.h"



void fn_0044a864(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x15c) = param_2;
  *(undefined4 *)(param_1 + 0x160) = 0;
  return;
}



void fn_0044a4ec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_18;
  
  local_18 = param_4;
  fn_002c3e78();
  uVar3 = 0;
  do {
    uVar1 = fn_0022f750((&DAT_008966b4)[uVar3]);
    fn_0031b78c(param_1,uVar3,0,uVar1);
    uVar1 = DAT_00896690;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  iVar2 = fn_00154ac8(0x93);
  local_18 = uVar1;
  if (iVar2 == 0) {
    local_18 = DAT_00896698;
  }
  fn_002c37b4(param_1,1,0,&local_18);
  return;
}



undefined4 fn_00448e54(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  wchar16 *pwStack_958;
  char *pcStack_954;
  undefined4 uStack_950;
  undefined4 uStack_94c;
  undefined4 local_948;
  undefined4 local_944;
  undefined4 local_940;
  undefined1 auStack_93c [4];
  undefined1 auStack_938 [4];
  undefined1 auStack_934 [4];
  undefined1 auStack_930 [4];
  undefined1 local_92c;
  undefined1 local_92b;
  undefined1 local_92a;
  undefined1 local_929;
  undefined4 local_924;
  undefined1 local_920;
  undefined1 auStack_91c [4];
  undefined1 auStack_918 [32];
  undefined1 auStack_8f8 [90];
  byte local_89e;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0x95);
  puVar6 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894c6c) goto LAB_00448ea4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00448ea4:
  *(undefined1 *)(param_1 + 0xf4) = *(undefined1 *)(puVar1 + 0x27b);
  uVar3 = fn_00448c30(param_1);
  fn_00397774(&pwStack_958);
  local_924 = 1;
  local_920 = 0;
  uVar4 = fn_0022f750((char *)&DAT_00449008);
  fn_00147974(auStack_918,uVar4);
  pwStack_958 = L"rom:/data/Layout/common/common_0200.arc";
  pcStack_954 = (char *)&DAT_0044902c;
  uStack_950 = 9;
  uStack_94c = 0;
  local_948 = 0;
  local_940 = 0x3f800000;
  local_944 = uVar3;
  uVar3 = fn_0022f750((char *)&DAT_00449044);
  fn_00147974(auStack_93c,uVar3);
  fn_00147974(auStack_938,&DAT_00449058);
  fn_00147974(auStack_934,&DAT_00449058);
  fn_00147974(auStack_930,&DAT_00449058);
  local_92c = 1;
  local_92b = 0;
  local_92a = 0;
  local_929 = 0;
  fn_00397618(param_1,&pwStack_958);
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x3c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894d28) {
        puVar6 = puVar1;
        break;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  fn_0017821c(auStack_8f8,puVar6 + 7,0x8d8);
  *(uint *)(param_1 + 0xec) = (uint)local_89e;
  fn_00100414(auStack_91c,&LAB_0059e0e0,8,4);
  iVar5 = fn_001588d4(auStack_930);
  iVar5 = fn_001588d4(iVar5 + -4);
  iVar5 = fn_001588d4(iVar5 + -4);
  fn_001588d4(iVar5 + -4);
  return 1;
}



void fn_00447c54(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_0068ab44(param_1,0x1000950);
  if (*(int *)(param_1 + 0xe4) < 2) {
    *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
  }
  else {
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xe4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (iVar1 == 1) {
    uVar2 = 5;
  }
  else {
    uVar2 = param_2;
    if (iVar1 == 2) {
      uVar2 = 2;
    }
  }
  fn_0022de40(param_1 + 0xec,uVar2);
  fn_00447520(param_1);
  uVar2 = fn_00231cb8((&DAT_007c7a94)[*(int *)(param_1 + 0xe4)]);
  fn_00243550(*(undefined4 *)(param_1 + 0xa4),uVar2);
  iVar1 = *(int *)(param_1 + 0x74);
  *(undefined1 *)(iVar1 + 0x83) = 0;
  fn_0031f954(iVar1,0);
  fn_0068ab44(param_1,0x1000950);
  fn_00447fb4(param_1,param_2);
  return;
}



void fn_00446aa4(void)

{
                    /* WARNING: Subroutine does not return */
  fn_00416e48();
}



undefined4 fn_00446044(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  bool bVar11;
  uint local_6c;
  uint local_68 [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined1 local_30;
  undefined1 local_2f;
  
  puVar9 = (undefined4 *)param_1[6];
  if (puVar9 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar9)(puVar9);
    do {
      if (puVar1 == &DAT_00894498) goto LAB_00446088;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar9 = (undefined4 *)0x0;
LAB_00446088:
  fn_002c330c(local_68 + 3);
  local_68[3] = DAT_00894540;
  local_58 = DAT_00894544;
  local_54 = 9;
  local_48 = 9;
  local_50 = puVar9[2];
  puVar1 = (undefined4 *)fn_0022f750(DAT_00894548);
  uVar2 = fn_00100b58();
  puVar10 = &DAT_008f9ce8;
  if (uVar2 == 0) {
    piVar3 = local_40 + -3;
    iVar7 = *piVar3;
    if (iVar7 != 0) {
      if ((local_40 != &DAT_008f9cf4) &&
         ((iVar7 == -1 || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))))) {
        fn_001008c4(local_40 + -3,local_40[-2] + 8,0);
      }
      local_40 = &DAT_008f9cf4;
      goto LAB_004462e0;
    }
    local_40[-1] = 0;
    puVar1 = local_40;
  }
  else {
    if ((1 < local_40[-3] + 1) || ((uint)local_40[-2] < uVar2)) {
LAB_00446128:
      uVar5 = local_40[-1];
      local_6c = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
      if (local_6c < uVar5 + 0x80) {
        local_6c = uVar5 + 0x80;
      }
      puVar8 = local_68;
      if (uVar2 <= local_6c) {
        puVar8 = &local_6c;
      }
      local_68[0] = uVar2;
      uVar5 = *puVar8;
      if (0xfffffff1 < uVar5) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar5,0xfffffff1);
      }
      if (uVar5 < uVar2) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar5);
      }
      if (uVar5 != 0) {
        puVar10 = (undefined4 *)fn_00100fc6((uVar5 + 8) * 2,0);
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
        }
        puVar6 = (undefined2 *)((int)puVar10 + uVar2 * 2 + 0xc);
        *puVar10 = 0;
        puVar10[1] = uVar5;
        puVar10[2] = uVar2;
        if (puVar6 != (undefined2 *)0x0) {
          *puVar6 = 0;
        }
      }
      fn_00301a9c(puVar10 + 3,puVar1,uVar2 << 1);
      if (local_40 != &DAT_008f9cf4) {
        piVar3 = local_40 + -3;
        iVar7 = *piVar3;
        if ((iVar7 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))) {
          fn_001008c4(local_40 + -3,local_40[-2] + 8,0);
        }
      }
      local_40 = puVar10 + 3;
      goto LAB_004462e0;
    }
    if (puVar1 != (undefined4 *)0x0) {
      bVar11 = puVar1 <= local_40;
      if (local_40 <= puVar1) {
        bVar11 = (undefined4 *)((int)local_40 + local_40[-1] * 2) <= puVar1;
      }
      if (!bVar11) goto LAB_00446128;
    }
    fn_001006ac(local_40,puVar1,uVar2);
    local_40[-1] = uVar2;
    puVar1 = (undefined4 *)((int)local_40 + uVar2 * 2);
  }
  *(undefined2 *)puVar1 = 0;
LAB_004462e0:
  local_30 = 0;
  local_2f = 0;
  fn_002c29a0(param_1,local_68 + 3);
  (**(code **)(*param_1 + 0x124))(param_1);
  fn_00446560(param_1,puVar9[2]);
  fn_00689efc(param_1,0x46,0);
  iVar7 = fn_00154ac8(0x92);
  if (iVar7 == 0) {
    fn_00144834(0x92,1);
    *(undefined1 *)(param_1 + 0x2d) = 1;
    iVar7 = param_1[0x17];
    uVar4 = fn_0022f584((char *)&DAT_004464f8,0);
    local_68[0] = 0;
    local_6c = 1;
    local_68[1] = 0;
    local_68[2] = 1;
    fn_0036c5f4(iVar7,uVar4,1,0,1);
    uVar4 = fn_0022f584((char *)&DAT_00446510,0);
    fn_0036c140(iVar7,uVar4);
    uVar4 = fn_0022f584((char *)&DAT_00446528,0);
    fn_0036c140(iVar7,uVar4);
    fn_00689bd0(param_1,0x48,0);
  }
  else {
    *(undefined1 *)(param_1 + 0x2d) = 0;
  }
  if (local_34 != &DAT_008f9cf4) {
    piVar3 = local_34 + -3;
    iVar7 = *piVar3;
    if ((iVar7 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))) {
      fn_001008c4(local_34 + -3,local_34[-2] + 8,0);
    }
  }
  if (local_38 != &DAT_008f9cf4) {
    piVar3 = local_38 + -3;
    iVar7 = *piVar3;
    if ((iVar7 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))) {
      fn_001008c4(local_38 + -3,local_38[-2] + 8,0);
    }
  }
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
  return 1;
}



void fn_00445fb8(void)

{
  fn_0066eb04(DAT_00898840);
  return;
}



void fn_004450b8(int param_1)

{
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  return;
}


