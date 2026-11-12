#include "0036d888_0036e37c.h"



void fn_0036e37c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x2c))(param_1,DAT_00896220,1);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (puVar2 == &DAT_0089a930) goto LAB_0036e3f0;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_0036e3f0:
  fn_00688c04(piVar1,param_2,0);
  piVar1 = (int *)(**(code **)(*param_1 + 0x2c))(param_1,DAT_00896224,1);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (puVar2 == &DAT_0089a930) goto LAB_0036e448;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_0036e448:
  fn_00688c04(piVar1,param_3,0);
  piVar1 = (int *)(**(code **)(*param_1 + 0x2c))(param_1,DAT_00896228,1);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (puVar2 == &DAT_0089a930) goto LAB_0036e4a0;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_0036e4a0:
  fn_00688c04(piVar1,param_4,0);
  return;
}



void fn_0036e354(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8();
  *puVar1 = &PTR_LAB_008281bc;
  return;
}



void fn_0036e300(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0036e330(iVar1,param_1);
  return;
}



void fn_0036e330(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,&DAT_00894d5c,8);
  *puVar1 = &PTR_LAB_008281bc;
  return;
}



undefined4 fn_0036e29c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  iVar1 = fn_0025dac8();
  uVar3 = 0;
  if (iVar1 != 0) {
    puVar4 = *(undefined4 **)(param_1 + 0x18);
    if (puVar4 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar4)(puVar4);
      do {
        if (puVar2 == &DAT_00894d28) goto LAB_0036e2ec;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    puVar4 = (undefined4 *)0x0;
LAB_0036e2ec:
    *(undefined1 *)((int)puVar4 + 0x1a) = 0;
    uVar3 = 1;
  }
  return uVar3;
}



undefined4 fn_0036e284(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  fn_003e371c();
  iVar1 = fn_0025dac8();
  uVar3 = 0;
  if (iVar1 != 0) {
    puVar4 = *(undefined4 **)(param_1 + 0x18);
    if (puVar4 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar4)(puVar4);
      do {
        if (puVar2 == &DAT_00894d28) goto LAB_0036e2ec;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    puVar4 = (undefined4 *)0x0;
LAB_0036e2ec:
    *(undefined1 *)((int)puVar4 + 0x1a) = 0;
    uVar3 = 1;
  }
  return uVar3;
}



void fn_0036e274(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00828074;
  fn_002c471c();
  return;
}



undefined4 * fn_0036e214(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = &PTR_FUN_00828074;
  puVar1[0x2d] = 0;
  puVar1[0x2c] = &DAT_00859420;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  return puVar1;
}



void fn_0036e174(int *param_1)

{
  int iVar1;
  
  fn_002c4304();
  if ((char)param_1[3] == '\x03') {
    if (param_1[0x31] == 0) {
      (**(code **)(*param_1 + 0x138))(param_1,0);
    }
    (**(code **)(*param_1 + 0x138))(param_1,1);
    if (param_1[0x2f] != param_1[0x2d]) {
      (**(code **)(*param_1 + 0x138))(param_1,2);
    }
    iVar1 = param_1[0x2d];
    param_1[0x30] = param_1[0x30] + 1;
    param_1[0x2d] = param_1[0x2f];
    param_1[0x2e] = iVar1;
    if (iVar1 == param_1[0x2f]) {
      iVar1 = param_1[0x31] + 1;
    }
    else {
      iVar1 = 0;
    }
    param_1[0x31] = iVar1;
  }
  return;
}



void fn_0036e168(void)

{
  return;
}



void fn_0036e15c(undefined4 param_1)

{
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_0036d9b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_a8 [26];
  undefined1 auStack_40 [32];
  
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
  uVar4 = *(undefined4 *)(iVar1 + 0x10);
  fn_0017821c(local_a8,&DAT_007c6a68,0x68);
  local_a8[0] = param_1 + 0x9c;
  local_a8[2] = param_1 + 0xa0;
  local_a8[4] = param_1 + 0xa4;
  local_a8[6] = param_1 + 0xa8;
  local_a8[8] = param_1 + 0xac;
  local_a8[0x16] = param_1 + 200;
  local_a8[0x18] = param_1 + 0xcc;
  local_a8[10] = param_1 + 0xb0;
  uVar3 = 0;
  local_a8[0x14] = param_1 + 0xc4;
  local_a8[0x12] = param_1 + 0xc0;
  local_a8[0xe] = param_1 + 0xb8;
  local_a8[0x10] = param_1 + 0xbc;
  local_a8[0xc] = param_1 + 0xb4;
  do {
    iVar1 = uVar3 * 2;
    uVar2 = fn_0068897c(uVar4,local_a8[uVar3 * 2 + 1]);
    uVar3 = uVar3 + 1;
    *(undefined4 *)local_a8[iVar1] = uVar2;
  } while (uVar3 < 0xd);
  uVar2 = fn_00689210(uVar4,(char *)&DAT_0036db08);
  *(undefined4 *)(param_1 + 0xe8) = uVar2;
  uVar3 = 0;
  if (*(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0xd0) >> 2 != 0) {
    do {
      fn_001028d4(auStack_40,(char *)&DAT_0036db20,uVar3);
      uVar2 = fn_0068897c(uVar4,auStack_40);
      *(undefined4 *)(*(int *)(param_1 + 0xdc) + uVar3 * 4) = uVar2;
      fn_001028d4(auStack_40,(char *)&DAT_0036db30,uVar3 + 1);
      uVar2 = fn_0068897c(uVar4,auStack_40);
      *(undefined4 *)(*(int *)(param_1 + 0xd0) + uVar3 * 4) = uVar2;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)(*(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0xd0) >> 2));
  }
  return;
}



void fn_0036d8b4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397f10();
  puVar1[0x34] = 0;
  *puVar1 = &DAT_00827bc4;
  puVar1[0x35] = 0;
  return;
}



void fn_0036d888(undefined4 param_1)

{
  int iVar1;
  
  fn_00397ecc();
  iVar1 = fn_006f6a6c(param_1);
  if (iVar1 == 1) {
    fn_0036d17c(param_1);
    return;
  }
  return;
}


