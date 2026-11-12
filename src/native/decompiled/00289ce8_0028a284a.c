#include "00289ce8_0028a284a.h"



void fn_00289e78(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + 0x7c0;
  *(uint *)(iVar1 + (param_2 >> 5) * 4) =
       *(uint *)(iVar1 + (param_2 >> 5) * 4) | 1 << (param_2 & 0x1f);
  return;
}



undefined4 fn_00289dfc(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = fn_001a46f4(param_2);
  if (iVar1 != 0) {
    uVar2 = fn_00237090(param_2);
    if (uVar2 != param_2) {
      iVar1 = ((int)uVar2 >> 5) * 4 + 0x80;
      *(uint *)(*(int *)(param_1 + 4) + iVar1) =
           *(uint *)(*(int *)(param_1 + 4) + iVar1) | 1 << (uVar2 & 0x1f);
    }
    iVar1 = ((int)param_2 >> 5) * 4 + 0x80;
    uVar3 = 1;
    *(uint *)(*(int *)(param_1 + 4) + iVar1) =
         *(uint *)(*(int *)(param_1 + 4) + iVar1) | 1 << (param_2 & 0x1f);
  }
  return uVar3;
}



undefined4 fn_00289d80(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = fn_001a46f4(param_2);
  if (iVar1 != 0) {
    uVar2 = fn_00237090(param_2);
    if (uVar2 != param_2) {
      iVar1 = ((int)uVar2 >> 5) * 4 + 0x100;
      *(uint *)(*(int *)(param_1 + 4) + iVar1) =
           *(uint *)(*(int *)(param_1 + 4) + iVar1) | 1 << (uVar2 & 0x1f);
    }
    iVar1 = ((int)param_2 >> 5) * 4 + 0x100;
    uVar3 = 1;
    *(uint *)(*(int *)(param_1 + 4) + iVar1) =
         *(uint *)(*(int *)(param_1 + 4) + iVar1) | 1 << (param_2 & 0x1f);
  }
  return uVar3;
}



void fn_00289d5c(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + 0x20c;
  *(uint *)(iVar1 + (param_2 >> 5) * 4) =
       *(uint *)(iVar1 + (param_2 >> 5) * 4) | 1 << (param_2 & 0x1f);
  return;
}



undefined1 * fn_00289ce8(int param_1)

{
  uint uVar1;
  undefined1 auStack_18 [4];
  undefined4 local_14;
  undefined *local_10;
  undefined4 local_c;
  
  fn_0020bbc4(auStack_18);
  uVar1 = fn_006bfda8(&local_14);
  *(uint *)(*(int *)(param_1 + 4) + ((int)uVar1 >> 5) * 4) =
       *(uint *)(*(int *)(param_1 + 4) + ((int)uVar1 >> 5) * 4) | 1 << (uVar1 & 0x1f);
  local_10 = &DAT_0081c498;
  local_c = local_14;
  fn_00289f80(param_1,&local_10,1);
  return auStack_18;
}


