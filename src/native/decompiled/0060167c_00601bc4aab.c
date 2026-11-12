#include "0060167c_00601bc4aab.h"



undefined4 * fn_00601710(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined2 local_22;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = &DAT_0084ec7c;
  *(undefined1 *)(puVar1 + 2) = 0;
  fn_00301f50(puVar1 + 3,0x104);
  local_28 = 0;
  local_27 = 0;
  local_24 = 0;
  local_26 = 0;
  local_23 = 0;
  local_25 = 0;
  local_22 = 0;
  puVar1[0x44] = 0;
  puVar1[0x45] = 0;
  puVar1[0x46] = 0;
  iVar2 = fn_00100fc6(0x100,0);
  iVar3 = 9;
  puVar1[0x44] = iVar2;
  do {
    if (iVar2 != 0) {
      fn_00166824(iVar2,&local_28);
    }
    iVar3 = iVar3 + -1;
    iVar2 = iVar2 + 8;
  } while (iVar3 != 0);
  iVar2 = puVar1[0x44];
  puVar1[0x45] = iVar2 + 0x48;
  puVar1[0x46] = iVar2 + 0x100;
  puVar1[0x47] = 0;
  puVar1[0x48] = 0;
  puVar1[0x49] = 0;
  return puVar1;
}



void fn_006016dc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  fn_007954e8(param_1 + 0x110);
  *(undefined4 *)(param_1 + 0x11c) = param_3;
  *(undefined4 *)(param_1 + 0x120) = param_4;
  *(undefined4 *)(param_1 + 0x124) = param_5;
  return;
}


