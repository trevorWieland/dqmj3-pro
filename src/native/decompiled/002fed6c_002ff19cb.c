#include "002fed6c_002ff19cb.h"



undefined8 fn_002ff19c(undefined4 param_1)

{
  undefined4 in_stack_00000000;
  
  fn_0010217c(param_1);
  return CONCAT44(in_stack_00000000,param_1);
}



void fn_002ff148(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x24) + param_2 * 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xa4))();
    piVar2 = (int *)(*(int *)(param_1 + 0x24) + param_2 * 4);
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *piVar2 = 0;
  }
  return;
}



undefined4 * fn_002ff0c8(undefined4 param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  
  if (0xfffffff1 < param_2) {
    fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,param_2,0xfffffff1);
  }
  if (param_2 < param_3) {
    fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,param_3,param_2);
  }
  if (param_2 == 0) {
    return &DAT_008f9cf8;
  }
  puVar1 = (undefined4 *)fn_00100fc6(param_2 + 0xe,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  puVar1[2] = param_3;
  puVar2 = (undefined1 *)((int)puVar1 + param_3 + 0xc);
  *puVar1 = 0;
  puVar1[1] = param_2;
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 0;
  }
  return puVar1;
}



void fn_002ff0b4(int *param_1)

{
  if (param_1 != &DAT_008f9cf8) {
    *param_1 = *param_1 + 1;
  }
  return;
}



undefined4 fn_002ff0a8(undefined4 param_1)

{
  fn_00301a9c();
  return param_1;
}



void fn_002ff020(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  if (DAT_008c3db4 == 0) {
    uVar1 = fn_002ff600(0x20);
    DAT_008c3dac = fn_002ff688(uVar1,&DAT_002ff0a0,10,2);
    iVar3 = 0;
    for (uVar2 = 0x10; (uVar2 & 0x3ff) != 0; uVar2 = uVar2 << 1) {
      uVar1 = fn_00101a3e(DAT_008c3dac,iVar3);
      fn_001008cc(uVar1,*(undefined4 *)(DAT_008c3dac + 0x18));
      iVar3 = iVar3 + 1;
    }
    uVar1 = fn_002ff600(0x20);
    DAT_008c3db0 = fn_002ff688(uVar1,&DAT_002ff0a4,10,1);
    *(undefined4 *)(DAT_008c3db0 + 0x10) = 0x3f0;
    DAT_008c3db4 = DAT_008c3dac;
  }
  return;
}



void fn_002fef70(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  
  puVar6 = (uint *)(param_1 + 0x30);
  iVar1 = (int)(*(int *)(param_1 + 0x34) - *puVar6) >> 2;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*puVar6 + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xa4))();
      piVar7 = (int *)(*puVar6 + iVar1 * 4);
      piVar2 = (int *)*piVar7;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
      *piVar7 = 0;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x34);
  uVar5 = *puVar6;
  if (uVar5 != uVar4) {
    uVar3 = uVar5;
    if (uVar4 <= uVar5) {
      do {
        uVar3 = uVar3 + 4;
      } while (uVar3 != uVar4);
    }
    *(uint *)(param_1 + 0x34) = uVar4 - (uVar4 - uVar5 & 0xfffffffc);
  }
  return;
}



void fn_002fef4c(undefined4 param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_3 + 0xc) = param_2;
  *(undefined1 **)(param_3 + 0x14) = &LAB_002fef40_1;
  *(undefined1 **)(param_3 + 0x20) = &LAB_00102a50_1;
  *(undefined4 *)(param_3 + 0x10) = 0;
  fn_0010167c(param_1,param_3);
  return;
}



void fn_002feefc(int param_1)

{
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 8) + 0xa4))();
  }
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 8) + 4))();
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


