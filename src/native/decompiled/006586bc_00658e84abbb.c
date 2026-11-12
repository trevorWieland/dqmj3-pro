#include "006586bc_00658e84abbb.h"



undefined4 * fn_00658b10(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_006571b4();
  *puVar1 = &DAT_00859978;
  *(undefined1 *)(puVar1 + 0x1c) = 0;
  puVar2 = puVar1 + 0x1d;
  puVar1[0x1e] = puVar2;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0xffffffff;
  *puVar2 = puVar2;
  puVar1[0x22] = puVar1 + 0x21;
  puVar1[0x23] = 0;
  puVar1[0x21] = puVar1 + 0x21;
  puVar1[0x24] = 0xffffffff;
  puVar2 = (undefined4 *)0x0;
  if ((puVar1[0x1b] & 1) != 0) {
    fn_00656bb8(puVar1 + 0x14);
    puVar2 = puVar1 + 0x14;
  }
  puVar1[0x20] = 0;
  puVar1[0x24] = 0;
  if (puVar2 != (undefined4 *)0x0) {
    fn_00656ca4(puVar2);
  }
  return puVar1;
}


