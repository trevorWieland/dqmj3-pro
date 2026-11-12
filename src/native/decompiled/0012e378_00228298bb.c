#include "0012e378_00228298bb.h"



void fn_00228298(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint local_28;
  uint local_24;
  int local_20;
  char local_1c [8];
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  (**(code **)(*DAT_00897894 + 0x2c))(DAT_00897894,&local_28,8,0xffff);
  fn_007b8f40(local_28,local_24,&LAB_00600268);
  uVar2 = 0;
  local_1c[0] = '\0';
  if ((int)(local_24 - local_28) >> 2 != 0) {
    do {
      uVar1 = (**(code **)(*DAT_00897894 + 0x38))
                        (DAT_00897894,local_1c,*(undefined4 *)(local_28 + uVar2 * 4));
      if ((uVar1 & (int)local_1c[0]) == 0) {
        if (*(uint *)(local_28 + uVar2 * 4) < param_1) {
          (**(code **)(*DAT_00897894 + 0x34))();
        }
      }
      else {
        (**(code **)(*DAT_00897894 + 0x34))(DAT_00897894,*(undefined4 *)(local_28 + uVar2 * 4));
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)((int)(local_24 - local_28) >> 2));
  }
  DAT_008978a4 = 0;
  uVar2 = local_28;
  if (local_24 < local_28) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != local_24);
  }
  fn_001008c4(local_28,(int)(local_20 - local_28) >> 2,0);
  return;
}


