#include "0044a610_0044b18cbaab.h"



undefined4 * fn_0044ab04(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0042f214();
  *puVar1 = &DAT_0083f1cc;
  fn_00301f50(puVar1 + 0x242,400);
  *(undefined1 *)(puVar1 + 0x2a6) = 0;
  puVar1[0x2a7] = 0;
  fn_00301f50(puVar1 + 0x242,400);
  return puVar1;
}


