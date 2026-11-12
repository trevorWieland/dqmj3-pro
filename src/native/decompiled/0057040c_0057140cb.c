#include "0057040c_0057140cb.h"



void fn_0057140c(undefined4 *param_1)

{
  *param_1 = &DAT_00840e24;
  if (param_1[0xc] != -1) {
    (**(code **)(*(int *)param_1[10] + 0xc))();
    param_1[0xc] = 0xffffffff;
  }
  fn_002feef8(param_1);
  return;
}



void fn_005713ac(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = &DAT_00840e24;
  param_1[1] = &DAT_008590f0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = param_2;
  param_1[0xb] = param_3;
  param_1[0xc] = 0xffffffff;
  return;
}



void fn_0057137c(int param_1)

{
  if (*(int *)(param_1 + 0x30) == -1) {
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x28) + 0xc))();
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  return;
}



bool fn_0057129c(int param_1)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 8);
  uVar3 = *(uint *)(param_1 + 0xc);
  uVar1 = *(uint *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x10) = iVar4;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x14) = uVar3;
  *(uint *)(param_1 + 0xc) = uVar1;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  if ((iVar4 == *(int *)(param_1 + 0x18)) &&
     (((iVar4 == 0 && (((*(byte *)(param_1 + 0x14) | uVar1) & 1) == 0)) || (uVar3 == uVar1)))) {
    iVar4 = *(int *)(param_1 + 0x24) + 1;
  }
  else {
    iVar4 = 0;
  }
  *(int *)(param_1 + 0x24) = iVar4;
  if ((*(int *)(param_1 + 8) != 0) ||
     ((*(uint *)(param_1 + 0xc) & 1) != 0 && *(uint *)(param_1 + 0xc) != 0)) {
    pcVar2 = *(code **)(param_1 + 8);
    if ((*(uint *)(param_1 + 0xc) & 1) != 0) {
      pcVar2 = *(code **)(pcVar2 + *(int *)(param_1 + ((int)*(uint *)(param_1 + 0xc) >> 1)));
    }
    (*pcVar2)();
  }
  return *(undefined **)(param_1 + 8) == &DAT_005711c0 && *(int *)(param_1 + 0xc) == 0;
}



void fn_00571268(int param_1)

{
  *(code **)(param_1 + 0x18) = fn_005711c4;
  *(undefined4 *)(param_1 + 0x1c) = 0;
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_005711c4(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    uVar1 = fn_0023e194(*(undefined4 *)(param_1 + 0x28),
                         *(undefined4 *)(*(int *)(param_1 + 0x2c) + 8),0);
    *(undefined4 *)(param_1 + 0x30) = uVar1;
  }
  if (0x77 < *(uint *)(param_1 + 0x24)) {
    if (*(int *)(param_1 + 0x30) != -1) {
      (**(code **)(**(int **)(param_1 + 0x28) + 0xc))();
      *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
    }
    *(undefined **)(param_1 + 0x18) = &DAT_005711c0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}



void fn_00570fc8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  puVar1[0x39] = 0;
  *puVar1 = &DAT_00840bb0;
  *(undefined1 *)(puVar1 + 0x3a) = 0;
  return;
}


