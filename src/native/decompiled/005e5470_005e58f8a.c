#include "005e5470_005e58f8a.h"



void fn_005e5770(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1,0x78,4);
  local_28 = 400;
  local_24 = 0xf0;
  local_20 = 0x8058;
  local_1e = 0x88f0;
  local_18 = 0x30000;
  local_1c = 0x20000;
  local_28 = fn_006ec050(param_2);
  local_24 = fn_006ec05c(param_2);
  local_1c = fn_006ec044(param_2);
  local_20 = fn_006ec020(param_2);
  local_18 = 0;
  local_1e = 0;
  if (iVar1 != 0) {
    fn_005e6e34(iVar1,&local_28,param_2);
  }
  return;
}



void fn_005e5734(int param_1,undefined1 param_2)

{
  *(undefined1 *)
   (*(int *)(param_1 + 8) +
   (uint)*(ushort *)(param_1 + 4) * 0x278 + **(int **)(param_1 + 0x4c) + 0x168) = param_2;
  return;
}



void fn_005e5470(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 uVar4;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  if ((*(int *)(param_1 + 0x44) == 0) || (iVar2 = fn_006ebd98(), iVar2 == 0)) {
    return;
  }
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x44) + 4);
  iVar3 = fn_006eb80c(iVar2);
  if (iVar3 != 0) {
    fn_006eb65c(&local_40,iVar2);
    *(undefined4 *)(param_1 + 0xc) = local_40;
    *(undefined4 *)(param_1 + 0x10) = uStack_3c;
    *(undefined4 *)(param_1 + 0x14) = uStack_38;
    *(undefined4 *)(param_1 + 0x18) = uStack_34;
    *(undefined4 *)(param_1 + 0x1c) = uStack_30;
    *(undefined4 *)(param_1 + 0x20) = uStack_2c;
    *(undefined4 *)(param_1 + 0x24) = uStack_28;
    *(undefined4 *)(param_1 + 0x28) = uStack_24;
    *(undefined4 *)(param_1 + 0x2c) = uStack_20;
    in_s1 = uStack_3c;
    in_s2 = uStack_38;
  }
  iVar3 = fn_006eb9b4(iVar2);
  if (iVar3 != 0) {
    fn_006eb6a0(&local_40,iVar2);
    *(undefined4 *)
     (**(int **)(param_1 + 0x4c) + (uint)*(ushort *)(param_1 + 4) * 0x278 +
      *(int *)(param_1 + 8) * 0x10 + 0x1b4) = local_40;
    **(byte **)(param_1 + 0x50) = **(byte **)(param_1 + 0x50) | 1;
  }
  iVar3 = fn_006eb9cc(iVar2);
  if (iVar3 != 0) {
    fn_006eb730(&local_40,iVar2);
    *(undefined4 *)
     (**(int **)(param_1 + 0x4c) + (uint)*(ushort *)(param_1 + 4) * 0x278 +
      *(int *)(param_1 + 8) * 0x10 + 0x1b8) = local_40;
    **(byte **)(param_1 + 0x50) = **(byte **)(param_1 + 0x50) | 1;
  }
  iVar3 = fn_006eba14(iVar2);
  if (iVar3 != 0) {
    fn_006eb85c(&local_40,iVar2);
    *(undefined4 *)
     (**(int **)(param_1 + 0x4c) + (uint)*(ushort *)(param_1 + 4) * 0x278 +
      *(int *)(param_1 + 8) * 0x10 + 0x1bc) = local_40;
    **(byte **)(param_1 + 0x50) = **(byte **)(param_1 + 0x50) | 1;
  }
  iVar3 = fn_006eba2c(iVar2);
  if (iVar3 != 0) {
    fn_006eb8ec(&local_40,iVar2);
    *(undefined4 *)
     (**(int **)(param_1 + 0x4c) + (uint)*(ushort *)(param_1 + 4) * 0x278 +
      *(int *)(param_1 + 8) * 0x10 + 0x1c0) = local_40;
    **(byte **)(param_1 + 0x50) = **(byte **)(param_1 + 0x50) | 1;
  }
  iVar3 = fn_006eb7f4(iVar2);
  if (iVar3 != 0) {
    fn_006eb628(iVar2);
    *(undefined4 *)(param_1 + 0x30) = uVar4;
    *(undefined4 *)(param_1 + 0x34) = in_s1;
    *(undefined4 *)(param_1 + 0x38) = in_s2;
  }
  iVar3 = fn_006eba44(iVar2);
  if (iVar3 != 0) {
    fn_006eb97c(iVar2);
  }
  iVar3 = fn_006eb9fc(iVar2);
  if (iVar3 != 0) {
    fn_006eb824(iVar2);
  }
  fn_005e5394(param_1);
  iVar3 = fn_006eb9e4(iVar2);
  if (iVar3 != 0) {
    uVar1 = fn_006eb7c0(iVar2);
    *(undefined1 *)
     (*(int *)(param_1 + 8) +
     (uint)*(ushort *)(param_1 + 4) * 0x278 + **(int **)(param_1 + 0x4c) + 0x168) = uVar1;
  }
  fn_005e6d00(*(undefined4 *)(param_1 + 0x44));
  return;
}


