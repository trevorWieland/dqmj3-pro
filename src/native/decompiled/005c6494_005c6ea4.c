#include "005c6494_005c6ea4.h"



undefined4 fn_005c6ea4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  
  *(undefined4 *)(param_1 + 0x158) = 3;
  uVar1 = fn_005960bc(param_1);
  fn_00394abc(*(undefined4 *)(param_1 + 200),4,1);
  uVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
  piVar3 = (int *)fn_00172c98(uVar2,(char *)&DAT_005c7034);
  piVar4 = (int *)(**(code **)(*piVar3 + 0x2c))(piVar3,(char *)&DAT_005c704c,1);
  piVar7 = (int *)0x0;
  if (piVar4 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar5 == &DAT_0089a930) goto LAB_005c6f3c;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_005c6f3c:
  *(int **)(param_1 + 0x15c) = piVar4;
  piVar4 = (int *)(**(code **)(*piVar3 + 0x2c))(piVar3,(char *)&DAT_005c7064,1);
  if (piVar4 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar4 + 8))(piVar4);
    do {
      if (puVar5 == &DAT_0089a930) goto LAB_005c6f8c;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  piVar4 = (int *)0x0;
LAB_005c6f8c:
  *(int **)(param_1 + 0x160) = piVar4;
  piVar3 = (int *)(**(code **)(*piVar3 + 0x2c))(piVar3,(char *)&DAT_005c7078,1);
  if (piVar3 != (int *)0x0) {
    puVar5 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
    do {
      if (puVar5 == &DAT_0089a930) {
        piVar7 = piVar3;
        break;
      }
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  *(int **)(param_1 + 0x164) = piVar7;
  iVar6 = fn_00145b00(0x14,&DAT_00812c8c);
  piVar7 = (int *)0x0;
  if (iVar6 != 0) {
    piVar7 = (int *)fn_001223a8();
  }
  piVar3 = *(int **)(param_1 + 0x168);
  if (piVar3 != piVar7) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *(int **)(param_1 + 0x168) = piVar7;
  }
  fn_002d66fc(*(undefined4 *)(param_1 + 0x168));
  return uVar1;
}



void fn_005c6db4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x160,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005c6de4(iVar1,param_1);
  return;
}



void fn_005c6de4(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00596bf8(param_1,param_2,(char *)&DAT_005c6dfc);
  *puVar1 = &DAT_0084abc4;
  return;
}



void fn_005c6d50(undefined4 param_1)

{
  fn_005fc5c8();
  fn_00749130(param_1,DAT_00898214,(char *)&DAT_005c6d94,1,1,1,0);
  return;
}



void fn_005c6d1c(int *param_1)

{
  (**(code **)(*param_1 + 0x154))();
  fn_0022f750();
  return;
}



undefined4 fn_005c69bc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  *(undefined4 *)(param_1 + 0x158) = 2;
  uVar1 = fn_005960bc(param_1);
  uVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
  piVar3 = (int *)fn_00172c98(uVar2,(char *)&DAT_005c6a44);
  piVar3 = (int *)(**(code **)(*piVar3 + 0x2c))(piVar3,(char *)&DAT_005c6a5c,1);
  if (piVar3 != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
    do {
      if (puVar4 == &DAT_0089a930) goto LAB_005c6a38;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_005c6a38:
  *(int **)(param_1 + 0x15c) = piVar3;
  return uVar1;
}



void fn_005c67a0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  
  fn_00748d08();
  puVar5 = &UNK_005c68dc;
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x108) + 0x10);
  cVar1 = *(char *)(param_1 + 0x104);
  if (cVar1 == '\x06') {
    iVar2 = fn_006c4720(uVar3);
    if (iVar2 == 1) {
      puVar5 = (undefined *)fn_002d7a80(uVar3);
    }
  }
  else if (cVar1 == '\a') {
    iVar2 = fn_006c410c(uVar3);
    if (iVar2 == 1) {
      puVar5 = (undefined *)fn_0023c368(uVar3);
    }
  }
  else {
    if (cVar1 != '\b') {
      return;
    }
    iVar2 = fn_006c4168(uVar3);
    if (iVar2 == 1) {
      puVar5 = (undefined *)fn_002d7b50(uVar3);
    }
  }
  iVar4 = 0;
  iVar2 = fn_006ba274(param_1);
  if (0 < iVar2) {
    do {
      iVar2 = fn_0077f9bc(param_1,iVar4);
      if (iVar2 == 0) {
        return;
      }
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x78) + iVar4 * 4);
      if (iVar4 == 1) {
        fn_0031b6ec(uVar3,4,1);
        fn_0031b7c4(uVar3,4,puVar5);
      }
      else {
        fn_0031b6ec(uVar3,4,0);
      }
      iVar4 = iVar4 + 1;
      iVar2 = fn_006ba274(param_1);
    } while (iVar4 < iVar2);
  }
  return;
}



void fn_005c6770(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x11c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005c6900(iVar1,param_1);
  return;
}



void fn_005c6900(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004117bc(param_1,param_2,(char *)&DAT_005c691c,0xe5);
  *puVar1 = &DAT_0084aa30;
  return;
}



void fn_005c671c(int param_1)

{
  uint uVar1;
  
  uVar1 = fn_006f6a5c();
  if ((uVar1 & 0x100000) == 0) {
    if ((uVar1 & 0x200000) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x118) + 0x18) = 2;
      return;
    }
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 0x118) + 0x18) = 1;
  }
  return;
}



void fn_005c65b8(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xe5);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_0089914c) goto LAB_005c6600;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005c6600:
  *(undefined4 **)(param_1 + 0x108) = puVar1;
  return;
}



undefined4 * fn_005c6494(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_5c0 [96];
  undefined4 local_560;
  undefined4 local_55c;
  undefined4 local_558;
  undefined4 local_554;
  undefined4 local_550;
  undefined1 local_54c;
  undefined4 local_410;
  undefined1 auStack_408 [8];
  undefined4 local_400;
  undefined1 local_3fc;
  undefined1 local_3fb;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined1 auStack_3d8 [968];
  
  iVar1 = *(int *)(param_1 + 0x118);
  fn_0017821c(auStack_5c0,iVar1 + 0x558,0x1b0);
  local_410 = *(undefined4 *)(iVar1 + 0x708);
  iVar2 = fn_004b9b4c(auStack_408,iVar1 + 0x710);
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 0x718);
  *(undefined1 *)(iVar2 + 0xc) = *(undefined1 *)(iVar1 + 0x71c);
  *(undefined1 *)(iVar2 + 0xd) = *(undefined1 *)(iVar1 + 0x71d);
  uVar4 = *(undefined4 *)(iVar1 + 0x724);
  uVar5 = *(undefined4 *)(iVar1 + 0x728);
  uVar6 = *(undefined4 *)(iVar1 + 0x72c);
  uVar7 = *(undefined4 *)(iVar1 + 0x730);
  uVar8 = *(undefined4 *)(iVar1 + 0x734);
  uVar9 = *(undefined4 *)(iVar1 + 0x738);
  uVar10 = *(undefined4 *)(iVar1 + 0x73c);
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar1 + 0x720);
  *(undefined4 *)(iVar2 + 0x14) = uVar4;
  *(undefined4 *)(iVar2 + 0x18) = uVar5;
  *(undefined4 *)(iVar2 + 0x1c) = uVar6;
  *(undefined4 *)(iVar2 + 0x20) = uVar7;
  *(undefined4 *)(iVar2 + 0x24) = uVar8;
  *(undefined4 *)(iVar2 + 0x28) = uVar9;
  *(undefined4 *)(iVar2 + 0x2c) = uVar10;
  fn_0017821c(iVar2 + 0x30,iVar1 + 0x740,0x3c0);
  puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x108) + 0x10);
  local_560 = *puVar3;
  local_55c = puVar3[1];
  local_558 = puVar3[2];
  local_554 = puVar3[3];
  local_550 = puVar3[4];
  local_54c = *(undefined1 *)(puVar3 + 5);
  iVar1 = *(int *)(param_1 + 0x118);
  fn_0017821c(iVar1 + 0x558,auStack_5c0,0x1b0);
  *(undefined4 *)(iVar1 + 0x708) = local_410;
  fn_0014f510(iVar1 + 0x710,auStack_408);
  *(undefined4 *)(iVar1 + 0x718) = local_400;
  *(undefined1 *)(iVar1 + 0x71c) = local_3fc;
  *(undefined1 *)(iVar1 + 0x71d) = local_3fb;
  *(undefined4 *)(iVar1 + 0x720) = local_3f8;
  *(undefined4 *)(iVar1 + 0x724) = uStack_3f4;
  *(undefined4 *)(iVar1 + 0x728) = uStack_3f0;
  *(undefined4 *)(iVar1 + 0x72c) = uStack_3ec;
  *(undefined4 *)(iVar1 + 0x730) = uStack_3e8;
  *(undefined4 *)(iVar1 + 0x734) = uStack_3e4;
  *(undefined4 *)(iVar1 + 0x738) = uStack_3e0;
  *(undefined4 *)(iVar1 + 0x73c) = uStack_3dc;
  fn_0017821c(iVar1 + 0x740,auStack_3d8,0x3c0);
  return &local_560;
}


