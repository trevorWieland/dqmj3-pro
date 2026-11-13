#include "003fee48_00400f34b.h"



void fn_00400f34(int param_1)

{
  fn_0039536c();
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



void fn_00400b98(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  fn_002c3e78();
  uVar2 = 0;
  do {
    uVar1 = fn_0022f584((&DAT_00896720)[uVar2],0);
    fn_0031b78c(param_1,uVar2,0,uVar1);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  return;
}



void fn_004006d8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00292f20();
  if (*(char *)(iVar1 + 0xad2) == '\0') {
    if (*(char *)(*(int *)(param_1 + 0xe4) + 0x20) == '\0') {
      fn_002c3d68(param_1);
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x1c);
      iVar1 = fn_00292f20();
      fn_0017821c(iVar1 + 0x48,uVar2,0xa88);
      (**(code **)(**(int **)(param_1 + 0xe4) + 0xc))();
      fn_006899f4(param_1,0xd4,1);
      *(undefined1 *)(param_1 + 0xf0) = 8;
      *(undefined4 *)(param_1 + 0xf4) = 0;
      return;
    }
    uVar2 = fn_0022f584((char *)&DAT_0040078c,0);
    fn_0068974c(param_1,uVar2,1);
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined1 *)(param_1 + 0xf0) = 7;
  }
  return;
}



void fn_003fff14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006f6a6c();
  if (iVar1 != 0) {
    if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0xf4) = 0;
      *(undefined1 *)(param_1 + 0xf0) = 0;
      return;
    }
    if (iVar1 == 3) {
      fn_00293acc();
      fn_002927ec(1);
      *(undefined1 *)(*(int *)(param_1 + 0xe4) + 0x20) = 1;
      iVar1 = fn_00292f20();
      fn_0044aa54(*(undefined4 *)(param_1 + 0xe8),iVar1 + 0x48);
      fn_0042f204(*(undefined4 *)(param_1 + 0xe8),0);
      uVar2 = fn_0022f584((char *)&DAT_003fffb0,0);
      fn_0068974c(param_1,uVar2,0,1);
      *(undefined1 *)(param_1 + 0xf0) = 4;
      *(undefined4 *)(param_1 + 0xf4) = 0;
    }
  }
  return;
}



void fn_003ffef8(int param_1)

{
  fn_003979d0();
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  return;
}



void fn_003ffe3c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  fn_002c3d68();
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_00895be4) goto LAB_003ffe84;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_003ffe84:
  fn_006899f4(param_1,puVar2[2],0);
  return;
}



void fn_003ff900(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003ff930(iVar1,param_1);
  return;
}



void fn_003ff930(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,&DAT_007c7460,1);
  *puVar1 = &DAT_008370c8;
  return;
}



void fn_003ff860(undefined4 *param_1)

{
  *param_1 = &DAT_00836e68;
  if (param_1[0x3d] != 0) {
    fn_002feef8(param_1[0x3d]);
  }
  fn_0039e3ac(param_1);
  fn_002feef8();
  return;
}


