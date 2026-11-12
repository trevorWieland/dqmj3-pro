#include "005b3840_005b7a08aa.h"



void fn_005b3840(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xf8) != '\0') {
    uVar1 = fn_003453a8(*(undefined4 *)(*(int *)(param_1 + 0xd0) + 0x3c));
    if (*(uint *)(param_1 + 0xdc) < uVar1) {
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0x100094d;
      uVar2 = fn_0022eefc(0x39e,0);
      fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar2,1,0,1,1,0,0,1);
      fn_00689bd0(param_1,0x48,0);
      return;
    }
    uVar1 = fn_003453a8(*(undefined4 *)(*(int *)(param_1 + 0xd0) + 0x3c));
    iVar3 = *(int *)(*(int *)(param_1 + 0xd0) + 0x3c);
    *(uint *)(param_1 + 0xe4) = uVar1;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(uint *)(param_1 + 0xec) = *(int *)(param_1 + 0xdc) - uVar1;
    *(uint *)(param_1 + 0xe8) = uVar1 / 0x1e;
    if (iVar3 == 0) {
      *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0xd4);
    }
    else {
      *(int *)(param_1 + 0xf0) = iVar3;
    }
    fn_005b39e0(param_1,0,uVar1,uVar1 * -0x77777777);
    *(undefined1 *)(param_1 + 0xfa) = 1;
    fn_00689828(param_1,1);
    fn_00327a7c(*(undefined4 *)(param_1 + 0xd0));
    *(undefined1 *)(param_1 + 0xf8) = 0;
  }
  return;
}


