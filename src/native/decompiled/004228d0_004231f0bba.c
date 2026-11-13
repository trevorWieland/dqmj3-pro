#include "004228d0_004231f0bba.h"



void fn_004230e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 in_lr;
  
  fn_0038ece8();
  if (param_3 == 0) {
    fn_004231f0(*(undefined4 *)(param_1 + 0x34),param_2,0);
    return;
  }
  fn_003d308c(*(undefined4 *)(param_1 + 0x34),param_2,
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x30) + 4) + param_2 * 4),0);
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + param_2 * 4 + 0x14);
  iVar2 = fn_00230a84(0xffffffff,0);
  bVar3 = *(byte *)(*(int *)(iVar1 + 0x18) + 0x44) & 0xfe;
  *(byte *)(*(int *)(iVar1 + 0x18) + 0x44) = iVar2 != 0 | bVar3;
  if (iVar2 != 0) {
    fn_00190d50(*(undefined4 *)(iVar1 + 0x18),iVar2,iVar2,bVar3,unaff_r4,unaff_r5,unaff_r6,in_lr);
  }
  *(undefined1 *)(iVar1 + 0x20) = 0xff;
  return;
}


