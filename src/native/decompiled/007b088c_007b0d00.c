#include "007b088c_007b0d00.h"



/* WARNING: Removing unreachable block (ram,0x007b0e2c) */
/* WARNING: Removing unreachable block (ram,0x007b0e3c) */
/* WARNING: Removing unreachable block (ram,0x007b0e5c) */
/* WARNING: Removing unreachable block (ram,0x007b0e6c) */
/* WARNING: Removing unreachable block (ram,0x007b0e70) */
/* WARNING: Removing unreachable block (ram,0x007b0e88) */
/* WARNING: Removing unreachable block (ram,0x007b0e90) */
/* WARNING: Removing unreachable block (ram,0x007b0ea0) */
/* WARNING: Removing unreachable block (ram,0x007b0ea4) */
/* WARNING: Removing unreachable block (ram,0x007b0eb4) */
/* WARNING: Removing unreachable block (ram,0x007b0eb8) */
/* WARNING: Removing unreachable block (ram,0x007b0ebc) */
/* WARNING: Removing unreachable block (ram,0x007b0ec0) */
/* WARNING: Removing unreachable block (ram,0x007b0ec4) */
/* WARNING: Removing unreachable block (ram,0x007b0ec8) */
/* WARNING: Removing unreachable block (ram,0x007b0ecc) */

void fn_007b0d00(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int unaff_r9;
  int iVar8;
  bool bVar9;
  bool bVar10;
  
  if ((int)param_2 - (int)param_1 >> 2 < 0x11) {
    return;
  }
  do {
    if (param_3 == 0) {
      iVar3 = (int)param_2 - (int)param_1 >> 2;
      if (1 < iVar3) {
        iVar4 = (iVar3 + -2) / 2;
        do {
          iVar7 = param_1[iVar4];
          iVar8 = iVar4;
          while( true ) {
            iVar5 = iVar8 * 2;
            iVar2 = iVar5 + 2;
            if (iVar3 <= iVar2) break;
            unaff_r9 = param_1[iVar2];
            if (unaff_r9 < param_1[iVar5 + 1]) {
              iVar2 = iVar5 + 1;
            }
            param_1[iVar8] = param_1[iVar2];
            iVar8 = iVar2;
          }
          if (iVar2 == iVar3) {
            param_1[iVar8] = param_1[iVar5 + 1];
            iVar8 = iVar5 + 1;
          }
          while( true ) {
            bVar10 = SBORROW4(iVar8,iVar4);
            iVar2 = iVar8 - iVar4;
            bVar9 = iVar8 == iVar4;
            iVar5 = (iVar8 + -1) / 2;
            if (iVar4 < iVar8) {
              unaff_r9 = param_1[iVar5];
              bVar10 = SBORROW4(iVar7,unaff_r9);
              iVar2 = iVar7 - unaff_r9;
              bVar9 = iVar7 == unaff_r9;
            }
            if (bVar9 || iVar2 < 0 != bVar10) break;
            param_1[iVar8] = unaff_r9;
            iVar8 = iVar5;
          }
          bVar9 = iVar4 != 0;
          if (bVar9) {
            iVar4 = iVar4 + -1;
          }
          param_1[iVar8] = iVar7;
        } while (bVar9);
      }
      while (1 < iVar3) {
        if (param_1 != param_2) {
          iVar5 = param_2[-1];
          iVar3 = (int)param_2 + (-4 - (int)param_1) >> 2;
          param_2[-1] = *param_1;
          iVar4 = 0;
          iVar7 = 2;
          iVar8 = iVar4;
          if (2 < iVar3) {
            do {
              iVar4 = iVar7;
              if (param_1[iVar7] < param_1[iVar7 + -1]) {
                iVar4 = iVar7 + -1;
              }
              param_1[iVar8] = param_1[iVar4];
              iVar7 = iVar4 * 2 + 2;
              iVar8 = iVar4;
            } while (iVar7 < iVar3);
          }
          if (iVar7 == iVar3) {
            iVar3 = param_1[iVar7 + -1];
            param_1[iVar4] = iVar3;
            iVar4 = iVar7 + -1;
          }
          while( true ) {
            bVar9 = iVar4 == 0;
            iVar8 = (iVar4 + -1) / 2;
            iVar7 = iVar4;
            if (0 < iVar4) {
              iVar3 = param_1[iVar8];
              iVar7 = iVar5 - iVar3;
              bVar9 = iVar5 == iVar3;
            }
            if (bVar9 || iVar7 < 0 != (0 < iVar4 && SBORROW4(iVar5,iVar3))) break;
            param_1[iVar4] = iVar3;
            iVar4 = iVar8;
          }
          param_1[iVar4] = iVar5;
        }
        param_2 = param_2 + -1;
        iVar3 = (int)param_2 - (int)param_1 >> 2;
      }
      return;
    }
    iVar8 = param_2[-1];
    iVar3 = *param_1;
    iVar4 = param_1[((int)param_2 - (int)param_1 >> 2) - ((int)param_2 - (int)param_1 >> 0x1f) >> 1]
    ;
    piVar1 = param_2;
    piVar6 = param_1;
    if (iVar3 < iVar4) {
      if (iVar4 < iVar8) {
LAB_007b0d5c:
        iVar3 = iVar4;
      }
      else if (iVar3 < iVar8) {
LAB_007b0fa8:
        iVar3 = iVar8;
      }
    }
    else if (iVar8 <= iVar3) {
      if (iVar4 < iVar8) goto LAB_007b0fa8;
      goto LAB_007b0d5c;
    }
    while( true ) {
      iVar4 = *piVar6;
      while (iVar4 < iVar3) {
        piVar6 = piVar6 + 1;
        iVar4 = *piVar6;
      }
      do {
        piVar1 = piVar1 + -1;
      } while (iVar3 < *piVar1);
      if (piVar1 <= piVar6) break;
      iVar4 = *piVar6;
      *piVar6 = *piVar1;
      *piVar1 = iVar4;
      piVar6 = piVar6 + 1;
    }
    param_3 = param_3 / 2;
    fn_007b0d00(piVar6,param_2,param_3);
    param_2 = piVar6;
    if ((int)piVar6 - (int)param_1 >> 2 < 0x11) {
      return;
    }
  } while( true );
}



/* WARNING: Removing unreachable block (ram,0x007b0a1c) */
/* WARNING: Removing unreachable block (ram,0x007b0a34) */
/* WARNING: Removing unreachable block (ram,0x007b0a68) */
/* WARNING: Removing unreachable block (ram,0x007b0a7c) */
/* WARNING: Removing unreachable block (ram,0x007b0a80) */
/* WARNING: Removing unreachable block (ram,0x007b0a98) */
/* WARNING: Removing unreachable block (ram,0x007b0aa0) */
/* WARNING: Removing unreachable block (ram,0x007b0ab0) */
/* WARNING: Removing unreachable block (ram,0x007b0ae0) */
/* WARNING: Removing unreachable block (ram,0x007b0ae8) */
/* WARNING: Removing unreachable block (ram,0x007b0ac8) */
/* WARNING: Removing unreachable block (ram,0x007b0afc) */
/* WARNING: Removing unreachable block (ram,0x007b0b00) */

void fn_007b088c(undefined4 *param_1,undefined4 *param_2,int param_3,code *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  bool bVar13;
  
  if ((int)param_2 - (int)param_1 < 0x41) {
    return;
  }
  do {
    if (param_3 == 0) {
      iVar2 = (int)param_2 - (int)param_1;
      iVar1 = iVar2 >> 2;
      if (7 < iVar2) {
        iVar10 = (iVar1 + -2) / 2;
        do {
          uVar12 = param_1[iVar10];
          iVar5 = iVar10;
          while( true ) {
            iVar11 = iVar5 * 2;
            iVar8 = iVar11 + 2;
            if (iVar1 <= iVar8) break;
            iVar3 = (*param_4)(param_1[iVar8],param_1[iVar11 + 1]);
            if (iVar3 != 0) {
              iVar8 = iVar11 + 1;
            }
            param_1[iVar5] = param_1[iVar8];
            iVar5 = iVar8;
          }
          if (iVar8 == iVar1) {
            param_1[iVar5] = param_1[iVar11 + 1];
            iVar5 = iVar11 + 1;
          }
          while ((iVar11 = (iVar5 + -1) / 2, iVar10 < iVar5 &&
                 (iVar8 = (*param_4)(param_1[iVar11],uVar12), iVar8 != 0))) {
            param_1[iVar5] = param_1[iVar11];
            iVar5 = iVar11;
          }
          bVar13 = iVar10 != 0;
          if (bVar13) {
            iVar10 = iVar10 + -1;
          }
          param_1[iVar5] = uVar12;
        } while (bVar13);
      }
      while (4 < iVar2) {
        if (param_1 != param_2) {
          iVar1 = (int)param_2 + (-4 - (int)param_1) >> 2;
          uVar12 = param_2[-1];
          iVar2 = 0;
          param_2[-1] = *param_1;
          iVar5 = 2;
          iVar10 = iVar2;
          if (2 < iVar1) {
            do {
              iVar11 = (*param_4)(param_1[iVar5],param_1[iVar5 + -1]);
              iVar2 = iVar5;
              if (iVar11 != 0) {
                iVar2 = iVar5 + -1;
              }
              param_1[iVar10] = param_1[iVar2];
              iVar5 = iVar2 * 2 + 2;
              iVar10 = iVar2;
            } while (iVar5 < iVar1);
          }
          if (iVar5 == iVar1) {
            param_1[iVar2] = param_1[iVar5 + -1];
            iVar2 = iVar5 + -1;
          }
          while ((iVar1 = (iVar2 + -1) / 2, 0 < iVar2 &&
                 (iVar10 = (*param_4)(param_1[iVar1],uVar12), iVar10 != 0))) {
            param_1[iVar2] = param_1[iVar1];
            iVar2 = iVar1;
          }
          param_1[iVar2] = uVar12;
        }
        param_2 = param_2 + -1;
        iVar2 = (int)param_2 - (int)param_1;
      }
      return;
    }
    puVar6 = param_1 + (((int)param_2 - (int)param_1 >> 2) - ((int)param_2 - (int)param_1 >> 0x1f)
                       >> 1);
    iVar1 = (*param_4)(*param_1,*puVar6);
    if (iVar1 == 0) {
      iVar1 = (*param_4)(*param_1,param_2[-1]);
      if (iVar1 == 0) {
        iVar1 = (*param_4)(*puVar6,param_2[-1]);
        if (iVar1 != 0) goto LAB_007b0c60;
      }
      else {
LAB_007b0c44:
        puVar6 = param_1;
      }
    }
    else {
      iVar1 = (*param_4)(*puVar6);
      if (iVar1 == 0) {
        iVar1 = (*param_4)(*param_1,param_2[-1]);
        if (iVar1 == 0) goto LAB_007b0c44;
LAB_007b0c60:
        puVar6 = param_2 + -1;
      }
    }
    uVar12 = *puVar6;
    puVar6 = param_1;
    puVar9 = param_2;
    while( true ) {
      iVar1 = (*param_4)(*puVar6,uVar12);
      puVar7 = puVar6;
      while (iVar1 != 0) {
        puVar7 = puVar7 + 1;
        iVar1 = (*param_4)(*puVar7,uVar12);
      }
      do {
        puVar9 = puVar9 + -1;
        iVar1 = (*param_4)(uVar12,*puVar9);
      } while (iVar1 != 0);
      if (puVar9 <= puVar7) break;
      uVar4 = *puVar7;
      puVar6 = puVar7 + 1;
      *puVar7 = *puVar9;
      *puVar9 = uVar4;
    }
    param_3 = param_3 / 2;
    fn_007b088c(puVar7,param_2,param_3,param_4);
    param_2 = puVar7;
    if ((int)puVar7 - (int)param_1 < 0x41) {
      return;
    }
  } while( true );
}


