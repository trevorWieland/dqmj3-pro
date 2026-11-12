#include "single_00146398_2.h"



void fn_00146398(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = DAT_008bfab0;
  *param_1 = 0x1c00;
  *(uint *)(iVar1 + 0x770) = *(uint *)(iVar1 + 0x770) & 0xffffdfff | 0x11000;
  iVar1 = 0;
  do {
    while (iVar1 == 0) {
      if (DAT_008bf790 < DAT_008bf794) {
        *DAT_008bf790 = 0x11000;
        DAT_008bf790[1] = 0xd0080;
        DAT_008bf790 = DAT_008bf790 + 2;
      }
      iVar1 = 1;
    }
    if (iVar1 == 0xc) {
      if (DAT_008bf790 < DAT_008bf794) {
        *DAT_008bf790 = 0xff0000;
        DAT_008bf790[1] = 0xf008c;
        DAT_008bf790 = DAT_008bf790 + 2;
      }
    }
    else if ((iVar1 != 0xf) && (DAT_008bf790 < DAT_008bf794)) {
      *DAT_008bf790 = 0;
      DAT_008bf790[1] = iVar1 + 0x80U | 0xf0000;
      DAT_008bf790 = DAT_008bf790 + 2;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1f);
  return;
}


