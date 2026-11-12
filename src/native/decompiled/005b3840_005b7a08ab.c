#include "005b3840_005b7a08ab.h"



void fn_005b3f54(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = fn_0022f584((&DAT_00894198)[param_2],0);
  uVar2 = fn_0022eefc((int)(short)*(undefined4 *)(&DAT_007c6da0 + param_2 * 4),0);
  fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar1,uVar2);
  fn_00689bd0(param_1,0x49,0);
  return;
}



void fn_005b39e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    if (param_3 != 0) {
      fn_0015b0f8(*(undefined4 *)(param_1 + 0xf0));
      fn_0015b0f8(param_3);
    }
  }
  else {
    if (param_3 != 0) {
      fn_0015b0f8();
    }
    if (2 < param_2) {
      iVar1 = *(int *)(param_1 + 0x5c);
      uVar2 = 0x100094d;
      goto LAB_005b3a1c;
    }
  }
  iVar1 = *(int *)(param_1 + 0x5c);
  uVar2 = 0x100094b;
LAB_005b3a1c:
  *(undefined4 *)(iVar1 + 0x38) = uVar2;
  uVar2 = fn_0022eefc((int)(short)*(undefined4 *)(&DAT_007c6dac + param_2 * 4),0);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar2,1,param_2 < 3,1,1,0,0,1);
  fn_00689bd0(param_1,0x48,0);
  return;
}


