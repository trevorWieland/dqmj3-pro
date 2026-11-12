#include "001c9278_001c9d80aaa.h"



undefined4 fn_001c9278(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_3 == -1) {
    return 0xffffffff;
  }
  iVar1 = fn_00183970(param_1,*(undefined4 *)(param_1 + 0x38),param_1 + 0x38,param_3);
  uVar4 = *(undefined4 *)(iVar1 + 0x10);
  uVar2 = fn_001774dc(param_1,param_1 + 0x40,0);
  uVar3 = fn_00551b70(uVar4,param_2,1);
  iVar1 = fn_00145b00(0x20,&DAT_00812c8c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_0016a2c0(iVar1,uVar2,0,0,0,uVar3,uVar4);
  }
  fn_0017d948(param_1 + 0x40,param_1 + 0x44,iVar1 + 0x18);
  return uVar2;
}


