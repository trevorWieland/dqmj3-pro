#include "00607210_00607ae4b.h"



void fn_00607ab4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00607ae4(iVar1,param_1);
  return;
}



void fn_00607ae4(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005d68e0(param_1,param_2,0xe6,0);
  *puVar1 = &DAT_0084f694;
  return;
}



undefined4 * fn_0060780c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_5c8 [96];
  undefined4 local_568;
  undefined4 local_564;
  undefined4 local_560;
  undefined4 local_55c;
  undefined4 local_558;
  undefined1 local_554;
  undefined4 local_418;
  undefined1 auStack_410 [8];
  undefined4 local_408;
  undefined1 local_404;
  undefined1 local_403;
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined1 auStack_3e0 [968];
  
  puVar5 = *(undefined4 **)(param_1[0x41] + 0x10);
  iVar1 = fn_006ba284(param_1);
  iVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  fn_0037cac0(puVar5,3);
  fn_0037cb70(puVar5,(&DAT_007d5190)[iVar1 * iVar2 + param_2]);
  puVar3 = (undefined4 *)fn_001f74d8(param_1,0xe7);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_00899218) goto LAB_006078a4;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_006078a4:
  fn_0017821c(auStack_5c8,puVar3 + 0x156,0x1b0);
  local_418 = puVar3[0x1c2];
  iVar1 = fn_004b9b4c(auStack_410,puVar3 + 0x1c4);
  *(undefined4 *)(iVar1 + 8) = puVar3[0x1c6];
  *(undefined1 *)(iVar1 + 0xc) = *(undefined1 *)(puVar3 + 0x1c7);
  *(undefined1 *)(iVar1 + 0xd) = *(undefined1 *)((int)puVar3 + 0x71d);
  uVar6 = puVar3[0x1c9];
  uVar7 = puVar3[0x1ca];
  uVar8 = puVar3[0x1cb];
  uVar9 = puVar3[0x1cc];
  uVar10 = puVar3[0x1cd];
  uVar11 = puVar3[0x1ce];
  uVar12 = puVar3[0x1cf];
  *(undefined4 *)(iVar1 + 0x10) = puVar3[0x1c8];
  *(undefined4 *)(iVar1 + 0x14) = uVar6;
  *(undefined4 *)(iVar1 + 0x18) = uVar7;
  *(undefined4 *)(iVar1 + 0x1c) = uVar8;
  *(undefined4 *)(iVar1 + 0x20) = uVar9;
  *(undefined4 *)(iVar1 + 0x24) = uVar10;
  *(undefined4 *)(iVar1 + 0x28) = uVar11;
  *(undefined4 *)(iVar1 + 0x2c) = uVar12;
  fn_0017821c(iVar1 + 0x30,puVar3 + 0x1d0,0x3c0);
  local_568 = *puVar5;
  local_564 = puVar5[1];
  local_560 = puVar5[2];
  local_55c = puVar5[3];
  local_558 = puVar5[4];
  local_554 = *(undefined1 *)(puVar5 + 5);
  fn_0017821c(puVar3 + 0x156,auStack_5c8,0x1b0);
  puVar3[0x1c2] = local_418;
  fn_0014f510(puVar3 + 0x1c4,auStack_410);
  puVar3[0x1c6] = local_408;
  *(undefined1 *)(puVar3 + 0x1c7) = local_404;
  *(undefined1 *)((int)puVar3 + 0x71d) = local_403;
  puVar3[0x1c8] = local_400;
  puVar3[0x1c9] = uStack_3fc;
  puVar3[0x1ca] = uStack_3f8;
  puVar3[0x1cb] = uStack_3f4;
  puVar3[0x1cc] = uStack_3f0;
  puVar3[0x1cd] = uStack_3ec;
  puVar3[0x1ce] = uStack_3e8;
  puVar3[0x1cf] = uStack_3e4;
  fn_0017821c(puVar3 + 0x1d0,auStack_3e0,0x3c0);
  return &local_568;
}



undefined4 * fn_006077ec(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_5c8 [96];
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined4 uStack_558;
  undefined1 uStack_554;
  undefined4 uStack_418;
  undefined1 auStack_410 [8];
  undefined4 uStack_408;
  undefined1 uStack_404;
  undefined1 uStack_403;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined1 auStack_3e0 [976];
  
  fn_005d6734();
  puVar5 = *(undefined4 **)(param_1[0x41] + 0x10);
  iVar1 = fn_006ba284(param_1);
  iVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  fn_0037cac0(puVar5,3);
  fn_0037cb70(puVar5,(&DAT_007d5190)[iVar1 * iVar2 + param_2]);
  puVar3 = (undefined4 *)fn_001f74d8(param_1,0xe7);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_00899218) goto LAB_006078a4;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_006078a4:
  fn_0017821c(auStack_5c8,puVar3 + 0x156,0x1b0);
  uStack_418 = puVar3[0x1c2];
  iVar1 = fn_004b9b4c(auStack_410,puVar3 + 0x1c4);
  *(undefined4 *)(iVar1 + 8) = puVar3[0x1c6];
  *(undefined1 *)(iVar1 + 0xc) = *(undefined1 *)(puVar3 + 0x1c7);
  *(undefined1 *)(iVar1 + 0xd) = *(undefined1 *)((int)puVar3 + 0x71d);
  uVar6 = puVar3[0x1c9];
  uVar7 = puVar3[0x1ca];
  uVar8 = puVar3[0x1cb];
  uVar9 = puVar3[0x1cc];
  uVar10 = puVar3[0x1cd];
  uVar11 = puVar3[0x1ce];
  uVar12 = puVar3[0x1cf];
  *(undefined4 *)(iVar1 + 0x10) = puVar3[0x1c8];
  *(undefined4 *)(iVar1 + 0x14) = uVar6;
  *(undefined4 *)(iVar1 + 0x18) = uVar7;
  *(undefined4 *)(iVar1 + 0x1c) = uVar8;
  *(undefined4 *)(iVar1 + 0x20) = uVar9;
  *(undefined4 *)(iVar1 + 0x24) = uVar10;
  *(undefined4 *)(iVar1 + 0x28) = uVar11;
  *(undefined4 *)(iVar1 + 0x2c) = uVar12;
  fn_0017821c(iVar1 + 0x30,puVar3 + 0x1d0,0x3c0);
  uStack_568 = *puVar5;
  uStack_564 = puVar5[1];
  uStack_560 = puVar5[2];
  uStack_55c = puVar5[3];
  uStack_558 = puVar5[4];
  uStack_554 = *(undefined1 *)(puVar5 + 5);
  fn_0017821c(puVar3 + 0x156,auStack_5c8,0x1b0);
  puVar3[0x1c2] = uStack_418;
  fn_0014f510(puVar3 + 0x1c4,auStack_410);
  puVar3[0x1c6] = uStack_408;
  *(undefined1 *)(puVar3 + 0x1c7) = uStack_404;
  *(undefined1 *)((int)puVar3 + 0x71d) = uStack_403;
  puVar3[0x1c8] = uStack_400;
  puVar3[0x1c9] = uStack_3fc;
  puVar3[0x1ca] = uStack_3f8;
  puVar3[0x1cb] = uStack_3f4;
  puVar3[0x1cc] = uStack_3f0;
  puVar3[0x1cd] = uStack_3ec;
  puVar3[0x1ce] = uStack_3e8;
  puVar3[0x1cf] = uStack_3e4;
  fn_0017821c(puVar3 + 0x1d0,auStack_3e0,0x3c0);
  return &uStack_568;
}


