#include "single_00106ba0_r.h"


extern undefined4 puRam008e36a4;

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_00106ba0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 unaff_r4;
  undefined4 *puVar3;
  
  fn_0010fb58(&DAT_008e36ac,param_1);
  iVar2 = DAT_008e36b4;
  uVar1 = DAT_008e36b4 - 1U & 0xfffffffc;
  puVar3 = (undefined4 *)(uVar1 + 4);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *(undefined4 *)(uVar1 + 8) = 0;
    *(undefined4 *)(uVar1 + 0xc) = 0;
    *(undefined4 *)(uVar1 + 0x10) = 0;
    *(undefined4 *)(uVar1 + 0x14) = 0;
    *(undefined4 *)(uVar1 + 0x18) = 0;
    *(undefined4 *)(uVar1 + 0x1c) = 0;
    *(undefined4 *)(uVar1 + 0x58) = 0;
    *(undefined4 *)(uVar1 + 0x5c) = 0;
    *(undefined4 *)(uVar1 + 0x60) = 0;
    *(undefined4 *)(uVar1 + 100) = 0xffffffff;
    *puVar3 = &DAT_008526b4;
    fn_00114128(puVar3,uVar1 + 0x68,(iVar2 + param_1) - (uVar1 + 0x68),0,unaff_r4);
    fn_0013c500(uVar1 + 0x5c);
  }
  DAT_0089a684 = puVar3;
  _DAT_008e36a0 = &DAT_0085269c;
  puRam008e36a4 = puVar3;
  uRam008e36a8 = 0;
  uRam008e36a9 = 0;
  uRam008e36aa = 0;
  DAT_0089a688 = &DAT_008e36a0;
  return;
}


