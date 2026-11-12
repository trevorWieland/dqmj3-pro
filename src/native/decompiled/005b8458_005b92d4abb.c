#include "005b8458_005b92d4abb.h"



undefined4 fn_005b8958(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar2 = *(undefined4 *)(iVar1 + 8);
  iVar1 = fn_001481c8(uVar2,L"rom:/data/Layout/common/status_common_m.arc",&DAT_005b89d0,1,1);
  param_1[0x19] = iVar1;
  iVar1 = fn_001480d0(uVar2,iVar1,(char *)&DAT_005b89dc,&DAT_005b89d8,0,1,0);
  param_1[0x1a] = iVar1;
  fn_005b8a20(param_1);
  return 1;
}



void fn_005b8904(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar2 = *(undefined4 *)(iVar1 + 8);
  if (param_1[0x1a] != -1) {
    fn_0016a43c(uVar2);
    param_1[0x1a] = -1;
  }
  if (param_1[0x19] != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(uVar2);
  }
  return;
}


