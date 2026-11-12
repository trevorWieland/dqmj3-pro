#include "00435fa0_00437134ab.h"



void fn_00436594(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x668,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00436798(iVar1,param_1);
  return;
}



int fn_00436554(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = fn_00101a1c(param_1 + 2,&LAB_004358b4,0xc,100);
  *(undefined4 *)(iVar1 + 0x4b0) = 0;
  *(undefined4 *)(iVar1 + 0x4b4) = 0;
  *(undefined4 *)(iVar1 + 0x4b8) = 0;
  *(undefined4 *)(iVar1 + 0x4bc) = 0;
  *(undefined4 *)(iVar1 + 0x4c0) = 0;
  return iVar1 + -8;
}


