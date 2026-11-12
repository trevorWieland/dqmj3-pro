#include "005b11d8_005b8a20.h"



void fn_005b8a20(int *param_1)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  char *pcVar10;
  char *local_50 [2];
  undefined1 auStack_48 [32];
  undefined4 *local_28;
  
  puVar9 = (undefined4 *)param_1[6];
  if (puVar9 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar9)(puVar9);
    do {
      if (puVar2 == &DAT_0089700c) goto LAB_005b8a68;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar9 = (undefined4 *)0x0;
LAB_005b8a68:
  iVar3 = (**(code **)(*param_1 + 8))(param_1);
  uVar4 = fn_00178f9c(*(undefined4 *)(iVar3 + 8),param_1[0x1a]);
  iVar3 = fn_00172c98(uVar4,(char *)&DAT_005b8bfc);
  uVar5 = fn_002f6534(param_1);
  fn_00688cc4(*(undefined4 *)(iVar3 + 0xac),(char *)&DAT_005b8c08,uVar5);
  fn_00688cc4(*(undefined4 *)(iVar3 + 0xac),(char *)&DAT_005b8c14,puVar9[4]);
  iVar8 = 0;
  local_50[1] = "tb_skill_name_b_%02d";
  local_50[0] = (char *)&DAT_00869b3c;
  do {
    pcVar10 = local_50[iVar8 / 10];
    sVar1 = fn_00604dec(puVar9,iVar8);
    fn_001028d4(auStack_48,pcVar10,iVar8 % 10);
    iVar6 = fn_001a46f4();
    if (iVar6 == 0) {
      uVar5 = fn_0022f750((char *)&DAT_005b8c30);
      fn_00688cc4(uVar4,auStack_48,uVar5);
    }
    else {
      fn_002317d8(&local_28,(int)sVar1,0);
      fn_00688cc4(uVar4,auStack_48,local_28);
      if (local_28 != &DAT_008f9cf4) {
        piVar7 = local_28 + -3;
        iVar6 = *piVar7;
        if ((iVar6 == -1) || ((piVar7 != &DAT_008f9ce8 && (*piVar7 = iVar6 + -1, iVar6 == 0)))) {
          fn_001008c4(local_28 + -3,local_28[-2] + 8,0);
        }
      }
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x14);
  fn_006889d8(*(undefined4 *)(iVar3 + 0xac),(char *)&DAT_005b8c3c,0);
  return;
}



void fn_005b3fec(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0xd4) == *(int *)(param_1 + 0xd8)) {
      fn_005b39e0(param_1,3,0);
      return;
    }
    fn_00689828(param_1,0);
    iVar1 = *(int *)(param_1 + 0x74);
    *(undefined1 *)(iVar1 + 0x81) = 0;
    fn_0031f3f4(iVar1,0);
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    fn_00327a24(*(undefined4 *)(param_1 + 0xd0),1,
                 *(short *)(param_1 + 0xd8) - *(short *)(param_1 + 0xd4),1,&local_34);
    uVar3 = fn_003453a8(1);
    fn_005b4558(param_1,0,uVar3);
    *(undefined1 *)(param_1 + 0xf8) = 1;
    fn_0068ab44(param_1,0x100094b);
    return;
  }
  if (param_2 == 1) {
    if (*(int *)(param_1 + 0xd4) == *(int *)(param_1 + 0xd8)) {
      fn_005b39e0(param_1,4,0);
      return;
    }
    uVar2 = fn_003453a8(*(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0xd4));
    if (uVar2 <= *(uint *)(param_1 + 0xdc)) {
      uVar2 = fn_003453a8(*(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0xd4));
      *(uint *)(param_1 + 0xe4) = uVar2;
      *(undefined4 *)(param_1 + 0xf4) = 1;
      *(uint *)(param_1 + 0xec) = *(int *)(param_1 + 0xdc) - uVar2;
      *(uint *)(param_1 + 0xe8) = uVar2 / 0x1e;
      *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0xd4);
      fn_005b39e0(param_1,1);
      *(undefined1 *)(param_1 + 0xfa) = 2;
      return;
    }
  }
  else {
    if (param_2 != 2) {
      return;
    }
    iVar1 = fn_006b2974(*(undefined4 *)(DAT_00897804 + 0x28));
    if (iVar1 != 0) {
      fn_005b39e0(param_1,5,0);
      return;
    }
    if (99999 < *(uint *)(param_1 + 0xdc)) {
      *(uint *)(param_1 + 0xec) = *(uint *)(param_1 + 0xdc) - 100000;
      *(undefined4 *)(param_1 + 0xf4) = 2;
      *(undefined4 *)(param_1 + 0xe4) = 100000;
      *(undefined4 *)(param_1 + 0xe8) = 0xd05;
      *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0xd4);
      fn_005b39e0(param_1,2);
      *(undefined1 *)(param_1 + 0xfa) = 3;
      return;
    }
  }
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0x100094d;
  uVar3 = fn_0022eefc(0x39e,0);
  local_34 = 1;
  local_30 = 0;
  local_28 = 1;
  local_2c = 0;
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar3,1,0,1);
  fn_00689bd0(param_1,0x48,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 fn_005b19b0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 local_38;
  undefined1 auStack_34 [4];
  undefined4 local_30;
  undefined4 *local_2c [2];
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xec);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00892ef0) goto LAB_005b19fc;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005b19fc:
  *(undefined4 **)(param_1 + 0x104) = puVar1;
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00892ee4) goto LAB_005b1a44;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005b1a44:
  *(undefined4 **)(param_1 + 0x108) = puVar1;
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x36);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008951dc) goto LAB_005b1a88;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005b1a88:
  fn_003492d0(puVar1);
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00892ee4) goto LAB_005b1ad0;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005b1ad0:
  puVar2 = (undefined4 *)fn_00689c1c(param_1,0x80);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008964f4) goto LAB_005b1b10;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_005b1b10:
  *(undefined4 **)(param_1 + 0x128) = puVar2;
  local_30 = fn_0043cd80(param_1);
  *(undefined1 *)(param_1 + 0x112) = 3;
  puVar2 = (undefined4 *)fn_001f74ec(param_1,0xf2);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00894eb0) goto LAB_005b1b70;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_005b1b70:
  *(undefined4 *)(param_1 + 0x11c) = puVar1[3];
  *(undefined4 *)(param_1 + 0x120) = puVar1[4];
  *(undefined4 *)(param_1 + 0x124) = puVar1[5];
  iVar4 = fn_006b3e34(*(undefined4 *)(*(int *)(param_1 + 0x108) + 8));
  if (*(char *)(*(int *)(param_1 + 0x104) + 0x14) == '\0') {
    fn_00601b2c(*(undefined4 *)(param_1 + 0x104));
    *(undefined4 *)(*(int *)(param_1 + 0x104) + 0x1c) = 0;
    if (*(char *)(*(int *)(*(int *)(param_1 + 0x108) + 8) + 9) == '\0') {
      *(undefined1 *)(param_1 + 0x112) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x112) = 2;
    }
    goto LAB_005b1ca4;
  }
  iVar8 = puVar2[2];
  if (iVar8 == 0) {
    if (*(char *)((int)puVar2 + 0x7b) != '\0') {
      uVar5 = *(undefined4 *)(param_1 + 0x104);
      iVar8 = 0;
      goto LAB_005b1bc4;
    }
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x104);
LAB_005b1bc4:
    fn_00601b1c(uVar5,iVar8);
  }
  iVar8 = 0;
  if (0 < iVar4) {
    do {
      iVar6 = fn_006ee14c(*(undefined4 *)(param_1 + 0x104),iVar8);
      if (iVar6 != 0) {
        uVar5 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),iVar6);
        fn_0020bbc4(&local_38,uVar5);
        uVar5 = fn_006bfda8(auStack_34);
        fn_002317d8(local_2c,uVar5,0);
        fn_0031b78c(param_1,iVar8,6,local_2c[0]);
        if (local_2c[0] != &DAT_008f9cf4) {
          piVar7 = local_2c[0] + -3;
          iVar6 = *piVar7;
          if ((iVar6 == -1) || ((piVar7 != &DAT_008f9ce8 && (*piVar7 = iVar6 + -1, iVar6 == 0)))) {
            fn_001008c4(local_2c[0] + -3,local_2c[0][-2] + 8,0);
          }
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar4);
  }
LAB_005b1ca4:
  iVar8 = 0;
  do {
    if (iVar4 <= iVar8) {
      local_38 = _DAT_00892f5c;
      fn_002c37e0(param_1,iVar8,&local_38);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 3);
  fn_00395b30(puVar2);
  puVar2[3] = 0xec;
  puVar2[4] = 0xec;
  *(undefined1 *)((int)puVar2 + 0x7a) = 1;
  *(undefined1 *)((int)puVar2 + 0x79) = 1;
  puVar2[0x22] = 0;
  iVar4 = *(int *)(param_1 + 0x104);
  *(undefined1 *)(iVar4 + 0x14) = 0;
  *(undefined4 *)(iVar4 + 0x18) = 0;
  fn_00689930(param_1,0x36,0);
  return local_30;
}



void fn_005b11d8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_40 [2];
  undefined1 auStack_38 [36];
  
  iVar1 = fn_0022cdf0();
  if (iVar1 == 0) {
    return;
  }
  if (*(short *)(param_1 + 0xa8) != *(short *)(*(int *)(param_1 + 0x98) + 0x1c)) {
    iVar3 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x1c);
    iVar1 = fn_0028bbc0(iVar3);
    if (iVar1 == 0) {
      fn_005ca88c(param_1,*(undefined4 *)(param_1 + 0xb0),8);
    }
    else {
      local_40[0] = iVar3;
      fn_0017d96c(auStack_38,0x20,0x1f,(char *)&DAT_005b1524);
      uVar2 = fn_0016ba34(DAT_00897800,DAT_00898784,auStack_38,0);
      fn_00190d50(*(undefined4 *)(param_1 + 0xb0),uVar2);
    }
    iVar3 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x1c);
    iVar1 = fn_0028bbc0(iVar3);
    if (iVar1 == 0) {
      fn_005ca88c(param_1,*(undefined4 *)(param_1 + 0xb4),8);
    }
    else {
      uVar2 = fn_006613d0(iVar3);
      fn_002317d8(local_40,uVar2,0);
      fn_00190d50(*(undefined4 *)(param_1 + 0xb4),local_40[0]);
      fn_001588d4(local_40);
    }
    iVar3 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x1c);
    iVar1 = fn_0028bbc0(iVar3);
    if (iVar1 == 0) {
      fn_005ca88c(param_1,*(undefined4 *)(param_1 + 0xb8),8);
    }
    else {
      uVar2 = fn_006614fc(iVar3);
      fn_002317d8(local_40,uVar2,0);
      fn_00190d50(*(undefined4 *)(param_1 + 0xb8),local_40[0]);
      fn_001588d4(local_40);
    }
    iVar1 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x1c);
    uVar2 = fn_006616a8(iVar1);
    iVar1 = fn_0028bbc0(iVar1);
    if ((iVar1 == 0) ||
       (iVar1 = fn_006b7d34(*(undefined4 *)(DAT_00897804 + 0x24),uVar2), iVar1 == 0)) {
      fn_005ca88c(param_1,*(undefined4 *)(param_1 + 0xbc),8);
    }
    else {
      fn_0023097c(local_40,uVar2,0);
      fn_00190d50(*(undefined4 *)(param_1 + 0xbc),local_40[0]);
      fn_001588d4(local_40);
    }
    iVar1 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x1c);
    uVar2 = fn_0066161c(iVar1);
    iVar1 = fn_0028bbc0(iVar1);
    if ((iVar1 == 0) ||
       (iVar1 = fn_006b7d34(*(undefined4 *)(DAT_00897804 + 0x24),uVar2), iVar1 == 0)) {
      fn_005ca88c(param_1,*(undefined4 *)(param_1 + 0xc0),8);
    }
    else {
      fn_0023097c(local_40,uVar2,0);
      fn_00190d50(*(undefined4 *)(param_1 + 0xc0),local_40[0]);
      fn_001588d4(local_40);
    }
    fn_005afd78(param_1);
  }
  fn_005caba4(param_1);
  return;
}


