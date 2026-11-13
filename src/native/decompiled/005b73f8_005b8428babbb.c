#include "005b73f8_005b8428babbb.h"



undefined4 * fn_005b82b0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = &DAT_00848ea0;
  *(undefined1 *)(puVar1 + 2) = 0;
  iVar2 = fn_00145b00(0x38,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_002eb990();
  }
  puVar1[3] = uVar3;
  return puVar1;
}


