#include "005de83c_005df130bbbb.h"



void fn_005df130(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = fn_00450018(param_2,0);
  *(int *)(param_1 + 0x8cc) = param_3;
  *(undefined4 *)(param_1 + 0x8c4) = uVar1;
  puVar2 = (undefined4 *)fn_001287d4(param_3 * 0x168 + 8,&DAT_00812c8c);
  uVar1 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0x168;
    puVar2[1] = param_3;
    uVar1 = fn_00101a1c(puVar2 + 2,fn_004539a8,0x168,param_3);
  }
  *(undefined4 *)(param_1 + 0x8c8) = uVar1;
  return;
}


