#include "single_00735114_1.h"



void fn_00735114(void)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = DAT_008bf790;
  uVar2 = (int)DAT_008bf790 - *(int *)(DAT_008e3104 + 4);
  *(uint *)(DAT_008e3104 + 0xc) = uVar2;
  if (((uVar2 & 8) != 0) && (puVar1 < DAT_008bf794)) {
    DAT_008bf790 = puVar1 + 2;
    puVar1[1] = 0x8025e;
    *puVar1 = 0;
  }
  DAT_008e307b = 1;
  DAT_008e31d0 = (int)DAT_008bf790 - *(int *)(DAT_008e3104 + 4);
  DAT_008e31d4 = *(undefined4 *)(DAT_008e3104 + 0x20);
  return;
}


