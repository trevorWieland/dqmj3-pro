#include "005d5504_005d6658.h"



void fn_005d6658(int param_1)

{
  fn_0074876c();
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  return;
}



void fn_005d6614(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x114) + 0x14))();
  if (*(int **)(param_1 + 0x114) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x114) + 4))();
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  fn_0074876c();
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  return;
}



void fn_005d6504(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00899218) goto LAB_005d6548;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005d6548:
  *(undefined1 *)(puVar1 + 6) = 2;
  return;
}



void fn_005d64b0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00899218) goto LAB_005d64f8;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005d64f8:
  *(undefined1 *)(puVar1 + 6) = 1;
  return;
}



undefined4 * fn_005d62a8(undefined4 param_1,undefined2 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_5d0 [96];
  undefined4 local_570;
  undefined4 local_56c;
  undefined4 local_568;
  undefined4 local_564;
  undefined4 local_560;
  undefined1 local_55c;
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
  undefined1 auStack_3e8 [968];
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xe5);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_0089914c) goto LAB_005d62f8;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005d62f8:
  puVar2 = (undefined4 *)puVar1[4];
  fn_0037cae0(puVar2,1);
  *(undefined2 *)((int)puVar2 + 0xe) = param_2;
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar3 == &DAT_00899218) goto LAB_005d635c;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005d635c:
  fn_0017821c(auStack_5d0,puVar1 + 0x156,0x1b0);
  local_420 = puVar1[0x1c2];
  iVar4 = fn_004b9b4c(auStack_418,puVar1 + 0x1c4);
  *(undefined4 *)(iVar4 + 8) = puVar1[0x1c6];
  *(undefined1 *)(iVar4 + 0xc) = *(undefined1 *)(puVar1 + 0x1c7);
  *(undefined1 *)(iVar4 + 0xd) = *(undefined1 *)((int)puVar1 + 0x71d);
  uVar6 = puVar1[0x1c9];
  uVar7 = puVar1[0x1ca];
  uVar8 = puVar1[0x1cb];
  uVar9 = puVar1[0x1cc];
  uVar10 = puVar1[0x1cd];
  uVar11 = puVar1[0x1ce];
  uVar12 = puVar1[0x1cf];
  *(undefined4 *)(iVar4 + 0x10) = puVar1[0x1c8];
  *(undefined4 *)(iVar4 + 0x14) = uVar6;
  *(undefined4 *)(iVar4 + 0x18) = uVar7;
  *(undefined4 *)(iVar4 + 0x1c) = uVar8;
  *(undefined4 *)(iVar4 + 0x20) = uVar9;
  *(undefined4 *)(iVar4 + 0x24) = uVar10;
  *(undefined4 *)(iVar4 + 0x28) = uVar11;
  *(undefined4 *)(iVar4 + 0x2c) = uVar12;
  fn_0017821c(iVar4 + 0x30,puVar1 + 0x1d0,0x3c0);
  local_570 = *puVar2;
  local_56c = puVar2[1];
  local_568 = puVar2[2];
  local_564 = puVar2[3];
  local_560 = puVar2[4];
  local_55c = *(undefined1 *)(puVar2 + 5);
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00899218) {
        puVar5 = puVar1;
        break;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  fn_0017821c(puVar5 + 0x156,auStack_5d0,0x1b0);
  puVar5[0x1c2] = local_420;
  fn_0014f510(puVar5 + 0x1c4,auStack_418);
  puVar5[0x1c6] = local_410;
  *(undefined1 *)(puVar5 + 0x1c7) = local_40c;
  *(undefined1 *)((int)puVar5 + 0x71d) = local_40b;
  puVar5[0x1c8] = local_408;
  puVar5[0x1c9] = uStack_404;
  puVar5[0x1ca] = uStack_400;
  puVar5[0x1cb] = uStack_3fc;
  puVar5[0x1cc] = uStack_3f8;
  puVar5[0x1cd] = uStack_3f4;
  puVar5[0x1ce] = uStack_3f0;
  puVar5[0x1cf] = uStack_3ec;
  fn_0017821c(puVar5 + 0x1d0,auStack_3e8,0x3c0);
  return &local_570;
}



void fn_005d5c8c(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  undefined1 *puVar5;
  
  iVar1 = fn_00145b00(0x690,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  puVar2 = (undefined4 *)fn_0068ab5c(iVar1,param_1);
  *puVar2 = &DAT_0084cb00;
  puVar2[0x19] = &DAT_0085a9f4;
  puVar2[0x1a] = 0;
  puVar2[0x1b] = 0;
  iVar1 = fn_00113c58(puVar2 + 0x34);
  iVar1 = fn_00101a1c(iVar1 + 0x78,&LAB_00256038,8,10,unaff_r4);
  iVar1 = fn_00255cd0(iVar1 + 0x50);
  iVar1 = fn_00101a1c(iVar1 + 0x1c,&LAB_00256038,8,10);
  iVar1 = fn_00255cd0(iVar1 + 0x50);
  *(undefined4 *)(iVar1 + -0x11c) = 0;
  puVar5 = (undefined1 *)(iVar1 + -0x134);
  *(undefined4 *)(iVar1 + -0x118) = 0;
  *(undefined4 *)(iVar1 + -0x114) = 0;
  *(undefined4 *)(iVar1 + -0x110) = 0;
  *(undefined4 *)(iVar1 + -0x10c) = 0;
  *(undefined4 *)(iVar1 + -0x108) = 0;
  *(undefined4 *)(iVar1 + -0x104) = 0;
  *(undefined4 *)(iVar1 + -0x100) = 0;
  *(undefined4 *)(iVar1 + -0xfc) = 0;
  *(undefined4 *)(iVar1 + -0xf8) = 0;
  *(undefined4 *)(iVar1 + -0xf4) = 0;
  *(undefined4 *)(iVar1 + -0xf0) = 0;
  *(undefined4 *)(iVar1 + -0xec) = 0;
  *(undefined4 *)(iVar1 + -0xe8) = 0;
  *(undefined4 *)(iVar1 + -0xe4) = 0;
  *(undefined4 *)(iVar1 + -0xe0) = 0;
  *(undefined4 *)(iVar1 + -0xdc) = 0;
  *(undefined4 *)(iVar1 + -0xd8) = 0;
  *(undefined4 *)(iVar1 + -0xd4) = 0;
  *(undefined4 *)(iVar1 + -0xd0) = 0;
  *(undefined4 *)(iVar1 + -0xcc) = 0;
  *(undefined4 *)(iVar1 + -200) = 0;
  *(undefined4 *)(iVar1 + -0xc4) = 0;
  *(undefined4 *)(iVar1 + -0xc0) = 0;
  *puVar5 = 6;
  fn_0037cbe0(puVar5,2);
  fn_0037cad0(puVar5,0);
  fn_0037cb60(puVar5,2);
  fn_0037cb50(puVar5,0);
  fn_0037cac0(puVar5,1);
  fn_0037cb0c(puVar5,2);
  fn_0037cbf0(puVar5,0);
  fn_0037cb40(puVar5,0);
  fn_0037cbbc(puVar5,0);
  fn_0037cae0(puVar5,0);
  fn_0037cb1c(puVar5,0);
  *(undefined4 *)(iVar1 + -0x194) = 0;
  *(undefined4 *)(iVar1 + -400) = 0;
  *(undefined4 *)(iVar1 + -0x18c) = 0;
  *(undefined4 *)(iVar1 + -0x188) = 0;
  *(undefined4 *)(iVar1 + -0x184) = 0;
  *(undefined4 *)(iVar1 + -0x180) = 0;
  *(undefined4 *)(iVar1 + -0x17c) = 0;
  *(undefined4 *)(iVar1 + -0x178) = 0;
  *(undefined4 *)(iVar1 + -0x174) = 0;
  *(undefined4 *)(iVar1 + -0x170) = 0;
  *(undefined4 *)(iVar1 + -0x16c) = 0;
  *(undefined4 *)(iVar1 + -0x168) = 0;
  *(undefined4 *)(iVar1 + -0x164) = 0;
  *(undefined4 *)(iVar1 + -0x160) = 0;
  *(undefined4 *)(iVar1 + -0x15c) = 0;
  *(undefined4 *)(iVar1 + -0x158) = 0;
  *(undefined4 *)(iVar1 + -0x154) = 0;
  *(undefined4 *)(iVar1 + -0x150) = 0;
  *(undefined4 *)(iVar1 + -0x14c) = 0;
  *(undefined4 *)(iVar1 + -0x148) = 0;
  *(undefined4 *)(iVar1 + -0x144) = 0;
  *(undefined4 *)(iVar1 + -0x140) = 0;
  *(undefined4 *)(iVar1 + -0x13c) = 0;
  *(undefined4 *)(iVar1 + -0x138) = 0;
  iVar1 = fn_00124be8(iVar1 + 0x24);
  *(undefined2 *)(iVar1 + 0x10) = 0;
  *(undefined2 *)(iVar1 + 0x12) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  iVar1 = fn_00101a1c(iVar1 + 0x30,&LAB_0020c1dc,0x20,0x1e);
  *(undefined4 *)(iVar1 + -0x38) = 0;
  fn_0014f510(iVar1 + -0x30,DAT_008b64f8);
  *(undefined4 *)(iVar1 + -0x28) = 0;
  *(undefined1 *)(iVar1 + -0x24) = 0;
  *(undefined1 *)(iVar1 + -0x23) = 0;
  iVar3 = fn_00145b00(0xa4,&DAT_00812c8c);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = fn_00256054();
  }
  *(undefined4 *)(iVar1 + 0x3c0) = uVar4;
  *(undefined4 *)(iVar1 + 0x3c4) = 0;
  *(undefined4 *)(iVar1 + 0x3c8) = 0;
  *(undefined4 *)(iVar1 + 0x3cc) = 0;
  *(undefined4 *)(iVar1 + 0x3d0) = 0;
  *(undefined4 *)(iVar1 + 0x3d4) = 0;
  *(undefined4 *)(iVar1 + 0x3d8) = 0;
  *(undefined4 *)(iVar1 + 0x3dc) = 0;
  *(undefined4 *)(iVar1 + 0x3e0) = 0;
  *(undefined4 *)(iVar1 + 0x3e4) = 0;
  *(undefined4 *)(iVar1 + 1000) = 0;
  *(undefined4 *)(iVar1 + 0x3ec) = 0;
  *(undefined4 *)(iVar1 + 0x3f0) = 0;
  *(undefined4 *)(iVar1 + 0x3f4) = 0;
  *(undefined4 *)(iVar1 + 0x3f8) = 0;
  iVar1 = fn_00101a1c(iVar1 + 0x3fc,&LAB_001ad884,0xc,4);
  iVar3 = fn_00145b00(0x9c,&DAT_00812c8c);
  puVar2 = (undefined4 *)0x0;
  if (iVar3 != 0) {
    puVar2 = (undefined4 *)fn_005f62c0();
    puVar2[8] = &DAT_00859420;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    *puVar2 = &DAT_00859b38;
    iVar3 = fn_00119b40(puVar2 + 0x10);
    puVar2 = (undefined4 *)(iVar3 + -0x40);
    fn_0066ddbc(puVar2);
    fn_002fec40(iVar3 + 0x18,s_TaskNexRankingUploadScoreData_008c70f3);
    *puVar2 = &DAT_0085a5d0;
    fn_0067aca4(puVar2);
  }
  *(undefined4 **)(iVar1 + 0x30) = puVar2;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + -0x10) = 0;
  *(undefined4 *)(iVar1 + -0xc) = 0;
  *(undefined4 *)(iVar1 + -8) = 0;
  *(undefined4 *)(iVar1 + -4) = 0;
  return;
}



undefined4 fn_005d5504(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = fn_0023c2a8();
  fn_0023cff0(iVar1 + 0x30,param_1 + 0x70);
  fn_00255dd8(*(undefined4 *)(param_1 + 0x618),param_1 + 0xe8);
  uVar2 = fn_0023c2a8();
  fn_002a3688(uVar2,*(undefined4 *)(param_1 + 0x220));
  puVar3 = (undefined4 *)fn_00689c1c(param_1,0x80);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_008964f4) goto LAB_005d5578;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_005d5578:
  *(undefined4 **)(param_1 + 0x68c) = puVar3;
  *(undefined1 *)(puVar3 + 3) = 0;
  return 1;
}


