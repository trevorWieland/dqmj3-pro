#include "001529b0_001529b0.h"



undefined4
fn_001529b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *local_1c [2];
  
  uVar4 = *(undefined4 *)(param_1 + 4);
  local_1c[0] = &DAT_008f9cf4;
  uVar1 = fn_00156b34(uVar4,local_1c,&DAT_0089a4f4,param_3,param_2);
  iVar2 = fn_00145b00(0x3c,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_00153cc8(iVar2,uVar1,local_1c[0],param_4,param_5);
  }
  fn_001588d4(local_1c);
  fn_00162ad0(uVar4,uVar3);
  return uVar3;
}


