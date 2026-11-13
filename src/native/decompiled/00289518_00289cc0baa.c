#include "00289518_00289cc0baa.h"



void fn_00289ac0(undefined4 *param_1)

{
  fn_00289ad0(*param_1);
  return;
}



int fn_00289a44(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar1 = fn_006888c0(*(undefined4 *)(iVar3 + 8),&DAT_008c4ff0);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_00689210(param_2,&DAT_008c4ff0);
    if (iVar2 != 0) {
      fn_00688880();
    }
    iVar2 = fn_006892dc(iVar1);
    fn_00289ad0(iVar3,iVar2,param_3);
    fn_0018a69c(param_2,iVar2);
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
  }
  return iVar2;
}


