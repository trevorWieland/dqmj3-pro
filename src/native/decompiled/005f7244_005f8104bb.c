#include "005f7244_005f8104bb.h"



void fn_005f8104(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar2 = fn_0028ec90(*(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x10));
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar3 = fn_0028ec90(*(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x14));
  if ((uVar2 & uVar3) != 0) {
    fn_005ab918(param_1);
    fn_00689824(param_1,0);
    *(undefined1 *)(param_1 + 0x40) = 0xf;
  }
  return;
}



void fn_005f7ffc(void)

{
                    /* WARNING: Subroutine does not return */
  fn_006ba250();
}



void fn_005f7f10(void)

{
                    /* WARNING: Subroutine does not return */
  fn_006ba250();
}


