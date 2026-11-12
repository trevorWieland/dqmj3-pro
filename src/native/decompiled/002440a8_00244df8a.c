#include "002440a8_00244df8a.h"



void fn_00244834(void)

{
                    /* WARNING: Subroutine does not return */
  fn_002c3de4();
}



undefined4 fn_00244188(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  iVar1 = fn_001f6864(*(undefined4 *)(*(int *)(param_1 + 4) + 0x74));
  if ((iVar1 == 0) || (iVar1 = fn_00154ae0(DAT_008977e4), *(char *)(iVar1 + 0x23f0) == '\0')) {
    return 7;
  }
  piVar6 = (int *)(*(int *)(param_1 + 4) + 0x4c);
  iVar1 = fn_00145b00(0x28,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar1 != 0) {
    uVar2 = (**(code **)(**(int **)(param_1 + 4) + 8))();
    piVar3 = (int *)fn_002d517c(iVar1,uVar2);
  }
  piVar5 = (int *)*piVar6;
  if (piVar5 != piVar3) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    *piVar6 = (int)piVar3;
  }
  fn_003138f0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x74),0);
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x4c);
  if (iVar1 != 0) {
    fn_002d4de0(iVar1,*(undefined4 *)(*(int *)(param_1 + 4) + 0x14));
  }
  piVar3 = (int *)(*(int *)(param_1 + 4) + 0x50);
  iVar4 = fn_00145b00(0x14,&DAT_00812c8c);
  iVar1 = 0;
  if (iVar4 != 0) {
    iVar1 = fn_00405874(iVar4,*(undefined4 *)(*(int *)(param_1 + 4) + 0x74));
  }
  iVar4 = *piVar3;
  if (iVar4 != iVar1) {
    if (iVar4 != 0) {
      fn_00405898(iVar4);
      fn_002feef8();
    }
    *piVar3 = iVar1;
  }
  return 1;
}



undefined4 * fn_002440dc(undefined4 *param_1)

{
  *param_1 = &DAT_0081d3f8;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)((int)param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 3) = 0xff;
  fn_00301a9c((int)param_1 + 0xe,&DAT_007c68d8,0x1e);
  param_1[0x28] = 0;
  *(undefined2 *)(param_1 + 0x29) = 0;
  *(undefined2 *)((int)param_1 + 0xa6) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0xff;
  fn_00301a9c((int)param_1 + 0xaa,&DAT_007c68d8,0x1e);
  param_1[0x4f] = 0xffffffff;
  param_1[0x50] = 0;
  param_1[0x51] = 0xffffffff;
  param_1[0x52] = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  return param_1;
}



void fn_002440a8(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x148);
  if (*(int *)(param_1 + 0x140) == 0) {
    if (iVar1 == 0) {
      return;
    }
  }
  else if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x140);
  }
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  *(undefined4 *)(iVar1 + 0x28) = *param_2;
  *(undefined4 *)(iVar1 + 0x2c) = uVar2;
  *(undefined4 *)(iVar1 + 0x30) = uVar3;
  return;
}


