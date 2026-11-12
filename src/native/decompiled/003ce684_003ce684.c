#include "003ce684_003ce684.h"



void fn_003ce684(int param_1)

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
  
  uVar2 = DAT_00898bc0;
  uVar6 = DAT_00898b9c;
  switch(*(undefined1 *)(param_1 + 0x79)) {
  case 1:
    local_18[0] = &DAT_008f9cf4;
    fn_0036c054(*(undefined4 *)(param_1 + 0x5c),local_18);
    uVar6 = DAT_00898b98;
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
    fn_003cf0e8(param_1,DAT_00898b94,1,0);
    uVar3 = 3;
    goto LAB_003ceb54;
  case 3:
    bVar1 = *(byte *)(*(int *)(param_1 + 0x5c) + 0x31);
    if (1 < bVar1) {
      if (bVar1 == 2) {
        local_20 = 0;
        uStack_1c = 0x1000950;
        fn_003cf0e8(param_1,DAT_00898bc4,0,0);
        *(undefined1 *)(param_1 + 0x79) = 0x13;
        return;
      }
      if (bVar1 == 3) {
        local_20 = 0;
        uStack_1c = 0x100094b;
        fn_003cf0e8(param_1,DAT_00898b90,0,1);
        uVar6 = DAT_00898b98;
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
    uVar6 = DAT_00898bd8;
    *(undefined1 *)(param_1 + 0x79) = 6;
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x1000950;
    uVar6 = fn_0022f584(uVar6,0);
    fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar6);
    return;
  case 6:
    fn_003ce0ec(param_1);
    return;
  case 7:
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 0;
    iVar5 = fn_00335d08();
    uVar6 = DAT_00898ba0;
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 0x79) = 0x12;
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x100094d;
      uVar6 = fn_0022f584(uVar6,0);
      fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar6);
      *(undefined1 *)(param_1 + 0x78) = 6;
      return;
    }
    iVar5 = fn_00335da4(*(undefined4 *)(param_1 + 100));
    uVar6 = DAT_00898bd0;
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
    goto LAB_003ce9d0;
  case 9:
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 0;
    iVar5 = fn_003ceba0(param_1);
    uVar2 = DAT_00898bec;
    uVar6 = DAT_00898ba4;
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
    goto LAB_003ce9d0;
  case 0xb:
    *(undefined1 *)(param_1 + 0x78) = 3;
    fn_003cdf08(param_1);
    *(undefined1 *)(param_1 + 0x94) = 1;
    return;
  case 0xc:
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x5e) = 1;
    uVar6 = DAT_00898bb4;
    *(undefined1 *)(param_1 + 0x79) = 0xd;
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x100094b;
    uVar6 = fn_0022f584(uVar6,0);
    fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar6);
    return;
  case 0xd:
    *(undefined1 *)(param_1 + 0x78) = 4;
    fn_003cdf08(param_1);
    *(undefined1 *)(param_1 + 0x94) = 1;
    return;
  case 0xe:
    fn_003cf170(param_1);
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
LAB_003ceb54:
    *(undefined1 *)(param_1 + 0x79) = uVar3;
    return;
  case 0x13:
    local_20 = 0xff000000;
    fn_00163988(DAT_0089780c,&local_20,10);
    uVar3 = 7;
LAB_003ce9d0:
    *(undefined1 *)(param_1 + 0x78) = uVar3;
    return;
  }
  return;
}


