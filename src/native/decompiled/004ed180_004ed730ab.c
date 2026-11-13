#include "004ed180_004ed730ab.h"



void fn_004ed454(undefined4 *param_1,undefined4 param_2,undefined2 param_3)

{
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 1) = param_3;
  return;
}



undefined4 fn_004ed3f4(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  if (param_2 - 0x100000U < 0x3ff00000) {
    uVar2 = fn_004edb98(param_2);
    *param_1 = uVar2;
    uVar1 = fn_004edb8c(param_2 + 4);
    *(undefined2 *)(param_1 + 1) = uVar1;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xe0e14826;
  }
  return uVar2;
}



undefined4 fn_004ed2e8(void)

{
  return *(undefined4 *)(&DAT_008ed884 + (uint)DAT_008c062d * 4);
}



undefined4 fn_004ed2d0(void)

{
  int iVar1;
  
  iVar1 = fn_004ed304();
  return *(undefined4 *)(&DAT_008ed884 + iVar1 * 4);
}



undefined4 fn_004ed304(undefined4 param_1)

{
  switch(param_1) {
  case 2:
    return 0;
  case 3:
    return 1;
  case 4:
    return 3;
  case 5:
    return 5;
  case 6:
    return 2;
  case 7:
    return 4;
  case 8:
    return 6;
  case 9:
    return 7;
  case 10:
    return 8;
  case 0xb:
    return 9;
  case 0xc:
    return 10;
  case 0xd:
    return 0xb;
  case 0xe:
    return 0xc;
  default:
    return 0xd;
  }
}


