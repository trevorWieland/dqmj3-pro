#include "005d9498_005d9ff4baa.h"



void fn_005d9cf0(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_0084cefc;
  uVar2 = param_1[0x30];
  uVar1 = uVar2;
  if ((uint)param_1[0x31] < uVar2) {
    do {
      uVar1 = uVar1 + 8;
    } while (uVar1 != param_1[0x31]);
  }
  fn_001008c4(uVar2,(int)(param_1[0x32] - uVar2) >> 3,0);
  uVar2 = param_1[0x2d];
  uVar1 = uVar2;
  if ((uint)param_1[0x2e] < uVar2) {
    do {
      uVar1 = uVar1 + 4;
    } while (uVar1 != param_1[0x2e]);
  }
  fn_001008c4(uVar2,(int)(param_1[0x2f] - uVar2) >> 2,0);
  fn_002c471c(param_1);
  return;
}


