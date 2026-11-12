#include "0057d8c8_0057fbd4a.h"



int fn_0057dcdc(int param_1)

{
  return *(int *)(param_1 + 8) + 0x90;
}



undefined4 * fn_0057db70(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)fn_002c27a8();
  puVar4 = (undefined4 *)0x0;
  *puVar1 = &DAT_00841e28;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  puVar1[0x36] = 0;
  puVar1[0x37] = 0;
  puVar1[0x38] = 0;
  puVar1[0x39] = 0;
  *(undefined1 *)(puVar1 + 0x3a) = 0;
  puVar1[0x3b] = 0;
  puVar1[0x3c] = 0;
  puVar2 = (undefined4 *)fn_001f74d8(puVar1,0x2d);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008951dc) goto LAB_0057dbe8;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_0057dbe8:
  puVar1[0x34] = puVar2;
  puVar2 = (undefined4 *)fn_001f74ec(puVar1,0xdf);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00893064) {
        puVar4 = puVar2;
        break;
      }
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar1[0x39] = puVar4;
  fn_00689efc(puVar1,0x2d,0);
  return puVar1;
}



void fn_0057daf4(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_3;
  fn_002c26a4();
  if (param_3 != 0) {
    iVar2 = *(int *)(param_1 + 0xd4);
  }
  if (param_3 == 0 || iVar2 == 0) {
    return;
  }
  if (param_4 == 1) {
    iVar2 = iVar2 + param_2 * 0xf0;
    piVar1 = (int *)(iVar2 + 0x150);
  }
  else {
    if (param_4 != 2) goto LAB_0057db60;
    iVar2 = iVar2 + param_2 * 0xf0;
    piVar1 = (int *)(iVar2 + 0x514);
  }
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
  }
  if (piVar1 != (int *)0x0 && iVar2 != 0) {
    fn_0025f3f4(*(undefined4 *)(param_1 + 0xd0));
    return;
  }
LAB_0057db60:
  *(undefined2 *)(*(int *)(param_1 + 0xd0) + 0x1c) = 0;
  return;
}



void fn_0057da84(int *param_1,int param_2,undefined4 param_3)

{
  fn_002c265c();
  if (param_2 == 1) {
    (**(code **)(*param_1 + 0x110))(param_1,2,param_3,0,1);
    return;
  }
  if (param_2 == 2) {
    (**(code **)(*param_1 + 0x110))(param_1,1,param_3,0,1);
  }
  return;
}



void fn_0057da14(int *param_1,int param_2,undefined4 param_3)

{
  fn_002c2648();
  if (param_2 == 1) {
    (**(code **)(*param_1 + 0x110))(param_1,2,param_3,0,1);
    return;
  }
  if (param_2 == 2) {
    (**(code **)(*param_1 + 0x110))(param_1,1,param_3,0,1);
  }
  return;
}



void fn_0057d9a0(int *param_1,int param_2,int param_3)

{
  fn_002c263c();
  if (param_2 == 1 || param_2 == 2) {
    (**(code **)(*param_1 + 0x110))(param_1,6,0,0,1);
    return;
  }
  if (param_2 == 6 && param_3 == 0) {
    (**(code **)(*param_1 + 0x110))(param_1,1,0,0,1);
  }
  return;
}



void fn_0057d8c8(int *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  fn_002c246c();
  if ((char)param_1[0x3a] != '\x01') {
    uVar2 = fn_006f6a5c(param_1);
    if ((uVar2 & 0x100000) == 0) {
      if ((uVar2 & 0x200000) != 0) {
        *(undefined1 *)(param_1[0x34] + 0x18) = 2;
      }
    }
    else {
      *(undefined1 *)(param_1[0x34] + 0x18) = 1;
    }
  }
  (**(code **)(*(int *)param_1[0x37] + 0x14))();
  if ((param_1[0x3c] != 0) &&
     (iVar3 = fn_003f71f4(*(undefined4 *)(param_1[0x3b] + 0x40)), iVar3 == 0xd)) {
    iVar3 = (**(code **)(*param_1 + 0x1a0))(param_1);
    cVar1 = '\0';
    if (iVar3 != 0) {
      cVar1 = (char)param_1[0x3a];
    }
    if (iVar3 != 0 && cVar1 != '\x01') {
      uVar4 = 0;
      if (param_1[0x39] != 0) {
        uVar4 = *(undefined4 *)(param_1[0x39] + 8);
      }
      fn_006899f4(param_1,uVar4,1);
      fn_006898b8(param_1,0x2d,0);
      *(undefined1 *)(param_1 + 0x3a) = 1;
    }
  }
  return;
}


