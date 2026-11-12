#include "005f6b68_005f7160.h"



undefined4 * fn_005f7160(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_stack_00000000;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar1 = (undefined4 *)fn_005cdeb8();
  puVar1[0xe] = 0;
  *puVar1 = &DAT_0084dc1c;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  iVar3 = 0;
  do {
    fn_001028d4(&local_50,DAT_0088ff1c,*(undefined1 *)((int)puVar1 + 5),iVar3,in_stack_00000000);
    uVar2 = fn_006888c0(puVar1[4],&local_50);
    iVar4 = iVar3 + 1;
    puVar1[iVar3 + 8] = uVar2;
    iVar3 = iVar4;
  } while (iVar4 < 6);
  return puVar1;
}



void fn_005f6f40(int param_1)

{
  int iVar1;
  undefined4 in_s0;
  uint uVar2;
  
  uVar2 = VectorFloatToUnsigned(in_s0,3);
  iVar1 = 0;
  do {
    if ((iVar1 == 0) || (uVar2 != 0)) {
      fn_0018cbc4(param_1,*(undefined4 *)(param_1 + iVar1 * 4 + 0x20),1,uVar2 % 10);
    }
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 / 10;
  } while (iVar1 < 6);
  return;
}



undefined4 * fn_005f6f1c(undefined4 *param_1)

{
  *param_1 = &DAT_00859490;
  fn_002feef8(param_1[1]);
  return param_1;
}



undefined4 * fn_005f6f18(undefined4 *param_1)

{
  *param_1 = &DAT_00859490;
  fn_002feef8(param_1[1]);
  return param_1;
}



void fn_005f6ef0(undefined4 *param_1)

{
  *param_1 = &DAT_00859490;
  fn_002feef8(param_1[1]);
  fn_002feef8(param_1);
  return;
}



void fn_005f6ea4(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &DAT_00859450;
  puVar1 = (undefined4 *)param_1[1];
  if (puVar1 != (undefined4 *)0x0) {
    fn_0019d650(*puVar1);
    fn_002feef8(puVar1);
  }
  fn_002feef8(param_1);
  return;
}



undefined4 fn_005f6e6c(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == 0 || param_3 == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = fn_00144064(**(undefined4 **)(param_1 + 4),(char *)&DAT_00144260);
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = 1;
    }
  }
  return uVar1;
}



bool fn_005f6e60(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = **(undefined4 **)(param_1 + 4);
  uVar1 = fn_00157ff4();
  fn_00173cb8(uVar3,uVar1);
  fn_00173d14(uVar3);
  fn_00158128(uVar3,param_2,0xffffffff);
  iVar2 = fn_00157df4(uVar3,0xfffffffe);
  return -1 < iVar2;
}



undefined4 fn_005f6e38(int param_1,undefined4 param_2)

{
  undefined4 local_8 [2];
  
  local_8[0] = 0;
  fn_005f6b68(local_8,**(undefined4 **)(param_1 + 4),param_2);
  return local_8[0];
}



int fn_005f6e14(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00144128(**(undefined4 **)(param_1 + 4),(char *)&DAT_00144260);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



void fn_005f6de0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_8 [2];
  
  local_8[0] = 0;
  fn_005f6aa4(local_8,**(undefined4 **)(param_1 + 4),param_2,param_3);
  return;
}



void fn_005f6dac(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_8 [2];
  
  local_8[0] = 0;
  fn_005f69e4(local_8,**(undefined4 **)(param_1 + 4),param_2,param_3);
  return;
}



bool fn_005f6d74(int param_1,undefined4 param_2,undefined4 param_3)

{
  int local_8 [2];
  
  local_8[0] = 0;
  fn_005f6924(local_8,**(undefined4 **)(param_1 + 4),param_2,param_3);
  return local_8[0] == 1;
}



undefined * fn_005f6d40(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *local_8 [2];
  
  local_8[0] = &DAT_005f6d70;
  fn_005f6860(local_8,**(undefined4 **)(param_1 + 4),param_2,param_3);
  return local_8[0];
}



undefined4 fn_005f6d10(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_8 [2];
  
  local_8[0] = 0;
  fn_005f679c(local_8,**(undefined4 **)(param_1 + 4),param_2,param_3);
  return local_8[0];
}



undefined4 fn_005f6ce8(int param_1,undefined4 param_2)

{
  undefined4 local_8 [2];
  
  local_8[0] = 0;
  fn_005f6700(local_8,**(undefined4 **)(param_1 + 4),param_2);
  return local_8[0];
}



undefined4 fn_005f6c88(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 4);
  if (param_2 == 0 || param_3 == 0) {
    uVar1 = 0;
  }
  else {
    *(undefined1 *)(puVar3 + 1) = 0;
    iVar2 = fn_005f6650(*puVar3,(char *)&DAT_00144260);
    uVar1 = 0;
    if (iVar2 != 0) {
      iVar2 = fn_001541ec(*puVar3,(char *)&DAT_00144260);
      uVar1 = 0;
      if (iVar2 != 0) {
        uVar1 = 1;
        *(undefined1 *)(puVar3 + 1) = 1;
      }
    }
  }
  return uVar1;
}



bool fn_005f6c60(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00743584(param_1,0,0,1,0);
  return -1 < iVar1;
}



bool fn_005f6c04(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 4);
  uVar2 = fn_00157ff4();
  fn_00173cb8(uVar1,uVar2);
  fn_00173d14(uVar1);
  fn_00158128(uVar1,param_2,0xffffffff);
  iVar3 = fn_00157df4(uVar1,0xfffffffe);
  return -1 < iVar3;
}



undefined4 fn_005f6b68(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_00173d14(param_2);
  fn_00158128(param_2,param_3,0xffffffff);
  iVar1 = fn_00157df4(param_2,0xfffffffe);
  if ((iVar1 < 0) || (iVar1 = fn_00157f58(param_2,0xffffffff,param_1), iVar1 < 0)) {
    uVar2 = fn_00157ff4(param_2);
    fn_00173cb8(param_2,uVar2);
    return 0;
  }
  uVar2 = fn_00157ff4(param_2);
  fn_00173cb8(param_2,uVar2);
  return 1;
}


