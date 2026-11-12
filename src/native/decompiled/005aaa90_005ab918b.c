#include "005aaa90_005ab918b.h"



void fn_005ab918(undefined4 param_1)

{
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_005ab7a4(void)

{
  fn_0022f750((char *)&DAT_005ab7ac);
  return;
}



void fn_005ab6e0(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  fn_0036c648(*(undefined4 *)(param_1 + 0x5c),param_3);
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 10) = param_4;
  fn_0036c140(*(undefined4 *)(param_1 + 0x5c),param_2);
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 8) = 0;
  fn_00689bd0(param_1,0x48,0,0);
  return;
}



undefined4 fn_005ab63c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xe1);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008951dc) goto LAB_005ab684;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005ab684:
  *(undefined4 **)(param_1 + 0xe8) = puVar1;
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xdc);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00890c80) {
        puVar3 = puVar1;
        break;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  *(undefined4 **)(param_1 + 0xe4) = puVar3;
  return 1;
}



void fn_005ab5f8(int param_1)

{
  fn_003979d0();
  if (*(int *)(param_1 + 0xec) != 0) {
    fn_00142e38();
    if (*(int **)(param_1 + 0xec) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xec) + 4))();
      *(undefined4 *)(param_1 + 0xec) = 0;
    }
  }
  return;
}



void fn_005ab5a0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_005e1058();
  }
  piVar3 = *(int **)(param_1 + 0xec);
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *(int **)(param_1 + 0xec) = piVar2;
  }
  fn_005e0fb4(*(undefined4 *)(param_1 + 0xec));
  return;
}



void fn_005ab578(int param_1)

{
  fn_00321118(*(undefined4 *)(param_1 + 0x58));
  fn_00689bd0(param_1,0x49,0);
  return;
}



uint fn_005ab530(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 == 0) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0xe4) + 0x44);
  }
  else if (param_2 == 1) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0xe4) + 0x48);
  }
  else if (param_2 == 2) {
    uVar1 = (uint)*(byte *)(*(int *)(param_1 + 0xe4) + 0x4c);
  }
  else if (param_2 == 3) {
    uVar1 = (uint)*(byte *)(*(int *)(param_1 + 0xe4) + 0x4d);
  }
  return uVar1;
}



undefined4 fn_005ab518(int param_1)

{
  return *(undefined4 *)(&DAT_007bd6d4 + *(int *)(*(int *)(param_1 + 0xe4) + 0x40) * 4);
}


