#include "0051c380_0051cd8cbb.h"



undefined1 * fn_0051cd8c(void)

{
  int *piVar1;
  
  if (DAT_008bf4c8 == '\0') {
    return &DAT_e0a1482b;
  }
  if (DAT_008bf4c9 == '\0') {
    return &DAT_e0a14827;
  }
  piVar1 = (int *)fn_004ed2d0(4);
  (**(code **)(*piVar1 + 0x14))();
  fn_004ed21c();
  DAT_008bf4c9 = 0;
  return (undefined1 *)0x0;
}



undefined4 * fn_0051cd24(undefined4 *param_1)

{
  *param_1 = &DAT_008572f8;
  if ((int *)param_1[0xd] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xd] + 4))();
  }
  if ((int *)param_1[9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[9] + 4))();
  }
  param_1[1] = &DAT_00856c94;
  return param_1;
}



void fn_0051cc14(int param_1)

{
  if (*(int *)(param_1 + 0x24) - 0x100000U < 0x3ff00000) {
    fn_00517c94();
  }
  if (*(int **)(param_1 + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x30) + 4))();
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 4))();
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



undefined4 fn_0051cbd0(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (param_2 - 0x100000U < 0x3ff00000) {
    fn_0051c9dc(param_1,1,param_2,0xfd,param_3,1);
    return 1;
  }
  return 0;
}


