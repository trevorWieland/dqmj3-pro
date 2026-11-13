#include "00300420_00300950b.h"



void fn_00300950(int param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xb8))(piVar1,param_2);
  }
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xb8))(piVar1,param_2);
  }
  uVar2 = *(uint *)(param_1 + 0xc);
  uVar3 = 0;
  if ((int)(*(int *)(param_1 + 0x10) - uVar2) >> 2 != 0) {
    do {
      piVar1 = *(int **)(uVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        uVar2 = (uint)*(byte *)(piVar1 + 0x16);
      }
      if (piVar1 != (int *)0x0 && uVar2 != 0) {
        (**(code **)(*piVar1 + 0xb8))(piVar1,param_2);
      }
      uVar2 = *(uint *)(param_1 + 0xc);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)((int)(*(int *)(param_1 + 0x10) - uVar2) >> 2));
  }
  piVar1 = (int *)fn_006f7508(DAT_008977e0);
  (**(code **)(*piVar1 + 0x40))(piVar1,param_2);
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar3 = 0;
  if ((int)(*(int *)(param_1 + 0x1c) - uVar2) >> 2 != 0) {
    do {
      piVar1 = *(int **)(uVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        uVar2 = (uint)*(byte *)(piVar1 + 0x16);
      }
      if (piVar1 != (int *)0x0 && uVar2 != 0) {
        (**(code **)(*piVar1 + 0xb8))(piVar1,param_2);
      }
      uVar2 = *(uint *)(param_1 + 0x18);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)((int)(*(int *)(param_1 + 0x1c) - uVar2) >> 2));
  }
  uVar2 = *(uint *)(param_1 + 0x24);
  uVar3 = 0;
  if ((int)(*(int *)(param_1 + 0x28) - uVar2) >> 2 != 0) {
    do {
      piVar1 = *(int **)(uVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        uVar2 = (uint)*(byte *)(piVar1 + 0x16);
      }
      if (piVar1 != (int *)0x0 && uVar2 != 0) {
        (**(code **)(*piVar1 + 0xb8))(piVar1,param_2);
      }
      uVar2 = *(uint *)(param_1 + 0x24);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)((int)(*(int *)(param_1 + 0x28) - uVar2) >> 2));
  }
  uVar2 = *(uint *)(param_1 + 0x30);
  uVar3 = 0;
  if ((int)(*(int *)(param_1 + 0x34) - uVar2) >> 2 != 0) {
    do {
      piVar1 = *(int **)(uVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        uVar2 = (uint)*(byte *)(piVar1 + 0x16);
      }
      if (piVar1 != (int *)0x0 && uVar2 != 0) {
        (**(code **)(*piVar1 + 0xb8))(piVar1,param_2);
      }
      uVar2 = *(uint *)(param_1 + 0x30);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)((int)(*(int *)(param_1 + 0x34) - uVar2) >> 2));
  }
  uVar2 = *(uint *)(param_1 + 0x3c);
  uVar3 = 0;
  if ((int)(*(int *)(param_1 + 0x40) - uVar2) >> 2 != 0) {
    do {
      piVar1 = *(int **)(uVar2 + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        uVar2 = (uint)*(byte *)(piVar1 + 0x16);
      }
      if (piVar1 != (int *)0x0 && uVar2 != 0) {
        (**(code **)(*piVar1 + 0xb8))(piVar1,param_2);
      }
      uVar2 = *(uint *)(param_1 + 0x3c);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)((int)(*(int *)(param_1 + 0x40) - uVar2) >> 2));
  }
  return;
}



void fn_00300940(undefined2 param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)*param_2;
  if (puVar1 < (undefined2 *)param_2[1]) {
    *param_2 = puVar1 + 1;
    *puVar1 = param_1;
  }
  return;
}



void fn_00300904(void)

{
  fn_00100654();
  fn_002feca8();
  return;
}



void fn_0030080c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  iVar1 = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) >> 2;
  if (iVar1 < 1) {
    return;
  }
LAB_0030082c:
  uVar3 = *(uint *)(*(int *)(param_1 + 0x4c) + iVar8 * 4);
  if (uVar3 >> 0x18 == 2) {
    iVar7 = *(int *)(param_1 + 0x18);
    uVar5 = 0;
    uVar2 = *(int *)(param_1 + 0x1c) - iVar7 >> 2;
    if (uVar2 != 0) {
      do {
        iVar6 = *(int *)(iVar7 + uVar5 * 4);
        if ((iVar6 != 0) && (*(uint *)(iVar6 + 0x13c) == uVar3)) goto joined_r0x003008e0;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar2);
    }
  }
  else {
    if (uVar3 >> 0x18 != 4) {
      return;
    }
    iVar7 = *(int *)(param_1 + 0xc);
    uVar5 = 0;
    uVar2 = *(int *)(param_1 + 0x10) - iVar7 >> 2;
    if (uVar2 != 0) {
      do {
        iVar6 = *(int *)(iVar7 + uVar5 * 4);
        if ((iVar6 != 0) && (*(uint *)(iVar6 + 0x13c) == uVar3)) goto joined_r0x003008e0;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar2);
    }
  }
  goto LAB_003008f4;
joined_r0x003008e0:
  if (uVar5 != 0xffffffff) {
    piVar4 = *(int **)(iVar7 + uVar5 * 4);
    (**(code **)(*piVar4 + 0x54))(piVar4,0);
  }
LAB_003008f4:
  iVar8 = iVar8 + 1;
  if (iVar1 <= iVar8) {
    return;
  }
  goto LAB_0030082c;
}



int * fn_003007d0(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (*(int *)(iVar1 + -0xc) == -1) {
    if (param_1 != param_2) {
      fn_002ff19c(param_1,0,*(undefined4 *)(*param_1 + -4),iVar1,*(undefined4 *)(iVar1 + -4));
    }
  }
  else {
    fn_002ff0b4();
    fn_002ff1b4(param_1);
    *param_1 = *param_2;
  }
  return param_1;
}


