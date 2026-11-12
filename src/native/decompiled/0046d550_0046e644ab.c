#include "0046d550_0046e644ab.h"



void fn_0046d70c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  uint local_18;
  undefined1 auStack_14 [12];
  
  iVar2 = *(int *)(param_1 + 8);
  if ((uint)(*(int *)(iVar2 + 0x10) - *(int *)(param_1 + 0xc)) < 4) {
    *(undefined1 *)(param_1 + 4) = 1;
    local_18 = 0;
  }
  else {
    puVar3 = (uint *)(*(int *)(iVar2 + 0x18) + *(int *)(iVar2 + 0xc) + *(int *)(param_1 + 0xc));
    local_18 = *puVar3 & 0xffffff | (uint)*(byte *)((int)puVar3 + 3) << 0x18;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
  }
  uVar1 = fn_004b8d4c(auStack_14,&local_18);
  fn_004b8d90(param_2,uVar1);
  return;
}



undefined4 fn_0046d648(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar5 = *(int *)(param_1 + 0xc);
  uVar3 = 0;
  if ((uint)(*(int *)(iVar1 + 0x10) - iVar5) < 2) {
    *(undefined1 *)(param_1 + 4) = 1;
  }
  else {
    puVar4 = (ushort *)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 0x18) + iVar5);
    iVar5 = iVar5 + 2;
    uVar3 = (uint)*puVar4;
    *(int *)(param_1 + 0xc) = iVar5;
  }
  if ((uint)(*(int *)(iVar1 + 0x10) - iVar5) < uVar3) {
    uVar2 = 0;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  else {
    fn_004b8974(param_2);
    if (uVar3 != 0) {
      iVar1 = fn_004b72d8(param_1);
      fn_004b8a68(param_2,*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0xc) + *(int *)(param_1 + 0xc),
                   uVar3);
      uVar3 = *(int *)(param_1 + 0xc) + uVar3;
      if (uVar3 <= *(uint *)(*(int *)(param_1 + 8) + 0x10)) {
        *(uint *)(param_1 + 0xc) = uVar3;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}


