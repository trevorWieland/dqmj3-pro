#include "005e8404_005e8abc.h"



undefined4 *
fn_005e8abc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00117720(param_1,param_7);
  *puVar1 = &DAT_00858cec;
  puVar1[8] = param_2;
  puVar1[9] = param_3;
  puVar1[10] = param_4;
  puVar1[0xb] = param_5;
  puVar1[0xc] = param_6;
  return puVar1;
}



void fn_005e8a68(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006e9fac(*(undefined4 *)(param_1 + 0x30));
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != 0) {
    fn_005e5ec0(*(undefined4 *)(param_1 + 0x20),iVar1 + 0x1a8,iVar1 + 0x148);
    if (*(int *)(param_1 + 0x2c) != 0) {
      fn_005f09e0(*(int *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x28));
    }
  }
  fn_00734c2c(*(undefined4 *)(param_1 + 0x30));
  return;
}



void fn_005e8904(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  param_1 = (undefined4 *)*param_1;
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 4);
  if (*(char *)((int)param_2 + 0x11) != '\0') {
    *(undefined1 *)(param_1 + 9) = 0;
  }
  param_1[10] = *param_2;
  *(undefined1 *)((int)param_1 + 0x25) = 1;
  uVar2 = param_2[1];
  uVar4 = param_2[3];
  uVar5 = param_2[2];
  uVar1 = *(undefined1 *)(param_2 + 4);
  puVar3 = (undefined4 *)fn_00143ac8(0x30,0x10);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
  }
  fn_005ee918(puVar3,uVar2,uVar5,uVar4,uVar1,0);
  param_1[4] = 0xc;
  param_1[3] = puVar3;
  *param_1 = puVar3;
  if (*(char *)((int)param_2 + 0x11) == '\0') {
    uVar2 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    uVar1 = *(undefined1 *)(param_2 + 4);
    puVar3 = (undefined4 *)fn_00143ac8(0x30,0x10);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
    }
    fn_005ee918(puVar3,uVar2,uVar4,uVar5,uVar1,1);
    param_1[4] = 0xc;
    param_1[3] = puVar3;
    param_1[1] = puVar3;
    uVar2 = param_2[3];
    uVar4 = param_2[2];
    uVar5 = param_2[1];
    uVar1 = *(undefined1 *)(param_2 + 4);
    puVar3 = (undefined4 *)fn_00143ac8(0x30,0x10);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
    }
    fn_005ee918(puVar3,uVar5,uVar4,uVar2,uVar1,2);
    param_1[4] = 0xc;
    param_1[3] = puVar3;
    param_1[2] = puVar3;
  }
  return;
}



void fn_005e88b8(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (*piVar1 != 0) {
    fn_00143a58();
    *piVar1 = 0;
  }
  if (piVar1[1] != 0) {
    fn_00143a58();
    piVar1[1] = 0;
  }
  if (piVar1[2] != 0) {
    fn_00143a58();
    piVar1[2] = 0;
  }
  return;
}



undefined4 * fn_005e8870(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001a0ba8();
  *puVar1 = &DAT_00858cdc;
  puVar1[6] = 0;
  return puVar1;
}



void fn_005e8860(undefined4 param_1)

{
  fn_002feef8(param_1);
  return;
}



void fn_005e8778(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar3 + 5);
    if (cVar1 == '\0') {
      if (param_3 == 0) {
        uVar2 = fn_005ea33c(param_2);
        fn_00780e38(iVar3,uVar2,*(undefined4 *)(param_1 + 0x18));
        return;
      }
      uVar2 = fn_005ea33c(param_2);
      fn_00780fc0(iVar3,uVar2,param_3,*(undefined4 *)(param_1 + 0x18));
      return;
    }
    if (cVar1 == '\x01') {
      uVar2 = fn_005ea5fc(param_2);
      fn_00780a7c(iVar3,uVar2,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
      return;
    }
    if (cVar1 == '\x02') {
      uVar2 = fn_005ea4fc(param_2);
      fn_006e0868(*(undefined4 *)(param_1 + 0x14),uVar2,*(undefined4 *)(param_1 + 0x18));
      return;
    }
  }
  return;
}



undefined4 * fn_005e8730(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001a0ba8();
  *puVar1 = &DAT_00858cbc;
  puVar1[6] = 0;
  return puVar1;
}



void fn_005e8724(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  fn_001a0b88();
  return;
}



void fn_005e8698(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = fn_006dd02c(&DAT_008bf780,*param_3);
  *param_3 = uVar1;
  (**(code **)(*param_1 + 0xc))(param_1,param_2,param_3);
  puVar2 = (undefined4 *)fn_006eb290(param_2);
  *puVar2 = 0;
  *(undefined2 *)(puVar2 + 1) = 0xffff;
  *(undefined2 *)((int)puVar2 + 6) = 0xffff;
  fn_005e6088(param_2);
  return;
}



void fn_005e863c(undefined4 *param_1)

{
  *param_1 = &DAT_00858c94;
  fn_00734d8c(param_1[6],param_1[8]);
  (**(code **)(*(int *)param_1[10] + 0xc))((int *)param_1[10],param_1[9]);
  (**(code **)(*(int *)param_1[10] + 0xc))((int *)param_1[10],param_1[8]);
  fn_002feef8(param_1);
  return;
}



int * fn_005e860c(int *param_1)

{
  if (*param_1 != 0) {
    fn_002feef8();
    *param_1 = 0;
  }
  fn_002feef8(*param_1);
  return param_1;
}



undefined4 * fn_005e85a0(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  *param_1 = 0;
  puVar1 = (undefined1 *)fn_00145b00(8,&DAT_00812c8c);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 1;
    puVar1[2] = 3;
    puVar1[3] = 0;
    puVar1[4] = 0;
  }
  if ((undefined1 *)*param_1 != puVar1) {
    fn_002feef8();
    *param_1 = puVar1;
  }
  return param_1;
}



void fn_005e8584(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_006dd0a0(*param_1,*param_2);
  *param_2 = uVar1;
  return;
}



undefined4 * fn_005e846c(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  
  puVar1 = (undefined4 *)fn_005efdbc();
  puVar1[2] = 0;
  *puVar1 = &DAT_00858c64;
  piVar2 = (int *)fn_00145b00(0x18,&DAT_00812c8c);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    *piVar2 = 0;
    piVar2[1] = 0;
    piVar2[2] = 0;
    piVar2[3] = 0;
    piVar2[4] = 0;
    piVar2[5] = 0;
  }
  piVar3 = (int *)puVar1[2];
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      fn_002feca8(piVar3[3]);
      piVar3[3] = 0;
      if ((int *)*piVar3 != (int *)0x0) {
        (**(code **)(*(int *)*piVar3 + 4))();
      }
      *piVar3 = 0;
      fn_002feef8(piVar3);
    }
    puVar1[2] = piVar2;
  }
  return puVar1;
}



undefined4 fn_005e8404(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  uVar1 = fn_005efd98();
  puVar4 = *(undefined4 **)(param_1 + 8);
  iVar2 = fn_00145b00(0x20,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_00196930();
  }
  *puVar4 = uVar3;
  iVar2 = fn_006ebeec(uVar1);
  iVar2 = *(int *)(iVar2 + 8);
  uVar3 = fn_001287d4(iVar2 * 0xc,&DAT_00812c8c);
  puVar4[3] = uVar3;
  fn_005483b0(puVar4 + 1,uVar3,iVar2 * 3);
  return uVar1;
}


