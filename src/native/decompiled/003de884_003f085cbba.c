#include "003de884_003f085cbba.h"



void fn_003ee7a4(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  *param_1 = &PTR_FUN_008340f8;
  iVar1 = DAT_00892dfc;
  if (DAT_00892dfc != 0) {
    uVar4 = *(uint *)(DAT_00892dfc + 8);
    *(uint *)(DAT_00892dfc + 8) = 0;
    uVar3 = *(uint *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    iVar5 = *(int *)(iVar1 + 0x10);
    *(undefined4 *)(iVar1 + 0x10) = 0;
    uVar2 = uVar4;
    if (uVar3 <= uVar4) {
      for (; uVar2 != uVar3; uVar2 = uVar2 + 0x34) {
      }
    }
    fn_001008c4(uVar4,(int)(iVar5 - uVar4) / 0x34,0);
    uVar3 = *(uint *)(iVar1 + 8);
    uVar2 = uVar3;
    if (*(uint *)(iVar1 + 0xc) <= uVar3) {
      for (; uVar2 != *(uint *)(iVar1 + 0xc); uVar2 = uVar2 + 0x34) {
      }
    }
    fn_001008c4(uVar3,(int)(*(int *)(iVar1 + 0x10) - uVar3) / 0x34,0);
    fn_002feef8(iVar1);
    DAT_00892dfc = 0;
  }
  if (DAT_00892df8 != 0) {
    fn_0065c6cc();
    fn_002feef8();
    DAT_00892df8 = 0;
  }
  uVar3 = param_1[0x1b];
  uVar2 = uVar3;
  if ((uint)param_1[0x1c] < uVar3) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[0x1c]);
  }
  fn_001008c4(uVar3,(int)(param_1[0x1d] - uVar3) >> 2,0);
  fn_0068ad5c(param_1);
  return;
}


