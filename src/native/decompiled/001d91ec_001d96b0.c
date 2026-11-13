#include "001d91ec_001d96b0.h"



void fn_001d96b0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xe4) != 0) {
    fn_0017fde4();
    iVar1 = fn_005ea4fc();
    *(char *)(iVar1 + 8) = (char)param_2;
  }
  if (*(int *)(param_1 + 0xe8) != -1) {
    fn_0023e508(*(undefined4 *)(DAT_008977e0 + 0x2c),*(int *)(param_1 + 0xe8),param_2);
  }
  *(char *)(param_1 + 0x59) = (char)param_2;
  return;
}



void fn_001d96a0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)(param_1 + 0x124) = *param_2;
  *(undefined4 *)(param_1 + 0x128) = uVar1;
  *(undefined4 *)(param_1 + 300) = uVar2;
  return;
}



void fn_001d962c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_001287d4(0x18,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_00101a1c(iVar1,&LAB_001daffc,8,3);
  }
  *(int *)(param_1 + 0x158) = iVar2;
  *(undefined4 *)(iVar2 + 8) = param_2;
  **(undefined4 **)(param_1 + 0x158) = param_3;
  *(undefined4 *)(*(int *)(param_1 + 0x158) + 0x10) = param_4;
  fn_001dbc6c(param_1,(int)*(char *)(param_1 + 0x15c));
  *(undefined1 *)(param_1 + 0x15d) = param_5;
  return;
}



void fn_001d9610(int param_1)

{
  fn_002feca8(*(undefined4 *)(param_1 + 0x158));
  *(undefined4 *)(param_1 + 0x158) = 0;
  return;
}



void fn_001d95e4(void)

{
  fn_006f7a9c(DAT_008977e0);
  fn_00277ae0();
  DAT_00891e30 = 0xffffffff;
  return;
}



void fn_001d95bc(void)

{
  fn_006f7a9c(DAT_008977e0);
  DAT_00891e30 = fn_002770b4();
  return;
}



undefined4 * fn_001d94e4(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &PTR_FUN_0081be40;
  puVar1 = (undefined4 *)param_1[0x53];
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(int *)puVar1[1] + 0xc))((int *)puVar1[1],puVar1);
    param_1[0x53] = 0;
  }
  puVar1 = (undefined4 *)param_1[0x54];
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*(int *)puVar1[1] + 0xc))((int *)puVar1[1],puVar1);
    param_1[0x54] = 0;
  }
  fn_002feef8(param_1[0x5f]);
  if ((int *)param_1[0x52] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x52] + 4))();
  }
  fn_002feef8(param_1[2]);
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  return param_1;
}



int fn_001d9328(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  puVar2 = (undefined4 *)fn_0069c2c8();
  uVar6 = 0;
  *puVar2 = &PTR_FUN_0081be40;
  puVar2[1] = 0;
  puVar2[2] = 0;
  *(undefined1 *)(puVar2 + 3) = 0;
  *(undefined1 *)((int)puVar2 + 0xd) = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  uVar1 = DAT_008c85b0;
  uVar5 = DAT_008c85ac;
  puVar2[0xd] = DAT_008c85a8;
  puVar2[0xe] = uVar5;
  puVar2[0xf] = uVar1;
  uVar1 = DAT_008c85bc;
  uVar5 = DAT_008c85b8;
  puVar2[0x10] = DAT_008c85b4;
  puVar2[0x11] = uVar5;
  puVar2[0x12] = uVar1;
  puVar2[0x13] = 0;
  puVar2[0x14] = 0;
  puVar2[0x15] = 0;
  puVar2[0x16] = 0;
  puVar2[0x17] = 0;
  iVar3 = fn_0033ce74(puVar2 + 0x18);
  *(undefined4 *)(iVar3 + 0x20) = uVar6;
  *(undefined4 *)(iVar3 + 0x24) = uVar6;
  *(undefined4 *)(iVar3 + 0x28) = uVar6;
  *(undefined4 *)(iVar3 + 0x2c) = 0;
  *(undefined4 *)(iVar3 + 0x30) = uVar6;
  *(undefined4 *)(iVar3 + 0x34) = uVar6;
  *(undefined4 *)(iVar3 + 0x38) = uVar6;
  *(undefined4 *)(iVar3 + 0x3c) = 0;
  *(undefined4 *)(iVar3 + 0x40) = uVar6;
  *(undefined4 *)(iVar3 + 0x44) = 0;
  *(undefined4 *)(iVar3 + 0x48) = uVar6;
  *(undefined4 *)(iVar3 + 0x4c) = 0;
  *(undefined4 *)(iVar3 + 0x50) = uVar6;
  *(undefined4 *)(iVar3 + 0x54) = uVar6;
  *(undefined4 *)(iVar3 + 0x58) = 0x42480000;
  *(undefined4 *)(iVar3 + 0x8c) = uVar6;
  *(undefined1 *)(iVar3 + 0x90) = 0;
  *(undefined1 *)(iVar3 + 0x91) = 0;
  *(undefined4 *)(iVar3 + 0x94) = 0;
  *(undefined4 *)(iVar3 + 0x98) = 0;
  *(undefined4 *)(iVar3 + 0x9c) = 0;
  *(undefined4 *)(iVar3 + 0xa0) = uVar6;
  *(undefined4 *)(iVar3 + 0xa4) = uVar6;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62fc), iVar4 != 0)) {
    DAT_008f9e2c = uVar6;
    DAT_008f9e30 = uVar6;
    DAT_008f9e34 = uVar6;
  }
  uVar1 = DAT_008f9e34;
  uVar5 = DAT_008f9e30;
  *(undefined4 *)(iVar3 + 0xd8) = DAT_008f9e2c;
  *(undefined4 *)(iVar3 + 0xdc) = uVar5;
  *(undefined4 *)(iVar3 + 0xe0) = uVar1;
  *(undefined4 *)(iVar3 + 0xe4) = 0;
  iVar4 = fn_00145b00(0xa0,&DAT_00812c8c);
  uVar5 = 0;
  if (iVar4 != 0) {
    uVar5 = fn_003adb10(iVar4,iVar3 + -0x60);
  }
  *(undefined4 *)(iVar3 + 0xe8) = uVar5;
  *(undefined4 *)(iVar3 + 0xec) = 0;
  *(undefined4 *)(iVar3 + 0xf4) = uVar6;
  *(undefined4 *)(iVar3 + 0xf8) = uVar6;
  *(undefined1 *)(iVar3 + 0xfc) = 0;
  *(undefined1 *)(iVar3 + 0xfd) = 1;
  *(undefined1 *)(iVar3 + 0xff) = 0;
  *(undefined4 *)(iVar3 + 0x11c) = 0;
  fn_00118290();
  uVar5 = fn_00543e80();
  *(undefined4 *)(iVar3 + 0xf0) = uVar5;
  return iVar3 + -0x60;
}



void fn_001d92e8(int param_1)

{
  undefined4 in_s0;
  
  fn_006a8fac();
  fn_00764608();
  *(undefined4 *)(param_1 + 0x10) = in_s0;
  return;
}



void fn_001d92ac(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_s0;
  undefined4 in_s1;
  undefined4 in_s2;
  
  *(undefined4 *)(param_1 + 0x1c) = in_s0;
  *(undefined4 *)(param_1 + 0x20) = in_s1;
  *(undefined4 *)(param_1 + 0x24) = in_s2;
  iVar1 = fn_00176d68(*(undefined4 *)(param_1 + 4));
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(iVar1 + 0x68) = uVar2;
  *(undefined4 *)(iVar1 + 0x78) = uVar3;
  *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x800;
  return;
}



void fn_001d91ec(int param_1)

{
  undefined4 uVar1;
  undefined4 in_s0;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 auStack_14 [12];
  
  local_2c = *(undefined4 *)(param_1 + 0x10);
  uStack_24 = *(undefined4 *)(param_1 + 0x18);
  local_28 = in_s0;
  fn_001d5a74(param_1,&local_2c,auStack_14,&local_20,0);
  *(undefined4 *)(param_1 + 0x10) = local_2c;
  *(undefined4 *)(param_1 + 0x14) = local_28;
  *(undefined4 *)(param_1 + 0x18) = uStack_24;
  fn_001d926c(param_1,auStack_14);
  *(undefined4 *)(param_1 + 0x28) = local_20;
  *(undefined4 *)(param_1 + 0x2c) = uStack_1c;
  *(undefined4 *)(param_1 + 0x30) = uStack_18;
  uVar1 = fn_00176d68(*(undefined4 *)(param_1 + 4));
  fn_005456f4(uVar1,param_1 + 0x28);
  return;
}



void fn_001d926c(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  *(undefined4 *)(param_1 + 0x1c) = *param_2;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  iVar1 = fn_00176d68(*(undefined4 *)(param_1 + 4));
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(iVar1 + 0x68) = uVar2;
  *(undefined4 *)(iVar1 + 0x78) = uVar3;
  *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x800;
  return;
}


