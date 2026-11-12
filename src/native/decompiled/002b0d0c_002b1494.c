#include "002b0d0c_002b1494.h"



void fn_002b1494(undefined4 *param_1)

{
  *param_1 = &DAT_0081ec8c;
  if ((int *)param_1[0x1c] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1c] + 4))();
  }
  fn_00370730(param_1);
  fn_002feef8();
  return;
}



void fn_002b1438(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_0039224c(iVar1,*(undefined4 *)(param_1 + 0x28));
  }
  piVar3 = *(int **)(param_1 + 0x2c);
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *(int **)(param_1 + 0x2c) = piVar2;
  }
  return;
}



void fn_002b13a0(undefined4 *param_1)

{
  *param_1 = &DAT_0081ec7c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  return;
}



int fn_002b1390(int param_1,int param_2)

{
  return (int)*(short *)(*(int *)(param_1 + 4) + param_2 * 2);
}



void fn_002b1364(void)

{
                    /* WARNING: Subroutine does not return */
  fn_006ba250();
}



/* WARNING: Removing unreachable block (ram,0x002b0ed8) */
/* WARNING: Removing unreachable block (ram,0x002b0edc) */
/* WARNING: Removing unreachable block (ram,0x002b0ef4) */
/* WARNING: Removing unreachable block (ram,0x002b0f14) */
/* WARNING: Removing unreachable block (ram,0x002b0f10) */
/* WARNING: Removing unreachable block (ram,0x002b0fa8) */
/* WARNING: Removing unreachable block (ram,0x002b0f9c) */
/* WARNING: Removing unreachable block (ram,0x002b0fa4) */
/* WARNING: Removing unreachable block (ram,0x002b0f90) */
/* WARNING: Removing unreachable block (ram,0x002b0f98) */
/* WARNING: Removing unreachable block (ram,0x002b0f74) */
/* WARNING: Removing unreachable block (ram,0x002b0f78) */
/* WARNING: Removing unreachable block (ram,0x002b0f7c) */
/* WARNING: Removing unreachable block (ram,0x002b0f80) */
/* WARNING: Removing unreachable block (ram,0x002b0f84) */
/* WARNING: Removing unreachable block (ram,0x002b0f88) */
/* WARNING: Removing unreachable block (ram,0x002b0f8c) */
/* WARNING: Removing unreachable block (ram,0x002b0f60) */
/* WARNING: Removing unreachable block (ram,0x002b0f64) */
/* WARNING: Removing unreachable block (ram,0x002b0f68) */
/* WARNING: Removing unreachable block (ram,0x002b0f6c) */
/* WARNING: Removing unreachable block (ram,0x002b0f70) */
/* WARNING: Removing unreachable block (ram,0x002b0f54) */
/* WARNING: Removing unreachable block (ram,0x002b0f5c) */
/* WARNING: Removing unreachable block (ram,0x002b0f34) */
/* WARNING: Removing unreachable block (ram,0x002b0f38) */
/* WARNING: Removing unreachable block (ram,0x002b0f3c) */
/* WARNING: Removing unreachable block (ram,0x002b0f40) */
/* WARNING: Removing unreachable block (ram,0x002b0f44) */
/* WARNING: Removing unreachable block (ram,0x002b0f48) */
/* WARNING: Removing unreachable block (ram,0x002b0f4c) */
/* WARNING: Removing unreachable block (ram,0x002b0f50) */
/* WARNING: Removing unreachable block (ram,0x002b0fb0) */
/* WARNING: Removing unreachable block (ram,0x002b0fd8) */
/* WARNING: Removing unreachable block (ram,0x002b1070) */
/* WARNING: Removing unreachable block (ram,0x002b1084) */
/* WARNING: Removing unreachable block (ram,0x002b1088) */
/* WARNING: Removing unreachable block (ram,0x002b10a8) */
/* WARNING: Removing unreachable block (ram,0x002b10ac) */
/* WARNING: Removing unreachable block (ram,0x002b10b0) */
/* WARNING: Removing unreachable block (ram,0x002b10b4) */
/* WARNING: Removing unreachable block (ram,0x002b10b8) */
/* WARNING: Removing unreachable block (ram,0x002b10c4) */
/* WARNING: Removing unreachable block (ram,0x002b10d4) */
/* WARNING: Removing unreachable block (ram,0x002b10d8) */
/* WARNING: Removing unreachable block (ram,0x002b10f4) */
/* WARNING: Removing unreachable block (ram,0x002b10f8) */
/* WARNING: Removing unreachable block (ram,0x002b10fc) */
/* WARNING: Removing unreachable block (ram,0x002b1100) */
/* WARNING: Removing unreachable block (ram,0x002b1104) */
/* WARNING: Removing unreachable block (ram,0x002b1110) */
/* WARNING: Removing unreachable block (ram,0x002b112c) */
/* WARNING: Removing unreachable block (ram,0x002b1138) */
/* WARNING: Removing unreachable block (ram,0x002b0ff4) */
/* WARNING: Removing unreachable block (ram,0x002b1004) */
/* WARNING: Removing unreachable block (ram,0x002b1008) */
/* WARNING: Removing unreachable block (ram,0x002b100c) */
/* WARNING: Removing unreachable block (ram,0x002b1030) */
/* WARNING: Removing unreachable block (ram,0x002b103c) */
/* WARNING: Removing unreachable block (ram,0x002b1044) */
/* WARNING: Removing unreachable block (ram,0x002b104c) */
/* WARNING: Removing unreachable block (ram,0x002b1054) */
/* WARNING: Removing unreachable block (ram,0x002b106c) */
/* WARNING: Removing unreachable block (ram,0x002b1018) */
/* WARNING: Removing unreachable block (ram,0x002b101c) */
/* WARNING: Removing unreachable block (ram,0x002b102c) */
/* WARNING: Removing unreachable block (ram,0x002b0fc4) */
/* WARNING: Removing unreachable block (ram,0x002b0fd4) */
/* WARNING: Removing unreachable block (ram,0x002b1354) */
/* WARNING: Recovered jumptable eliminated as dead code */

void fn_002b0d0c(int param_1,undefined1 param_2)

{
  short sVar1;
  uint uVar2;
  uint *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  short *psVar6;
  uint uVar7;
  undefined2 *puVar8;
  short *psVar9;
  undefined2 *puVar10;
  short *psVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  short *psVar15;
  undefined4 uVar16;
  uint uStack_30;
  uint auStack_2c [2];
  
  *(undefined1 *)(param_1 + 0x10) = param_2;
  uVar12 = *(uint *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = 0;
  uVar7 = *(uint *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = 0;
  iVar13 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar2 = uVar12;
  if (uVar7 < uVar12) {
    do {
      uVar2 = uVar2 + 2;
    } while (uVar2 != uVar7);
  }
  fn_001008c4(uVar12,(int)(iVar13 - uVar12) >> 1,0);
  uVar2 = *(uint *)(param_1 + 8);
  uVar7 = *(uint *)(param_1 + 4);
  if (uVar7 != uVar2) {
    uVar12 = uVar7;
    if (uVar2 <= uVar7) {
      do {
        uVar12 = uVar12 + 2;
      } while (uVar12 != uVar2);
    }
    *(uint *)(param_1 + 8) = uVar2 - (uVar2 - uVar7 & 0xfffffffe);
  }
  puVar14 = (uint *)(param_1 + 4);
  uStack_30 = 0x44c;
  if ((uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 1) < 0x44c) {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 1;
    auStack_2c[0] = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
    if (auStack_2c[0] < uVar2 + 0x20) {
      auStack_2c[0] = uVar2 + 0x20;
    }
    puVar3 = auStack_2c;
    if (auStack_2c[0] < 0x44d) {
      puVar3 = &uStack_30;
    }
    uVar2 = *puVar3;
    puVar4 = (undefined2 *)fn_00100fc6(uVar2 << 1,0);
    puVar10 = *(undefined2 **)(param_1 + 8);
    puVar5 = puVar4;
    for (puVar8 = (undefined2 *)*puVar14; puVar8 != puVar10; puVar8 = puVar8 + 1) {
      if (puVar5 != (undefined2 *)0x0) {
        *puVar5 = *puVar8;
      }
      puVar5 = puVar5 + 1;
    }
    uVar12 = *puVar14;
    uVar7 = uVar12;
    if (*(uint *)(param_1 + 8) < uVar12) {
      do {
        uVar7 = uVar7 + 2;
      } while (uVar7 != *(uint *)(param_1 + 8));
    }
    fn_001008c4(uVar12,(int)(*(int *)(param_1 + 0xc) - uVar12) >> 1,0);
    uVar7 = *puVar14;
    *puVar14 = (uint)puVar4;
    *(uint *)(param_1 + 8) = (*(int *)(param_1 + 8) - uVar7 & 0xfffffffe) + (int)puVar4;
    *(undefined2 **)(param_1 + 0xc) = puVar4 + uVar2;
  }
  uVar16 = *(undefined4 *)(DAT_00897804 + 0x14);
  sVar1 = 1;
  do {
    iVar13 = fn_00163940();
    if (((iVar13 != 0) && (iVar13 = fn_00660e88((int)sVar1), iVar13 != 0)) &&
       (iVar13 = fn_006b2aa0(uVar16,(int)sVar1), iVar13 != 0)) {
      psVar15 = *(short **)(param_1 + 8);
      puVar14 = (uint *)(param_1 + 4);
      if (psVar15 == *(short **)(param_1 + 0xc)) {
        uVar2 = (int)((int)psVar15 - *puVar14) >> 1;
        if (uVar2 < (uint)((int)((int)*(short **)(param_1 + 0xc) - *puVar14) >> 1)) {
          *(short **)(param_1 + 8) = psVar15 + 1;
          if (psVar15 != (short *)0x0) {
            *psVar15 = psVar15[-1];
          }
          psVar9 = psVar15 + -1;
          psVar11 = psVar15;
          if (psVar15 < psVar9) {
            iVar13 = (int)psVar9 - (int)psVar15;
            if (0 < iVar13) {
              if (iVar13 * 0x40000000 < 0) {
                psVar9 = psVar15 + -2;
                psVar11 = psVar15 + -1;
                *psVar11 = *psVar9;
              }
              for (iVar13 = iVar13 >> 2; iVar13 != 0; iVar13 = iVar13 + -1) {
                psVar11[-1] = psVar9[-1];
                psVar9 = psVar9 + -2;
                psVar11 = psVar11 + -2;
                *psVar11 = *psVar9;
              }
            }
          }
          else {
            while (psVar15 != psVar9) {
              psVar9 = psVar9 + -1;
              psVar11[-1] = *psVar9;
              psVar11 = psVar11 + -1;
            }
          }
          *psVar15 = sVar1;
        }
        else {
          uStack_30 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
          if (uStack_30 < uVar2 + 0x20) {
            uStack_30 = uVar2 + 0x20;
          }
          psVar6 = (short *)fn_00100fc6(uStack_30 << 1,0);
          psVar11 = psVar6;
          for (psVar9 = (short *)*puVar14; psVar9 != psVar15; psVar9 = psVar9 + 1) {
            if (psVar11 != (short *)0x0) {
              *psVar11 = *psVar9;
            }
            psVar11 = psVar11 + 1;
          }
          psVar9 = (short *)(((int)psVar15 - *puVar14 & 0xfffffffe) + (int)psVar6);
          if (psVar9 != (short *)0x0) {
            *psVar9 = sVar1;
          }
          psVar11 = *(short **)(param_1 + 8);
          psVar9 = (short *)(((int)psVar15 - *puVar14 & 0xfffffffe) + (int)psVar6);
          for (; psVar15 != psVar11; psVar15 = psVar15 + 1) {
            psVar9 = psVar9 + 1;
            if (psVar9 != (short *)0x0) {
              *psVar9 = *psVar15;
            }
          }
          uVar7 = *puVar14;
          uVar12 = *(uint *)(param_1 + 8);
          uVar2 = uVar7;
          if (uVar12 < uVar7) {
            do {
              uVar2 = uVar2 + 2;
            } while (uVar2 != uVar12);
          }
          fn_001008c4(uVar7,(int)(*(int *)(param_1 + 0xc) - uVar7) >> 1,0);
          *(short **)(param_1 + 0xc) = psVar6 + uStack_30;
          *(short **)(param_1 + 8) = psVar6 + ((int)(uVar12 - uVar7) >> 1) + 1;
          *(short **)(param_1 + 4) = psVar6;
        }
      }
      else {
        *(short **)(param_1 + 8) = psVar15 + 1;
        if (psVar15 != (short *)0x0) {
          *psVar15 = sVar1;
        }
      }
    }
    sVar1 = sVar1 + 1;
  } while (sVar1 < 0x44c);
  fn_0022e4c4(param_1 + 4,1);
  return;
}


