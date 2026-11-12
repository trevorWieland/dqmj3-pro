#include "005912c0_00591f78ba.h"



void fn_00591da0(int *param_1)

{
  int iVar1;
  
  iVar1 = fn_006ba220();
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00591dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x110))(param_1);
  return;
}



void fn_00591d70(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xb4,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00591e08(iVar1,param_1);
  return;
}



void fn_00591d3c(undefined4 param_1)

{
  fn_002c3d68();
  fn_006899f4(param_1,0xd7,0);
  fn_00689d04(param_1,0);
  return;
}


