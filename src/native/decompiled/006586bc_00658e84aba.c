#include "006586bc_00658e84aba.h"



undefined4 fn_00658974(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  fn_00656bb8();
  uVar2 = param_2 + 3U & 0xfffffffc;
  if (uVar2 < 0xa5) {
    fn_00656ca4(&DAT_008eef58);
    return 0;
  }
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = fn_00658b10(param_1,param_3,0,param_1,uVar2,1,param_4);
  }
  fn_00658454(uVar1);
  fn_00656ca4(&DAT_008eef58);
  return uVar1;
}


