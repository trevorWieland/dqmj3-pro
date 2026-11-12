#include "0056a220_0056a784aa.h"



void fn_0056a4d8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x14,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0056a508(iVar1,param_1);
  return;
}



void fn_0056a4bc(int param_1)

{
  fn_003b9cc0();
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



void fn_0056a3e4(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_00840508;
  uVar1 = param_1[0x26];
  uVar2 = uVar1;
  if ((uint)param_1[0x27] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x27]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x28] - uVar1) >> 2,0);
  uVar1 = param_1[0x22];
  uVar2 = uVar1;
  if ((uint)param_1[0x23] <= uVar1) {
    for (; uVar2 != param_1[0x23]; uVar2 = uVar2 + 4) {
    }
  }
  fn_001008c4(uVar1,(int)(param_1[0x24] - uVar1) >> 2,0);
  if ((int *)param_1[0x1f] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1f] + 4))();
  }
  if ((int *)param_1[0x1e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1e] + 4))();
  }
  if ((int *)param_1[0x1d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1d] + 4))();
  }
  fn_0068ad5c(param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0056a29c) */
/* WARNING: Removing unreachable block (ram,0x0056a31c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffe4 : 0x0056a2a4 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_0056a220(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int local_20;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &PTR_FUN_00840508;
  uVar5 = *(undefined4 *)(param_2 + 8);
  puVar1[0x1a] = 0xffffffff;
  puVar1[0x19] = uVar5;
  puVar1[0x1b] = 0xffffffff;
  puVar1[0x1c] = 0xffffffff;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  local_20 = 0xc;
  puVar6 = (undefined4 *)0x0;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  puVar1[0x22] = puVar2;
  for (; local_20 != 0; local_20 = local_20 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  iVar3 = puVar1[0x22];
  puVar1[0x23] = iVar3 + 0x30;
  puVar1[0x24] = iVar3 + 0x80;
  puVar1[0x25] = 0;
  piVar7 = puVar1 + 0x26;
  *piVar7 = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  local_20 = 0xc;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  *piVar7 = (int)puVar2;
  for (; local_20 != 0; local_20 = local_20 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  puVar1[0x28] = *piVar7 + 0x80;
  puVar1[0x27] = *piVar7 + 0x30;
  puVar1[0x29] = 0;
  puVar2 = (undefined4 *)fn_001f74ec(puVar1,0xa6);
  if (puVar2 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar4 == &DAT_00890abc) {
        puVar6 = puVar2;
        break;
      }
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar1[0x2a] = puVar6;
  return puVar1;
}


