#include "single_00166838_2.h"



void fn_00166838(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (DAT_008bf790 + (param_2 & 0xfffffffe) + (param_2 >> 7) * 2 + 2 < DAT_008bf794) {
    uVar5 = 0;
    puVar1 = DAT_008bf790;
    if (param_2 != 0) {
      do {
        uVar2 = param_2 - uVar5;
        if (0x80 < uVar2) {
          uVar2 = 0x80;
        }
        uVar6 = uVar2 >> 1;
        *DAT_008bf790 = param_3;
        puVar1 = DAT_008bf790 + 2;
        DAT_008bf790[1] = uVar2 * 0x100000 - 0x100000 | param_1 + uVar5 | 0x800f0000;
        if (uVar6 < 0x80000000) {
          if (uVar6 != 0 && -1 < (int)(uVar6 * 2)) {
            puVar3 = DAT_008bf790 + 1;
            iVar4 = (int)(uVar6 * 2) >> 1;
            do {
              puVar3[1] = param_3;
              iVar4 = iVar4 + -1;
              puVar3 = puVar3 + 2;
              *puVar3 = param_3;
            } while (iVar4 != 0);
            puVar1 = puVar1 + uVar6 * 2;
          }
        }
        else {
          do {
            puVar3 = puVar1 + 1;
            *puVar1 = param_3;
            uVar6 = uVar6 - 1;
            puVar1 = puVar1 + 2;
            *puVar3 = param_3;
          } while (uVar6 != 0);
        }
        uVar5 = uVar5 + 0x80;
        DAT_008bf790 = puVar1;
      } while (uVar5 < param_2);
    }
    DAT_008bf790 = puVar1;
  }
  else {
    DAT_008bf790 = DAT_008bf794;
  }
  return;
}


