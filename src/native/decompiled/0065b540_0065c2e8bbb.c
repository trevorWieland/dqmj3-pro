#include "0065b540_0065c2e8bbb.h"



bool fn_0065c2e8(short *param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_0066173c((int)*param_1);
  iVar2 = fn_0066173c((int)*param_2);
  return iVar1 < iVar2;
}



void fn_0065bf20(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0043f144();
  puVar1[4] = 0xffffffff;
  *puVar1 = &DAT_00850c38;
  return;
}


