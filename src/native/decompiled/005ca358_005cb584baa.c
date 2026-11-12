#include "005ca358_005cb584baa.h"



void fn_005cad8c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x9c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005cadbc(iVar1,param_1);
  return;
}



void fn_005cad14(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_0084b2b4;
  if ((int *)param_1[0x2b] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2b] + 4))();
  }
  fn_003bc2c8(param_1);
  fn_002feef8();
  return;
}


