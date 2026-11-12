#include "00445058_00445670abbbb.h"



undefined4 * fn_00445318(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = &DAT_0083e5b8;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined2 *)((int)puVar1 + 10) = 0;
  fn_00301f50(puVar1 + 3,0x12);
  *(undefined2 *)((int)puVar1 + 0x1e) = 0;
  fn_00301f50(puVar1 + 8,0x12);
  *(undefined2 *)((int)puVar1 + 0x32) = 0;
  fn_00301f50(puVar1 + 0xd,0x12);
  *(undefined2 *)((int)puVar1 + 0x46) = 0;
  puVar1[0x12] = 0x5a;
  return puVar1;
}


