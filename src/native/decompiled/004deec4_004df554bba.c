#include "004deec4_004df554bba.h"



int fn_004df414(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 local_28 [16];
  undefined1 local_18 [8];
  
  fn_004edc38(*(undefined4 *)(DAT_008bf504 + 0x14),DAT_008bf4d4 + 8);
  iVar1 = fn_004e105c(*(undefined4 *)(DAT_008bf504 + 0x14),param_2,0x5ba,param_2 + 0x5b8,local_18,0
                      );
  if (-1 < iVar1) {
    fn_0014f590(local_28);
    fn_004ed6f4(local_28,local_18[0]);
    fn_004ed810(param_2 + 0x5d8,local_28);
    return 0;
  }
  if (iVar1 != -0x2e9eb7d8) {
    if (iVar1 == -0x275eb798) {
      iVar1 = (**(code **)(**(int **)(DAT_008bf504 + 0x14) + 0x2c))();
      if (iVar1 != 0) {
        return -0x275eb7db;
      }
    }
    else if (iVar1 != -0x2f5eb799) {
      return iVar1;
    }
    iVar1 = -0x2e9eb7d8;
  }
  return iVar1;
}



void fn_004df3fc(undefined4 *param_1)

{
  *param_1 = &DAT_00856428;
  return;
}


