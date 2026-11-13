#include "0042dbd4_0042e580ba.h"



void fn_0042e3ac(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0042e3dc(iVar1,param_1);
  return;
}



void fn_0042e2e0(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_0083bbd8;
  uVar1 = param_1[0x33];
  uVar2 = uVar1;
  if ((uint)param_1[0x34] < uVar1) {
    do {
      uVar2 = uVar2 + 0x10;
    } while (uVar2 != param_1[0x34]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x35] - uVar1) >> 4,0);
  fn_003966bc(param_1);
  fn_002feef8();
  return;
}


