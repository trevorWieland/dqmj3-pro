#include "001c80ac_001c8a44baba.h"



undefined4 fn_001c87b4(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_4 + 0x10);
  if (param_5 != 0) {
    iVar1 = fn_00172c98();
    iVar1 = *(int *)(iVar1 + 0xac);
  }
  uVar2 = fn_001774dc(param_1,param_1 + 0x40,0);
  uVar3 = (**(code **)(**(int **)(iVar1 + 0x10) + 0x2c))(*(int **)(iVar1 + 0x10),param_3,1);
  uVar3 = fn_005517dc(iVar1,param_2,uVar3,1);
  iVar4 = fn_00145b00(0x20,&DAT_00812c8c);
  if (iVar4 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_0016a2c0(iVar4,uVar2,0,uVar3,0,0,iVar1);
  }
  fn_0017d948(param_1 + 0x40,param_1 + 0x44,iVar1 + 0x18);
  return uVar2;
}


