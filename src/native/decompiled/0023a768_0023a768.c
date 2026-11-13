#include "0023a768_0023a768.h"



undefined4 * fn_0023a768(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 2;
  *param_1 = &PTR_FUN_0081d144;
  do {
    iVar1 = (int)(param_1[iVar2 * 3 + 2] - param_1[iVar2 * 3 + 1]) / 0x50;
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      fn_0023a264(param_1[iVar2 * 3 + 1] + iVar1 * 0x50);
    }
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  fn_00100414(param_1 + 1,fn_0078b8ac,0xc,3);
  return param_1;
}


