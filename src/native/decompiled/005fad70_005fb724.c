#include "005fad70_005fb724.h"



void fn_005fb724(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00899218) goto LAB_005fb76c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005fb76c:
  *(undefined1 *)(puVar1 + 6) = 1;
  return;
}



void fn_005fb6a4(int *param_1)

{
  int iVar1;
  
  iVar1 = fn_0066e158(DAT_00898840);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x108))(param_1);
    fn_006899f4(param_1,0xe0,0,1);
    return;
  }
  return;
}



void fn_005fb658(int *param_1)

{
  int iVar1;
  
  iVar1 = fn_0066e158(DAT_00898840);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x108))(param_1);
    fn_006899f4(param_1,0xe1,0,1);
    return;
  }
  return;
}



void fn_005fb5f8(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0066e158(DAT_00898840);
  if (iVar1 == 0) {
    fn_00321598(*(undefined4 *)(param_1 + 100));
    return;
  }
  return;
}



undefined4 * fn_005fb454(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008951c0) {
        return puVar1;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  return (undefined4 *)0x0;
}



void fn_005fb210(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *local_794;
  undefined1 auStack_790 [432];
  undefined1 local_5e0;
  undefined1 auStack_5de [14];
  undefined1 auStack_5d0 [432];
  undefined4 local_420;
  undefined1 auStack_418 [8];
  undefined4 local_410;
  undefined1 local_40c;
  undefined1 local_40b;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined1 auStack_3e8 [960];
  undefined1 auStack_28 [16];
  
  fn_00168a24(&local_794,*(undefined4 *)(param_1[0x19] + 0x14),auStack_28);
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xe0);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_0089905c) goto LAB_005fb280;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005fb280:
  fn_0017821c(auStack_790,puVar1 + 6,0x1c0);
  local_5e0 = 1;
  fn_0018a618(auStack_5de,7,6,&DAT_005fb440,local_794);
  fn_0017821c(puVar1 + 6,auStack_790,0x1c0);
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10c))(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00899218) goto LAB_005fb30c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005fb30c:
  fn_0017821c(auStack_5d0,puVar1 + 0x156,0x1b0);
  local_420 = puVar1[0x1c2];
  iVar3 = fn_004b9b4c(auStack_418,puVar1 + 0x1c4);
  *(undefined4 *)(iVar3 + 8) = puVar1[0x1c6];
  *(undefined1 *)(iVar3 + 0xc) = *(undefined1 *)(puVar1 + 0x1c7);
  *(undefined1 *)(iVar3 + 0xd) = *(undefined1 *)((int)puVar1 + 0x71d);
  uVar5 = puVar1[0x1c9];
  uVar6 = puVar1[0x1ca];
  uVar7 = puVar1[0x1cb];
  uVar8 = puVar1[0x1cc];
  uVar9 = puVar1[0x1cd];
  uVar10 = puVar1[0x1ce];
  uVar11 = puVar1[0x1cf];
  *(undefined4 *)(iVar3 + 0x10) = puVar1[0x1c8];
  *(undefined4 *)(iVar3 + 0x14) = uVar5;
  *(undefined4 *)(iVar3 + 0x18) = uVar6;
  *(undefined4 *)(iVar3 + 0x1c) = uVar7;
  *(undefined4 *)(iVar3 + 0x20) = uVar8;
  *(undefined4 *)(iVar3 + 0x24) = uVar9;
  *(undefined4 *)(iVar3 + 0x28) = uVar10;
  *(undefined4 *)(iVar3 + 0x2c) = uVar11;
  fn_0017821c(iVar3 + 0x30,puVar1 + 0x1d0,0x3c0);
  local_40b = 1;
  fn_0017821c(puVar1 + 0x156,auStack_5d0,0x1b0);
  puVar1[0x1c2] = local_420;
  fn_0014f510(puVar1 + 0x1c4,auStack_418);
  puVar1[0x1c6] = local_410;
  *(undefined1 *)(puVar1 + 0x1c7) = local_40c;
  *(undefined1 *)((int)puVar1 + 0x71d) = local_40b;
  puVar1[0x1c8] = local_408;
  puVar1[0x1c9] = uStack_404;
  puVar1[0x1ca] = uStack_400;
  puVar1[0x1cb] = uStack_3fc;
  puVar1[0x1cc] = uStack_3f8;
  puVar1[0x1cd] = uStack_3f4;
  puVar1[0x1ce] = uStack_3f0;
  puVar1[0x1cf] = uStack_3ec;
  fn_0017821c(puVar1 + 0x1d0,auStack_3e8,0x3c0);
  if (local_794 != &DAT_008f9cf4) {
    piVar4 = local_794 + -3;
    iVar3 = *piVar4;
    if ((iVar3 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_794 + -3,local_794[-2] + 8,0);
    }
  }
  return;
}



undefined4 fn_005fb0ac(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f7510(param_1,0x4c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008946d4) goto LAB_005fb0f4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005fb0f4:
  param_1[0x19] = (int)puVar1;
  (**(code **)(*param_1 + 0x110))(param_1);
  fn_00689bd0(param_1,0x4c,0);
  return 1;
}



void fn_005fafa4(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  *param_1 = &PTR_FUN_0084e548;
  if ((int *)param_1[0x58] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x58] + 4))();
  }
  param_1[0x3a] = &PTR_FUN_00854c0c;
  uVar2 = param_1[0x4d];
  uVar3 = param_1[0x4e];
  if (uVar2 < uVar3) {
    if (0 < (int)(uVar3 - uVar2)) {
      for (iVar1 = (int)(uVar3 - uVar2) >> 1; iVar1 != 0; iVar1 = iVar1 + -1) {
      }
    }
  }
  else {
    for (; uVar2 != uVar3; uVar2 = uVar2 + 1) {
    }
  }
  fn_0014f1bc();
  uVar2 = param_1[0x4a];
  uVar3 = param_1[0x4b];
  if (uVar2 < uVar3) {
    if (0 < (int)(uVar3 - uVar2)) {
      for (iVar1 = (int)(uVar3 - uVar2) >> 3; iVar1 != 0; iVar1 = iVar1 + -1) {
      }
    }
  }
  else {
    for (; uVar2 != uVar3; uVar2 = uVar2 + 4) {
    }
  }
  fn_0014f1bc();
  iVar1 = fn_00170f54(param_1 + 0x48);
  iVar1 = fn_004bb560(iVar1 + -0x38);
  fn_00397a78(iVar1 + -0xe8);
  return;
}



int fn_005faf48(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  *puVar1 = &PTR_FUN_0084e548;
  iVar2 = fn_00124930(puVar1 + 0x3a);
  *(undefined4 *)(iVar2 + 0x70) = 0;
  *(undefined4 *)(iVar2 + 0x74) = 0;
  iVar3 = fn_00145b00(0x10,&DAT_00812c8c);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = fn_0038e974();
  }
  *(undefined4 *)(iVar2 + 0x78) = uVar4;
  return iVar2 + -0xe8;
}



void fn_005fad70(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_5c8 [432];
  undefined4 local_418;
  undefined1 auStack_410 [48];
  undefined1 auStack_3e0 [968];
  
  fn_0023c618(1,*(undefined4 *)(param_1 + 0x158),*(undefined4 *)(param_1 + 0x160));
  iVar1 = *(int *)(param_1 + 0x158);
  if (*(char *)(iVar1 + 0xb00) == '\0') {
    fn_0017821c(auStack_5c8,iVar1 + 0x558,0x1b0);
    local_418 = *(undefined4 *)(iVar1 + 0x708);
    iVar2 = fn_004b9b4c(auStack_410,iVar1 + 0x710);
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 0x718);
    *(undefined1 *)(iVar2 + 0xc) = *(undefined1 *)(iVar1 + 0x71c);
    *(undefined1 *)(iVar2 + 0xd) = *(undefined1 *)(iVar1 + 0x71d);
    uVar6 = *(undefined4 *)(iVar1 + 0x724);
    uVar7 = *(undefined4 *)(iVar1 + 0x728);
    uVar8 = *(undefined4 *)(iVar1 + 0x72c);
    uVar9 = *(undefined4 *)(iVar1 + 0x730);
    uVar10 = *(undefined4 *)(iVar1 + 0x734);
    uVar11 = *(undefined4 *)(iVar1 + 0x738);
    uVar12 = *(undefined4 *)(iVar1 + 0x73c);
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar1 + 0x720);
    *(undefined4 *)(iVar2 + 0x14) = uVar6;
    *(undefined4 *)(iVar2 + 0x18) = uVar7;
    *(undefined4 *)(iVar2 + 0x1c) = uVar8;
    *(undefined4 *)(iVar2 + 0x20) = uVar9;
    *(undefined4 *)(iVar2 + 0x24) = uVar10;
    *(undefined4 *)(iVar2 + 0x28) = uVar11;
    *(undefined4 *)(iVar2 + 0x2c) = uVar12;
    fn_0017821c(iVar2 + 0x30,iVar1 + 0x740,0x3c0);
    fn_006030a0(*(undefined4 *)(param_1 + 0x15c),auStack_3e0);
    uVar4 = *(uint *)(param_1 + 0x154);
    uVar3 = 0;
    iVar1 = *(int *)(*(int *)(param_1 + 0x15c) + 0x14);
    bVar5 = uVar4 == 3;
    if (uVar4 < 4) {
      bVar5 = uVar4 == 0;
    }
    else {
      uVar4 = 3;
    }
    if (!bVar5) {
      do {
        if (*(short *)(iVar1 + uVar3 * 0x20 + 4) == 0) break;
        fn_0031b78c(param_1,uVar3,6);
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
  }
  if (3 < *(int *)(*(int *)(param_1 + 0x15c) + 0x1c)) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x9c) + 0x34))();
    if (iVar1 != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x15c) + 0x19) = 0;
      fn_006899f4(param_1,0xfa,0,0);
      return;
    }
    iVar1 = (**(code **)(**(int **)(param_1 + 0x9c) + 0x38))();
    if (iVar1 != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x15c) + 0x19) = 1;
      fn_006899f4(param_1,0xfa,0);
      return;
    }
  }
  fn_003979f0(param_1);
  if (*(int *)(param_1 + 0x158) != 0) {
    uVar4 = fn_006f6a5c(param_1);
    if ((uVar4 & 0x100000) == 0) {
      if ((uVar4 & 0x200000) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x158) + 0x18) = 2;
        return;
      }
    }
    else {
      *(undefined1 *)(*(int *)(param_1 + 0x158) + 0x18) = 1;
    }
  }
  return;
}


