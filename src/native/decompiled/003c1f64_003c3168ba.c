#include "003c1f64_003c3168ba.h"



void fn_003c2c88(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x17c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003c310c(iVar1,param_1);
  return;
}



void fn_003c2b78(int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  
  uVar1 = fn_0022f584((char *)&DAT_003c2bd4,0);
  pcVar2 = fn_0030d5a0;
  uVar3 = 0;
  fn_0068974c(param_1,uVar1,1);
  *(undefined4 *)(param_1 + 0x170) = 0xd4;
  *(code **)(param_1 + 0x174) = pcVar2;
  *(undefined4 *)(param_1 + 0x178) = uVar3;
  *(undefined1 *)(param_1 + 0x168) = 3;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  return;
}


