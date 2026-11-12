#include "002b183c_002b1b98.h"



undefined4 * fn_002b1b98(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  puVar1 = (undefined4 *)fn_006896e0();
  piVar4 = puVar1 + 2;
  *puVar1 = &DAT_0081ecbc;
  *piVar4 = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  piVar2 = (int *)fn_00100fc6(0xc,0);
  iVar3 = fn_00100fc6(0xc,0);
  piVar2[2] = iVar3;
  *piVar2 = *piVar4;
  piVar2[1] = 1;
  *piVar4 = (int)piVar2;
  iVar3 = piVar2[2];
  puVar1[4] = iVar3;
  puVar1[5] = iVar3 + 0xc;
  puVar1[6] = iVar3;
  puVar1[4] = iVar3 + 0xc;
  *(int *)iVar3 = iVar3;
  *(undefined4 *)(puVar1[6] + 4) = puVar1[6];
  return puVar1;
}



void fn_002b1b78(void)

{
                    /* WARNING: Subroutine does not return */
  fn_002b1598();
}



void fn_002b1b54(void)

{
                    /* WARNING: Subroutine does not return */
  fn_002b1598();
}



void fn_002b1b40(void)

{
                    /* WARNING: Subroutine does not return */
  fn_002b1598();
}



void fn_002b1b20(void)

{
                    /* WARNING: Subroutine does not return */
  fn_002b1598();
}



int fn_002b1acc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *unaff_r6;
  int iVar10;
  
  iVar6 = fn_00145b00(0xd8,&DAT_00812c8c);
  piVar7 = (int *)0x0;
  if (iVar6 != 0) {
    piVar7 = (int *)fn_0069e48c(iVar6,*(undefined4 *)(param_1 + 4));
  }
  fn_0069d9a8(piVar7,param_2,param_3,param_4);
  iVar6 = 0;
  puVar8 = *(undefined4 **)(param_1 + 0x18);
  puVar1 = (undefined4 *)*puVar8;
  while (puVar1 != puVar8) {
    if (*(int *)puVar1[2] == iVar6) {
      puVar1 = (undefined4 *)*puVar8;
      iVar6 = iVar6 + 1;
    }
    else {
      puVar1 = (undefined4 *)*puVar1;
    }
  }
  (**(code **)(*piVar7 + 0x14))(piVar7);
  piVar2 = (int *)fn_00145b00(0xc,&DAT_00812c8c);
  if (piVar2 != (int *)0x0) {
    piVar2[1] = (int)piVar7;
    *piVar2 = iVar6;
    *(undefined1 *)(piVar2 + 2) = 0;
    unaff_r6 = piVar2;
  }
  piVar7 = (int *)(param_1 + 8);
  piVar3 = *(int **)(param_1 + 0xc);
  if (piVar2 == (int *)0x0) {
    unaff_r6 = (int *)0x0;
  }
  iVar10 = *(int *)(param_1 + 0x18);
  if (piVar3 == (int *)0x0) {
    piVar3 = *(int **)(param_1 + 0x10);
    if (piVar3 == *(int **)(param_1 + 0x14)) {
      if (*piVar7 == 0) {
        uVar9 = 0x20;
      }
      else {
        uVar4 = *(uint *)(*piVar7 + 4);
        uVar9 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
        if (uVar9 < uVar4 + 0x20) {
          uVar9 = uVar4 + 0x20;
        }
      }
      piVar2 = (int *)fn_00100fc6(0xc,0);
      iVar5 = fn_00100fc6(uVar9 * 0xc,0);
      piVar2[2] = iVar5;
      *piVar2 = *piVar7;
      piVar2[1] = uVar9;
      *piVar7 = (int)piVar2;
      piVar3 = (int *)piVar2[2];
      *(int **)(param_1 + 0x10) = piVar3;
      *(int **)(param_1 + 0x14) = piVar3 + uVar9 * 3;
    }
    *(int **)(param_1 + 0x10) = piVar3 + 3;
  }
  else {
    *(int *)(param_1 + 0xc) = *piVar3;
  }
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = (int)unaff_r6;
  }
  *piVar3 = iVar10;
  piVar3[1] = *(int *)(iVar10 + 4);
  **(int **)(iVar10 + 4) = (int)piVar3;
  *(int **)(iVar10 + 4) = piVar3;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return iVar6;
}



int fn_002b1a60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *unaff_r6;
  int iVar10;
  
  iVar6 = fn_00145b00(0xd8,&DAT_00812c8c);
  piVar7 = (int *)0x0;
  if (iVar6 != 0) {
    piVar7 = (int *)fn_0069e48c(iVar6,*(undefined4 *)(param_1 + 4));
  }
  fn_0069d934(piVar7,param_2,param_3,param_4,param_5);
  iVar6 = 0;
  puVar8 = *(undefined4 **)(param_1 + 0x18);
  puVar1 = (undefined4 *)*puVar8;
  while (puVar1 != puVar8) {
    if (*(int *)puVar1[2] == iVar6) {
      puVar1 = (undefined4 *)*puVar8;
      iVar6 = iVar6 + 1;
    }
    else {
      puVar1 = (undefined4 *)*puVar1;
    }
  }
  (**(code **)(*piVar7 + 0x14))(piVar7);
  piVar2 = (int *)fn_00145b00(0xc,&DAT_00812c8c);
  if (piVar2 != (int *)0x0) {
    piVar2[1] = (int)piVar7;
    *piVar2 = iVar6;
    *(undefined1 *)(piVar2 + 2) = 0;
    unaff_r6 = piVar2;
  }
  piVar7 = (int *)(param_1 + 8);
  piVar3 = *(int **)(param_1 + 0xc);
  if (piVar2 == (int *)0x0) {
    unaff_r6 = (int *)0x0;
  }
  iVar10 = *(int *)(param_1 + 0x18);
  if (piVar3 == (int *)0x0) {
    piVar3 = *(int **)(param_1 + 0x10);
    if (piVar3 == *(int **)(param_1 + 0x14)) {
      if (*piVar7 == 0) {
        uVar9 = 0x20;
      }
      else {
        uVar4 = *(uint *)(*piVar7 + 4);
        uVar9 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
        if (uVar9 < uVar4 + 0x20) {
          uVar9 = uVar4 + 0x20;
        }
      }
      piVar2 = (int *)fn_00100fc6(0xc,0);
      iVar5 = fn_00100fc6(uVar9 * 0xc,0);
      piVar2[2] = iVar5;
      *piVar2 = *piVar7;
      piVar2[1] = uVar9;
      *piVar7 = (int)piVar2;
      piVar3 = (int *)piVar2[2];
      *(int **)(param_1 + 0x10) = piVar3;
      *(int **)(param_1 + 0x14) = piVar3 + uVar9 * 3;
    }
    *(int **)(param_1 + 0x10) = piVar3 + 3;
  }
  else {
    *(int *)(param_1 + 0xc) = *piVar3;
  }
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = (int)unaff_r6;
  }
  *piVar3 = iVar10;
  piVar3[1] = *(int *)(iVar10 + 4);
  **(int **)(iVar10 + 4) = (int)piVar3;
  *(int **)(iVar10 + 4) = piVar3;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return iVar6;
}



void fn_002b1a28(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x18);
  for (piVar1 = (int *)*piVar2; piVar1 != piVar2; piVar1 = (int *)*piVar1) {
    (**(code **)(**(int **)(piVar1[2] + 4) + 0x10))();
  }
  return;
}



void fn_002b1908(int param_1)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int *piVar4;
  
  (**(code **)(**(int **)(param_1 + 0xc) + 0x18))();
  (**(code **)(**(int **)(param_1 + 0x10) + 0x18))();
  iVar1 = fn_0028e340(*(undefined4 *)(param_1 + 0xc));
  if (iVar1 == 0) {
    pcVar2 = *(code **)(**(int **)(param_1 + 0x10) + 0x1c);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x1c))();
    fn_0069cfec(*(undefined4 *)(param_1 + 0x10));
    pcVar2 = *(code **)(**(int **)(param_1 + 0x10) + 0x18);
  }
  (*pcVar2)();
  iVar1 = fn_0028e340(*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(char *)(param_1 + 0x44)) {
    iVar1 = fn_0028e340(*(undefined4 *)(param_1 + 0xc));
    *(char *)(param_1 + 0x44) = (char)iVar1;
    if (iVar1 == 0) {
      fn_0028e310(*(undefined4 *)(param_1 + 0x10));
      fn_0028e310(*(undefined4 *)(param_1 + 0x14));
      fn_0028e310(*(undefined4 *)(param_1 + 0x18));
    }
    else {
      fn_0028ebc8();
      fn_0028ebc8(*(undefined4 *)(param_1 + 0x14));
      fn_0028ebc8(*(undefined4 *)(param_1 + 0x18));
    }
  }
  (**(code **)(**(int **)(param_1 + 0xc) + 0x20))();
  (**(code **)(**(int **)(param_1 + 0x10) + 0x20))();
  (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
  (**(code **)(**(int **)(param_1 + 0x18) + 0x20))();
  piVar4 = *(int **)(*(int *)(param_1 + 0x2c) + 0x18);
  for (piVar3 = (int *)*piVar4; piVar3 != piVar4; piVar3 = (int *)*piVar3) {
    (**(code **)(**(int **)(piVar3[2] + 4) + 0x10))();
  }
  return;
}



void fn_002b18e8(void)

{
                    /* WARNING: Subroutine does not return */
  fn_002b1598();
}



void fn_002b183c(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x18);
  piVar2 = (int *)*piVar3;
  while (piVar2 != piVar3) {
    if (*(char *)(piVar2[2] + 8) == '\0') {
      piVar2 = (int *)*piVar2;
    }
    else {
      (**(code **)(**(int **)(piVar2[2] + 4) + 0x18))();
      if (*(int **)(piVar2[2] + 4) != (int *)0x0) {
        (**(code **)(**(int **)(piVar2[2] + 4) + 4))();
      }
      fn_002feef8(piVar2[2]);
      piVar1 = *(int **)(param_1 + 0x18);
      if (piVar2 != piVar1) {
        piVar1 = (int *)*piVar2;
        *(int *)piVar2[1] = *piVar2;
        *(int *)(*piVar2 + 4) = piVar2[1];
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
        *piVar2 = *(int *)(param_1 + 0xc);
        *(int **)(param_1 + 0xc) = piVar2;
      }
      piVar2 = piVar1;
    }
  }
  return;
}


