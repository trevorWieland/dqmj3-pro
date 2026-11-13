#include "005e5470_005e58f8bbb.h"



undefined4 fn_005e58f8(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int unaff_r7;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  
  iVar5 = *(int *)(param_1 + 4);
  uVar2 = 0;
  if ((*(byte *)(iVar5 + 0x40) & 2) == 0) {
    uVar2 = 0;
    iVar3 = *(int *)(*(int *)(iVar5 + 0x20) + 0x2c);
    *(int *)(iVar5 + 0x24) = iVar3;
    if (iVar3 == 0) {
      *(int *)(iVar5 + 0x24) = iVar5 + 0x28;
    }
    piVar6 = *(int **)(iVar5 + 0x20);
    iVar3 = *(int *)(iVar5 + 0x10);
    bVar7 = iVar3 == *piVar6;
    if (bVar7) {
      unaff_r7 = (int)*(short *)(iVar5 + 0x14);
    }
    bVar8 = unaff_r7 == (short)piVar6[8];
    bVar9 = bVar7 && bVar8;
    if (bVar7 && bVar8) {
      bVar9 = *(short *)(iVar5 + 0x16) == *(short *)((int)piVar6 + 0x22);
    }
    if (!bVar9) {
      if (iVar3 == *piVar6) {
        if ((*(short *)((int)piVar6 + 0x22) == -1) == (*(short *)(iVar5 + 0x16) == -1)) {
          piVar4 = piVar6 + 4;
        }
        else {
          piVar4 = piVar6 + 6;
        }
      }
      else {
        piVar4 = piVar6 + 2;
      }
      fn_006f941c(param_2,piVar4);
      iVar3 = piVar6[8];
      uVar1 = *(undefined2 *)((int)piVar6 + 0x22);
      *(int *)(iVar5 + 0x10) = *piVar6;
      *(short *)(iVar5 + 0x14) = (short)iVar3;
      uVar2 = 1;
      *(undefined2 *)(iVar5 + 0x16) = uVar1;
    }
  }
  return uVar2;
}


