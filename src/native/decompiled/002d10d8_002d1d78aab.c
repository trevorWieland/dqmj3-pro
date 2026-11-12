#include "002d10d8_002d1d78aab.h"



undefined4 * fn_002d157c(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00145b00(0x30,&DAT_00812c8c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0xffffffff;
    *puVar1 = 0;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = &DAT_00859420;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
  }
  *param_1 = puVar1;
  return param_1;
}


