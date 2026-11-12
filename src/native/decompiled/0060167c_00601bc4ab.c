#include "0060167c_00601bc4ab.h"



void fn_0060187c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x118,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_006018ac(iVar1,param_1);
  return;
}



void fn_00601854(int param_1,undefined4 param_2,undefined4 param_3)

{
  fn_0017821c(param_1 + 8,param_2,0x104);
  fn_007959b4(param_1 + 0x10c,param_3);
  return;
}



void fn_0060183c(int param_1,undefined4 param_2)

{
  fn_007959b4(param_2,param_1 + 0x10c);
  return;
}



void fn_006017d8(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_0084ec7c;
  uVar1 = param_1[0x44];
  uVar2 = uVar1;
  if ((uint)param_1[0x45] < uVar1) {
    do {
      uVar2 = uVar2 + 8;
    } while (uVar2 != param_1[0x45]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x46] - uVar1) >> 3,0);
  fn_002feef8(param_1);
  return;
}


