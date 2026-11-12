#include "00363d1c_003647d4.h"



void fn_003647d4(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  *param_1 = &DAT_00827534;
  param_1[3] = param_3;
  param_1[1] = param_2;
  param_1[2] = 0;
  if ((param_3 < 2) || (param_3 == 2 || param_3 == 3)) {
    param_1[4] = 0x42c80000;
  }
  return;
}



void fn_003644f0(undefined4 param_1)

{
  DAT_008914cc = param_1;
  return;
}



void fn_003644e8(void)

{
  DAT_008914cc = 0xffffffff;
  return;
}



void fn_003642cc(int param_1,int param_2)

{
  short sVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 in_s0;
  
  if (DAT_008914c0 == param_2) {
    iVar5 = 0;
    while( true ) {
      uVar2 = (undefined1)DAT_008914c4;
      sVar1 = (&DAT_008914d0)[iVar5];
      iVar7 = (int)sVar1;
      iVar8 = 0;
      if (iVar7 != 0) {
        iVar8 = iVar5 + -4;
      }
      if (iVar8 < 0 == (iVar7 != 0 && SBORROW4(iVar5,4))) break;
      if (DAT_008914bc == '\0') {
        iVar8 = param_1 + iVar5 * 0x24;
        fn_0066173c();
        uVar3 = fn_002aabac();
        *(undefined2 *)(iVar8 + 0x30) = 0xffff;
        *(short *)(iVar8 + 0x32) = sVar1;
        fn_0066173c();
        fn_002cd59c();
        *(undefined4 *)(iVar8 + 0x3c) = in_s0;
        *(undefined2 *)(iVar8 + 0x34) = 0;
        *(undefined1 *)(iVar8 + 0x36) = uVar2;
        *(undefined1 *)(iVar8 + 0x37) = uVar3;
        *(undefined2 *)(iVar8 + 0x38) = 0xffff;
        fn_00301f50(iVar8 + 0x40,0x12);
      }
      else {
        iVar8 = param_1 + iVar5 * 0x24;
        fn_002ea308();
        uVar2 = fn_002aabac();
        *(short *)(iVar8 + 0x30) = sVar1;
        uVar4 = fn_002ea524(iVar7);
        *(undefined2 *)(iVar8 + 0x32) = uVar4;
        fn_002cd56c(iVar7);
        *(undefined4 *)(iVar8 + 0x3c) = in_s0;
        *(undefined2 *)(iVar8 + 0x34) = 0;
        *(undefined1 *)(iVar8 + 0x36) = 0;
        *(undefined1 *)(iVar8 + 0x37) = uVar2;
        *(undefined2 *)(iVar8 + 0x38) = 0xffff;
        fn_002ea030(iVar7,iVar8 + 0x40,0);
      }
      iVar5 = iVar5 + 1;
    }
    if (DAT_008914cc != -1) {
      *(short *)(param_1 + 0x22) = (short)DAT_008914cc;
      *(undefined1 *)(param_1 + 0x26) = (undefined1)DAT_008914c8;
      DAT_008914cc = 0xffffffff;
      return;
    }
  }
  else {
    iVar5 = fn_002ea6ac();
    iVar8 = 0;
    if (0 < iVar5) {
      do {
        uVar6 = fn_002ea7a8(param_2,iVar8);
        iVar9 = (int)(short)uVar6;
        iVar7 = param_1 + iVar8 * 0x24;
        fn_002ea308(iVar9);
        uVar2 = fn_002aabac();
        *(short *)(iVar7 + 0x30) = (short)uVar6;
        uVar4 = fn_002ea524(iVar9);
        *(undefined2 *)(iVar7 + 0x32) = uVar4;
        fn_002cd56c(uVar6);
        *(undefined4 *)(iVar7 + 0x3c) = in_s0;
        *(undefined1 *)(iVar7 + 0x37) = uVar2;
        *(undefined2 *)(iVar7 + 0x38) = 0xffff;
        *(undefined2 *)(iVar7 + 0x34) = 0;
        *(undefined1 *)(iVar7 + 0x36) = 0;
        fn_002ea030(iVar9,iVar7 + 0x40,0);
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar5);
    }
    if (DAT_008914cc != -1) {
      *(short *)(param_1 + 0x22) = (short)DAT_008914cc;
      if (*(char *)(param_1 + 0x26) == -1) {
        *(undefined1 *)(param_1 + 0x26) = 0;
      }
      DAT_008914cc = -1;
    }
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x003640fc) */
/* WARNING: Removing unreachable block (ram,0x00364100) */
/* WARNING: Removing unreachable block (ram,0x00364104) */
/* WARNING: Removing unreachable block (ram,0x00364108) */
/* WARNING: Removing unreachable block (ram,0x0036410c) */

void fn_00363d1c(int param_1,float *param_2,uint *param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  int iVar16;
  uint uVar17;
  undefined4 *puVar18;
  uint uVar19;
  bool bVar20;
  float in_s0;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar25;
  longlong lVar24;
  
  puVar12 = (undefined4 *)0x0;
  puVar18 = (undefined4 *)0x0;
  iVar16 = 0;
  lVar24 = (ulonglong)(uint)(in_s0 * in_s0) << 0x20;
  puVar13 = (undefined4 *)0x0;
  while( true ) {
    piVar5 = (int *)fn_006f7508(DAT_008977e0);
    iVar6 = (**(code **)(*piVar5 + 0x70))();
    if (iVar6 <= iVar16) break;
    piVar5 = (int *)fn_006f7508(DAT_008977e0);
    iVar6 = (**(code **)(*piVar5 + 0x74))(piVar5,iVar16);
    uVar17 = *(uint *)(iVar6 + 0x13c);
    bVar20 = *(uint *)(*(int *)(param_1 + 4) + 0x13c) != uVar17;
    if (bVar20) {
      uVar17 = (uint)*(byte *)(iVar6 + 0x58);
    }
    puVar15 = puVar13;
    if ((((bVar20 && uVar17 != 0) && (iVar1 = *(int *)(*(int *)(iVar6 + 0x170) + 0xdc), 2 < iVar1))
        && (iVar1 < 4)) &&
       (fVar22 = *param_2 - *(float *)(iVar6 + 0x20), fVar21 = param_2[1] - *(float *)(iVar6 + 0x24)
       , fVar23 = param_2[2] - *(float *)(iVar6 + 0x28), fVar25 = (float)((ulonglong)lVar24 >> 0x20)
       , fVar21 = fVar22 * fVar22 + fVar21 * fVar21 + fVar23 * fVar23,
       lVar24 = CONCAT44(fVar25,fVar21), fVar21 <= fVar25)) {
      piVar5 = (int *)param_3[1];
      if (piVar5 == (int *)param_3[2]) {
        uVar17 = (int)((int)piVar5 - *param_3) >> 2;
        if (uVar17 < (uint)((int)((int)param_3[2] - *param_3) >> 2)) {
          param_3[1] = (uint)(piVar5 + 1);
          if (piVar5 != (int *)0x0) {
            *piVar5 = piVar5[-1];
          }
          piVar8 = piVar5 + -1;
          piVar11 = piVar5;
          if (piVar5 < piVar8) {
            if (0 < (int)piVar8 - (int)piVar5) {
              iVar1 = (int)piVar8 - (int)piVar5 >> 2;
              iVar10 = 0;
              do {
                iVar1 = iVar1 + -1;
                piVar5[iVar10 + -1] = piVar8[iVar10 + -1];
                iVar10 = iVar10 + -1;
              } while (iVar1 != 0);
            }
          }
          else {
            while (piVar5 != piVar8) {
              piVar8 = piVar8 + -1;
              piVar11[-1] = *piVar8;
              piVar11 = piVar11 + -1;
            }
          }
          *piVar5 = iVar6;
        }
        else {
          uVar3 = uVar17 + (uVar17 >> 1) + (uVar17 >> 3);
          if (uVar3 < uVar17 + 0x20) {
            uVar3 = uVar17 + 0x20;
          }
          piVar2 = (int *)fn_00100fc6(uVar3 << 2,0);
          piVar11 = piVar2;
          for (piVar8 = (int *)*param_3; piVar8 != piVar5; piVar8 = piVar8 + 1) {
            if (piVar11 != (int *)0x0) {
              *piVar11 = *piVar8;
            }
            piVar11 = piVar11 + 1;
          }
          piVar8 = (int *)((int)piVar2 + ((int)piVar5 - *param_3 & 0xfffffffc));
          if (piVar8 != (int *)0x0) {
            *piVar8 = iVar6;
          }
          piVar11 = (int *)param_3[1];
          piVar8 = (int *)((int)piVar2 + ((int)piVar5 - *param_3 & 0xfffffffc));
          for (; piVar5 != piVar11; piVar5 = piVar5 + 1) {
            piVar8 = piVar8 + 1;
            if (piVar8 != (int *)0x0) {
              *piVar8 = *piVar5;
            }
          }
          uVar19 = *param_3;
          uVar14 = param_3[1];
          uVar17 = uVar19;
          if (uVar14 < uVar19) {
            do {
              uVar17 = uVar17 + 4;
            } while (uVar17 != uVar14);
          }
          fn_001008c4(uVar19,(int)(param_3[2] - uVar19) >> 2,0);
          *param_3 = (uint)piVar2;
          param_3[1] = (uint)(piVar2 + ((int)(uVar14 - uVar19) >> 2) + 1);
          param_3[2] = (uint)(piVar2 + uVar3);
        }
      }
      else {
        param_3[1] = (uint)(piVar5 + 1);
        if (piVar5 != (int *)0x0) {
          *piVar5 = iVar6;
        }
      }
      if (puVar13 == puVar18) {
        uVar17 = (int)puVar13 - (int)puVar12 >> 2;
        if (uVar17 < (uint)((int)puVar18 - (int)puVar12 >> 2)) {
          puVar7 = puVar13 + -1;
          if (puVar13 != (undefined4 *)0x0) {
            *puVar13 = puVar13[-1];
          }
          puVar15 = puVar13 + 1;
          puVar4 = puVar13;
          if (puVar13 < puVar7) {
            iVar6 = (int)puVar7 - (int)puVar13;
            if (0 < iVar6) {
              if (iVar6 * 0x20000000 < 0) {
                puVar7 = puVar13 + -2;
                puVar4 = puVar13 + -1;
                *puVar4 = *puVar7;
              }
              for (iVar6 = iVar6 >> 3; iVar6 != 0; iVar6 = iVar6 + -1) {
                puVar4[-1] = puVar7[-1];
                puVar7 = puVar7 + -2;
                puVar4 = puVar4 + -2;
                *puVar4 = *puVar7;
              }
            }
          }
          else {
            while (puVar13 != puVar7) {
              puVar7 = puVar7 + -1;
              puVar4[-1] = *puVar7;
              puVar4 = puVar4 + -1;
            }
          }
          *puVar13 = (int)lVar24;
        }
        else {
          uVar3 = uVar17 + (uVar17 >> 1) + (uVar17 >> 3);
          if (uVar3 < uVar17 + 0x20) {
            uVar3 = uVar17 + 0x20;
          }
          puVar4 = (undefined4 *)fn_00100fc6(uVar3 << 2,0);
          puVar7 = puVar4;
          for (puVar15 = puVar12; puVar15 != puVar13; puVar15 = puVar15 + 1) {
            if (puVar7 != (undefined4 *)0x0) {
              *puVar7 = *puVar15;
            }
            puVar7 = puVar7 + 1;
          }
          puVar15 = (undefined4 *)((int)puVar4 + ((int)puVar13 - (int)puVar12 & 0xfffffffcU));
          if (puVar15 != (undefined4 *)0x0) {
            *puVar15 = (int)lVar24;
          }
          iVar6 = (int)puVar13 - (int)puVar12;
          puVar15 = puVar12;
          if (puVar13 <= puVar12) {
            for (; puVar15 != puVar13; puVar15 = puVar15 + 1) {
            }
          }
          fn_001008c4(puVar12,(int)puVar18 - (int)puVar12 >> 2,0);
          puVar12 = puVar4;
          puVar18 = puVar12 + uVar3;
          puVar15 = puVar12 + (iVar6 >> 2) + 1;
        }
      }
      else {
        puVar15 = puVar13 + 1;
        if (puVar13 != (undefined4 *)0x0) {
          *puVar13 = (int)lVar24;
        }
      }
    }
    iVar16 = iVar16 + 1;
    puVar13 = puVar15;
  }
  uVar17 = 0;
  if ((int)puVar13 - (int)puVar12 >> 2 != 0) {
    do {
      fVar22 = (float)puVar12[uVar17];
      uVar14 = uVar17 + 1;
      uVar3 = (int)puVar13 - (int)puVar12 >> 2;
      uVar19 = 0xffffffff;
      fVar21 = fVar22;
      if (uVar14 < uVar3) {
        do {
          if ((float)puVar12[uVar14] < fVar21) {
            uVar19 = uVar14;
            fVar21 = (float)puVar12[uVar14];
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar3);
        if (uVar19 != 0xffffffff) {
          puVar12[uVar17] = puVar12[uVar19];
          puVar12[uVar19] = fVar22;
          uVar3 = (int)(param_3[1] - *param_3) >> 2;
          if (uVar3 <= uVar17) {
            fn_002ff628(9,&DAT_008c764c,&DAT_008c764c,uVar17,uVar3);
          }
          puVar15 = (undefined4 *)(*param_3 + uVar17 * 4);
          uVar3 = (int)(param_3[1] - *param_3) >> 2;
          if (uVar3 <= uVar19) {
            fn_002ff628(9,&DAT_008c764c,&DAT_008c764c,uVar19,uVar3);
          }
          uVar9 = *puVar15;
          puVar7 = (undefined4 *)(*param_3 + uVar19 * 4);
          *puVar15 = *puVar7;
          *puVar7 = uVar9;
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < (uint)((int)puVar13 - (int)puVar12 >> 2));
  }
  puVar15 = puVar12;
  if (puVar13 < puVar12) {
    do {
      puVar15 = puVar15 + 1;
    } while (puVar15 != puVar13);
  }
  fn_002feef8(puVar12,(int)puVar18 - (int)puVar12 >> 2,0);
  return;
}


