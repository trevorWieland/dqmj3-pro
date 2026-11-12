#include "007b1030_007b136c.h"



/* WARNING: Removing unreachable block (ram,0x007b14b0) */
/* WARNING: Removing unreachable block (ram,0x007b14c0) */
/* WARNING: Removing unreachable block (ram,0x007b14e0) */
/* WARNING: Removing unreachable block (ram,0x007b14f0) */
/* WARNING: Removing unreachable block (ram,0x007b14f4) */
/* WARNING: Removing unreachable block (ram,0x007b150c) */
/* WARNING: Removing unreachable block (ram,0x007b1514) */
/* WARNING: Removing unreachable block (ram,0x007b1524) */
/* WARNING: Removing unreachable block (ram,0x007b1538) */
/* WARNING: Removing unreachable block (ram,0x007b1540) */
/* WARNING: Removing unreachable block (ram,0x007b1544) */
/* WARNING: Removing unreachable block (ram,0x007b1548) */
/* WARNING: Removing unreachable block (ram,0x007b154c) */
/* WARNING: Removing unreachable block (ram,0x007b1550) */

void fn_007b136c(uint *param_1,uint *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  
  if ((int)param_2 - (int)param_1 < 0x41) {
    return;
  }
  do {
    if (param_3 == 0) {
      iVar10 = (int)param_2 - (int)param_1;
      iVar1 = iVar10 >> 2;
      if (7 < iVar10) {
        iVar12 = (iVar1 + -2) / 2;
        do {
          uVar7 = param_1[iVar12];
          iVar2 = iVar12;
          while( true ) {
            iVar6 = iVar2 * 2;
            iVar5 = iVar6 + 2;
            if (iVar1 <= iVar5) break;
            if (param_1[iVar5] < param_1[iVar6 + 1]) {
              iVar5 = iVar6 + 1;
            }
            param_1[iVar2] = param_1[iVar5];
            iVar2 = iVar5;
          }
          if (iVar5 == iVar1) {
            param_1[iVar2] = param_1[iVar6 + 1];
            iVar2 = iVar6 + 1;
          }
          while ((iVar6 = (iVar2 + -1) / 2, iVar12 < iVar2 && (param_1[iVar6] < uVar7))) {
            param_1[iVar2] = param_1[iVar6];
            iVar2 = iVar6;
          }
          bVar13 = iVar12 != 0;
          if (bVar13) {
            iVar12 = iVar12 + -1;
          }
          param_1[iVar2] = uVar7;
        } while (bVar13);
      }
      while (4 < iVar10) {
        if (param_1 != param_2) {
          uVar7 = param_2[-1];
          iVar1 = (int)param_2 + (-4 - (int)param_1) >> 2;
          iVar10 = 0;
          param_2[-1] = *param_1;
          iVar2 = 2;
          iVar12 = iVar10;
          if (2 < iVar1) {
            do {
              iVar10 = iVar2;
              if (param_1[iVar2] < param_1[iVar2 + -1]) {
                iVar10 = iVar2 + -1;
              }
              param_1[iVar12] = param_1[iVar10];
              iVar2 = iVar10 * 2 + 2;
              iVar12 = iVar10;
            } while (iVar2 < iVar1);
          }
          if (iVar2 == iVar1) {
            param_1[iVar10] = param_1[iVar2 + -1];
            iVar10 = iVar2 + -1;
          }
          while ((iVar1 = (iVar10 + -1) / 2, 0 < iVar10 && (param_1[iVar1] < uVar7))) {
            param_1[iVar10] = param_1[iVar1];
            iVar10 = iVar1;
          }
          param_1[iVar10] = uVar7;
        }
        param_2 = param_2 + -1;
        iVar10 = (int)param_2 - (int)param_1;
      }
      return;
    }
    uVar11 = *param_1;
    uVar9 = param_2[-1];
    puVar3 = param_1 + (((int)param_2 - (int)param_1 >> 2) - ((int)param_2 - (int)param_1 >> 0x1f)
                       >> 1);
    uVar7 = *puVar3;
    if (uVar11 < uVar7) {
      if (uVar9 <= uVar7) {
        if (uVar9 <= uVar11) goto LAB_007b162c;
LAB_007b163c:
        puVar3 = param_2 + -1;
      }
    }
    else if (uVar11 < uVar9) {
LAB_007b162c:
      puVar3 = param_1;
    }
    else if (uVar7 < uVar9) goto LAB_007b163c;
    uVar7 = *puVar3;
    puVar3 = param_1;
    puVar8 = param_2;
    while( true ) {
      uVar9 = *puVar3;
      puVar4 = puVar3;
      while (uVar9 < uVar7) {
        puVar4 = puVar4 + 1;
        uVar9 = *puVar4;
      }
      do {
        puVar8 = puVar8 + -1;
      } while (uVar7 < *puVar8);
      if (puVar8 <= puVar4) break;
      uVar9 = *puVar4;
      puVar3 = puVar4 + 1;
      *puVar4 = *puVar8;
      *puVar8 = uVar9;
    }
    param_3 = param_3 / 2;
    fn_007b136c(puVar4,param_2,param_3);
    param_2 = puVar4;
    if ((int)puVar4 - (int)param_1 < 0x41) {
      return;
    }
  } while( true );
}



/* WARNING: Removing unreachable block (ram,0x007b1170) */
/* WARNING: Removing unreachable block (ram,0x007b1180) */
/* WARNING: Removing unreachable block (ram,0x007b11a0) */
/* WARNING: Removing unreachable block (ram,0x007b11b0) */
/* WARNING: Removing unreachable block (ram,0x007b11b4) */
/* WARNING: Removing unreachable block (ram,0x007b11cc) */
/* WARNING: Removing unreachable block (ram,0x007b11d4) */
/* WARNING: Removing unreachable block (ram,0x007b11e4) */
/* WARNING: Removing unreachable block (ram,0x007b11f4) */
/* WARNING: Removing unreachable block (ram,0x007b11f8) */
/* WARNING: Removing unreachable block (ram,0x007b11fc) */
/* WARNING: Removing unreachable block (ram,0x007b1200) */
/* WARNING: Removing unreachable block (ram,0x007b1204) */
/* WARNING: Removing unreachable block (ram,0x007b1208) */
/* WARNING: Removing unreachable block (ram,0x007b120c) */

void fn_007b1030(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int unaff_r9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  
  if ((int)param_2 - (int)param_1 < 0x41) {
    return;
  }
  do {
    if (param_3 == 0) {
      iVar8 = (int)param_2 - (int)param_1;
      iVar6 = iVar8 >> 2;
      if (7 < iVar8) {
        iVar10 = (iVar6 + -2) / 2;
        do {
          iVar9 = param_1[iVar10];
          iVar2 = iVar10;
          while( true ) {
            iVar1 = iVar2 * 2;
            iVar5 = iVar1 + 2;
            if (iVar6 <= iVar5) break;
            unaff_r9 = param_1[iVar5];
            if (param_1[iVar1 + 1] < unaff_r9) {
              iVar5 = iVar1 + 1;
            }
            param_1[iVar2] = param_1[iVar5];
            iVar2 = iVar5;
          }
          if (iVar5 == iVar6) {
            param_1[iVar2] = param_1[iVar1 + 1];
            iVar2 = iVar1 + 1;
          }
          while( true ) {
            iVar5 = (iVar2 + -1) / 2;
            bVar12 = SBORROW4(iVar2,iVar10);
            iVar1 = iVar2 - iVar10;
            bVar11 = iVar2 == iVar10;
            if (iVar10 < iVar2) {
              unaff_r9 = param_1[iVar5];
              bVar12 = SBORROW4(unaff_r9,iVar9);
              iVar1 = unaff_r9 - iVar9;
              bVar11 = unaff_r9 == iVar9;
            }
            if (bVar11 || iVar1 < 0 != bVar12) break;
            param_1[iVar2] = unaff_r9;
            iVar2 = iVar5;
          }
          bVar11 = iVar10 != 0;
          if (bVar11) {
            iVar10 = iVar10 + -1;
          }
          param_1[iVar2] = iVar9;
        } while (bVar11);
      }
      while (4 < iVar8) {
        if (param_1 != param_2) {
          iVar9 = param_2[-1];
          iVar6 = (int)param_2 + (-4 - (int)param_1) >> 2;
          iVar8 = 0;
          param_2[-1] = *param_1;
          iVar2 = 2;
          iVar10 = iVar8;
          if (2 < iVar6) {
            do {
              iVar8 = iVar2;
              if (param_1[iVar2 + -1] < param_1[iVar2]) {
                iVar8 = iVar2 + -1;
              }
              param_1[iVar10] = param_1[iVar8];
              iVar2 = iVar8 * 2 + 2;
              iVar10 = iVar8;
            } while (iVar2 < iVar6);
          }
          if (iVar2 == iVar6) {
            iVar6 = param_1[iVar2 + -1];
            param_1[iVar8] = iVar6;
            iVar8 = iVar2 + -1;
          }
          while( true ) {
            bVar11 = iVar8 == 0;
            iVar10 = (iVar8 + -1) / 2;
            iVar2 = iVar8;
            if (0 < iVar8) {
              iVar6 = param_1[iVar10];
              iVar2 = iVar6 - iVar9;
              bVar11 = iVar6 == iVar9;
            }
            if (bVar11 || iVar2 < 0 != (0 < iVar8 && SBORROW4(iVar6,iVar9))) break;
            param_1[iVar8] = iVar6;
            iVar8 = iVar10;
          }
          param_1[iVar8] = iVar9;
        }
        param_2 = param_2 + -1;
        iVar8 = (int)param_2 - (int)param_1;
      }
      return;
    }
    iVar10 = *param_1;
    iVar8 = param_2[-1];
    piVar3 = param_1 + (((int)param_2 - (int)param_1 >> 2) - ((int)param_2 - (int)param_1 >> 0x1f)
                       >> 1);
    iVar6 = *piVar3;
    if (iVar6 < iVar10) {
      if (iVar6 <= iVar8) {
        if (iVar10 <= iVar8) goto LAB_007b12e4;
LAB_007b12f4:
        piVar3 = param_2 + -1;
      }
    }
    else if (iVar8 < iVar10) {
LAB_007b12e4:
      piVar3 = param_1;
    }
    else if (iVar8 < iVar6) goto LAB_007b12f4;
    iVar6 = *piVar3;
    piVar3 = param_1;
    piVar7 = param_2;
    while( true ) {
      iVar8 = *piVar3;
      piVar4 = piVar3;
      while (iVar6 < iVar8) {
        piVar4 = piVar4 + 1;
        iVar8 = *piVar4;
      }
      do {
        piVar7 = piVar7 + -1;
      } while (*piVar7 < iVar6);
      if (piVar7 <= piVar4) break;
      iVar8 = *piVar4;
      piVar3 = piVar4 + 1;
      *piVar4 = *piVar7;
      *piVar7 = iVar8;
    }
    param_3 = param_3 / 2;
    fn_007b1030(piVar4,param_2,param_3);
    param_2 = piVar4;
    if ((int)piVar4 - (int)param_1 < 0x41) {
      return;
    }
  } while( true );
}


