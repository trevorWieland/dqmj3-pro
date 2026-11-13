#include "00659048_0065a270a.h"



void fn_00659480(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  fn_0057481c(param_1 + 0x14,param_3);
  return;
}



void fn_00659438(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  fn_0057481c(param_1 + 0x14,param_3);
  return;
}



void fn_0065929c(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    fn_00656b7c(puVar1);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}



void fn_006591d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  
  local_18 = param_4;
  iVar2 = fn_00169c08(&local_18,0xffff8000);
  if (iVar2 < 0) {
    fn_0015e294();
  }
  uVar1 = local_18;
  iVar2 = fn_00656e14(0x88,param_2);
  puVar3 = (undefined4 *)0x0;
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)fn_00657950(iVar2,param_2,&DAT_0089a7a8,uVar1);
    *puVar3 = &DAT_00859638;
  }
  *(undefined4 **)(param_1 + 0x20) = puVar3;
  fn_0044f63c(param_1 + 0x24,puVar3);
  return;
}



void fn_006590e4(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  if (DAT_008c06e0 != 0) {
    return;
  }
  iVar1 = fn_00656e14(0x28,param_1);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uVar3 = 0;
    do {
      puVar4 = (undefined1 *)(iVar1 + uVar3);
      uVar3 = uVar3 + 1;
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = 0;
      }
    } while (uVar3 < 0x28);
    puVar2 = (undefined4 *)0x0;
    if (iVar1 == -4) goto LAB_00659154;
  }
  puVar2 = (undefined4 *)fn_00659048();
  *puVar2 = &DAT_00859a18;
LAB_00659154:
  DAT_008c06e4 = puVar2;
  if (iVar1 == 0) {
    DAT_008c06e0 = 0;
  }
  else {
    DAT_008c06e0 = fn_006592d4();
  }
  return;
}



int fn_006592d4(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_00859a28;
  param_1[6] = param_1 + 5;
  param_1[7] = 0;
  param_1[5] = param_1 + 5;
  param_1[8] = 0;
  iVar1 = fn_0044f64c(param_1 + 9);
  return iVar1 + -0x24;
}



undefined4 * fn_00659048(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  *param_1 = &DAT_00859a08;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (DAT_008c06d0 != 0) {
    uVar3 = fn_006f5438(DAT_008c06d0,param_1);
    iVar1 = (int)uVar3;
    puVar2 = (undefined4 *)((ulonglong)uVar3 >> 0x20);
    if (iVar1 != 0) {
      puVar2 = param_1;
    }
    param_1[1] = iVar1;
    if (iVar1 != 0) {
      fn_00656ea0(iVar1,puVar2);
    }
  }
  return param_1;
}


