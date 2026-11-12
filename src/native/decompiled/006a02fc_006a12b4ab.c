#include "006a02fc_006a12b4ab.h"



void fn_006a0758(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = 0;
  *(undefined1 *)(param_1 + 400) = *(undefined1 *)(param_1 + 0x129);
  *(undefined4 *)(param_1 + 0x18c) = 0;
  iVar3 = *(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80);
  iVar4 = iVar3 >> 0x1f;
  if (iVar3 / 0xc + iVar4 != iVar4) {
    do {
      uVar2 = uVar1 + 1;
      iVar4 = *(int *)(param_1 + 0x80) + uVar1 * 0xc;
      if (1 < *(int *)(iVar4 + 8)) {
        *(undefined4 *)(iVar4 + 8) = 1;
      }
      uVar1 = uVar2;
    } while (uVar2 < (uint)((*(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80)) / 0xc));
  }
  *(undefined4 *)(param_1 + 0xac) = 0x96;
  fn_0014481c(DAT_008977e8);
  iVar4 = fn_00263814();
  fn_00660790(10,iVar4 + 8,param_1 + 8);
  return;
}



void fn_006a0744(int param_1,int param_2,undefined1 param_3)

{
  *(undefined1 *)(*(int *)(param_1 + 0x80) + param_2 * 0xc + 4) = param_3;
  return;
}


