#include "001534d4_00153bd8ba.h"



int fn_001539a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 * param_3 * 4;
  if (param_1 != 0x8058) {
    iVar1 = param_2 * param_3 * 2;
  }
  return iVar1;
}



void fn_00153970(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 4);
  iVar1 = fn_00145b00(200,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_0016168c();
  }
  *(undefined4 *)(iVar2 + 0xac) = uVar3;
  return;
}


