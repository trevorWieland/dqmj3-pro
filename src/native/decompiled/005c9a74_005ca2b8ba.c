#include "005c9a74_005ca2b8ba.h"



void fn_005ca198(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005ab93c();
  puVar1[0x41] = 0;
  *puVar1 = &DAT_0084b130;
  return;
}



void fn_005ca158(int param_1)

{
  char cVar1;
  
  fn_005ab938();
  cVar1 = *(char *)(param_1 + 0x100);
  if ((cVar1 == '\r' || cVar1 == '\x0e') || (cVar1 != '\x0f')) {
    return;
  }
  fn_006899f4(param_1,0xdc,0);
  return;
}


