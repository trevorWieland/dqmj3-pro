#include "002e336c_002e3d18aaa.h"



void fn_002e336c(int param_1,undefined4 param_2,undefined1 param_3,int param_4,undefined1 param_5)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x26) == '\0') {
    fn_00121838(DAT_00897800,L"patch:/data/Message/BossGuideMessage.mes",1);
    *(undefined1 *)(param_1 + 0x26) = 1;
  }
  uVar1 = fn_0016ba34(DAT_00897800,L"patch:/data/Message/BossGuideMessage.mes",param_2,0);
  fn_0036c140(*(undefined4 *)(param_1 + 0xc),uVar1);
  *(undefined1 *)(*(int *)(param_1 + 0xc) + 8) = param_3;
  if (param_4 == 0) {
    *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x30) = 0;
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x30) = 1;
  }
  *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x51) = param_5;
  *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x48) = 0;
  fn_001f749c(*(undefined4 *)(param_1 + 0x10),0x48,0);
  return;
}


