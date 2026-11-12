#include "003e0d24_003e1714ab.h"



/* WARNING: Removing unreachable block (ram,0x003e1248) */
/* WARNING: Removing unreachable block (ram,0x003e12c0) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffe4 : 0x003e124c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_003e1114(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int local_20;
  
  iVar1 = fn_00145b00(0xb4,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_0039b5d8(iVar1,param_1);
  piVar4 = puVar2 + 0x27;
  *puVar2 = &DAT_00827e28;
  *piVar4 = 0;
  puVar2[0x28] = 0;
  puVar2[0x29] = 0;
  local_20 = 4;
  puVar3 = (undefined4 *)fn_00100fc6(0x80,0);
  *piVar4 = (int)puVar3;
  for (; local_20 != 0; local_20 = local_20 + -1) {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
  }
  puVar2[0x28] = *piVar4 + 0x10;
  puVar2[0x29] = *piVar4 + 0x80;
  puVar2[0x2a] = 0;
  puVar2[0x2b] = 0;
  puVar2[0x2c] = 0;
  local_20 = 4;
  puVar3 = (undefined4 *)fn_00100fc6(0x80,0);
  puVar2[0x2a] = puVar3;
  for (; local_20 != 0; local_20 = local_20 + -1) {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
    }
    puVar3 = puVar3 + 1;
  }
  iVar1 = puVar2[0x2a];
  puVar2[0x2c] = iVar1 + 0x80;
  puVar2[0x2b] = iVar1 + 0x10;
  *puVar2 = &DAT_008323ac;
  return puVar2;
}



undefined4 fn_003e0e84(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_28 [4];
  
  param_1[0x1f] = 4;
  (**(code **)(*param_1 + 0x118))(param_1,DAT_00895710,DAT_00895714,DAT_00895718);
  iVar1 = (**(code **)(*param_1 + 0x120))(param_1);
  if (iVar1 == 0) {
    fn_0022cdb4(param_1,0);
  }
  iVar4 = 0;
  iVar1 = (**(code **)(*param_1 + 0x120))(param_1);
  if (0 < iVar1) {
    do {
      uVar2 = (**(code **)(*param_1 + 0x11c))(param_1,iVar4);
      local_28[iVar4] = uVar2;
      iVar4 = iVar4 + 1;
      iVar1 = (**(code **)(*param_1 + 0x120))(param_1);
    } while (iVar4 < iVar1);
  }
  uVar2 = (**(code **)(*param_1 + 0x120))(param_1);
  uVar2 = fn_00246f54(local_28,uVar2);
  fn_0036e8fc(*(undefined4 *)(param_1[0x1d] + 0x10),uVar2);
  uVar2 = *(undefined4 *)(param_1[0x1d] + 0x10);
  iVar1 = 0;
  do {
    iVar4 = param_1[0x27];
    uVar3 = fn_0036e9e4(uVar2,iVar1,param_1[1],param_1[0x12]);
    *(undefined4 *)(iVar4 + iVar1 * 4) = uVar3;
    iVar5 = param_1[0x2a];
    uVar3 = fn_0036eaa8(uVar2,iVar1,param_1[1],param_1[0x12],param_1[0x1a],param_1[0x1b]);
    iVar4 = iVar1 + 1;
    *(undefined4 *)(iVar5 + iVar1 * 4) = uVar3;
    iVar1 = iVar4;
  } while (iVar4 < 4);
  fn_003e0ff4(param_1);
  return 1;
}



void fn_003e0dc4(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xa8);
  if (*(int **)(param_1 + 0xac) != piVar1) {
    do {
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 0x18))();
        if ((int *)*piVar1 != (int *)0x0) {
          (**(code **)(*(int *)*piVar1 + 4))();
        }
        *piVar1 = 0;
      }
      piVar1 = piVar1 + 1;
    } while (*(int **)(param_1 + 0xac) != piVar1);
  }
  piVar1 = *(int **)(param_1 + 0x9c);
  if (*(int **)(param_1 + 0xa0) != piVar1) {
    do {
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 0x18))();
        if ((int *)*piVar1 != (int *)0x0) {
          (**(code **)(*(int *)*piVar1 + 4))();
        }
        *piVar1 = 0;
      }
      piVar1 = piVar1 + 1;
    } while (*(int **)(param_1 + 0xa0) != piVar1);
  }
  fn_0022ccb4(param_1);
  return;
}


