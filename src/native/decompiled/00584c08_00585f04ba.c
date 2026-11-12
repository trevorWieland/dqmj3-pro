#include "00584c08_00585f04ba.h"



void fn_00585758(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((int *)param_1[0x1b] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1b] + 4))();
    param_1[0x1b] = 0;
  }
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



undefined4 * fn_005856e0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = &DAT_00842fdc;
  puVar1[0x2c] = &DAT_00859120;
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



void fn_00585588(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  fn_0068ab44(param_1,0x100094b,param_3,param_4,param_4);
  if (param_2 == 0) {
    fn_002f64f4(param_1,0xe5,0,0,0);
    return;
  }
  if (param_2 == 1) {
    fn_002f64f4(param_1,0xe6,0,0,1);
    return;
  }
  if (param_2 == 2) {
    *(code **)(param_1 + 0xc4) = fn_0058538c;
    *(undefined4 *)(param_1 + 200) = 0;
    return;
  }
  if (param_2 == 3) {
    *(code **)(param_1 + 0xc4) = fn_00585468;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  return;
}


