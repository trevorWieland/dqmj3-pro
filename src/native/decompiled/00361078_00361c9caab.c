#include "00361078_00361c9caab.h"



void fn_003613ec(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = *(int *)(DAT_008977e0 + 0xa8);
  uVar2 = fn_006f7a70();
  iVar3 = fn_006f7a0c(DAT_008977e0);
  piVar4 = (int *)(**(code **)(**(int **)(iVar3 + 0x50) + 0x38))();
  iVar8 = piVar4[1];
  iVar3 = iVar8 - *piVar4 >> 0x1f;
  if ((iVar8 - *piVar4) / 0x2c + iVar3 == iVar3) {
    return;
  }
  piVar5 = (int *)fn_001bf8f4();
  iVar3 = fn_0026e5c4(0x27);
  if (iVar3 == 0) {
    iVar3 = -1;
  }
  else {
    uVar6 = fn_006f7a9c(DAT_008977e0);
    iVar3 = fn_006b77f0(uVar6,(char *)&DAT_003615c8);
    if (iVar3 == -1) {
      iVar3 = fn_002772e4(uVar6,(char *)&DAT_003615c8);
    }
  }
  fn_002fe310(uVar2,piVar5,iVar3);
  (**(code **)(*piVar5 + 0x10))(piVar5,iVar8 + -0x28);
  (**(code **)(*piVar5 + 0x14))(piVar5,iVar8 + -0x1c);
  (**(code **)(*piVar5 + 0x54))(piVar5,0);
  iVar3 = *piVar4;
  while (iVar1 = iVar8, iVar8 = iVar1 + -0x2c, iVar8 != iVar3) {
    if (*(int *)(iVar1 + -0x30) == iVar9) {
      piVar5 = (int *)fn_001c0d3c(piVar5);
      iVar7 = fn_0026e5c4(0x27);
      if (iVar7 == 0) {
        iVar7 = -1;
      }
      else {
        uVar6 = fn_006f7a9c(DAT_008977e0);
        iVar7 = fn_006b77f0(uVar6,(char *)&DAT_003615d4);
        if (iVar7 == -1) {
          iVar7 = fn_002772e4(uVar6,(char *)&DAT_003615d4);
        }
      }
      fn_002fe310(uVar2,piVar5,iVar7);
      (**(code **)(*piVar5 + 0x10))(piVar5,iVar1 + -0x54);
      (**(code **)(*piVar5 + 0x14))(piVar5,iVar1 + -0x48);
      (**(code **)(*piVar5 + 0x54))(piVar5,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x003615b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar5 + 0x54))(piVar5,1);
  return;
}


