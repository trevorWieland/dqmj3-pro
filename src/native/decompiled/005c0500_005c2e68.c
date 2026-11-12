#include "005c0500_005c2e68.h"



undefined4 fn_005c2e68(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  wchar16 *pwStack_80;
  char *pcStack_7c;
  int local_78;
  undefined4 local_74;
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [4];
  undefined1 local_54;
  undefined1 local_53;
  undefined4 local_4c;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [28];
  undefined4 local_24;
  
  iVar2 = fn_002f830c();
  if (*(char *)(iVar2 + 0x80) == '\x01') {
    *(undefined1 *)(iVar2 + 0x80) = 0;
    puVar7 = *(undefined4 **)(param_1 + 0x18);
    if (puVar7 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar7)(puVar7);
      do {
        if (puVar3 == &DAT_008971bc) goto LAB_005c2fbc;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    puVar7 = (undefined4 *)0x0;
LAB_005c2fbc:
    puVar3 = *(undefined4 **)(param_1 + 0x18);
    cVar1 = *(char *)((int)puVar7 + 0x11);
    if (puVar3 != (undefined4 *)0x0) {
      puVar7 = (undefined4 *)(**(code **)*puVar3)(puVar3);
      do {
        if (puVar7 == &DAT_008971bc) goto LAB_005c2ff8;
        puVar7 = (undefined4 *)*puVar7;
      } while (puVar7 != (undefined4 *)0x0);
    }
    puVar3 = (undefined4 *)0x0;
LAB_005c2ff8:
    fn_00689efc(param_1,0xee,(int)*(char *)(puVar3 + 4),(int)cVar1);
    fn_002f6fe4();
    fn_002f6e1c(param_1);
  }
  else {
    fn_002f8228(*(undefined4 *)(param_1 + 100));
  }
  fn_00397774(&pwStack_80);
  pwStack_80 = L"rom:/data/Layout/common/common_0200.arc";
  pcStack_7c = (char *)&DAT_005c313c;
  local_78 = 7;
  puVar7 = *(undefined4 **)(param_1 + 0x18);
  if (puVar7 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar7)(puVar7);
    do {
      if (puVar3 == &DAT_008971bc) goto LAB_005c2ee4;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar7 = (undefined4 *)0x0;
LAB_005c2ee4:
  local_74 = puVar7[3];
  uVar4 = fn_0022f750((char *)&DAT_005c3150);
  fn_00147974(auStack_64,uVar4);
  local_54 = 0;
  local_53 = 0;
  local_4c = 1;
  uVar4 = fn_0022f750((char *)&DAT_005c315c);
  fn_00147974(auStack_40,uVar4);
  uVar4 = fn_00397618(param_1,&pwStack_80);
  iVar2 = 0;
  if (0 < local_78) {
    do {
      uVar5 = fn_0022f750((&DAT_007cb00c)[iVar2]);
      fn_0031b78c(param_1,iVar2,0,uVar5);
      if (iVar2 == 2) {
        fn_002f6dcc();
        iVar6 = fn_006b4f84();
        if (iVar6 < 1) goto LAB_005c3090;
      }
      else if (iVar2 == 6) {
        uVar5 = fn_002f78f4();
        iVar6 = fn_002e2dc8(uVar5,4);
        if (iVar6 != 0) {
          fn_002f6f40();
          iVar6 = fn_006b64bc();
          if (iVar6 == 0) goto LAB_005c30ac;
        }
LAB_005c3090:
        local_24 = DAT_00897220;
        fn_002c37b4(param_1,iVar2,0,&local_24);
      }
LAB_005c30ac:
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_78);
  }
  *(undefined **)(param_1 + 0xf8) = &DAT_005c317c;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined **)(param_1 + 0xf0) = &DAT_005c317c;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined **)(param_1 + 0xe8) = &DAT_005c317c;
  *(undefined4 *)(param_1 + 0xec) = 0;
  fn_00100414(auStack_44,&LAB_0059e0e0,8,4);
  iVar2 = fn_001588d4(auStack_58);
  iVar2 = fn_001588d4(iVar2 + -4);
  iVar2 = fn_001588d4(iVar2 + -4);
  fn_001588d4(iVar2 + -4);
  return uVar4;
}



void fn_005c2b9c(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0022fd28((char *)&DAT_005c2be8);
  fn_0031b78c(param_1,0,2,uVar1);
  uVar1 = fn_0022fd28((char *)&DAT_005c2bf4);
  fn_0031b78c(param_1,1,2,uVar1);
  fn_002c3e78(param_1);
  return;
}



void fn_005c282c(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)0x0;
  if (param_2 == 0) {
    puVar1 = (undefined4 *)fn_001f7510(param_1,0x49);
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
      do {
        if (puVar2 == &DAT_008942dc) {
          puVar5 = puVar1;
          break;
        }
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    uVar3 = fn_0022fd28((char *)&DAT_005c2948);
    uVar4 = fn_0022fd28((char *)&DAT_005c2954);
    fn_00321118(puVar5,uVar3,uVar4);
    fn_00689bd0(param_1,0x49,0);
    return;
  }
  if (param_2 != 1) {
    return;
  }
  puVar1 = (undefined4 *)fn_001f7510(param_1,0x49);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008942dc) {
        puVar5 = puVar1;
        break;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  uVar3 = fn_0022fd28((char *)&DAT_005c2964);
  uVar4 = fn_0022fd28((char *)&DAT_005c2970);
  fn_00321118(puVar5,uVar3,uVar4);
  fn_00689bd0(param_1,0x49,0);
  return;
}



void fn_005c21b8(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x002c3dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x130))();
  return;
}



undefined4 fn_005c1df0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  wchar16 *local_4c;
  char *pcStack_48;
  int local_44;
  undefined4 local_40;
  int local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  
  fn_00411b78();
  fn_002c330c(&local_4c);
  local_4c = L"rom:/data/Layout/common/shop_01.arc";
  pcStack_48 = "shop_01.bflyt";
  local_38 = param_1[0x2f];
  local_44 = param_1[0x2f];
  if (7 < local_44) {
    local_44 = 8;
    local_20 = 1;
  }
  local_40 = (**(code **)(*param_1 + 0x144))(param_1);
  uVar1 = (**(code **)(*param_1 + 0x138))(param_1);
  fn_00147974(&local_30,uVar1);
  local_1f = 0;
  if ((char)param_1[0x30] == '\0') {
    local_1e = 1;
    uVar1 = fn_0022f750((char *)&DAT_005c2054);
    fn_00147974(&local_2c,uVar1);
    local_34 = 0x428c0000;
    local_1d = 1;
  }
  fn_002c29a0(param_1,&local_4c);
  fn_0031f8fc(param_1[0x1d],0,0,0,0xffffffff);
  iVar2 = param_1[0x1d];
  if ((char)param_1[0x30] == '\0') {
    *(undefined1 *)(iVar2 + 0x81) = 1;
    fn_0031f3f4(iVar2,0);
    iVar2 = param_1[0x1d];
    *(undefined1 *)(iVar2 + 0x83) = 0;
    fn_0031f954(iVar2,0);
  }
  else {
    *(undefined1 *)(iVar2 + 0x81) = 0;
    fn_0031f3f4(iVar2,0);
    iVar2 = param_1[0x1d];
    *(undefined1 *)(iVar2 + 0x83) = 0xff;
    fn_0031f954(iVar2,0);
  }
  if (local_24 != &DAT_008f9cf4) {
    piVar3 = local_24 + -3;
    iVar2 = *piVar3;
    if ((iVar2 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_24 + -3,local_24[-2] + 8,0);
    }
  }
  if (local_28 != &DAT_008f9cf4) {
    piVar3 = local_28 + -3;
    iVar2 = *piVar3;
    if ((iVar2 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_28 + -3,local_28[-2] + 8,0);
    }
  }
  if (local_2c != &DAT_008f9cf4) {
    piVar3 = local_2c + -3;
    iVar2 = *piVar3;
    if ((iVar2 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_2c + -3,local_2c[-2] + 8,0);
    }
  }
  if (local_30 != &DAT_008f9cf4) {
    piVar3 = local_30 + -3;
    iVar2 = *piVar3;
    if ((iVar2 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_30 + -3,local_30[-2] + 8,0);
    }
  }
  return 1;
}



void fn_005c17f4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x11c) + 8);
  iVar3 = *(int *)(*(int *)(param_1 + 0x11c) + 0xc);
  do {
    if (iVar4 < (iVar3 - iVar1) / 0x14) {
      fn_0031b78c(param_1,iVar4,0,
                   *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x11c) + 8) + iVar4 * 0x14 + 4));
    }
    else {
      uVar2 = fn_0022f750((char *)&DAT_005c189c);
      fn_0031b78c(param_1,iVar4,0,uVar2);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
                    /* WARNING: Subroutine does not return */
  fn_006ba250(param_1);
}



void fn_005c06ec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  fn_00748d08();
  iVar4 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x11c) + 8);
  iVar3 = *(int *)(*(int *)(param_1 + 0x11c) + 0xc);
  do {
    if (iVar4 < (iVar3 - iVar1) / 0x14) {
      fn_0031b78c(param_1,iVar4,0,
                   *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x11c) + 8) + iVar4 * 0x14 + 4));
    }
    else {
      uVar2 = fn_0022f750((char *)&DAT_005c189c);
      fn_0031b78c(param_1,iVar4,0,uVar2);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
                    /* WARNING: Subroutine does not return */
  fn_006ba250(param_1);
}



void fn_005c0500(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  puVar1 = (undefined4 *)fn_001f74ec(param_2,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar1)();
    do {
      bVar3 = puVar1 != &DAT_00892ee4;
      if (bVar3) {
        puVar1 = (undefined4 *)*puVar1;
      }
    } while (bVar3 && puVar1 != (undefined4 *)0x0);
  }
  if (param_3 == 0) {
    uVar2 = fn_0022f750((char *)&DAT_005c0594);
    fn_00168a24(param_1,uVar2,auStack_14);
    return;
  }
  fn_00168a24(param_1,&DAT_005c0590,auStack_18);
  return;
}


