#include "004228d0_004231f0ba.h"



void fn_00422fec(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (3 < param_2) {
    return;
  }
  if ((param_3 == 0) ||
     ((uint)((*(int *)(*(int *)(param_1 + 0x30) + 0x14) - *(int *)(*(int *)(param_1 + 0x30) + 0x10))
            / 0x104) <= param_2)) {
    fn_0038ee34(param_1,param_2);
    fn_004231f0(*(undefined4 *)(param_1 + 0x38),param_2,0);
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0x10) + param_2 * 0x104 + 0x10;
  if (param_2 == 0) {
    fn_0038ee98(param_1,0,iVar1,0);
    fn_004231f0(*(undefined4 *)(param_1 + 0x38),0,0);
  }
  else {
    fn_0038ee98(param_1,param_2,iVar1,1);
    fn_003d2fa4(*(undefined4 *)(param_1 + 0x38),param_2,iVar1,param_2 - 1);
  }
  fn_002cbcb8(*(undefined4 *)(param_1 + 0x1c),param_2,0);
  return;
}



void fn_00422f60(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar1 = fn_006b5db4(*(undefined4 *)(param_1 + 0x30),0);
  uVar2 = fn_006b5db4(*(undefined4 *)(param_1 + 0x30),1);
  if ((uVar1 & uVar2) == 0) {
    if (uVar2 == 0 && uVar1 == 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = 2;
    }
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xe4) = uVar3;
  }
  else {
    *(int *)(*(int *)(param_1 + 0xc) + 0xe4) =
         (*(int *)(*(int *)(param_1 + 0x30) + 0x14) - *(int *)(*(int *)(param_1 + 0x30) + 0x10)) /
         0x104 + 2;
  }
  fn_002cb154(param_1);
  return;
}



void fn_00422ed4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  fn_003d31b0(param_1[0xd],param_5,&DAT_00890c60,2);
  fn_003d31b0(param_1[0xe],param_5,&PTR_s_color_box_child_00_00890c70,4);
  fn_0038eae8(param_1,param_2,param_3,param_4,param_6,param_7,param_8);
                    /* WARNING: Could not recover jumptable at 0x00422f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}


