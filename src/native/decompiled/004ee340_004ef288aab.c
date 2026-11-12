#include "004ee340_004ef288aab.h"



longlong fn_004ee7b0(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    return 0;
  }
  puVar1 = &DAT_008c0630;
  if (param_2 == 1) {
    puVar1 = (undefined4 *)(param_3 + -0x100000);
    if (puVar1 < (undefined4 *)0x3ff00000) {
      if (param_4 != 0) {
        *(undefined1 *)(param_1 + 4) = 1;
        *(int *)(param_1 + 8) = param_3;
        *(int *)(param_1 + 0xc) = param_4;
        return ZEXT48(puVar1) << 0x20;
      }
      if (DAT_008c0630 != 0) {
        puVar1 = (undefined4 *)0x8;
      }
    }
    else if (DAT_008c0630 != 0) {
      puVar1 = (undefined4 *)0x8;
    }
  }
  else if (DAT_008c0630 != 0) {
    puVar1 = (undefined4 *)0x8;
  }
  return CONCAT44(puVar1,0xe0e14826);
}


