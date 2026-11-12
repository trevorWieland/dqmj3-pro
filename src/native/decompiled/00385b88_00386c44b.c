#include "00385b88_00386c44b.h"



undefined4 fn_00386c44(int *param_1)

{
  param_1[0x1f] = 4;
  (**(code **)(*param_1 + 0x118))(param_1,DAT_00895874,DAT_00895878,DAT_0089587c);
  (**(code **)(*param_1 + 0x11c))(param_1);
  return 1;
}



void fn_00386c40(int param_1)

{
  if (*(int **)(param_1 + 0x94) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x94) + 0x18))();
    if (*(int **)(param_1 + 0x94) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x94) + 4))();
      *(undefined4 *)(param_1 + 0x94) = 0;
    }
  }
  if (*(int *)(param_1 + 0x70) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 100));
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
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



void fn_00386ae0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  *param_1 = &PTR_FUN_00829e90;
  do {
    (**(code **)(**(int **)(param_1[0x27] + iVar4 * 4) + 0x18))();
    piVar1 = *(int **)(param_1[0x27] + iVar4 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(param_1[0x27] + iVar4 * 4) = 0;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  fn_0022ccb4(param_1);
  uVar2 = param_1[0x30];
  uVar3 = uVar2;
  if ((uint)param_1[0x31] < uVar2) {
    do {
      uVar3 = uVar3 + 4;
    } while (uVar3 != param_1[0x31]);
  }
  fn_001008c4(uVar2,(int)(param_1[0x32] - uVar2) >> 2,0);
  uVar2 = param_1[0x2d];
  uVar3 = uVar2;
  if ((uint)param_1[0x2e] <= uVar2) {
    for (; uVar3 != param_1[0x2e]; uVar3 = uVar3 + 4) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[0x2f] - uVar2) >> 2,0);
  uVar2 = param_1[0x2a];
  uVar3 = uVar2;
  if ((uint)param_1[0x2b] <= uVar2) {
    for (; uVar3 != param_1[0x2b]; uVar3 = uVar3 + 4) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[0x2c] - uVar2) >> 2,0);
  uVar2 = param_1[0x27];
  uVar3 = uVar2;
  if ((uint)param_1[0x28] <= uVar2) {
    for (; uVar3 != param_1[0x28]; uVar3 = uVar3 + 4) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[0x29] - uVar2) >> 2,0);
  fn_0039b600(param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x003869f0) */
/* WARNING: Removing unreachable block (ram,0x00386978) */
/* WARNING: Removing unreachable block (ram,0x00386a68) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffc8 : 0x003869f4 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_003868d0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int local_24;
  
  puVar1 = (undefined4 *)fn_0039b5d8();
  *puVar1 = &PTR_FUN_00829e90;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  iVar3 = 4;
  puVar1[0x27] = puVar2;
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0);
  iVar3 = puVar1[0x27];
  puVar1[0x28] = iVar3 + 0x10;
  puVar1[0x29] = iVar3 + 0x80;
  piVar4 = puVar1 + 0x2a;
  *piVar4 = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  local_24 = 4;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  *piVar4 = (int)puVar2;
  for (; local_24 != 0; local_24 = local_24 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  puVar1[0x2b] = *piVar4 + 0x10;
  puVar1[0x2c] = *piVar4 + 0x80;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  local_24 = 4;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  puVar1[0x2d] = puVar2;
  for (; local_24 != 0; local_24 = local_24 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  iVar3 = puVar1[0x2d];
  puVar1[0x2e] = iVar3 + 0x10;
  puVar1[0x2f] = iVar3 + 0x80;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  local_24 = 4;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  puVar1[0x30] = puVar2;
  for (; local_24 != 0; local_24 = local_24 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  iVar3 = puVar1[0x30];
  puVar1[0x32] = iVar3 + 0x80;
  puVar1[0x33] = 0;
  puVar1[0x31] = iVar3 + 0x10;
  puVar1[0x34] = 0;
  return puVar1;
}



void fn_00386884(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = fn_0022cdf0();
  if (iVar1 != 0) {
    fn_0022cf0c(param_1);
    iVar1 = 0;
    do {
      piVar2 = *(int **)(*(int *)(param_1 + 0x9c) + iVar1 * 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x14))();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
  }
  return;
}


