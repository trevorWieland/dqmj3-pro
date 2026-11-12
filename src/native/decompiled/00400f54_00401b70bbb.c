#include "00400f54_00401b70bbb.h"



void fn_00401b70(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  puVar1[0x2c] = 0;
  *puVar1 = &DAT_008374a0;
  puVar1[0x2d] = 0;
  *(undefined1 *)(puVar1 + 0x2e) = 0;
  puVar1[0x2f] = 0;
  return;
}



void fn_0040177c(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006ba220();
  if (iVar1 == 0) {
    iVar1 = fn_006e8230(param_1[0x2c],param_2);
    fn_0015b0dc(iVar1 + 4);
    fn_006cc9c4(param_1,param_2);
    uVar2 = fn_0022f584((char *)&DAT_00401838,0);
    fn_0036c5f4(param_1[0x17],uVar2,1,1,0,1,0,0,1);
    fn_00689bd0(param_1,0x48,0);
    *(undefined1 *)(param_1 + 0x2e) = 2;
    param_1[0x2f] = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004017ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x110))(param_1);
  return;
}


