#include "00584c08_00585f04bbb.h"



void fn_00585f04(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xb0,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005871e0(iVar1,param_1);
  return;
}



undefined4 fn_00585e84(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_001481c8(*(undefined4 *)(param_1 + 0x7c),L"rom:/data/Layout/common/back_ground_u.arc",
                       &DAT_00585ee4,1,1);
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  uVar1 = fn_001480d0(*(undefined4 *)(param_1 + 0x7c),uVar1,(char *)&DAT_00585ef0,&DAT_00585eec,1,1
                       ,0);
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  return 1;
}


