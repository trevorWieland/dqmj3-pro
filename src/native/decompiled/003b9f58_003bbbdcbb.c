#include "003b9f58_003bbbdcbb.h"



void fn_003bbbdc(int param_1)

{
  if (*(int *)(param_1 + 0x94) == 0) {
    return;
  }
  fn_0031bf48(*(int *)(param_1 + 0x94));
  return;
}



void fn_003bbb2c(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0082f2e4;
  if ((int *)param_1[0x28] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x28] + 4))();
    param_1[0x28] = 0;
  }
  if ((int *)param_1[0x29] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x29] + 4))();
    param_1[0x29] = 0;
  }
  if ((int *)param_1[0x2a] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2a] + 4))();
    param_1[0x2a] = 0;
  }
  if ((int *)param_1[0x29] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x29] + 4))();
  }
  if ((int *)param_1[0x28] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x28] + 4))();
  }
  fn_0022d114(param_1);
  return;
}



undefined4 * fn_003bba60(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar1 = (undefined4 *)fn_00385b88();
  *puVar1 = &PTR_FUN_0082f2e4;
  iVar2 = fn_00145b00(0xc,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_003f5178();
  }
  puVar1[0x28] = uVar3;
  iVar2 = fn_00145b00(0x84,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_003d6ce8();
  }
  puVar1[0x29] = uVar3;
  iVar2 = fn_00145b00(0xc,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_003f4f48();
  }
  puVar1[0x2a] = uVar3;
  puVar4 = (undefined4 *)fn_001f74d8(puVar1,0x3e);
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar5 == &DAT_00894020) goto LAB_003bbb04;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_003bbb04:
  puVar1[0x27] = puVar4;
  return puVar1;
}


