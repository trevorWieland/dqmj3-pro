#include "00579dec_0057a4f8abb.h"



void fn_0057a0f8(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  fn_003979d0();
  uVar4 = *(uint *)(param_1 + 0x110);
  uVar1 = *(uint *)(param_1 + 0x114);
  if (uVar4 != uVar1) {
    uVar2 = uVar4;
    if (uVar1 <= uVar4) {
      do {
        uVar2 = uVar2 + 0x428;
      } while (uVar2 != uVar1);
    }
    iVar3 = (int)((longlong)(int)(uVar1 - uVar4) * -0x99fc267 + ((ulonglong)(uVar1 - uVar4) << 0x20)
                 >> 0x20);
    *(uint *)(param_1 + 0x114) = uVar1 + ((iVar3 >> 10) - (iVar3 >> 0x1f)) * -0x428;
  }
  return;
}



void fn_0057a0c4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = &DAT_008417e4;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined1 *)((int)puVar1 + 9) = 0;
  return;
}


