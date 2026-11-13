#include "004116c4_00411cc4bab.h"



void fn_00411b20(int param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  fn_0036c648(*(undefined4 *)(param_1 + 0x5c),param_4);
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 10) = 1;
  fn_0036c140(*(undefined4 *)(param_1 + 0x5c),param_2);
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 8) = param_3;
  fn_00689bd0(param_1,0x48,0);
  return;
}



void fn_00411ad8(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0xcc) + 0x14))();
  if (*(int **)(param_1 + 0xcc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xcc) + 4))();
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  fn_002c4100(param_1);
  return;
}



void fn_00411a9c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003492e4();
  *puVar1 = &DAT_00838a20;
  *(undefined2 *)(puVar1 + 7) = 0;
  puVar1[8] = 0xbf800000;
  return;
}


