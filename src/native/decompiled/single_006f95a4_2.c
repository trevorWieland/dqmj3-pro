#include "single_006f95a4_2.h"



void fn_006f95a4(int param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if (DAT_008bf790 + (param_2 & 0xfffffffe) + (param_2 >> 7) * 2 + 2 < DAT_008bf794) {
    uVar3 = 0;
    puVar1 = DAT_008bf790;
    if (param_2 != 0) {
      do {
        puVar7 = (undefined4 *)(param_3 + uVar3 * 4);
        uVar4 = param_2 - uVar3;
        puVar5 = puVar7 + 1;
        if (0x80 < uVar4) {
          uVar4 = 0x80;
        }
        *DAT_008bf790 = *puVar7;
        uVar2 = uVar4 >> 1;
        puVar1 = DAT_008bf790 + 2;
        DAT_008bf790[1] = uVar4 * 0x100000 - 0x100000 | param_1 + uVar3 | 0x800f0000;
        if (uVar2 < 0x80000000) {
          if (uVar2 != 0 && -1 < (int)(uVar2 * 2)) {
            puVar5 = DAT_008bf790 + 1;
            iVar6 = (int)(uVar2 * 2) >> 1;
            do {
              iVar6 = iVar6 + -1;
              puVar5[1] = puVar7[1];
              puVar7 = puVar7 + 2;
              puVar5 = puVar5 + 2;
              *puVar5 = *puVar7;
            } while (iVar6 != 0);
            puVar1 = puVar1 + uVar2 * 2;
          }
        }
        else {
          do {
            puVar8 = puVar5 + 1;
            uVar2 = uVar2 - 1;
            puVar7 = puVar1 + 1;
            *puVar1 = *puVar5;
            puVar5 = puVar5 + 2;
            puVar1 = puVar1 + 2;
            *puVar7 = *puVar8;
          } while (uVar2 != 0);
        }
        uVar3 = uVar3 + 0x80;
        DAT_008bf790 = puVar1;
      } while (uVar3 < param_2);
    }
    DAT_008bf790 = puVar1;
  }
  else {
    DAT_008bf790 = DAT_008bf794;
  }
  return;
}


