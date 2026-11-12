#include "0028e434_0028e8a0.h"



void fn_0028e8a0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  fn_0069d0b0(*(undefined4 *)(param_1 + 0x34));
  piVar2 = *(int **)(param_1 + 0x28);
  for (piVar1 = (int *)*piVar2; piVar1 != piVar2; piVar1 = (int *)*piVar1) {
    (**(code **)(**(int **)piVar1[2] + 0x1c))();
  }
  return;
}



void fn_0028e718(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  
  piVar1 = (int *)fn_00145b00(0x10,&DAT_00812c8c);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*param_2 + 4))(*(undefined4 *)(param_1 + 4));
    *piVar1 = iVar2;
    piVar1[1] = (int)param_2;
    *(int *)(iVar2 + 0x18) = param_2[1];
    fn_00689cd4(*piVar1,param_1);
    piVar1[2] = 0;
    *(char *)(piVar1 + 3) = (char)param_3;
    *(char *)((int)piVar1 + 0xd) = (char)param_4;
  }
  *(undefined4 *)(*piVar1 + 0x60) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(*piVar1 + 0x54) = **(undefined4 **)piVar1[1];
  *(int *)(*(int *)(param_1 + 0x34) + 4) = *piVar1 + 0x20;
  (**(code **)(*(int *)*piVar1 + 0x24))((int *)*piVar1,param_3,param_4,0);
  piVar3 = *(int **)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x28);
  piVar6 = (int *)(param_1 + 0x18);
  if (piVar3 == (int *)0x0) {
    piVar3 = *(int **)(param_1 + 0x20);
    if (piVar3 == *(int **)(param_1 + 0x24)) {
      if (*piVar6 == 0) {
        uVar7 = 0x20;
      }
      else {
        uVar4 = *(uint *)(*piVar6 + 4);
        uVar7 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
        if (uVar7 < uVar4 + 0x20) {
          uVar7 = uVar4 + 0x20;
        }
      }
      piVar3 = (int *)fn_00100fc6(0xc,0);
      iVar5 = fn_00100fc6(uVar7 * 0xc,0);
      piVar3[2] = iVar5;
      *piVar3 = *piVar6;
      piVar3[1] = uVar7;
      *piVar6 = (int)piVar3;
      piVar3 = (int *)piVar3[2];
      *(int **)(param_1 + 0x20) = piVar3;
      *(int **)(param_1 + 0x24) = piVar3 + uVar7 * 3;
    }
    *(int **)(param_1 + 0x20) = piVar3 + 3;
  }
  else {
    *(int *)(param_1 + 0x1c) = *piVar3;
  }
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = (int)piVar1;
  }
  *piVar3 = iVar2;
  piVar3[1] = *(int *)(iVar2 + 4);
  **(int **)(iVar2 + 4) = (int)piVar3;
  *(int **)(iVar2 + 4) = piVar3;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  if (*(char *)(*param_2 + 0x10) == '\0') {
    *(int **)(param_1 + 0x30) = piVar1;
  }
  return;
}



void fn_0028e688(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_r4;
  undefined4 *puVar8;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  int *piVar9;
  undefined4 unaff_r8;
  uint uVar10;
  
  puVar1 = *(undefined4 **)(param_1 + 0x30);
  puVar8 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)(*(int *)*puVar1 + 0x28))((int *)*puVar1,param_3,param_4,0);
    puVar8 = puVar1;
  }
  if ((param_2 != 0) && (piVar2 = (int *)fn_0028e3b4(param_1,param_2), piVar2 != (int *)0x0)) {
    if (puVar8 == (undefined4 *)0x0) {
      piVar3 = (int *)fn_00145b00(0x10,&DAT_00812c8c,param_3,param_4,unaff_r4,unaff_r5,unaff_r6,
                                   unaff_r7,unaff_r8);
      if (piVar3 != (int *)0x0) {
        iVar4 = (**(code **)(*piVar2 + 4))(*(undefined4 *)(param_1 + 4));
        *piVar3 = iVar4;
        piVar3[1] = (int)piVar2;
        *(int *)(iVar4 + 0x18) = piVar2[1];
        fn_00689cd4(*piVar3,param_1);
        piVar3[2] = 0;
        *(char *)(piVar3 + 3) = (char)param_3;
        *(char *)((int)piVar3 + 0xd) = (char)param_4;
      }
      *(undefined4 *)(*piVar3 + 0x60) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(*piVar3 + 0x54) = **(undefined4 **)piVar3[1];
      *(int *)(*(int *)(param_1 + 0x34) + 4) = *piVar3 + 0x20;
      (**(code **)(*(int *)*piVar3 + 0x24))((int *)*piVar3,param_3,param_4,0);
      piVar5 = *(int **)(param_1 + 0x1c);
      iVar4 = *(int *)(param_1 + 0x28);
      piVar9 = (int *)(param_1 + 0x18);
      if (piVar5 == (int *)0x0) {
        piVar5 = *(int **)(param_1 + 0x20);
        if (piVar5 == *(int **)(param_1 + 0x24)) {
          if (*piVar9 == 0) {
            uVar10 = 0x20;
          }
          else {
            uVar6 = *(uint *)(*piVar9 + 4);
            uVar10 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
            if (uVar10 < uVar6 + 0x20) {
              uVar10 = uVar6 + 0x20;
            }
          }
          piVar5 = (int *)fn_00100fc6(0xc,0);
          iVar7 = fn_00100fc6(uVar10 * 0xc,0);
          piVar5[2] = iVar7;
          *piVar5 = *piVar9;
          piVar5[1] = uVar10;
          *piVar9 = (int)piVar5;
          piVar5 = (int *)piVar5[2];
          *(int **)(param_1 + 0x20) = piVar5;
          *(int **)(param_1 + 0x24) = piVar5 + uVar10 * 3;
        }
        *(int **)(param_1 + 0x20) = piVar5 + 3;
      }
      else {
        *(int *)(param_1 + 0x1c) = *piVar5;
      }
      if (piVar5 + 2 != (int *)0x0) {
        piVar5[2] = (int)piVar3;
      }
      *piVar5 = iVar4;
      piVar5[1] = *(int *)(iVar4 + 4);
      **(int **)(iVar4 + 4) = (int)piVar5;
      *(int **)(iVar4 + 4) = piVar5;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      if (*(char *)(*piVar2 + 0x10) == '\0') {
        *(int **)(param_1 + 0x30) = piVar3;
      }
      return;
    }
    puVar8[2] = piVar2;
    *(char *)(puVar8 + 3) = (char)param_3;
    *(char *)((int)puVar8 + 0xd) = (char)param_4;
  }
  return;
}



undefined4 fn_0028e66c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar1 = *(undefined4 *)**(undefined4 **)(*(int *)(param_1 + 0x30) + 4);
  }
  return uVar1;
}



undefined4 fn_0028e658(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_0028e3b4();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 4);
  }
  return uVar2;
}



undefined4 fn_0028e650(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_0028e3b4(*(undefined4 *)(param_1 + 0x18));
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 4);
  }
  return uVar2;
}



void fn_0028e434(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  
  *(int *)(param_1 + 8) = param_2;
  iVar1 = *(int *)(param_2 + 4);
  while (iVar1 != 0) {
    if (*(code **)(param_2 + 8) == (code *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (**(code **)(param_2 + 8))(*(undefined4 *)(param_2 + 0xc));
    }
    piVar10 = *(int **)(param_1 + 0x10);
    puVar11 = (uint *)(param_1 + 0xc);
    if (piVar10 == *(int **)(param_1 + 0x14)) {
      uVar5 = (int)((int)piVar10 - *puVar11) >> 3;
      if (uVar5 < (uint)((int)((int)*(int **)(param_1 + 0x14) - *puVar11) >> 3)) {
        *(int **)(param_1 + 0x10) = piVar10 + 2;
        if (piVar10 != (int *)0x0) {
          *piVar10 = piVar10[-2];
          piVar10[1] = piVar10[-1];
        }
        piVar6 = piVar10 + -2;
        piVar7 = piVar10;
        if (piVar10 < piVar6) {
          iVar9 = (int)piVar6 - (int)piVar10;
          if (0 < iVar9) {
            if (iVar9 * 0x10000000 < 0) {
              piVar6 = piVar10 + -4;
              piVar7 = piVar10 + -2;
              *piVar7 = *piVar6;
              piVar10[-1] = piVar10[-3];
            }
            for (iVar9 = iVar9 >> 4; iVar9 != 0; iVar9 = iVar9 + -1) {
              iVar13 = piVar6[-1];
              piVar7[-2] = piVar6[-2];
              piVar7[-1] = iVar13;
              iVar13 = piVar6[-3];
              piVar7[-4] = piVar6[-4];
              piVar7[-3] = iVar13;
              piVar6 = piVar6 + -4;
              piVar7 = piVar7 + -4;
            }
          }
        }
        else {
          while (piVar10 != piVar6) {
            iVar9 = piVar6[-1];
            piVar7[-2] = piVar6[-2];
            piVar7[-1] = iVar9;
            piVar7 = piVar7 + -2;
            piVar6 = piVar6 + -2;
          }
        }
        *piVar10 = param_2;
        piVar10[1] = iVar1;
      }
      else {
        uVar12 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
        if (uVar12 < uVar5 + 0x20) {
          uVar12 = uVar5 + 0x20;
        }
        piVar2 = (int *)fn_00100fc6(uVar12 << 3,0);
        piVar7 = piVar2;
        for (piVar6 = (int *)*puVar11; piVar6 != piVar10; piVar6 = piVar6 + 2) {
          if (piVar7 != (int *)0x0) {
            iVar9 = piVar6[1];
            *piVar7 = *piVar6;
            piVar7[1] = iVar9;
          }
          piVar7 = piVar7 + 2;
        }
        piVar6 = (int *)(((int)piVar10 - *puVar11 & 0xfffffff8) + (int)piVar2);
        if (piVar6 != (int *)0x0) {
          *piVar6 = param_2;
          piVar6[1] = iVar1;
        }
        piVar7 = *(int **)(param_1 + 0x10);
        piVar6 = (int *)(((int)piVar10 - *puVar11 & 0xfffffff8) + (int)piVar2);
        for (; piVar10 != piVar7; piVar10 = piVar10 + 2) {
          piVar3 = piVar6 + 2;
          if (piVar3 != (int *)0x0) {
            iVar1 = piVar10[1];
            *piVar3 = *piVar10;
            piVar6[3] = iVar1;
          }
          piVar6 = piVar3;
        }
        uVar4 = *puVar11;
        uVar8 = *(uint *)(param_1 + 0x10);
        uVar5 = uVar4;
        if (uVar8 < uVar4) {
          do {
            uVar5 = uVar5 + 8;
          } while (uVar5 != uVar8);
        }
        fn_001008c4(uVar4,(int)(*(int *)(param_1 + 0x14) - uVar4) >> 3,0);
        *(int **)(param_1 + 0x14) = piVar2 + uVar12 * 2;
        *(int **)(param_1 + 0x10) = piVar2 + ((int)(uVar8 - uVar4) >> 3) * 2 + 2;
        *puVar11 = (uint)piVar2;
      }
    }
    else {
      *(int **)(param_1 + 0x10) = piVar10 + 2;
      if (piVar10 != (int *)0x0) {
        *piVar10 = param_2;
        piVar10[1] = iVar1;
      }
    }
    piVar10 = (int *)(param_2 + 0x18);
    param_2 = param_2 + 0x14;
    iVar1 = *piVar10;
  }
  return;
}


