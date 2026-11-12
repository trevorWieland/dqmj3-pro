#include "0058add0_0058b570bbbb.h"



undefined4 * fn_0058b570(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0039571c();
  *puVar1 = &DAT_00843cb4;
  *(undefined1 *)(puVar1 + 0x239) = 0;
  *(undefined1 *)((int)puVar1 + 0x8e5) = 0;
  puVar1[0x23a] = 0;
  puVar1[0x23b] = 0;
  fn_00301f50(puVar1 + 0x23c,0x80);
  fn_00301f50(puVar1 + 0x25c,0x80);
  return puVar1;
}


