#include "00400f54_00401b70abb.h"



undefined4 fn_00401038(void)

{
  return 0xffffffff;
}



void fn_00401010(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003953b0();
  *puVar1 = &DAT_00837488;
  *(undefined1 *)(puVar1 + 5) = 1;
  *(undefined1 *)((int)puVar1 + 0x15) = 0;
  return;
}


