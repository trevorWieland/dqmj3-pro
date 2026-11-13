#include "00304018_00304570b.h"



void fn_00304570(undefined4 *param_1)

{
  *param_1 = &DAT_0082189c;
  fn_002feef8(param_1[7]);
  fn_002feef8(param_1[6]);
  fn_002feef8(param_1[5]);
  fn_002feef8(param_1[4]);
  fn_002feef8(param_1[3]);
  fn_002feef8(param_1[2]);
  fn_002feef8(param_1);
  return;
}



void fn_00304540(undefined4 *param_1)

{
  *param_1 = &DAT_0082189c;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



void fn_00304520(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = fn_003040d8(param_2 + 0x30,param_3,param_4);
  fn_003040f4(param_1,uVar1);
  return;
}



void fn_00304508(int *param_1)

{
  (**(code **)(*param_1 + 0xc))();
  return;
}



void fn_003044ec(undefined4 param_1)

{
  fn_0030488c(param_1,&DAT_008c3dbc,1,0x20,&LAB_00104280_1);
  return;
}



void fn_003044d8(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 auStack_8 [2];
  
  local_10 = 0xffffffff;
  uStack_c = param_1;
  auStack_8[0] = param_2;
  fn_003035a0(auStack_8,&local_10);
  return;
}



undefined4 * fn_00304494(undefined4 *param_1,int param_2)

{
  undefined *puVar1;
  
  if (param_2 == 0) {
    puVar1 = &DAT_008f7d44;
  }
  else if (param_2 == 1) {
    puVar1 = &DAT_008f7d98;
  }
  else if (param_2 == 2) {
    puVar1 = &DAT_008f7dec;
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  *param_1 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    fn_002ff628(10,s_possix__C_get_mode_not_supported_008c6cd8);
  }
  return param_1;
}



undefined4 fn_0030447c(int param_1)

{
  if (param_1 == 0) {
    return 4;
  }
  if ((param_1 == 1) || (param_1 == 2)) {
    return 8;
  }
  return 0xc;
}



undefined4 fn_0030445c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = fn_00103624(param_2,param_3,param_4,*param_1);
  if (iVar1 == param_4) {
    return 1;
  }
  return 0;
}



void fn_003042bc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 4) == '\0') {
    uVar1 = *(undefined4 *)(*(int *)(DAT_00897804 + 0xc) + 4);
    uVar2 = *(undefined4 *)(*(int *)(DAT_00897804 + 0x18) + 4);
    iVar3 = fn_00145b00(0x1db7c,&DAT_00812c8c);
    if (*(int *)(param_1 + 8) != iVar3) {
      fn_002feef8();
      *(int *)(param_1 + 8) = iVar3;
    }
    fn_0017821c(*(undefined4 *)(param_1 + 8),uVar1,0x1db7c);
    iVar3 = fn_00145b00(0xc88,&DAT_00812c8c);
    if (*(int *)(param_1 + 0xc) != iVar3) {
      fn_002feef8();
      *(int *)(param_1 + 0xc) = iVar3;
    }
    fn_0017821c(*(undefined4 *)(param_1 + 0xc),uVar2,0xc88);
    iVar3 = fn_00145b00(0x1db7c,&DAT_00812c8c);
    if (*(int *)(param_1 + 0x10) != iVar3) {
      fn_002feef8();
      *(int *)(param_1 + 0x10) = iVar3;
    }
    fn_0017821c(*(undefined4 *)(param_1 + 0x10),uVar1,0x1db7c);
    iVar3 = fn_00145b00(0xc88,&DAT_00812c8c);
    if (*(int *)(param_1 + 0x14) != iVar3) {
      fn_002feef8();
      *(int *)(param_1 + 0x14) = iVar3;
    }
    fn_0017821c(*(undefined4 *)(param_1 + 0x14),uVar2,0xc88);
    iVar3 = fn_00145b00(0x1db7c,&DAT_00812c8c);
    if (*(int *)(param_1 + 0x18) != iVar3) {
      fn_002feef8();
      *(int *)(param_1 + 0x18) = iVar3;
    }
    fn_0017821c(*(undefined4 *)(param_1 + 0x18),uVar1,0x1db7c);
    iVar3 = fn_00145b00(0xc88,&DAT_00812c8c);
    if (*(int *)(param_1 + 0x1c) != iVar3) {
      fn_002feef8();
      *(int *)(param_1 + 0x1c) = iVar3;
    }
    fn_0017821c(*(undefined4 *)(param_1 + 0x1c),uVar2,0xc88);
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return;
}



void fn_0030428c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = fn_003040d8(param_2 + 0x30,param_3,param_4);
  fn_003040f4(param_1,uVar1);
  return;
}


