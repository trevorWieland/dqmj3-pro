#include "0060481c_00604df8bb.h"



void fn_00604df8(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar1 * 4) = 0;
    iVar1 = iVar2;
  } while (iVar2 < 0x14);
  return;
}



void fn_00604dc8(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x20) < 0x14) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x20) * 4) = param_2;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  return;
}



void fn_00604d98(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005d2b28();
  puVar1[0x154] = 0;
  *puVar1 = &DAT_0084f3d0;
  return;
}


