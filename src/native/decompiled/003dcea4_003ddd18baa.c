#include "003dcea4_003ddd18baa.h"



void fn_003dd770(int param_1,int *param_2,int param_3)

{
  if (param_2 != (int *)0x0) {
    param_3 = *param_2;
  }
  if (param_2 != (int *)0x0 && param_3 != 0) {
    *(int **)(param_1 + 0x1c) = param_2;
    *(undefined1 *)(param_1 + 0x20) = 1;
    *(undefined1 *)(param_1 + 0x21) = 1;
  }
  return;
}



void fn_003dd740(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x24,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003dd7a8(iVar1,param_1);
  return;
}


