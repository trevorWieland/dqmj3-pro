#include "005acd7c_005adb8cbb.h"



void fn_005adb8c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0057a7f0();
  puVar1[0x47] = 0;
  *puVar1 = &DAT_0084775c;
  puVar1[0x39] = &DAT_008478a8;
  return;
}



void fn_005adb4c(int param_1)

{
  fn_0057a7ec();
  if ((*(byte *)(param_1 + 0x10c) < 2) || (*(byte *)(param_1 + 0x10c) != 2)) {
    return;
  }
  fn_006899f4(param_1,0xdc,0);
  return;
}


