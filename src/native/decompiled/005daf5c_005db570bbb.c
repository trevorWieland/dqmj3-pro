#include "005daf5c_005db570bbb.h"



undefined4 fn_005db570(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(param_1 + 8);
  if (cVar1 == '\0') {
    uVar2 = 4;
  }
  else if ((cVar1 == '\x01') || (cVar1 != '\x02')) {
    uVar2 = 7;
  }
  else {
    uVar2 = 6;
  }
  return uVar2;
}



void fn_005db540(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0039571c();
  puVar1[0x43] = 0;
  *puVar1 = &DAT_0084d218;
  return;
}


