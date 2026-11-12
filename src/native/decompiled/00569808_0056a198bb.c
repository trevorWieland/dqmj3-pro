#include "00569808_0056a198bb.h"



void fn_0056a0f8(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  
  uVar3 = 5;
  uVar1 = fn_006f6a38();
  if ((uVar1 & 0x40000) != 0) {
    fn_0068ab44(param_1,0x100094b);
  }
  if (*(char *)(*(int *)(param_1 + 0xa8) + 0x18) == '\0') {
    fn_003f7e80(*(int *)(param_1 + 0xa8),uVar1);
  }
  else {
    fn_006f6a90(param_1);
    fn_003f7e0c(*(undefined4 *)(param_1 + 0xa8),uVar1);
    uVar3 = 6;
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 0x78) + 100))();
  if (-1 < iVar2) {
    fn_0056a198(param_1);
  }
  iVar2 = *(int *)(param_1 + 0x74);
  *(undefined1 *)(iVar2 + 0x7f) = uVar3;
  fn_0031ef00(iVar2,0,0);
                    /* WARNING: Subroutine does not return */
  fn_0011dda8((int)*(char *)(*(int *)(param_1 + 0xa8) + 0x18));
}



void fn_0056a198(int param_1)

{
  int iVar1;
  float local_18;
  float local_14;
  undefined4 local_10;
  
  iVar1 = fn_001c9db4(*(undefined4 *)(param_1 + 0x78));
  local_10 = *(undefined4 *)(iVar1 + 0x24);
  local_18 = *(float *)(iVar1 + 0x1c);
  local_14 = *(float *)(iVar1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x94);
  *(float *)(iVar1 + 0x1c) = local_18;
  *(float *)(iVar1 + 0x20) = local_14;
  *(undefined4 *)(iVar1 + 0x24) = local_10;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  local_18 = local_18 - *(float *)(param_1 + 0x80) * 0.5;
  local_14 = local_14 + *(float *)(param_1 + 0x84) * 0.5;
  fn_0025e7cc(*(undefined4 *)(param_1 + 0x7c),&local_18);
  return;
}


