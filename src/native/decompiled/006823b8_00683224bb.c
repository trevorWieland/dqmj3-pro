#include "006823b8_00683224bb.h"



void fn_00683224(void)

{
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_00682d14(void)

{
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_00682cc4(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = fn_00683194();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  *(undefined1 *)(iVar2 + 0x14) = 1;
  return;
}



int fn_00683194(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float in_s0;
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  iVar6 = *(int *)(DAT_008977e0 + 0xa8);
  iVar1 = fn_006c3a84(*(undefined4 *)(iVar1 + 0x30));
  iVar2 = fn_006f7a0c(DAT_008977e0);
  (**(code **)(**(int **)(*(int *)(iVar2 + 0x30) + 0x24) + 0x24))();
  if ((in_s0 < DAT_008912a4) || (DAT_008912a4 + DAT_008912a8 < in_s0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  iVar3 = *(int *)(DAT_008977e0 + 0x1c);
  iVar4 = *(int *)(iVar3 + 0x20) - *(int *)(iVar3 + 0x1c);
  uVar7 = 0;
  iVar5 = iVar4 >> 0x1f;
  if (iVar4 / 0xc + iVar5 != iVar5) {
    do {
      iVar5 = fn_00154ac8(*(undefined4 *)(*(int *)(iVar3 + 0x1c) + uVar7 * 0xc + 4));
      if (iVar5 != 0) {
        iVar5 = *(int *)(*(int *)(iVar3 + 0x1c) + uVar7 * 0xc + 8);
        if (iVar5 != 0) {
          return iVar5;
        }
        break;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)((*(int *)(iVar3 + 0x20) - *(int *)(iVar3 + 0x1c)) / 0xc));
  }
  return *(int *)(*(int *)(iVar3 + 4) + iVar6 * 0x74 + iVar1 * 8 + iVar2 * 4 + 0x5c);
}


