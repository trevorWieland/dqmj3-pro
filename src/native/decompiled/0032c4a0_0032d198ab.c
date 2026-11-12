#include "0032c4a0_0032d198ab.h"



undefined4 fn_0032c9e8(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  param_1[0x16] = (int)param_2;
  iVar1 = fn_0068cafc(DAT_008977e8);
  iVar2 = *(int *)(iVar1 + 0x284);
  iVar4 = 0;
  param_1[0x12] = iVar2;
  param_1[0xf] = 0;
  param_1[0x10] = iVar2;
  param_1[0x11] = 0;
  fn_00260538(param_1,param_1[0x16]);
  (**(code **)(*param_1 + 0x24))(param_1,param_2 + 8);
  iVar2 = (**(code **)(*param_2 + 0x98))(param_2);
  iVar3 = param_1[4];
  if (iVar2 == 0) {
    fn_00260640(param_1,0xa043);
  }
  else {
    fn_00260640(param_1,0xa033);
  }
  iVar1 = *(int *)(iVar1 + 0x274);
  fn_00260288(param_1);
  param_1[0x21] = iVar4;
  param_1[0x22] = iVar1;
  param_1[0x23] = iVar3;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x1e] = 0;
  fn_0026009c(param_1,param_2,1);
  return 1;
}



void fn_0032c950(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_0068cafc(DAT_008977e8);
  iVar1 = (**(code **)(*(int *)param_1[0x16] + 0x98))();
  if (iVar1 == 0) {
    uVar2 = 0xa044;
  }
  else {
    uVar2 = 0xa034;
  }
  (**(code **)(*param_1 + 0x44))(param_1,uVar2,1);
  fn_0014481c(DAT_008977e8);
  iVar1 = fn_00263814();
  fn_00660790(0xf,iVar1 + 8,param_1 + 2);
  return;
}


