#include "005de83c_005df130ab.h"



void fn_005deab4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  puVar1[0x39] = 0;
  *puVar1 = &DAT_0084dad4;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  puVar1[0x3c] = 0;
  return;
}



void fn_005de8a0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  fn_002c3e78();
  uVar3 = 0;
  iVar5 = *(int *)(*(int *)(param_1 + 0xe8) + 0x14);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  if (*(int *)(param_1 + 0xf0) != 0) {
    do {
      iVar1 = fn_006ba274(param_1);
      iVar2 = fn_006ba284(param_1);
      uVar4 = iVar1 * iVar2 + uVar3 + 4;
      if (uVar4 < 0x1f) {
        fn_00101a50(&local_28,10,&LAB_005de95c,uVar4);
        fn_0031b78c(param_1,uVar3,0,&local_28);
        fn_0031b78c(param_1,uVar3,5,iVar5 + uVar4 * 0x20 + -0x1c);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xf0));
  }
  return;
}


