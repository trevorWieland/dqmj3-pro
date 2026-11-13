#include "00289518_00289cc0bb.h"



void fn_00289cc0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + 0x884;
  *(uint *)(iVar1 + (param_2 >> 5) * 4) =
       *(uint *)(iVar1 + (param_2 >> 5) * 4) | 1 << (param_2 & 0x1f);
  return;
}



undefined4 * fn_00289ca8(undefined4 *param_1)

{
  fn_002feef8(*param_1);
  return param_1;
}



undefined4 * fn_00289c84(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_00145b00(0x10,&DAT_00812c8c);
  *param_1 = uVar1;
  return param_1;
}



void fn_00289c54(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = ((undefined4 *)*param_1)[3];
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(iVar1,*(undefined4 *)*param_1);
  }
  return;
}


