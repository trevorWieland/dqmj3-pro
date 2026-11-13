#include "005b1ec4_005b3260baab.h"



undefined4 * fn_005b3064(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005d29a4();
  *puVar1 = &DAT_00847fc0;
  *(undefined2 *)(puVar1 + 7) = 0;
  *(undefined1 *)((int)puVar1 + 0x1e) = 0;
  *(undefined1 *)((int)puVar1 + 0x1f) = 0;
  fn_005d2950(puVar1);
  return puVar1;
}


