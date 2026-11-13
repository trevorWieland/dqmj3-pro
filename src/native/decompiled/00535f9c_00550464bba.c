#include "00535f9c_00550464bba.h"



void fn_0054f158(int param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined1 *)(param_1 + 0x30);
  puVar2 = (undefined4 *)fn_00560a5c();
  if (*(byte *)(param_1 + 0x32) < *(byte *)(param_1 + 0x31)) {
    puVar2 = (undefined4 *)fn_00560938(param_1);
  }
  if (*(byte *)(param_1 + 0x34) < *(byte *)(param_1 + 0x33)) {
    puVar2 = (undefined4 *)fn_00560a88(param_1,puVar2,0);
  }
  *puVar2 = *(undefined4 *)(param_1 + 0x618);
  puVar2[1] = 0xf02b1;
  uVar3 = fn_005608dc(param_1,puVar2 + 2,uVar1);
  fn_006e611c(param_1,uVar3);
  return;
}


