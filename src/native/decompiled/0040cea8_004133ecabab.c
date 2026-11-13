#include "0040cea8_004133ecabab.h"



void fn_0040e938(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)fn_006896fc(param_1,0xd1);
  if (piVar1 == (int *)0x0) {
    return;
  }
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0xc))(piVar1);
  do {
    if (puVar2 == &DAT_00893efc) goto LAB_0040e97c;
    puVar2 = (undefined4 *)*puVar2;
  } while (puVar2 != (undefined4 *)0x0);
  piVar1 = (int *)0x0;
LAB_0040e97c:
  fn_002e6c1c(piVar1);
  return;
}


