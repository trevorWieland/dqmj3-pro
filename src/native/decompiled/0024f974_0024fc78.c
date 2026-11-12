#include "0024f974_0024fc78.h"



undefined4 fn_0024fc78(undefined1 *param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_120 [240];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  
  iVar8 = 0;
  bVar1 = false;
  bVar2 = true;
  iVar6 = 0;
  puVar3 = param_1;
  if (param_2 < 1) {
    if (param_3 != 0) {
      return 0;
    }
  }
  else {
    do {
      piVar7 = *(int **)(param_1 + iVar6 * 4);
      if (piVar7 != (int *)0x0) {
        puVar3 = (undefined1 *)*piVar7;
      }
      if (piVar7 != (int *)0x0 && puVar3 != (undefined1 *)0x0) {
        if (bVar1) {
          return 1;
        }
        iVar4 = fn_0024e350(piVar7);
        if (iVar4 != 0) {
          return 1;
        }
        fn_0017821c(auStack_120,piVar7,0xf0);
        fn_0020bbc4(auStack_30,auStack_120);
        uVar5 = fn_006bfe90(auStack_2c);
        switch(uVar5) {
        case 0:
        case 1:
          iVar8 = iVar8 + 1;
          break;
        case 2:
          iVar8 = iVar8 + 2;
          break;
        case 3:
          iVar8 = iVar8 + 3;
          break;
        case 4:
          iVar8 = iVar8 + 4;
        }
        if (4 < iVar8) {
          return 1;
        }
        bVar2 = false;
        puVar3 = auStack_30;
      }
      else {
        bVar1 = true;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_2);
    if ((param_3 != 0) || (!bVar2)) {
      return 0;
    }
  }
  return 1;
}



void fn_0024fa24(int param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  if (*(char *)(param_1 + 0x2e) == '\0') {
    *(undefined1 *)(param_1 + 0x2e) = 1;
  }
  else {
    uVar4 = fn_00246824(param_1);
    if (uVar4 < *(byte *)(param_1 + 0x2e)) {
      uVar5 = fn_00246824(param_1);
      *(char *)(param_1 + 0x2e) = (char)uVar5;
      iVar6 = fn_00388784(uVar5,param_1);
      if (iVar6 < *(short *)(param_1 + 0x3a)) {
        *(short *)(param_1 + 0x3a) = (short)iVar6;
      }
    }
    if (99 < *(byte *)(param_1 + 0x2e)) goto LAB_0024faac;
  }
  uVar1 = fn_00661570((int)*(short *)(param_1 + 0x1c));
  iVar6 = fn_002467b4(*(char *)(param_1 + 0x2e) + '\x01',uVar1);
  if (iVar6 <= *(int *)(param_1 + 0x30)) {
    *(int *)(param_1 + 0x30) = iVar6 + -1;
  }
LAB_0024faac:
  if (*(short *)(param_1 + 0x1e) < 1) {
    *(undefined2 *)(param_1 + 0x1e) = 1;
  }
  else {
    iVar6 = fn_005fe128(param_1,0);
    if (iVar6 < *(short *)(param_1 + 0x1e)) {
      uVar2 = fn_005fe128(param_1,0);
      *(undefined2 *)(param_1 + 0x1e) = uVar2;
    }
  }
  sVar3 = *(short *)(param_1 + 0x1e);
  if (*(short *)(param_1 + 0x22) <= *(short *)(param_1 + 0x1e)) {
    sVar3 = *(short *)(param_1 + 0x22);
  }
  *(short *)(param_1 + 0x22) = sVar3;
  if (*(short *)(param_1 + 0x20) < 1) {
    *(undefined2 *)(param_1 + 0x20) = 1;
  }
  else {
    iVar6 = fn_0020ddfc(param_1,0);
    if (iVar6 < *(short *)(param_1 + 0x20)) {
      uVar2 = fn_0020ddfc(param_1,0);
      *(undefined2 *)(param_1 + 0x20) = uVar2;
    }
  }
  sVar3 = *(short *)(param_1 + 0x20);
  if (*(short *)(param_1 + 0x24) <= *(short *)(param_1 + 0x20)) {
    sVar3 = *(short *)(param_1 + 0x24);
  }
  *(short *)(param_1 + 0x24) = sVar3;
  if (*(short *)(param_1 + 0x26) < 1) {
    *(undefined2 *)(param_1 + 0x26) = 1;
  }
  else {
    iVar6 = fn_0020fd10(param_1,0);
    if (iVar6 < *(short *)(param_1 + 0x26)) {
      uVar2 = fn_0020fd10(param_1,0);
      *(undefined2 *)(param_1 + 0x26) = uVar2;
    }
  }
  if (*(short *)(param_1 + 0x28) < 1) {
    *(undefined2 *)(param_1 + 0x28) = 1;
  }
  else {
    iVar6 = fn_00210174(param_1,0);
    if (iVar6 < *(short *)(param_1 + 0x28)) {
      uVar2 = fn_00210174(param_1,0);
      *(undefined2 *)(param_1 + 0x28) = uVar2;
    }
  }
  if (*(short *)(param_1 + 0x2a) < 1) {
    *(undefined2 *)(param_1 + 0x2a) = 1;
  }
  else {
    iVar6 = fn_0020e628(param_1,0);
    if (iVar6 < *(short *)(param_1 + 0x2a)) {
      uVar2 = fn_0020e628(param_1,0);
      *(undefined2 *)(param_1 + 0x2a) = uVar2;
    }
  }
  if (*(short *)(param_1 + 0x2c) < 1) {
    *(undefined2 *)(param_1 + 0x2c) = 1;
  }
  else {
    iVar6 = fn_0020e3a4(param_1,0);
    if (iVar6 < *(short *)(param_1 + 0x2c)) {
      uVar2 = fn_0020e3a4(param_1,0);
      *(undefined2 *)(param_1 + 0x2c) = uVar2;
    }
  }
  uVar4 = *(uint *)(DAT_0088fcd8 + *(short *)(param_1 + 0x1c) * 4);
  if (uVar4 == 0) {
    uVar4 = fn_0028aa48(*(undefined4 *)(DAT_00897804 + 0xc));
  }
  if (uVar4 == 0) {
    return;
  }
  uVar7 = fn_0024e96c(param_1);
  fn_002505dc(param_1,uVar7 ^ uVar4);
  return;
}



void fn_0024f9fc(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  fn_00237c74(param_2,*(undefined4 *)(param_1 + 8),0xff,0);
  if (*(char *)(param_2 + 0x2e) == '\0') {
    *(undefined1 *)(param_2 + 0x2e) = 1;
  }
  else {
    uVar4 = fn_00246824(param_2);
    if (uVar4 < *(byte *)(param_2 + 0x2e)) {
      uVar5 = fn_00246824(param_2);
      *(char *)(param_2 + 0x2e) = (char)uVar5;
      iVar6 = fn_00388784(uVar5,param_2);
      if (iVar6 < *(short *)(param_2 + 0x3a)) {
        *(short *)(param_2 + 0x3a) = (short)iVar6;
      }
    }
    if (99 < *(byte *)(param_2 + 0x2e)) goto LAB_0024faac;
  }
  uVar1 = fn_00661570((int)*(short *)(param_2 + 0x1c));
  iVar6 = fn_002467b4(*(char *)(param_2 + 0x2e) + '\x01',uVar1);
  if (iVar6 <= *(int *)(param_2 + 0x30)) {
    *(int *)(param_2 + 0x30) = iVar6 + -1;
  }
LAB_0024faac:
  if (*(short *)(param_2 + 0x1e) < 1) {
    *(undefined2 *)(param_2 + 0x1e) = 1;
  }
  else {
    iVar6 = fn_005fe128(param_2,0);
    if (iVar6 < *(short *)(param_2 + 0x1e)) {
      uVar2 = fn_005fe128(param_2,0);
      *(undefined2 *)(param_2 + 0x1e) = uVar2;
    }
  }
  sVar3 = *(short *)(param_2 + 0x1e);
  if (*(short *)(param_2 + 0x22) <= *(short *)(param_2 + 0x1e)) {
    sVar3 = *(short *)(param_2 + 0x22);
  }
  *(short *)(param_2 + 0x22) = sVar3;
  if (*(short *)(param_2 + 0x20) < 1) {
    *(undefined2 *)(param_2 + 0x20) = 1;
  }
  else {
    iVar6 = fn_0020ddfc(param_2,0);
    if (iVar6 < *(short *)(param_2 + 0x20)) {
      uVar2 = fn_0020ddfc(param_2,0);
      *(undefined2 *)(param_2 + 0x20) = uVar2;
    }
  }
  sVar3 = *(short *)(param_2 + 0x20);
  if (*(short *)(param_2 + 0x24) <= *(short *)(param_2 + 0x20)) {
    sVar3 = *(short *)(param_2 + 0x24);
  }
  *(short *)(param_2 + 0x24) = sVar3;
  if (*(short *)(param_2 + 0x26) < 1) {
    *(undefined2 *)(param_2 + 0x26) = 1;
  }
  else {
    iVar6 = fn_0020fd10(param_2,0);
    if (iVar6 < *(short *)(param_2 + 0x26)) {
      uVar2 = fn_0020fd10(param_2,0);
      *(undefined2 *)(param_2 + 0x26) = uVar2;
    }
  }
  if (*(short *)(param_2 + 0x28) < 1) {
    *(undefined2 *)(param_2 + 0x28) = 1;
  }
  else {
    iVar6 = fn_00210174(param_2,0);
    if (iVar6 < *(short *)(param_2 + 0x28)) {
      uVar2 = fn_00210174(param_2,0);
      *(undefined2 *)(param_2 + 0x28) = uVar2;
    }
  }
  if (*(short *)(param_2 + 0x2a) < 1) {
    *(undefined2 *)(param_2 + 0x2a) = 1;
  }
  else {
    iVar6 = fn_0020e628(param_2,0);
    if (iVar6 < *(short *)(param_2 + 0x2a)) {
      uVar2 = fn_0020e628(param_2,0);
      *(undefined2 *)(param_2 + 0x2a) = uVar2;
    }
  }
  if (*(short *)(param_2 + 0x2c) < 1) {
    *(undefined2 *)(param_2 + 0x2c) = 1;
  }
  else {
    iVar6 = fn_0020e3a4(param_2,0);
    if (iVar6 < *(short *)(param_2 + 0x2c)) {
      uVar2 = fn_0020e3a4(param_2,0);
      *(undefined2 *)(param_2 + 0x2c) = uVar2;
    }
  }
  uVar4 = *(uint *)(DAT_0088fcd8 + *(short *)(param_2 + 0x1c) * 4);
  if (uVar4 == 0) {
    uVar4 = fn_0028aa48(*(undefined4 *)(DAT_00897804 + 0xc));
  }
  if (uVar4 == 0) {
    return;
  }
  uVar7 = fn_0024e96c(param_2);
  fn_002505dc(param_2,uVar7 ^ uVar4);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0024f9dc) */
/* WARNING: Removing unreachable block (ram,0x0024f9e8) */

void fn_0024f974(uint *param_1,int param_2)

{
  uint uVar1;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  
  if (param_2 == 0) {
    local_18 = *param_1;
    local_14 = param_1[1];
    local_10 = (uint)*(byte *)((int)param_1 + 9);
    local_c = (int)*(short *)((int)param_1 + 10);
    uVar1 = fn_005f5c50(0x6aa6e2c2,&local_18,0x10);
    *(byte *)(param_1 + 2) = (byte)((uVar1 >> 0x10) >> (((byte)*param_1 & 1) << 3));
    *(byte *)(param_1 + 3) = (byte)((uVar1 >> 0x10) >> ((~*param_1 & 1) << 3));
    return;
  }
  return;
}


