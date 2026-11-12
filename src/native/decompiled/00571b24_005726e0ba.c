#include "00571b24_005726e0ba.h"



void fn_00572250(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x6c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00572280(iVar1,param_1);
  return;
}



void fn_005720a0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar2 = *(undefined4 *)(iVar1 + 8);
  fn_0016a43c(uVar2,param_1[0x1a]);
                    /* WARNING: Subroutine does not return */
  fn_001482f4(uVar2,param_1[0x19]);
}


