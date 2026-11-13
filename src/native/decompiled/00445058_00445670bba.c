#include "00445058_00445670bba.h"



void fn_004455bc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xe1c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_004455f0(iVar1,param_1);
  return;
}



void fn_00445580(int param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 0xe15) = 0;
  fn_00301a9c(param_1 + 8,param_2,0xe08);
  *(undefined1 *)(param_1 + 0xe10) = 0;
  *(undefined1 *)(param_1 + 0xe12) = 0;
  *(undefined1 *)(param_1 + 0xe13) = 1;
  *(undefined1 *)(param_1 + 0xe14) = 1;
  *(undefined4 *)(param_1 + 0xe18) = 0;
  return;
}


