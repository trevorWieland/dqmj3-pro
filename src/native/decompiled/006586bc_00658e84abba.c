#include "006586bc_00658e84abba.h"



undefined4 fn_00658a04(int param_1,undefined4 param_2,int *param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  fn_00656bb8();
  if ((param_3 != (int *)0x0) ||
     (param_3 = (int *)fn_006f5418(DAT_008c06d0), param_3 != (int *)0x0)) {
    if (param_1 == 0) {
      param_1 = (**(code **)(*param_3 + 0x3c))(param_3,4);
    }
    uVar3 = param_1 + 3U & 0xfffffffc;
    if ((0xa4 < uVar3) &&
       (iVar1 = (**(code **)(*param_3 + 0x18))(param_3,uVar3,param_4 << 2), iVar1 != 0)) {
      iVar2 = iVar1;
      if ((param_4 == 1) || (iVar2 = (uVar3 - 0x94) + iVar1, iVar2 != 0)) {
        uVar4 = fn_00658b10(iVar2,param_2,param_3,iVar1,uVar3,param_4,param_5);
      }
      else {
        uVar4 = 0;
      }
      fn_00658454(uVar4);
      fn_00656ca4(&DAT_008eef58);
      return uVar4;
    }
  }
  fn_00656ca4(&DAT_008eef58);
  return 0;
}


