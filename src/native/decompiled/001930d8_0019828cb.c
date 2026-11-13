#include "001930d8_0019828cb.h"



void fn_0019828c(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)fn_00197fe0();
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  piVar1[1] = piVar1[1] + 1;
  fn_0019813c(param_1,"the index \'%.50s\' does not exist",piVar1 + 7);
  iVar2 = piVar1[1];
  piVar1[1] = iVar2 + -1;
  if (iVar2 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x001982e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 8))(piVar1);
    return;
  }
  return;
}



void fn_0019813c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  iVar1 = fn_002febd8(param_2);
  uVar2 = fn_001a36d4(*(undefined4 *)(param_1 + 0x8c),iVar1 + 100);
  fn_00102cc8(uVar2,param_2,&uStack_8);
  uVar2 = fn_001a36d4(*(undefined4 *)(param_1 + 0x8c),0xffffffff);
  piVar3 = (int *)fn_0019ba68(*(undefined4 *)(param_1 + 0x8c),uVar2,0xffffffff);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  piVar3[1] = piVar3[1] + 1;
  uVar5 = *(uint *)(param_1 + 0x40);
  *(uint *)(param_1 + 0x40) = 0x8000010;
  piVar4 = *(int **)(param_1 + 0x44);
  *(int **)(param_1 + 0x44) = piVar3;
  piVar3[1] = piVar3[1] + 1;
  if (((uVar5 & 0x8000000) != 0) && (iVar1 = piVar4[1], piVar4[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*piVar4 + 8))();
  }
  iVar1 = piVar3[1];
  piVar3[1] = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  return;
}


