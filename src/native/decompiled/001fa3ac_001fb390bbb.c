#include "001fa3ac_001fb390bbb.h"



undefined4 * fn_001fb390(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00145b00(0x10,&DAT_00812c8c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
  }
  *param_1 = puVar1;
  return param_1;
}


