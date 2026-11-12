#include "005d38c8_005d4530bb.h"



void fn_005d4530(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x38,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005d4560(iVar1,param_1);
  return;
}



undefined4 * fn_005d4484(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = &DAT_0084c860;
  puVar1[0x2c] = &DAT_008591f0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  return puVar1;
}



void fn_005d4368(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  fn_0068ab44(param_1,0x100094b,param_3,param_4,param_4);
  if (param_2 == 0) {
    fn_002f64f4(param_1,0xe0,0,0,0);
    return;
  }
  if (param_2 == 1) {
    *(code **)(param_1 + 0xc4) = fn_005d423c;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  return;
}


