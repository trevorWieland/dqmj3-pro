#include "0061138c_006122ecbbb.h"



void fn_006122ec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    fn_001088e0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
    iVar1 = fn_00154a6c();
    if (iVar1 != 0) {
      fn_00159f34(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
      uVar2 = fn_0010887c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                           *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc),
                           *(undefined4 *)(param_1 + 0xc));
      *(undefined4 *)(param_1 + 0x10) = uVar2;
      *(undefined1 *)(param_1 + 0x18) = 2;
    }
  }
  return;
}



void fn_0061226c(undefined4 *param_1)

{
  *param_1 = &DAT_007cbe80;
  if (param_1[7] != -1) {
    fn_00159f34(param_1[1]);
  }
  fn_001218d4(DAT_00897800,DAT_0089878c);
  fn_0061564c(param_1);
  fn_002feef8();
  return;
}


