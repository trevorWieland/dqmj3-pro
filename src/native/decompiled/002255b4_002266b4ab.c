#include "002255b4_002266b4ab.h"



void fn_00225ebc(int *param_1)

{
  fn_005ef408(param_1,param_1[0x61],param_1[0x78],param_1[0x79],param_1[0x7a]);
  (**(code **)(*param_1 + 0x44))(param_1,0,0,1);
  fn_00225fd8(param_1,1);
  fn_00259728(param_1 + 0x71,1);
  fn_00226228(param_1);
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  *(undefined1 *)((int)param_1 + 0x20d) = 0;
  *(undefined1 *)((int)param_1 + 0x20e) = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  return;
}



void fn_00225a6c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14 [2];
  
  if (param_2 == 0) {
    return;
  }
  if (*(char *)(DAT_008977e0 + 0x170) != '\x01') {
    local_18 = 0;
    local_14[0] = 0;
    iVar1 = fn_001d9a94(param_1,&local_18,local_14);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
  }
  return;
}


