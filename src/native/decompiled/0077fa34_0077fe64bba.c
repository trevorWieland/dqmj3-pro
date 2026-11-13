#include "0077fa34_0077fe64bba.h"



int fn_0077fdd8(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_28;
  undefined1 auStack_24 [12];
  
  uVar1 = param_8;
  iVar2 = fn_0077fba0(param_1,&local_28,auStack_24,0,0,param_5);
  if (-1 < iVar2) {
    *param_3 = local_28;
    iVar2 = fn_004544e4(param_3 + 1,&param_6,uVar1);
    if ((-1 < iVar2) && (iVar2 = fn_00780224(param_1,param_2,param_4,param_3), -1 < iVar2)) {
      iVar2 = 0;
    }
  }
  return iVar2;
}


