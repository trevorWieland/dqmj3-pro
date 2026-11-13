#include "003036a4_00303cc0bab.h"



int * fn_00303c00(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  *param_1 = &DAT_0085aa84;
  puVar1 = (undefined4 *)fn_00303b90(param_1 + 1);
  piVar2 = puVar1 + -1;
  *piVar2 = (int)&DAT_0085aa84;
  *puVar1 = &DAT_0085aa98;
  fn_00303ba0(*(int *)(*piVar2 + -0xc) + (int)piVar2,param_2);
  return piVar2;
}



void fn_00303ba0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 uStack_14;
  
  *(int *)(param_1 + 0x34) = param_2;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(uint *)(param_1 + 0x10) = (uint)(param_2 == 0);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 4) = 0x1002;
  *(undefined4 *)(param_1 + 8) = 6;
  uStack_14 = param_4;
  fn_00303810(&uStack_14,param_1 + 0x18,0,param_4,param_3);
  piVar2 = (int *)fn_0030488c(&uStack_14,&DAT_008c3d9c,1,0x20,0x1041d1);
  uVar1 = (**(code **)(*piVar2 + 0x1c))(piVar2,0x20);
  fn_00303564(&uStack_14);
  *(undefined1 *)(param_1 + 0x3c) = uVar1;
  return;
}


