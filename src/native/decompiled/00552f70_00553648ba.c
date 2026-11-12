#include "00552f70_00553648ba.h"



void fn_00553444(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[0x29];
  *param_1 = &DAT_00857d0c;
  if ((puVar1 != (undefined4 *)0x0) && ((*(byte *)(puVar1 + 0x1f) & 1) == 0)) {
    (**(code **)*puVar1)(puVar1);
    fn_0019fb94(puVar1);
    param_1[0x29] = 0;
  }
  fn_00555718(param_1 + 0x2e);
  fn_0054d158(param_1);
  return;
}



void fn_005533d4(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[0x29];
  *param_1 = &DAT_00857d0c;
  if ((puVar1 != (undefined4 *)0x0) && ((*(byte *)(puVar1 + 0x1f) & 1) == 0)) {
    (**(code **)*puVar1)(puVar1);
    fn_0019fb94(puVar1);
    param_1[0x29] = 0;
  }
  fn_00555718(param_1 + 0x2e);
  fn_0054d158(param_1);
  fn_002feef8();
  return;
}


