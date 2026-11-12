#include "0046d550_0046e644aaa.h"



undefined4 * fn_0046d550(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  *param_1 = &DAT_00852fcc;
  fn_0046d014(param_1);
  uVar2 = param_1[0xc];
  uVar3 = param_1[0xd];
  if (uVar2 < uVar3) {
    uVar5 = (uVar3 - uVar2 & 7) >> 2;
  }
  else {
    uVar5 = 0;
  }
  iVar4 = uVar5 + 1;
  iVar1 = (int)(uVar3 - uVar2) >> 2;
  if (iVar4 < iVar1 + 1) {
    do {
      iVar4 = iVar4 + 2;
    } while (iVar4 < iVar1 + 1);
  }
  if (uVar2 != 0) {
    if (*(code **)(uVar2 - 8) == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (**(code **)(uVar2 - 8))();
    }
  }
  param_1[1] = &PTR_LAB_008533fc;
  param_1[2] = &DAT_0085319c;
  return param_1;
}


