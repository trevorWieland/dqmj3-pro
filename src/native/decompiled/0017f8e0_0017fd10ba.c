#include "0017f8e0_0017fd10ba.h"



void fn_0017fc08(int param_1,int param_2,undefined4 *param_3)

{
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x148) + 4) + param_2 * 0x158 + 0x44) = *param_3;
  return;
}



int fn_0017fbdc(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 & 1) != 0) {
    iVar1 = 0x20;
  }
  if ((param_1 & 2) != 0) {
    iVar1 = iVar1 + 0xc;
  }
  if ((param_1 & 4) != 0) {
    iVar1 = iVar1 + 0xc;
  }
  if ((param_1 & 8) != 0) {
    iVar1 = iVar1 + 0xc;
  }
  return iVar1;
}


