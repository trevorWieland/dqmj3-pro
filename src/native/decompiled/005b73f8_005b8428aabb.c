#include "005b73f8_005b8428aabb.h"



void fn_005b7f84(int *param_1)

{
  int iVar1;
  undefined1 auStack_18 [16];
  
  (**(code **)(*param_1 + 0x28))(param_1,auStack_18,param_1 + 0x16,param_1 + 0x19,param_1[6],0x1e);
  (**(code **)(*(int *)param_1[5] + 0x10))((int *)param_1[5],auStack_18);
  iVar1 = param_1[6];
  param_1[6] = iVar1 + 1U;
  if (0x1e < iVar1 + 1U) {
    param_1[3] = 5;
    param_1[6] = 0;
  }
  return;
}



undefined4 * fn_005b7480(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0039571c();
  puVar1[3] = 0;
  *puVar1 = &DAT_00848a2c;
  *(undefined1 *)(puVar1 + 0x41) = 0;
  fn_00301f50(puVar1 + 4,0xf0);
  return puVar1;
}


