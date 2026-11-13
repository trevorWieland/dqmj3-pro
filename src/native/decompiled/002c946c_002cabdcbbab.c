#include "002c946c_002cabdcbbab.h"



undefined4 * fn_002caa54(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = &DAT_0081fa68;
  puVar1[0x2c] = &DAT_00859040;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  iVar2 = fn_00145b00(0x28,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_00689b18(puVar1);
    uVar3 = fn_002e3ad8(iVar2,uVar3);
  }
  puVar1[0x35] = uVar3;
  return puVar1;
}


