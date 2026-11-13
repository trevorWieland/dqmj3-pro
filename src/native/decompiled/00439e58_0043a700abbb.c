#include "00439e58_0043a700abbb.h"



undefined4 * fn_0043a128(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_0025c7d0();
  *puVar1 = &DAT_0083c6d8;
  puVar1[0x1b] = &DAT_008590d0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  iVar2 = fn_00145b00(0x28,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_00689b18(puVar1);
    uVar3 = fn_002e3ad8(iVar2,uVar3);
  }
  puVar1[0x26] = uVar3;
  return puVar1;
}


