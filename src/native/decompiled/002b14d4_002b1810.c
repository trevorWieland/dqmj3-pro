#include "002b14d4_002b1810.h"



void fn_002b1810(void)

{
                    /* WARNING: Subroutine does not return */
  fn_002b1598();
}



int fn_002b1634(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *unaff_r6;
  int iVar10;
  
  iVar1 = fn_00145b00(0xd8,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_0069e48c(iVar1,*(undefined4 *)(param_1 + 4));
  }
  fn_0069db88(piVar2,param_2,param_3,param_4);
  iVar1 = 0;
  puVar8 = *(undefined4 **)(param_1 + 0x18);
  puVar3 = (undefined4 *)*puVar8;
  while (puVar3 != puVar8) {
    if (*(int *)puVar3[2] == iVar1) {
      puVar3 = (undefined4 *)*puVar8;
      iVar1 = iVar1 + 1;
    }
    else {
      puVar3 = (undefined4 *)*puVar3;
    }
  }
  (**(code **)(*piVar2 + 0x14))(piVar2);
  piVar4 = (int *)fn_00145b00(0xc,&DAT_00812c8c);
  if (piVar4 != (int *)0x0) {
    piVar4[1] = (int)piVar2;
    *piVar4 = iVar1;
    *(undefined1 *)(piVar4 + 2) = 0;
    unaff_r6 = piVar4;
  }
  piVar2 = (int *)(param_1 + 8);
  piVar5 = *(int **)(param_1 + 0xc);
  if (piVar4 == (int *)0x0) {
    unaff_r6 = (int *)0x0;
  }
  iVar10 = *(int *)(param_1 + 0x18);
  if (piVar5 == (int *)0x0) {
    piVar5 = *(int **)(param_1 + 0x10);
    if (piVar5 == *(int **)(param_1 + 0x14)) {
      if (*piVar2 == 0) {
        uVar9 = 0x20;
      }
      else {
        uVar6 = *(uint *)(*piVar2 + 4);
        uVar9 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
        if (uVar9 < uVar6 + 0x20) {
          uVar9 = uVar6 + 0x20;
        }
      }
      piVar4 = (int *)fn_00100fc6(0xc,0);
      iVar7 = fn_00100fc6(uVar9 * 0xc,0);
      piVar4[2] = iVar7;
      *piVar4 = *piVar2;
      piVar4[1] = uVar9;
      *piVar2 = (int)piVar4;
      piVar5 = (int *)piVar4[2];
      *(int **)(param_1 + 0x10) = piVar5;
      *(int **)(param_1 + 0x14) = piVar5 + uVar9 * 3;
    }
    *(int **)(param_1 + 0x10) = piVar5 + 3;
  }
  else {
    *(int *)(param_1 + 0xc) = *piVar5;
  }
  if (piVar5 + 2 != (int *)0x0) {
    piVar5[2] = (int)unaff_r6;
  }
  *piVar5 = iVar10;
  piVar5[1] = *(int *)(iVar10 + 4);
  **(int **)(iVar10 + 4) = (int)piVar5;
  *(int **)(iVar10 + 4) = piVar5;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return iVar1;
}



int fn_002b15d4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *unaff_r6;
  int iVar10;
  
  iVar1 = fn_00145b00(0xd8,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_0069e48c(iVar1,*(undefined4 *)(param_1 + 4));
  }
  fn_0069db40(piVar2,param_2,param_3,param_4);
  iVar1 = 0;
  puVar8 = *(undefined4 **)(param_1 + 0x18);
  puVar3 = (undefined4 *)*puVar8;
  while (puVar3 != puVar8) {
    if (*(int *)puVar3[2] == iVar1) {
      puVar3 = (undefined4 *)*puVar8;
      iVar1 = iVar1 + 1;
    }
    else {
      puVar3 = (undefined4 *)*puVar3;
    }
  }
  (**(code **)(*piVar2 + 0x14))(piVar2);
  piVar4 = (int *)fn_00145b00(0xc,&DAT_00812c8c);
  if (piVar4 != (int *)0x0) {
    piVar4[1] = (int)piVar2;
    *piVar4 = iVar1;
    *(undefined1 *)(piVar4 + 2) = 0;
    unaff_r6 = piVar4;
  }
  piVar2 = (int *)(param_1 + 8);
  piVar5 = *(int **)(param_1 + 0xc);
  if (piVar4 == (int *)0x0) {
    unaff_r6 = (int *)0x0;
  }
  iVar10 = *(int *)(param_1 + 0x18);
  if (piVar5 == (int *)0x0) {
    piVar5 = *(int **)(param_1 + 0x10);
    if (piVar5 == *(int **)(param_1 + 0x14)) {
      if (*piVar2 == 0) {
        uVar9 = 0x20;
      }
      else {
        uVar6 = *(uint *)(*piVar2 + 4);
        uVar9 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
        if (uVar9 < uVar6 + 0x20) {
          uVar9 = uVar6 + 0x20;
        }
      }
      piVar4 = (int *)fn_00100fc6(0xc,0);
      iVar7 = fn_00100fc6(uVar9 * 0xc,0);
      piVar4[2] = iVar7;
      *piVar4 = *piVar2;
      piVar4[1] = uVar9;
      *piVar2 = (int)piVar4;
      piVar5 = (int *)piVar4[2];
      *(int **)(param_1 + 0x10) = piVar5;
      *(int **)(param_1 + 0x14) = piVar5 + uVar9 * 3;
    }
    *(int **)(param_1 + 0x10) = piVar5 + 3;
  }
  else {
    *(int *)(param_1 + 0xc) = *piVar5;
  }
  if (piVar5 + 2 != (int *)0x0) {
    piVar5[2] = (int)unaff_r6;
  }
  *piVar5 = iVar10;
  piVar5[1] = *(int *)(iVar10 + 4);
  **(int **)(iVar10 + 4) = (int)piVar5;
  *(int **)(iVar10 + 4) = piVar5;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return iVar1;
}



void fn_002b157c(int param_1)

{
                    /* WARNING: Subroutine does not return */
  fn_002b1598(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
}



undefined4 fn_002b1598(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)(param_1 + 0x18);
  while( true ) {
    if (piVar1 == *(int **)(param_1 + 0x18)) {
      return 0;
    }
    if (*(int *)piVar1[2] == param_2) break;
    piVar1 = (int *)*piVar1;
  }
  return piVar1[2];
}



int fn_002b1528(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *unaff_r6;
  int iVar10;
  
  iVar1 = fn_00145b00(0xd8,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_0069e48c(iVar1,*(undefined4 *)(param_1 + 4));
  }
  fn_0069da90(piVar2,param_2,param_3,param_4);
  iVar1 = 0;
  puVar8 = *(undefined4 **)(param_1 + 0x18);
  puVar3 = (undefined4 *)*puVar8;
  while (puVar3 != puVar8) {
    if (*(int *)puVar3[2] == iVar1) {
      puVar3 = (undefined4 *)*puVar8;
      iVar1 = iVar1 + 1;
    }
    else {
      puVar3 = (undefined4 *)*puVar3;
    }
  }
  (**(code **)(*piVar2 + 0x14))(piVar2);
  piVar4 = (int *)fn_00145b00(0xc,&DAT_00812c8c);
  if (piVar4 != (int *)0x0) {
    piVar4[1] = (int)piVar2;
    *piVar4 = iVar1;
    *(undefined1 *)(piVar4 + 2) = 0;
    unaff_r6 = piVar4;
  }
  piVar2 = (int *)(param_1 + 8);
  piVar5 = *(int **)(param_1 + 0xc);
  if (piVar4 == (int *)0x0) {
    unaff_r6 = (int *)0x0;
  }
  iVar10 = *(int *)(param_1 + 0x18);
  if (piVar5 == (int *)0x0) {
    piVar5 = *(int **)(param_1 + 0x10);
    if (piVar5 == *(int **)(param_1 + 0x14)) {
      if (*piVar2 == 0) {
        uVar9 = 0x20;
      }
      else {
        uVar6 = *(uint *)(*piVar2 + 4);
        uVar9 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
        if (uVar9 < uVar6 + 0x20) {
          uVar9 = uVar6 + 0x20;
        }
      }
      piVar4 = (int *)fn_00100fc6(0xc,0);
      iVar7 = fn_00100fc6(uVar9 * 0xc,0);
      piVar4[2] = iVar7;
      *piVar4 = *piVar2;
      piVar4[1] = uVar9;
      *piVar2 = (int)piVar4;
      piVar5 = (int *)piVar4[2];
      *(int **)(param_1 + 0x10) = piVar5;
      *(int **)(param_1 + 0x14) = piVar5 + uVar9 * 3;
    }
    *(int **)(param_1 + 0x10) = piVar5 + 3;
  }
  else {
    *(int *)(param_1 + 0xc) = *piVar5;
  }
  if (piVar5 + 2 != (int *)0x0) {
    piVar5[2] = (int)unaff_r6;
  }
  *piVar5 = iVar10;
  piVar5[1] = *(int *)(iVar10 + 4);
  **(int **)(iVar10 + 4) = (int)piVar5;
  *(int **)(iVar10 + 4) = piVar5;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return iVar1;
}



int fn_002b14d4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *unaff_r6;
  int iVar10;
  
  iVar1 = fn_00145b00(0xd8,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_0069e48c(iVar1,*(undefined4 *)(param_1 + 4));
  }
  fn_0069da48(piVar2,param_2,param_3,param_4);
  iVar1 = 0;
  puVar8 = *(undefined4 **)(param_1 + 0x18);
  puVar3 = (undefined4 *)*puVar8;
  while (puVar3 != puVar8) {
    if (*(int *)puVar3[2] == iVar1) {
      puVar3 = (undefined4 *)*puVar8;
      iVar1 = iVar1 + 1;
    }
    else {
      puVar3 = (undefined4 *)*puVar3;
    }
  }
  (**(code **)(*piVar2 + 0x14))(piVar2);
  piVar4 = (int *)fn_00145b00(0xc,&DAT_00812c8c);
  if (piVar4 != (int *)0x0) {
    piVar4[1] = (int)piVar2;
    *piVar4 = iVar1;
    *(undefined1 *)(piVar4 + 2) = 0;
    unaff_r6 = piVar4;
  }
  piVar2 = (int *)(param_1 + 8);
  piVar5 = *(int **)(param_1 + 0xc);
  if (piVar4 == (int *)0x0) {
    unaff_r6 = (int *)0x0;
  }
  iVar10 = *(int *)(param_1 + 0x18);
  if (piVar5 == (int *)0x0) {
    piVar5 = *(int **)(param_1 + 0x10);
    if (piVar5 == *(int **)(param_1 + 0x14)) {
      if (*piVar2 == 0) {
        uVar9 = 0x20;
      }
      else {
        uVar6 = *(uint *)(*piVar2 + 4);
        uVar9 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
        if (uVar9 < uVar6 + 0x20) {
          uVar9 = uVar6 + 0x20;
        }
      }
      piVar4 = (int *)fn_00100fc6(0xc,0);
      iVar7 = fn_00100fc6(uVar9 * 0xc,0);
      piVar4[2] = iVar7;
      *piVar4 = *piVar2;
      piVar4[1] = uVar9;
      *piVar2 = (int)piVar4;
      piVar5 = (int *)piVar4[2];
      *(int **)(param_1 + 0x10) = piVar5;
      *(int **)(param_1 + 0x14) = piVar5 + uVar9 * 3;
    }
    *(int **)(param_1 + 0x10) = piVar5 + 3;
  }
  else {
    *(int *)(param_1 + 0xc) = *piVar5;
  }
  if (piVar5 + 2 != (int *)0x0) {
    piVar5[2] = (int)unaff_r6;
  }
  *piVar5 = iVar10;
  piVar5[1] = *(int *)(iVar10 + 4);
  **(int **)(iVar10 + 4) = (int)piVar5;
  *(int **)(iVar10 + 4) = piVar5;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return iVar1;
}


