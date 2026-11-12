#include "0014df84_0014e6b0aba.h"



void fn_0014e3e4(undefined4 param_1)

{
  fn_0015e1b0(&DAT_008ef530,param_1);
  return;
}



int fn_0014e2f4(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5,
                uint param_6,undefined4 param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 local_28 [2];
  
  uVar4 = param_5 - *param_2 & 0xfffffff8;
  if (param_8 == 0) {
    param_5 = 0;
  }
  (*(code *)param_2[1])(param_4,uVar4);
  piVar3 = (int *)(uVar4 - 0x18);
  *piVar3 = param_2[2];
  uVar1 = param_2[3];
  *(int *)(uVar4 - 8) = param_5;
  *(uint *)(uVar4 - 0xc) = uVar4;
  *(uint *)(uVar4 - 0x14) = uVar1;
  *(undefined4 *)(uVar4 - 0x10) = param_3;
  if (param_6 < 0x21) {
    uVar1 = param_6 + 0x20;
  }
  local_28[0] = 0;
  if (0x20 < param_6) {
    if (param_6 + 0xaef62b00 < 0x28) {
      uVar1 = param_6 + 0xaef62b18;
    }
    else {
      uVar1 = param_6 + 0x93725b00;
      if (0x40 < uVar1) {
        uVar1 = 0xffffffff;
      }
    }
  }
  iVar2 = fn_0010fea0(local_28,fn_0012d640,piVar3,piVar3,uVar1,param_7);
  if (-1 < iVar2) {
    *param_1 = local_28[0];
    *(undefined1 *)(param_1 + 1) = 0;
    iVar2 = 0;
    *(undefined1 *)((int)param_1 + 5) = 0;
  }
  return iVar2;
}


