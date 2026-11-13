#include "005d21a0_005d2950aa.h"



void fn_005d21f0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xf0,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005d24bc(iVar1,param_1);
  return;
}



int fn_005d21a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 unaff_r4;
  uint uVar10;
  undefined4 unaff_r5;
  int *unaff_r6;
  undefined4 unaff_r7;
  int iVar11;
  undefined4 unaff_r8;
  undefined4 in_lr;
  
  iVar7 = fn_0020ccc8(param_2);
  if (iVar7 == 0) {
    iVar8 = *(int *)(*(int *)(param_1 + 4) + 0x20);
    iVar7 = fn_00145b00(0xd8,&DAT_00812c8c,param_3,param_4,unaff_r4,unaff_r5,unaff_r6,unaff_r7,
                         unaff_r8,in_lr);
    piVar1 = (int *)0x0;
    if (iVar7 != 0) {
      piVar1 = (int *)fn_0069e48c(iVar7,*(undefined4 *)(iVar8 + 4));
    }
    fn_0069db88(piVar1,param_2,param_3,param_4);
  }
  else {
    iVar8 = *(int *)(*(int *)(param_1 + 4) + 0x20);
    iVar7 = fn_00145b00(0xd8,&DAT_00812c8c);
    piVar1 = (int *)0x0;
    if (iVar7 != 0) {
      piVar1 = (int *)fn_0069e48c(iVar7,*(undefined4 *)(iVar8 + 4));
    }
    fn_0069dc38(piVar1,param_4);
  }
  iVar7 = 0;
  puVar9 = *(undefined4 **)(iVar8 + 0x18);
  puVar2 = (undefined4 *)*puVar9;
  while (puVar2 != puVar9) {
    if (*(int *)puVar2[2] == iVar7) {
      puVar2 = (undefined4 *)*puVar9;
      iVar7 = iVar7 + 1;
    }
    else {
      puVar2 = (undefined4 *)*puVar2;
    }
  }
  (**(code **)(*piVar1 + 0x14))(piVar1);
  piVar3 = (int *)fn_00145b00(0xc,&DAT_00812c8c);
  if (piVar3 != (int *)0x0) {
    piVar3[1] = (int)piVar1;
    *piVar3 = iVar7;
    *(undefined1 *)(piVar3 + 2) = 0;
    unaff_r6 = piVar3;
  }
  piVar1 = (int *)(iVar8 + 8);
  piVar4 = *(int **)(iVar8 + 0xc);
  if (piVar3 == (int *)0x0) {
    unaff_r6 = (int *)0x0;
  }
  iVar11 = *(int *)(iVar8 + 0x18);
  if (piVar4 == (int *)0x0) {
    piVar4 = *(int **)(iVar8 + 0x10);
    if (piVar4 == *(int **)(iVar8 + 0x14)) {
      if (*piVar1 == 0) {
        uVar10 = 0x20;
      }
      else {
        uVar5 = *(uint *)(*piVar1 + 4);
        uVar10 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
        if (uVar10 < uVar5 + 0x20) {
          uVar10 = uVar5 + 0x20;
        }
      }
      piVar3 = (int *)fn_00100fc6(0xc,0);
      iVar6 = fn_00100fc6(uVar10 * 0xc,0);
      piVar3[2] = iVar6;
      *piVar3 = *piVar1;
      piVar3[1] = uVar10;
      *piVar1 = (int)piVar3;
      piVar4 = (int *)piVar3[2];
      *(int **)(iVar8 + 0x10) = piVar4;
      *(int **)(iVar8 + 0x14) = piVar4 + uVar10 * 3;
    }
    *(int **)(iVar8 + 0x10) = piVar4 + 3;
  }
  else {
    *(int *)(iVar8 + 0xc) = *piVar4;
  }
  if (piVar4 + 2 != (int *)0x0) {
    piVar4[2] = (int)unaff_r6;
  }
  *piVar4 = iVar11;
  piVar4[1] = *(int *)(iVar11 + 4);
  **(int **)(iVar11 + 4) = (int)piVar4;
  *(int **)(iVar11 + 4) = piVar4;
  *(int *)(iVar8 + 0x1c) = *(int *)(iVar8 + 0x1c) + 1;
  return iVar7;
}


