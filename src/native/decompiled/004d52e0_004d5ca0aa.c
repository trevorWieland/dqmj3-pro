#include "004d52e0_004d5ca0aa.h"



undefined1 * fn_004d540c(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined2 local_14;
  
  fn_0015f180(&local_18);
  uVar2 = fn_006d09b8(param_1);
  local_18 = fn_006d0c7c();
  local_14 = fn_006d0ce0(uVar2);
  fn_004ed700(param_2 + 4,&local_18);
  uVar2 = fn_006d09d4(param_1);
  *(undefined4 *)(param_2 + 0x14) = uVar2;
  uVar2 = fn_006d09e4(param_1);
  *(undefined4 *)(param_2 + 0x18) = uVar2;
  uVar2 = fn_006d0ae4(param_1);
  *(undefined4 *)(param_2 + 0x1c) = uVar2;
  uVar1 = fn_006d07bc(param_1);
  *(undefined1 *)(param_2 + 0x20) = uVar1;
  uVar1 = fn_006d07d8(param_1);
  *(undefined1 *)(param_2 + 0x21) = uVar1;
  uVar1 = fn_006d099c(param_1);
  *(undefined1 *)(param_2 + 0x22) = uVar1;
  uVar1 = fn_006d07f4(param_1);
  *(undefined1 *)(param_2 + 0x23) = uVar1;
  uVar1 = fn_006d09f4(param_1);
  *(undefined1 *)(param_2 + 0x24) = uVar1;
  uVar1 = fn_006d0c04(param_1);
  *(undefined1 *)(param_2 + 0x25) = uVar1;
  uVar1 = fn_006d0bc8(param_1);
  *(undefined1 *)(param_2 + 0x26) = uVar1;
  return (undefined1 *)&local_18;
}



int fn_004d52f0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_004d43ec(*(undefined4 *)(param_1 + 0x24));
  iVar2 = -0x275eb73f;
  if ((((iVar1 < 0) || (iVar1 = fn_004d43a4(*(undefined4 *)(param_1 + 0x24),param_2), iVar1 < 0))
      || (iVar2 = fn_004cae9c(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x24)),
         iVar2 < 0)) ||
     (((iVar2 = fn_004cae9c(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x24)),
       iVar2 < 0 || (iVar2 = fn_004caeb4(*(undefined4 *)(param_1 + 0x28)), iVar2 < 0)) ||
      (iVar2 = fn_004caeb4(*(undefined4 *)(param_1 + 0x2c)), iVar2 < 0)))) {
    return iVar2;
  }
  *(undefined1 *)(param_1 + 0x31) = 1;
  return 0;
}



undefined1 fn_004d52e0(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x20) + 0x10);
  }
  return uVar1;
}


