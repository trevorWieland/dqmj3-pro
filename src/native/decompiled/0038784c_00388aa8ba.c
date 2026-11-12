#include "0038784c_00388aa8ba.h"



void fn_00388998(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x18c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00388a80(iVar1,param_1);
  return;
}



void fn_00388954(void)

{
  DAT_008bf670 = 0;
  DAT_008bf674 = 0;
  return;
}



undefined4 fn_00388868(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_003888f0), iVar1 != 0)) {
    DAT_008bf670 = 0;
  }
  else {
    DAT_008bf670 = param_1 + 4;
  }
  if ((param_3 - 4 & 7) != 0) {
    DAT_008bf670 = 0;
  }
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_008bf674 = 0;
  }
  else {
    DAT_008bf674 = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4),8,0);
  }
  return 1;
}


