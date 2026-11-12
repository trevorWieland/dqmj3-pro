#include "005db59c_005dbfa4baa.h"



void fn_005db99c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  fn_0068ab44(param_1,0x100094b,param_3,param_4,param_4);
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00897158) goto LAB_005db9fc;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005db9fc:
  puVar1[4] = param_2;
  fn_002f64f4(param_1,0xe7,0,0,param_2);
  return;
}



void fn_005db96c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xe4,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005dba24(iVar1,param_1);
  return;
}


