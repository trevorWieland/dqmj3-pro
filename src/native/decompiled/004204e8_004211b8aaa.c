#include "004204e8_004211b8aaa.h"



void fn_00420734(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xec,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_004208a8(iVar1,param_1);
  return;
}



undefined4 * fn_004204e8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  *param_1 = 0;
  piVar3 = param_1 + 0x16ce9;
  *piVar3 = 0;
  fn_0013af88(param_1);
  iVar1 = fn_00145b00(0x18,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_00268794();
  }
  iVar1 = *piVar3;
  if (iVar1 != iVar2) {
    if (iVar1 != 0) {
      fn_0012f748(iVar1);
      fn_002feef8();
    }
    *piVar3 = iVar2;
  }
  return param_1;
}


