#include "0060481c_00604df8aa.h"



void fn_006049dc(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0xd4;
  *(undefined4 *)(param_1 + 0x14) = 0xd4;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x24) = 1;
  return;
}



void fn_00604994(int param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  *(undefined4 *)(param_1 + 0x10) = 0xd4;
  *(undefined4 *)(param_1 + 0x14) = 0xd4;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x25) = param_3;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x2c) = param_5;
  fn_0017821c(param_1 + 0x30,param_4,0xf0);
  return;
}



undefined4 * fn_0060481c(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined4 local_24;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = &DAT_0084f37c;
  *(undefined1 *)(puVar1 + 2) = 0;
  fn_00301f50(puVar1 + 3,0x104);
  local_28 = 0;
  local_27 = 0;
  local_26 = 0;
  local_25 = 0;
  local_24 = 0;
  puVar1[0x44] = 0;
  puVar1[0x45] = 0;
  puVar1[0x46] = 0;
  iVar2 = fn_00100fc6(0x100,0);
  iVar3 = 7;
  puVar1[0x44] = iVar2;
  do {
    if (iVar2 != 0) {
      fn_00166824(iVar2,&local_28);
    }
    iVar3 = iVar3 + -1;
    iVar2 = iVar2 + 8;
  } while (iVar3 != 0);
  iVar2 = puVar1[0x44];
  puVar1[0x45] = iVar2 + 0x38;
  puVar1[0x46] = iVar2 + 0x100;
  puVar1[0x47] = 0;
  puVar1[0x48] = 0;
  puVar1[0x49] = 0;
  puVar1[0x4a] = 0;
  puVar1[0x4b] = 0;
  puVar1[0x4c] = 0;
  puVar1[0x4d] = 0;
  puVar1[0x4e] = 0;
  return puVar1;
}


