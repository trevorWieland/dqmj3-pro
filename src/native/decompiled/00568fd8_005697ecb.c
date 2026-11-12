#include "00568fd8_005697ecb.h"



undefined4 fn_005697ec(undefined4 param_1)

{
  fn_00569c2c();
  fn_00569808(param_1);
  return 1;
}



void fn_0056972c(int param_1)

{
  if (*(int **)(param_1 + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7c) + 0x14))();
    if (*(int **)(param_1 + 0x7c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x7c) + 4))();
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
  }
  if (*(int **)(param_1 + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x74) + 0x18))();
    if (*(int **)(param_1 + 0x74) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x74) + 4))();
      *(undefined4 *)(param_1 + 0x74) = 0;
    }
  }
  if (*(int *)(param_1 + 0x6c) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x68) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 100));
  }
  return;
}



void fn_005695fc(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  fn_00748c18();
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00892ee4) goto LAB_00569654;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00569654:
  iVar3 = fn_0057dcdc(puVar1);
  *(undefined4 *)(iVar3 + 8) = param_2;
  *(undefined1 *)(puVar1 + 7) = 1;
  return;
}



void fn_005694e0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  fn_00748990();
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00892ee4) goto LAB_00569534;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00569534:
  iVar3 = fn_0057dcdc(puVar1);
  *(undefined4 *)(iVar3 + 8) = 0xffffffff;
  *(undefined1 *)(puVar1 + 7) = 1;
  return;
}



int fn_00569384(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00892ee4) goto LAB_005693c8;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005693c8:
  iVar3 = fn_006e7ac8(puVar1);
  iVar3 = *(int *)(iVar3 + 8);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  return iVar3;
}



undefined4 fn_00569358(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0043cd80();
  fn_00689930(param_1,0x77,0);
  return uVar1;
}


