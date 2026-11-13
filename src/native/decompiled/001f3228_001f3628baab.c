#include "001f3228_001f3628baab.h"



void fn_001f34a4(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)fn_006f7508(DAT_008977e0);
  (**(code **)(*piVar1 + 0x5c))();
  iVar2 = fn_006f7508(DAT_008977e0);
  *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) & 0xfffffff7;
  return;
}


