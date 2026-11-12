#include "0036c3fc_0036fc00.h"



void fn_0036fc00(undefined4 *param_1)

{
  *param_1 = &DAT_008282d4;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}



undefined1 * fn_0036e4bc(int param_1,int *param_2,int param_3,int param_4)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  piVar2 = (int *)(**(code **)(*param_2 + 0x2c))(param_2,(&PTR_s_lv_00_00896288)[param_3],1);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar3 == &DAT_0089a924) goto LAB_0036e528;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_0036e528:
  if (param_1 != 0) {
    fn_0020bbc4(auStack_28,param_1);
    fn_006bfda8(auStack_24);
    iVar4 = fn_001a46f4();
    if (iVar4 != 0) {
      piVar5 = (int *)(**(code **)(*param_2 + 0x2c))
                                (param_2,(&PTR_s_tb_lv_value_00_00896278)[param_3],1);
      if (piVar5 != (int *)0x0) {
        puVar3 = (undefined4 *)(**(code **)(*piVar5 + 8))(piVar5);
        do {
          if (puVar3 == &DAT_0089a930) goto LAB_0036e5b0;
          puVar3 = (undefined4 *)*puVar3;
        } while (puVar3 != (undefined4 *)0x0);
      }
      piVar5 = (int *)0x0;
LAB_0036e5b0:
      local_30 = 0;
      local_2c = 0;
      uVar6 = fn_00246824(param_1);
      if (*(byte *)(param_1 + 0x2e) < uVar6) {
        uVar7 = fn_006c0108(auStack_24);
        fn_002309d8(&local_30,4,uVar7,0);
      }
      else {
        uVar7 = fn_006c0108(auStack_24);
        fn_002309d8(&local_30,4,uVar7,1);
      }
      if (param_4 == 0) {
        fn_00190d50(piVar5,&local_30);
      }
      else {
        uVar7 = fn_0022f5d8();
        fn_00190d50(piVar5,uVar7);
      }
      *(byte *)(piVar2 + 0x11) = *(byte *)(piVar2 + 0x11) & 0xfe | 1;
      return auStack_28;
    }
  }
  bVar1 = *(byte *)(piVar2 + 0x11);
  *(char *)(piVar2 + 0x11) = (char)(undefined1 *)(bVar1 & 0xfe);
  return (undefined1 *)(bVar1 & 0xfe);
}



void fn_0036dc80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *local_10;
  
  local_10 = param_4;
  iVar1 = fn_0022cdf0();
  if (iVar1 == 0) {
    return;
  }
  fn_0022cf0c(param_1);
  fn_00231690(&local_10,*(int *)(param_1 + 0x98) + 0x558,0);
  fn_00385b60(param_1,local_10);
  if (local_10 == &DAT_008f9cf4) goto LAB_0036dd0c;
  piVar2 = local_10 + -3;
  iVar1 = *piVar2;
  if (iVar1 != -1) {
    if (piVar2 == &DAT_008f9ce8) goto LAB_0036dd0c;
    *piVar2 = iVar1 + -1;
    if (iVar1 != 0) goto LAB_0036dd0c;
  }
  fn_001008c4(local_10 + -3,local_10[-2] + 8,0);
LAB_0036dd0c:
  fn_0036dd78(param_1);
  iVar1 = *(int *)(param_1 + 0x98);
  iVar3 = fn_00203ef8((int)*(short *)(iVar1 + 0x55c));
  if (iVar3 == 0) {
    fn_00688a74(*(undefined4 *)(param_1 + 0xcc));
  }
  else {
    uVar4 = fn_0022f60c((int)*(short *)(iVar1 + 0x55c));
    fn_00190d50(*(undefined4 *)(param_1 + 0xcc),uVar4);
  }
  fn_0036d8ec(param_1);
  return;
}



undefined4 fn_0036db48(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *local_10;
  
  local_10 = param_4;
  (**(code **)(*param_1 + 0x118))(param_1,DAT_00893ab0,DAT_00893ab4,DAT_00893ab8);
  fn_0036d9b0(param_1);
  fn_00231690(&local_10,param_1[0x26] + 0x558,0);
  fn_00385b60(param_1,local_10);
  if (local_10 == &DAT_008f9cf4) goto LAB_0036dbe0;
  piVar1 = local_10 + -3;
  iVar4 = *piVar1;
  if (iVar4 != -1) {
    if (piVar1 == &DAT_008f9ce8) goto LAB_0036dbe0;
    *piVar1 = iVar4 + -1;
    if (iVar4 != 0) goto LAB_0036dbe0;
  }
  fn_001008c4(local_10 + -3,local_10[-2] + 8,0);
LAB_0036dbe0:
  fn_0036dd78(param_1);
  iVar4 = param_1[0x26];
  iVar2 = fn_00203ef8((int)*(short *)(iVar4 + 0x55c));
  if (iVar2 == 0) {
    fn_00688a74(param_1[0x33]);
  }
  else {
    uVar3 = fn_0022f60c((int)*(short *)(iVar4 + 0x55c));
    fn_00190d50(param_1[0x33],uVar3);
  }
  fn_0036d8ec(param_1);
  return 1;
}



void fn_0036d8ec(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)(param_1 + 0xe8);
  bVar1 = *(byte *)(iVar4 + 0x44) & 0xfe;
  if (*(char *)(*(int *)(param_1 + 0x98) + 0x568) == '\0') {
    *(byte *)(iVar4 + 0x44) = bVar1;
  }
  else {
    *(byte *)(iVar4 + 0x44) = bVar1 | 1;
    iVar4 = *(int *)(param_1 + 0x98);
    uVar5 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0xd0);
      if (uVar5 < *(byte *)(iVar4 + 0x55e)) {
        uVar3 = fn_0022f60c((int)*(short *)(iVar4 + uVar5 * 2 + 0x560));
        fn_00190d50(*(undefined4 *)(iVar2 + uVar5 * 4),uVar3);
        iVar2 = *(int *)(param_1 + 0xdc);
        uVar3 = fn_00230af0(uVar5,0);
        fn_00190d50(*(undefined4 *)(iVar2 + uVar5 * 4),uVar3);
      }
      else {
        fn_00688a74(*(undefined4 *)(iVar2 + uVar5 * 4));
        fn_00688a74(*(undefined4 *)(*(int *)(param_1 + 0xdc) + uVar5 * 4));
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 3);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_0036d7cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  
  iVar3 = 0;
  local_18 = param_4;
  while( true ) {
    while( true ) {
      uVar1 = fn_0022f750((&DAT_00894528)[iVar3]);
      fn_0031b78c(param_1,iVar3,0,uVar1);
      if (iVar3 != 1) break;
      iVar3 = fn_00154ac8(0x93);
      if (iVar3 == 0) {
        local_18 = _DAT_00894504;
      }
      else {
        local_18 = _DAT_008944fc;
      }
      fn_002c37e0(param_1,1,&local_18);
      iVar3 = 2;
    }
    iVar2 = fn_002d8370(0xffffffff);
    if ((iVar2 != 0) && (iVar3 == 2)) break;
    iVar3 = iVar3 + 1;
    if (2 < iVar3) {
      return;
    }
  }
  local_18 = _DAT_00894504;
  fn_002c37e0(param_1,2,&local_18);
  return;
}



void fn_0036d4cc(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *apcStack_28 [3];
  short local_1c [6];
  
  apcStack_28[0] = "memberhensei";
  apcStack_28[1] = (char *)&DAT_00864978;
  apcStack_28[2] = (char *)&DAT_0086048c;
  local_1c[0] = 0x191;
  local_1c[1] = 0x192;
  local_1c[2] = 0x194;
  local_1c[3] = 0;
  uVar1 = fn_0022f750(apcStack_28[param_2]);
  uVar2 = fn_0022eefc((int)local_1c[param_2],0);
  fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar1,uVar2);
  fn_00689bd0(param_1,0x49,0);
  return;
}



void fn_0036c658(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = 3;
  *(undefined1 *)(param_1 + 10) = 1;
  *(bool *)(param_1 + 8) = param_2 == 1;
  return;
}



void fn_0036c3fc(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (param_2 == 0) goto LAB_0036c458;
  piVar4 = (int *)(param_1 + 0x24);
  iVar1 = fn_00100b58(param_2);
  if (iVar1 != 0) {
    fn_00177c88(piVar4,0,*(undefined4 *)(*piVar4 + -4),param_2,iVar1,0,iVar1);
    goto LAB_0036c458;
  }
  puVar3 = (undefined4 *)*piVar4;
  piVar2 = puVar3 + -3;
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    puVar3[-1] = 0;
    *(undefined2 *)*piVar4 = 0;
    goto LAB_0036c458;
  }
  if (puVar3 != &DAT_008f9cf4) {
    if (iVar1 == -1) {
LAB_0036c4dc:
      fn_001008c4(*piVar4 + -0xc,*(int *)(*piVar4 + -8) + 8,0);
    }
    else if (piVar2 != &DAT_008f9ce8) {
      *piVar2 = iVar1 + -1;
      if (iVar1 == 0) goto LAB_0036c4dc;
    }
  }
  *piVar4 = (int)&DAT_008f9cf4;
LAB_0036c458:
  if (param_3 != 0) {
    piVar4 = (int *)(param_1 + 0x28);
    iVar1 = fn_00100b58(param_3);
    if (iVar1 == 0) {
      puVar3 = (undefined4 *)*piVar4;
      piVar2 = puVar3 + -3;
      iVar1 = *piVar2;
      if (iVar1 == 0) {
        puVar3[-1] = 0;
        *(undefined2 *)*piVar4 = 0;
        return;
      }
      if ((puVar3 != &DAT_008f9cf4) &&
         ((iVar1 == -1 || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar1 + -1, iVar1 == 0)))))) {
        fn_001008c4(*piVar4 + -0xc,*(int *)(*piVar4 + -8) + 8,0);
      }
      *piVar4 = (int)&DAT_008f9cf4;
      return;
    }
    fn_00177c88(piVar4,0,*(undefined4 *)(*piVar4 + -4),param_3,iVar1,0,iVar1);
  }
  return;
}


