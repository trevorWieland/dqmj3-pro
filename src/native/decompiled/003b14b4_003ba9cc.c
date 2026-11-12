#include "003b14b4_003ba9cc.h"



undefined4 fn_003ba9cc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  short local_ea8;
  short local_ea6;
  short local_ea4;
  short local_ea2;
  undefined1 auStack_ea0 [512];
  undefined1 auStack_ca0 [2560];
  undefined1 auStack_2a0 [512];
  undefined1 auStack_a0 [8];
  char local_98;
  undefined1 auStack_40 [16];
  undefined4 local_30;
  undefined4 uStack_2c;
  
  fn_0012a2d8(&local_ea8);
  fn_00158f6c(auStack_ea0,0x200);
  fn_00158f6c(auStack_ca0,0xa00);
  fn_00158f6c(auStack_2a0,0x200);
  uVar2 = fn_001c232c(DAT_008977e4);
  fn_00205da0(auStack_a0,uVar2);
  puVar5 = (undefined4 *)0x0;
  if (*(char *)(*(int *)(param_1 + 0x74) + 0x4c) == '\x02') {
    if (local_98 == '\x01') {
      uVar2 = fn_00203cb4();
      fn_00203954(&local_30,uVar2,*(undefined1 *)(param_1 + 0x85));
      uVar1 = uStack_2c;
      uVar2 = local_30;
      uVar6 = 0;
      uVar7 = 0;
      if (*(char *)(param_1 + 0x84) != '\0') {
        fn_002039cc(&local_30);
        uVar6 = local_30;
        uVar7 = uStack_2c;
      }
      local_ea8 = (short)uVar2 + (short)uVar6;
      local_ea4 = (short)uVar1 + (short)uVar7;
      local_ea6 = (short)((uint)uVar2 >> 0x10) + (short)((uint)uVar6 >> 0x10);
      local_ea2 = (short)((uint)uVar1 >> 0x10) + (short)((uint)uVar7 >> 0x10);
      goto LAB_003baac8;
    }
  }
  else {
LAB_003baac8:
    if (local_98 == '\x01') {
      local_ea8 = local_ea8 + 2;
      goto LAB_003baae4;
    }
  }
  local_ea8 = local_ea8 + 1;
LAB_003baae4:
  puVar3 = (undefined4 *)fn_001f74d8(param_1,0x5b);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_00894aac) {
        puVar5 = puVar3;
        break;
      }
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  fn_00301a9c(puVar5 + 2,&local_ea8,0xe08);
  *(undefined1 *)(puVar5 + 900) = 0;
  *(undefined1 *)(puVar5 + 0x385) = 1;
  fn_00689930(param_1,0x5b,0);
  *(undefined1 *)(param_1 + 0x68) = 4;
  fn_00120ec8(auStack_40);
  return 1;
}



void fn_003ba200(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = fn_00128eac(param_1 + 8,DAT_00893ee8,param_2);
  puVar2 = (undefined4 *)fn_00176d74(*(undefined4 *)(param_1 + 0x10),uVar1);
  fn_00154ac8(*puVar2);
  return;
}



void fn_003ba178(int param_1,undefined4 param_2)

{
  fn_00128eac(param_1 + 8,DAT_00893ee8,param_2);
  return;
}



void fn_003b87c8(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  
  puVar3 = auStack_18;
  if (param_3 == 0) {
    uVar1 = fn_0022f750(*(int *)(param_2 + 0x114) + 0x58);
    fn_00168a24(param_1,uVar1,auStack_10);
    return;
  }
  if (param_3 == 1) {
    puVar2 = (undefined *)fn_0022f750((char *)&DAT_003b8840,param_2,1);
  }
  else {
    puVar3 = auStack_14;
    puVar2 = &DAT_003b883c;
  }
  fn_00168a24(param_1,puVar2,puVar3);
  return;
}



undefined4 * fn_003b8284(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  *param_1 = &PTR_FUN_008522d0;
  if (((int *)param_1[5] != (int *)0x0) &&
     ((*(int *)param_1[5] == 0 || (fn_001433d8(), param_1[5] != 0)))) {
    fn_002feef8(param_1[5]);
  }
  if (param_1[3] != 0) {
    fn_0012d73c();
    param_1[3] = 0;
  }
  puVar1 = (undefined4 *)param_1[2];
  if (puVar1 != &DAT_008f9cf4) {
    piVar2 = puVar1 + -3;
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      iVar3 = param_1[2];
      fn_001008c4(iVar3 + -0xc,*(int *)(iVar3 + -8) + 8,0);
    }
  }
  return param_1;
}



void fn_003b675c(undefined4 *param_1)

{
  param_1[1] = 0xffffffff;
  *param_1 = &DAT_0082ead0;
  param_1[2] = 0xffffffff;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[7] = 0;
  param_1[8] = 1;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  return;
}



void fn_003b59fc(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003b17d4(param_1,param_2,2);
  *puVar1 = &DAT_0082ea70;
  return;
}



void fn_003b14b4(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,2);
  *puVar1 = &DAT_0082e9f8;
  if (param_3 != (undefined1 *)0x0) {
    uVar3 = (uint)(byte)param_3[1];
  }
  else {
    uVar3 = 0;
  }
  puVar1[0x16] = uVar3;
  if (param_3 != (undefined1 *)0x0) {
    uVar2 = *param_3;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(puVar1[5] + 0x1e6) = uVar2;
  return;
}


