#include "005c21b0_005c438cabb.h"



void fn_005c31f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = fn_002f6784();
  if (iVar1 == 0) {
    return;
  }
  fn_002c3d68(param_1);
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  if (puVar3 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar2 == &DAT_008971bc) goto LAB_005c3248;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_005c3248:
  puVar3[3] = 0;
  fn_003ca138(param_1);
  fn_002f8170();
  return;
}



void fn_005c3180(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x104) == 0) {
    puVar2 = (undefined4 *)fn_002f7e70();
    fn_002f6c88(param_1,*puVar2,0,1);
    return;
  }
  iVar1 = fn_002f7248(param_1);
  if (iVar1 != 0) {
    fn_002f6e1c(param_1);
    *(undefined **)(param_1 + 0xf8) = &DAT_005c317c;
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  return;
}


