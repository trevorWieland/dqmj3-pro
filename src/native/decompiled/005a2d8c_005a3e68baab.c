#include "005a2d8c_005a3e68baab.h"



undefined4 * fn_005a2fa4(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_003953b0();
  *puVar1 = &DAT_00846ac0;
  *(undefined1 *)(puVar1 + 5) = 1;
  iVar2 = fn_00145b00(0x14,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_001223a8();
  }
  puVar1[6] = uVar3;
  puVar1[7] = 0;
  *(undefined1 *)(puVar1 + 8) = 0;
  *(undefined1 *)((int)puVar1 + 0x21) = 0;
  puVar1[9] = 0;
  return puVar1;
}


