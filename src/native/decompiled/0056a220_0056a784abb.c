#include "0056a220_0056a784abb.h"



void fn_0056a5b0(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_00840630;
  uVar1 = param_1[7];
  uVar2 = uVar1;
  if ((uint)param_1[8] < uVar1) {
    do {
      uVar2 = uVar2 + 2;
    } while (uVar2 != param_1[8]);
  }
  fn_001008c4(uVar1,(int)(param_1[9] - uVar1) >> 1,0);
  fn_002feef8(param_1);
  return;
}



void fn_0056a56c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  puVar1[2] = 0;
  *puVar1 = &DAT_00840630;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined1 *)(puVar1 + 10) = 1;
  return;
}


