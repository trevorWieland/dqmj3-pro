#include "0037c110_0037cbbcbab.h"



void fn_0037cae0(char *param_1,int param_2)

{
  if (*param_1 == '\x06') {
    param_1[0xc] = (char)param_2;
  }
  if (*param_1 == '\x06' && param_2 == 0) {
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
  }
  return;
}



void fn_0037ca98(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0031aa80();
  *puVar1 = &DAT_00829038;
  return;
}


