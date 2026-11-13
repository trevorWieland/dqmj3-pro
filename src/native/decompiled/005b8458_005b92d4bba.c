#include "005b8458_005b92d4bba.h"



void fn_005b909c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x108,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005b92d4(iVar1,param_1);
  return;
}



void fn_005b8ff4(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x104) == 0) {
    fn_00689818(param_1,0xf0,0);
    return;
  }
  iVar1 = fn_006896fc(param_1,0xf0);
  if (iVar1 == 0) {
    fn_00689824(param_1,1);
    fn_006899f4(param_1,0xdd,1);
    fn_00689930(param_1,0,0);
    fn_002f8444();
    *(undefined **)(param_1 + 0xf8) = &DAT_005b8f08;
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  return;
}


