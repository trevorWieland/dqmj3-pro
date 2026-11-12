#include "002d399c_002d4054ab.h"



void fn_002d3f28(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001f7350();
  puVar1[0xb] = 0;
  *puVar1 = &DAT_00820118;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  return;
}



void fn_002d3f1c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}


