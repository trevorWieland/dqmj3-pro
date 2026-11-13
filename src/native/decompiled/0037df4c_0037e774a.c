#include "0037df4c_0037e774a.h"



void fn_0037e218(int param_1)

{
  int *piVar1;
  int iVar2;
  
  fn_0069e748();
  iVar2 = 0;
  do {
    piVar1 = *(int **)(*(int *)(param_1 + 0x40) + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))();
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return;
}



void fn_0037e1e0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + iVar1 * 4) + 0x38))();
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return;
}



void fn_0037e108(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = 0;
  uVar6 = *(undefined4 *)(*(int *)(param_1 + 8) + 0xac);
  do {
    uVar1 = fn_00172c98(uVar6,(&DAT_00893654)[iVar5]);
    iVar2 = fn_00145b00(0x30,&DAT_00812c8c);
    piVar4 = (int *)0x0;
    if (iVar2 != 0) {
      iVar3 = 0;
      if (iVar5 == 0) {
        iVar3 = param_1 + 0x1c;
      }
      else if (iVar5 == 1) {
        iVar3 = param_1 + 0x28;
      }
      else if (iVar5 == 2) {
        iVar3 = param_1 + 0x34;
      }
      piVar4 = (int *)fn_003064c8(iVar2,*(undefined4 *)(param_1 + 4),uVar1,1,
                                   *(undefined4 *)(param_1 + 0x10),iVar3,
                                   (int)*(char *)(param_1 + 0x14),0,0,0);
    }
    (**(code **)(*piVar4 + 0x10))(piVar4);
    *(int **)(*(int *)(param_1 + 0x40) + iVar5 * 4) = piVar4;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 3);
  return;
}



void fn_0037e08c(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_00829220;
  uVar1 = param_1[7];
  uVar2 = uVar1;
  if ((uint)param_1[8] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[8]);
  }
  fn_001008c4(uVar1,(int)(param_1[9] - uVar1) >> 2,0);
  fn_002e4458(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_0037dfd4(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined1 in_stack_0000000c;
  undefined1 in_stack_00000010;
  
  puVar1 = (undefined4 *)fn_002e4414();
  piVar4 = puVar1 + 7;
  *puVar1 = &DAT_00829220;
  *piVar4 = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  iVar3 = 3;
  *piVar4 = (int)puVar2;
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0);
  puVar1[8] = *piVar4 + 0xc;
  puVar1[9] = *piVar4 + 0x80;
  *(undefined1 *)(puVar1 + 10) = in_stack_0000000c;
  *(undefined1 *)((int)puVar1 + 0x29) = in_stack_00000010;
  puVar1[0xb] = 0x1f;
  puVar1[0xc] = 0xffffffff;
  return puVar1;
}



int fn_0037df88(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    piVar1 = *(int **)(*(int *)(param_1 + 0x1c) + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2 * 4) = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return param_1;
}



void fn_0037df4c(int param_1)

{
  int *piVar1;
  int iVar2;
  
  fn_0069e748();
  iVar2 = 0;
  do {
    piVar1 = *(int **)(*(int *)(param_1 + 0x1c) + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))();
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return;
}


