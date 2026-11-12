#include "single_0020bb58_r.h"


extern undefined4 DataAbort;

void fn_0020bb58(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  undefined2 uVar1;
  uint uVar2;
  undefined1 uStack00000000;
  uint local_10;
  
  uVar2 = 0;
  local_10 = 0;
  do {
    if ((int)*(short *)(*(int *)(param_1 + 4) + uVar2 * 2 + 0x44) - 0x46U < 5) {
      if (&param_5 != &DataAbort) {
        local_10 = uVar2;
      }
      break;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 9);
  uVar1 = fn_00660a50(param_2);
  *(undefined2 *)(*(int *)(param_1 + 4) + local_10 * 2 + 0x44) = uVar1;
  fn_0020b59c(param_1);
  return;
}


