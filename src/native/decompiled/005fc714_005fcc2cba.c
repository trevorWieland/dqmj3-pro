#include "005fc714_005fcc2cba.h"



void fn_005fc994(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xb08,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005fc9c8(iVar1,param_1);
  return;
}



void fn_005fc980(int param_1,int param_2)

{
  *(char *)(param_1 + 0xb01) = (char)param_2;
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0xb03) = 0;
  }
  return;
}


