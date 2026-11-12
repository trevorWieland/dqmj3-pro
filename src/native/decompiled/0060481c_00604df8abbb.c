#include "0060481c_00604df8abbb.h"



undefined4 * fn_00604a74(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005b30fc();
  *puVar1 = &DAT_0084f390;
  *(undefined1 *)(puVar1 + 9) = 0;
  *(undefined1 *)((int)puVar1 + 0x25) = 0;
  puVar1[10] = 0;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  fn_00301f50(puVar1 + 0xc,0xf0);
  return puVar1;
}


