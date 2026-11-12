#include "single_00729300_2.h"



void fn_00729300(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar2 = DAT_008bfab0;
  bVar1 = false;
  if ((*(uint *)(DAT_008bfab0 + 8) & 0x80) == 0) {
    iVar5 = 0;
    iVar6 = DAT_008bfab0 + 0x58;
    do {
      if ((*(uint *)(param_1 + ((int)(iVar5 + 10U) >> 5) * 4) & 1 << (iVar5 + 10U & 0x1f)) != 0) {
        iVar3 = iVar6 + iVar5 * 4;
        if (*(char *)(iVar6 + iVar5 + 0xaf) == '\0') {
          puVar4 = DAT_008bfad8;
          if ((*(int *)(iVar3 + 4) == 0) ||
             (puVar4 = (undefined4 *)DAT_008bfad8[iVar5 + 0x204], puVar4 != (undefined4 *)0x0)) {
            fn_007440bc(*puVar4,iVar5);
          }
        }
        else if (*(int *)(iVar3 + 0x10) == 0) {
          fn_00745064(DAT_008bfad8[1],iVar5);
        }
        else if ((undefined4 *)DAT_008bfad8[iVar5 + 0x207] != (undefined4 *)0x0) {
          fn_00745064(*(undefined4 *)DAT_008bfad8[iVar5 + 0x207],iVar5);
        }
        bVar1 = true;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 3);
    if ((bVar1) && (uVar7 = *(uint *)(iVar2 + 0x770), (uVar7 & 7) != 0)) {
      if (DAT_008bf790 < DAT_008bf794) {
        DAT_008bf790[1] = 0x10080;
        *DAT_008bf790 = uVar7;
        DAT_008bf790 = DAT_008bf790 + 2;
      }
      if (DAT_008bf790 < DAT_008bf794) {
        DAT_008bf790[1] = 0x50080;
        *DAT_008bf790 = 0x10000;
        DAT_008bf790 = DAT_008bf790 + 2;
      }
    }
  }
  return;
}


