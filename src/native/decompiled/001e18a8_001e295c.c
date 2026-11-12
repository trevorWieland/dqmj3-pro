#include "001e18a8_001e295c.h"



void fn_001e295c(int param_1,undefined4 param_2,float *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float in_s0;
  float fVar3;
  float fVar4;
  
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  *(float *)(param_1 + 0x1b8) = *param_3 * in_s0;
  *(float *)(param_1 + 0x1bc) = fVar3 * in_s0;
  *(float *)(param_1 + 0x1c0) = fVar4 * in_s0;
  *(undefined4 *)(param_1 + 0x1c4) = param_2;
  *(undefined1 *)(param_1 + 0x1c8) = 0;
  *(undefined1 *)(param_1 + 0x1d0) = 1;
  fn_0023f3dc(*(undefined4 *)(param_1 + 400));
  *(undefined1 *)(*(int *)(param_1 + 400) + 0x3d) = 1;
  uVar1 = fn_006f7a48(DAT_008977e0);
  fn_00128744(uVar1,0xffffffff);
  *(undefined4 *)(param_1 + 0x1cc) = 0x3f6b851f;
  uVar1 = fn_00171634();
  uVar2 = fn_0017fde4(*(undefined4 *)(param_1 + 0xe4));
  uVar1 = fn_00179bfc(*(undefined4 *)(DAT_008977e0 + 0x2c),0x7546,uVar2,1,uVar1);
  *(undefined4 *)(param_1 + 0x394) = uVar1;
  fn_001e2904(param_1,uVar1,0xffffffff);
  fn_001ea890(param_1,8);
  return;
}



void fn_001e18a8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = fn_00171634();
  uVar4 = *(undefined4 *)(DAT_008977e0 + 0x2c);
  uVar2 = fn_0017fde4(*(undefined4 *)(param_1 + 0xe4));
  iVar3 = fn_006b4cbc(uVar4,*(undefined4 *)(param_1 + 0x1e8));
  if ((iVar3 == param_2) || (fn_00259728(param_1 + 0x1e8,0), *(int *)(param_1 + 0x1e8) != -1)) {
    return;
  }
  uVar2 = fn_00179bfc(uVar4,param_2,uVar2,param_3);
  *(undefined4 *)(param_1 + 0x1e8) = uVar2;
  fn_001e2904(param_1,uVar2,param_4,uVar1);
  return;
}


