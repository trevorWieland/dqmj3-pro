#include "003ca138_003ca720.h"



void fn_003ca720(undefined4 *param_1)

{
  *param_1 = &DAT_00830a9c;
  if (param_1[0x13] != 0) {
    fn_002feef8(param_1[0x13]);
  }
  fn_001f8010(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_003ca69c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001f7e18();
  *puVar1 = &DAT_00830a9c;
  puVar1[0x13] = 0;
  puVar1[0x12] = param_2;
  puVar1[0x14] = 0;
  *(undefined1 *)(puVar1 + 0x15) = 0;
  puVar1[0x16] = 0;
  *(undefined1 *)(puVar1 + 0x17) = 0;
  puVar1[0x18] = 0;
  fn_0028e434(puVar1[4],&DAT_007ca324);
  fn_0028e434(puVar1[5],&DAT_007ca748);
  fn_0028e434(puVar1[3],&DAT_007cace8);
  fn_0028e434(puVar1[6],&DAT_007cad38);
  return puVar1;
}



void fn_003ca698(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  uVar1 = fn_003b8054(*(undefined4 *)(param_1 + 0x30),1,0);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  iVar2 = fn_00145b00(8,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)fn_00348e70();
  }
  piVar4 = *(int **)(param_1 + 0x3c);
  if (piVar4 != piVar3) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *(int **)(param_1 + 0x3c) = piVar3;
  }
  if (*(int *)(param_1 + 0x3c) == 0) {
    return;
  }
  uVar1 = fn_003b7324(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x40));
  fn_00348dbc(*(undefined4 *)(param_1 + 0x3c),uVar1,*(undefined4 *)(*(int *)(param_1 + 0x34) + 8));
  return;
}



void fn_003ca51c(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  fn_001f7a98();
  iVar1 = param_1[0x16];
  if (iVar1 == 0) {
    if ((((param_1[0x13] != 0) && (iVar1 = fn_002f9da0(), iVar1 != 0)) &&
        (iVar1 = fn_006ad87c(param_1,1), iVar1 != 0)) && (param_1[0x13] != 0)) {
      fn_002feef8(param_1[0x13]);
      param_1[0x13] = 0;
      fn_003ca278(param_1);
    }
    if (((char)param_1[0x15] != '\0') && (iVar1 = fn_0028eb38(param_1[3]), iVar1 != 1)) {
      fn_003ca278(param_1);
      *(undefined1 *)(param_1 + 0x15) = 0;
      return;
    }
  }
  else {
    if (iVar1 == 1) {
      iVar1 = (**(code **)(*param_1 + 0x2c))(param_1);
      if (iVar1 != 0) {
        fn_003ca180(param_1);
        return;
      }
      puVar2 = (undefined4 *)fn_001f74e4(param_1,0xf4);
      if (puVar2 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
        do {
          if (puVar3 == &DAT_008970f4) goto LAB_003ca664;
          puVar3 = (undefined4 *)*puVar3;
        } while (puVar3 != (undefined4 *)0x0);
      }
      puVar2 = (undefined4 *)0x0;
LAB_003ca664:
      *(char *)(puVar2 + 4) = (char)param_1[0x17];
      puVar2[5] = param_1[0x18];
      fn_001f7438(param_1,0xf4,1);
      param_1[0x16] = 2;
      return;
    }
    if ((iVar1 == 2) && (iVar1 = fn_0028eac0(param_1,0xf4), iVar1 == 0)) {
      fn_002f6dbc();
      param_1[0x16] = 0;
    }
  }
  return;
}



void fn_003ca4b8(int param_1)

{
  undefined4 uVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined1 local_1f;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x84);
  local_28 = fn_0028e66c(*(undefined4 *)(param_1 + 0x10));
  local_20 = 1;
  local_1f = 1;
  local_24 = 0;
  fn_003c9e90(*(int *)(param_1 + 0x48),*(int *)(param_1 + 0x48) + 0x30,&local_28);
  fn_001f748c(param_1,uVar1,1,1);
  return;
}



void fn_003ca498(int param_1,undefined4 param_2,undefined4 param_3)

{
  fn_0028c554();
  *(undefined4 *)(param_1 + 0x50) = param_3;
  *(undefined1 *)(param_1 + 0x54) = 1;
  return;
}



void fn_003ca42c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00145b00(0x114,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_002fa328();
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 != iVar2) {
    if (iVar1 != 0) {
      fn_002feef8(iVar1);
    }
    *(int *)(param_1 + 0x4c) = iVar2;
  }
  fn_002f96c4(*(undefined4 *)(param_1 + 0x4c),param_2,param_1,2);
  *(undefined4 *)(param_1 + 0x50) = param_3;
  return;
}



void fn_003ca418(int param_1,undefined1 param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 0x5c) = param_2;
  *(undefined4 *)(param_1 + 0x58) = 1;
  *(undefined4 *)(param_1 + 0x60) = param_3;
  return;
}



void fn_003ca3b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined1 local_1f;
  
  local_28 = fn_0028e66c(*(undefined4 *)(param_1 + 0x10));
  local_20 = (undefined1)param_3;
  local_1f = (undefined1)param_4;
  local_24 = param_5;
  fn_003c9e90(*(int *)(param_1 + 0x48),*(int *)(param_1 + 0x48) + 0x30,&local_28);
  fn_001f748c(param_1,param_2,param_3,param_4);
  return;
}



void fn_003ca348(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined1 local_1f;
  
  local_28 = fn_0028e66c(*(undefined4 *)(param_1 + 0x14));
  local_20 = (undefined1)param_3;
  local_1f = (undefined1)param_4;
  local_24 = param_5;
  fn_003c9e90(*(int *)(param_1 + 0x48),*(int *)(param_1 + 0x48) + 0x58,&local_28);
  fn_001f7438(param_1,param_2,param_3,param_4);
  return;
}



void fn_003ca278(int param_1)

{
  undefined4 uVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined1 local_1f;
  
  fn_001f749c(param_1,0,0);
  uVar1 = *(undefined4 *)(param_1 + 0x50);
  local_28 = fn_0028e66c(*(undefined4 *)(param_1 + 0x10));
  local_20 = 1;
  local_1f = 1;
  local_24 = 0;
  fn_003c9e90(*(int *)(param_1 + 0x48),*(int *)(param_1 + 0x48) + 0x30,&local_28);
  fn_001f748c(param_1,uVar1,1,1);
  local_28 = fn_0028e66c(*(undefined4 *)(param_1 + 0x14));
  local_20 = 0;
  local_1f = 0;
  local_24 = 0;
  fn_003c9e90(*(int *)(param_1 + 0x48),*(int *)(param_1 + 0x48) + 0x58,&local_28);
  fn_001f7438(param_1,0,0,0);
  fn_001f73a0(param_1,0);
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}



void fn_003ca180(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0028e340(*(undefined4 *)(param_1 + 0x10));
  if ((iVar1 != 0) &&
     (iVar1 = fn_0028eae4(*(undefined4 *)(param_1 + 0x10)), *(char *)(iVar1 + 0xc) == '\x03')) {
    fn_001f748c(param_1,0,1,1);
  }
  iVar1 = fn_0028e340(*(undefined4 *)(param_1 + 0x14));
  if ((iVar1 != 0) && (iVar1 = fn_0028eadc(param_1), *(char *)(iVar1 + 0xc) == '\x03')) {
    fn_001f7438(param_1,0,1,1);
  }
  iVar1 = fn_0028e340(*(undefined4 *)(param_1 + 0xc));
  if ((iVar1 != 0) &&
     (iVar1 = fn_0028eae4(*(undefined4 *)(param_1 + 0xc)), *(char *)(iVar1 + 0xc) == '\x03')) {
    fn_001f749c(param_1,0,1,1);
  }
  iVar1 = fn_0028e340(*(undefined4 *)(param_1 + 0x18));
  if ((iVar1 == 0) ||
     (iVar1 = fn_0028eae4(*(undefined4 *)(param_1 + 0x18)), *(char *)(iVar1 + 0xc) != '\x03')) {
    return;
  }
  fn_001f73a0(param_1,0);
  return;
}



void fn_003ca148(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  puVar3 = (undefined4 *)fn_006c832c(*(int *)(param_1 + 0x48),*(int *)(param_1 + 0x48) + 0x30);
  fn_001f748c(param_1,*puVar3,(int)*(char *)(puVar3 + 2),(int)*(char *)((int)puVar3 + 9));
  iVar4 = *(int *)(param_1 + 0x48);
  piVar5 = *(int **)(iVar4 + 0x40);
  iVar1 = piVar5[1];
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  uVar7 = *(undefined4 *)(iVar1 + 0x10);
  *(undefined4 *)(iVar4 + 0x48) = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)(iVar4 + 0x4c) = uVar6;
  *(undefined4 *)(iVar4 + 0x50) = uVar7;
  *(undefined1 *)(iVar4 + 0x54) = 1;
  piVar2 = (int *)piVar5[1];
  if (piVar2 != piVar5) {
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    *(int *)(iVar4 + 0x44) = *(int *)(iVar4 + 0x44) + -1;
    *piVar2 = *(int *)(iVar4 + 0x34);
    *(int **)(iVar4 + 0x34) = piVar2;
  }
  return;
}



void fn_003ca138(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 unaff_r4;
  undefined4 in_lr;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar2 = fn_002f8364();
  puVar3 = (undefined4 *)fn_006c832c(*(int *)(iVar2 + 0x48),*(int *)(iVar2 + 0x48) + 0x30);
  fn_001f748c(iVar2,*puVar3,(int)*(char *)(puVar3 + 2),(int)*(char *)((int)puVar3 + 9),unaff_r4,
               in_lr);
  iVar4 = *(int *)(iVar2 + 0x48);
  piVar5 = *(int **)(iVar4 + 0x40);
  iVar2 = piVar5[1];
  uVar6 = *(undefined4 *)(iVar2 + 0xc);
  uVar7 = *(undefined4 *)(iVar2 + 0x10);
  *(undefined4 *)(iVar4 + 0x48) = *(undefined4 *)(iVar2 + 8);
  *(undefined4 *)(iVar4 + 0x4c) = uVar6;
  *(undefined4 *)(iVar4 + 0x50) = uVar7;
  *(undefined1 *)(iVar4 + 0x54) = 1;
  piVar1 = (int *)piVar5[1];
  if (piVar1 != piVar5) {
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    *(int *)(iVar4 + 0x44) = *(int *)(iVar4 + 0x44) + -1;
    *piVar1 = *(int *)(iVar4 + 0x34);
    *(int **)(iVar4 + 0x34) = piVar1;
  }
  return;
}


