#include "004e3754_004e4288bbbb.h"



void fn_004e4288(void)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined1 *)(*(int *)(DAT_008bf504 + 0x18) + 0x10) = 0;
  uVar2 = 0;
  *(undefined1 *)(*(int *)(DAT_008bf504 + 0x18) + 0x11) = 4;
  do {
    uVar1 = fn_006d6690(*(undefined4 *)(DAT_008bf504 + 0x14),0);
    if ((uVar1 & 1 << (uVar2 & 0xff)) == 0) {
      fn_004e4944(*(undefined4 *)(DAT_008bf504 + 0x18),uVar2 + 1 & 0xff);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xc);
  return;
}


