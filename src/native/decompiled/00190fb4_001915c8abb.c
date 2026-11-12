#include "00190fb4_001915c8abb.h"



int fn_00191270(int param_1,int param_2)

{
  return *(int *)(*(int *)(param_1 + 0x148) + 0x18) + param_2 * 0x40 + 0x10;
}



int fn_00191238(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_1 + 0x148);
  uVar1 = fn_002febd8(param_2);
  iVar2 = fn_00190fe0(iVar2 + 0x74,param_2,uVar1);
  if (iVar2 == 0xffff) {
    iVar2 = -1;
  }
  return iVar2;
}


