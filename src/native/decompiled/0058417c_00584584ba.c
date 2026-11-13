#include "0058417c_00584584ba.h"



void fn_005844dc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0058450c(iVar1,param_1);
  return;
}



void fn_0058446c(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_00842f6c;
  uVar1 = param_1[7];
  uVar2 = uVar1;
  if ((uint)param_1[8] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[8]);
  }
  fn_001008c4(uVar1,(int)(param_1[9] - uVar1) >> 2,0);
  fn_003953e8(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_00584434(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003953b0();
  *puVar1 = &DAT_00842f6c;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  return puVar1;
}


