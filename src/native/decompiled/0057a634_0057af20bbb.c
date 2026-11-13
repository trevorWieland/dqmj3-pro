#include "0057a634_0057af20bbb.h"



void fn_0057af20(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005d19b4();
  *puVar1 = &DAT_0084195c;
  puVar1[0x39] = &DAT_00841abc;
  return;
}



void fn_0057aee0(int param_1)

{
  fn_0057a7ec();
  if ((*(byte *)(param_1 + 0x10c) < 2) || (*(byte *)(param_1 + 0x10c) != 2)) {
    return;
  }
  fn_006899f4(param_1,0xdc,0);
  return;
}


