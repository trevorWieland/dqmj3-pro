#include "00439e58_0043a700b.h"



void fn_0043a700(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xb0) == '\0') {
    if (param_2 == 0) {
      fn_0043a29c(param_1,0);
    }
    else {
      if (param_2 != 1) {
        return;
      }
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0x100094b;
      uVar1 = fn_0022f584((char *)&DAT_0043a778,0);
      fn_0068974c(param_1,uVar1,1);
    }
    *(undefined1 *)(param_1 + 0xb0) = 1;
  }
  return;
}



void fn_0043a43c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (*(char *)(param_1 + 0xb0) != '\0') {
    return;
  }
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0x95);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894c6c) goto LAB_0043a494;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0043a494:
  fn_006899f4(param_1,puVar1[0xd],0);
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_0043a29c(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_940;
  undefined4 local_93c;
  undefined4 local_938;
  undefined4 local_934;
  undefined4 local_930;
  undefined4 local_92c;
  undefined1 local_8e0;
  undefined1 auStack_8dc [184];
  undefined2 local_824;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  iVar4 = *(int *)(DAT_00897804 + 8);
  fn_0025bdf0(iVar4);
  fn_0025b20c(iVar4,param_1 + 0xb4);
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x3c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894d28) goto LAB_0043a314;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0043a314:
  fn_0017821c(&local_940,puVar1 + 7,0x8d8);
  local_8e0 = (undefined1)param_2;
  fn_0017821c(auStack_8dc,param_1 + 0xb4,0x60);
  if (param_2 == 0) {
    puVar2 = *(undefined4 **)(iVar4 + 4);
    local_940 = *puVar2;
    local_93c = puVar2[1];
    local_938 = puVar2[2];
    local_934 = puVar2[3];
    local_930 = puVar2[4];
    local_92c = puVar2[5];
    local_824 = 1;
  }
  else {
    fn_001f825c();
    fn_006619ec(&local_68,param_1 + 0xb4);
    local_940 = local_68;
    local_93c = uStack_64;
    local_938 = uStack_60;
    local_934 = uStack_5c;
    local_930 = uStack_58;
    local_92c = uStack_54;
    fn_0011ddb8();
    local_824 = 0x1b;
  }
  fn_0017821c(puVar1 + 7,&local_940,0x8d8);
  fn_0042f204(puVar1,0);
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0x100094b;
  uVar3 = fn_0022f584((char *)&DAT_0043a41c,0);
  fn_0068974c(param_1,uVar3,0,1);
  return;
}



void fn_0043a248(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x3c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894d28) goto LAB_0043a28c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0043a28c:
  *(undefined1 *)(puVar1 + 6) = 2;
  return;
}



void fn_0043a1f4(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x3c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894d28) goto LAB_0043a23c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0043a23c:
  *(undefined1 *)(puVar1 + 6) = 1;
  return;
}



void fn_0043a1b8(undefined4 *param_1)

{
  *param_1 = &DAT_0083c6d8;
  if (param_1[0x26] != 0) {
    fn_002e3bbc();
    fn_002feef8();
  }
  fn_0025c888(param_1);
  fn_002feef8();
  return;
}


