#include "0036c140_0036c924a.h"



bool fn_0036c584(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x24) + -4);
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x28) + -4);
  }
  return iVar1 != 0;
}



/* WARNING: Removing unreachable block (ram,0x0036c3ac) */
/* WARNING: Removing unreachable block (ram,0x0036c3d8) */

void fn_0036c368(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 local_14 [4];
  
  if (param_3 == 0) {
    fn_007854f8(param_2,param_1 + 0x24);
    iVar1 = param_1 + 0x24;
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x24) + -4);
  }
  else {
    fn_007854f8(param_2,param_1 + 0x28);
    iVar1 = param_1 + 0x28;
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x28) + -4);
  }
  local_14[0] = 0;
  fn_00177c88(iVar1,0,uVar2,local_14,0,0,0);
  return;
}



void fn_0036c354(int param_1)

{
  if (*(int *)(param_1 + 0x58) != 0x7fffffff) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  }
  return;
}



void fn_0036c340(int param_1)

{
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}



int fn_0036c140(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined2 *puVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 *local_34;
  uint local_30 [3];
  
  piVar5 = (int *)(param_1 + 0xc);
  uVar1 = fn_00100b58(param_2);
  if (uVar1 == 0) {
    local_34 = &DAT_008f9cf4;
  }
  else {
    puVar3 = local_30 + 1;
    if (0x20 < uVar1) {
      puVar3 = local_30;
    }
    local_30[0] = uVar1;
    local_30[1] = 0x20;
    uVar8 = *puVar3;
    if (0xfffffff1 < uVar8) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar8,0xfffffff1);
    }
    if (uVar8 < uVar1) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar1,uVar8);
    }
    if (uVar8 == 0) {
      local_34 = &DAT_008f9ce8;
    }
    else {
      local_34 = (undefined4 *)fn_00100fc6((uVar8 + 8) * 2,0);
      if (local_34 != (undefined4 *)0x0) {
        *local_34 = 0;
        local_34[1] = 0;
        local_34[2] = 0;
      }
      local_34[2] = uVar1;
      puVar4 = (undefined2 *)((int)local_34 + uVar1 * 2 + 0xc);
      *local_34 = 0;
      local_34[1] = uVar8;
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = 0;
      }
    }
    local_34 = local_34 + 3;
  }
  fn_00301a9c(local_34,param_2,uVar1 << 1);
  piVar6 = *(int **)(param_1 + 0x10);
  iVar7 = *(int *)(param_1 + 0x1c);
  if (piVar6 == (int *)0x0) {
    piVar6 = *(int **)(param_1 + 0x14);
    if (piVar6 == *(int **)(param_1 + 0x18)) {
      if (*piVar5 == 0) {
        uVar1 = 0x20;
      }
      else {
        uVar8 = *(uint *)(*piVar5 + 4);
        uVar1 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
        if (uVar1 < uVar8 + 0x20) {
          uVar1 = uVar8 + 0x20;
        }
      }
      piVar6 = (int *)fn_00100fc6(0xc,0);
      iVar2 = fn_00100fc6(uVar1 * 0xc,0);
      piVar6[2] = iVar2;
      *piVar6 = *piVar5;
      piVar6[1] = uVar1;
      *piVar5 = (int)piVar6;
      piVar6 = (int *)piVar6[2];
      *(int **)(param_1 + 0x14) = piVar6;
      *(int **)(param_1 + 0x18) = piVar6 + uVar1 * 3;
    }
    *(int **)(param_1 + 0x14) = piVar6 + 3;
  }
  else {
    *(int *)(param_1 + 0x10) = *piVar6;
  }
  if (piVar6 + 2 != (int *)0x0) {
    fn_00785420(piVar6 + 2,&local_34);
  }
  *piVar6 = iVar7;
  piVar6[1] = *(int *)(iVar7 + 4);
  **(undefined4 **)(iVar7 + 4) = piVar6;
  *(int **)(iVar7 + 4) = piVar6;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  fn_001588d4(&local_34);
  iVar2 = fn_0022eb34(param_2);
  iVar2 = iVar2 + 1;
  iVar7 = iVar2;
  if (iVar2 < 3) {
    iVar7 = 3;
  }
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(int *)(param_1 + 0x2c) = iVar7;
  return iVar2;
}


