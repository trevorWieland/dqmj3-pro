#include "005d9498_005d9ff4a.h"



undefined4 * fn_005d9bb0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = &PTR_FUN_0084cefc;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  iVar3 = 8;
  puVar1[0x2d] = puVar2;
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0);
  iVar3 = puVar1[0x2d];
  puVar1[0x2e] = iVar3 + 0x20;
  puVar1[0x2f] = iVar3 + 0x80;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  puVar1[0x36] = 0;
  return puVar1;
}



void fn_005d9b08(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  fn_002c4304();
  uVar2 = 0;
  do {
    uVar1 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4) >> 2;
    if (uVar1 <= uVar2) {
      fn_002ff628(9,&DAT_008c7656,&DAT_008c7656,uVar2,uVar1);
    }
    if (*(int *)(*(int *)(param_1 + 0xb4) + uVar2 * 4) != 0) {
      uVar1 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4) >> 2;
      if (uVar1 <= uVar2) {
        fn_002ff628(9,&DAT_008c7656,&DAT_008c7656,uVar2,uVar1);
      }
      (**(code **)(**(int **)(*(int *)(param_1 + 0xb4) + uVar2 * 4) + 0x14))();
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 8);
  return;
}



void fn_005d9ae4(int param_1,int param_2)

{
  fn_00689824(param_1,param_2 == 0);
  *(int *)(param_1 + 0xd8) = param_2;
  return;
}



void fn_005d9540(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if ((uint)(*(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4) >> 2) <= uVar2) {
      fn_002ff628(9,&DAT_008c7656,&DAT_008c7656,uVar2);
    }
    if (*(int *)(*(int *)(param_1 + 0xb4) + uVar2 * 4) != 0) {
      if ((uint)(*(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4) >> 2) <= uVar2) {
        fn_002ff628(9,&DAT_008c7656,&DAT_008c7656,uVar2);
      }
      (**(code **)(**(int **)(*(int *)(param_1 + 0xb4) + uVar2 * 4) + 0x18))();
      if ((uint)(*(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4) >> 2) <= uVar2) {
        fn_002ff628(9,&DAT_008c7656,&DAT_008c7656,uVar2);
      }
      piVar1 = *(int **)(*(int *)(param_1 + 0xb4) + uVar2 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      if ((uint)(*(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4) >> 2) <= uVar2) {
        fn_002ff628(9,&DAT_008c7656,&DAT_008c7656,uVar2);
      }
      *(undefined4 *)(*(int *)(param_1 + 0xb4) + uVar2 * 4) = 0;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 8);
  fn_002c4100(param_1);
  return;
}



undefined4 * fn_005d9498(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  *param_1 = &DAT_0084cee8;
  fn_005d9220(param_1);
  uVar2 = param_1[2];
  param_1[2] = 0;
  uVar4 = param_1[3];
  param_1[3] = 0;
  iVar3 = param_1[4];
  param_1[4] = 0;
  uVar1 = uVar2;
  if (uVar4 < uVar2) {
    do {
      uVar1 = uVar1 + 4;
    } while (uVar1 != uVar4);
  }
  fn_001008c4(uVar2,(int)(iVar3 - uVar2) >> 2,0);
  uVar2 = param_1[2];
  uVar1 = uVar2;
  if ((uint)param_1[3] < uVar2) {
    do {
      uVar1 = uVar1 + 4;
    } while (uVar1 != param_1[3]);
  }
  fn_001008c4(uVar2,(int)(param_1[4] - uVar2) >> 2,0);
  return param_1;
}


