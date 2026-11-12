#include "007afecc_007b03ac.h"



/* WARNING: Removing unreachable block (ram,0x007b0570) */
/* WARNING: Removing unreachable block (ram,0x007b0584) */
/* WARNING: Removing unreachable block (ram,0x007b0594) */
/* WARNING: Removing unreachable block (ram,0x007b05c0) */
/* WARNING: Removing unreachable block (ram,0x007b05d4) */
/* WARNING: Removing unreachable block (ram,0x007b05d8) */
/* WARNING: Removing unreachable block (ram,0x007b0600) */
/* WARNING: Removing unreachable block (ram,0x007b0608) */
/* WARNING: Removing unreachable block (ram,0x007b0628) */
/* WARNING: Removing unreachable block (ram,0x007b0668) */
/* WARNING: Removing unreachable block (ram,0x007b0670) */
/* WARNING: Removing unreachable block (ram,0x007b063c) */
/* WARNING: Removing unreachable block (ram,0x007b0684) */
/* WARNING: Removing unreachable block (ram,0x007b0698) */

void fn_007b03ac(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  if ((int)param_2 - (int)param_1 < 0xc1) {
    return;
  }
  do {
    if (param_3 == 0) {
      iVar5 = (int)param_2 - (int)param_1;
      if (0x17 < iVar5) {
        iVar8 = iVar5 / 0xc;
        iVar7 = (iVar8 + -2) / 2;
        do {
          puVar2 = param_1 + iVar7 * 3;
          iVar9 = puVar2[1];
          uVar10 = *puVar2;
          uVar14 = puVar2[2];
          iVar6 = iVar7;
          while( true ) {
            iVar11 = iVar6 * 2;
            iVar4 = iVar11 + 2;
            if (iVar8 <= iVar4) break;
            if ((int)param_1[iVar4 * 3 + 1] < (int)param_1[iVar4 * 3 + -2]) {
              iVar4 = iVar11 + 1;
            }
            puVar12 = param_1 + iVar6 * 3;
            puVar2 = param_1 + iVar4 * 3;
            uVar15 = puVar2[1];
            uVar16 = puVar2[2];
            *puVar12 = *puVar2;
            puVar12[1] = uVar15;
            puVar12[2] = uVar16;
            iVar6 = iVar4;
          }
          iVar1 = iVar6;
          if (iVar4 == iVar8) {
            iVar1 = iVar11 + 1;
            uVar15 = param_1[iVar4 * 3 + -2];
            uVar16 = param_1[iVar4 * 3 + -1];
            puVar2 = param_1 + iVar6 * 3;
            *puVar2 = param_1[iVar4 * 3 + -3];
            puVar2[1] = uVar15;
            puVar2[2] = uVar16;
          }
          while (iVar6 = (iVar1 + -1) / 2, iVar7 < iVar1) {
            puVar2 = param_1 + iVar6 * 3;
            iVar11 = puVar2[1];
            if (iVar9 <= iVar11) break;
            puVar12 = param_1 + iVar1 * 3;
            uVar15 = puVar2[2];
            *puVar12 = *puVar2;
            puVar12[1] = iVar11;
            puVar12[2] = uVar15;
            iVar1 = iVar6;
          }
          bVar13 = iVar7 != 0;
          puVar2 = param_1 + iVar1 * 3;
          if (bVar13) {
            iVar7 = iVar7 + -1;
          }
          *puVar2 = uVar10;
          puVar2[1] = iVar9;
          puVar2[2] = uVar14;
        } while (bVar13);
      }
      do {
        if (iVar5 < 0xd) {
          return;
        }
        if (param_1 != param_2) {
          uVar10 = param_1[1];
          uVar14 = param_1[2];
          iVar9 = param_2[-2];
          uVar16 = param_2[-3];
          uVar15 = param_2[-1];
          param_2[-3] = *param_1;
          param_2[-2] = uVar10;
          param_2[-1] = uVar14;
          iVar7 = 0;
          iVar5 = ((int)(param_2 + -3) - (int)param_1) / 0xc;
          iVar6 = 2;
          iVar8 = iVar7;
          if (2 < iVar5) {
            do {
              iVar7 = iVar6;
              if ((int)param_1[iVar6 * 3 + 1] < (int)param_1[iVar6 * 3 + -2]) {
                iVar7 = iVar6 + -1;
              }
              puVar2 = param_1 + iVar7 * 3;
              uVar14 = puVar2[1];
              uVar10 = puVar2[2];
              puVar12 = param_1 + iVar8 * 3;
              *puVar12 = *puVar2;
              iVar6 = iVar7 * 2 + 2;
              puVar12[1] = uVar14;
              puVar12[2] = uVar10;
              iVar8 = iVar7;
            } while (iVar6 < iVar5);
          }
          if (iVar6 == iVar5) {
            uVar10 = param_1[iVar6 * 3 + -2];
            uVar14 = param_1[iVar6 * 3 + -1];
            puVar2 = param_1 + iVar7 * 3;
            *puVar2 = param_1[iVar6 * 3 + -3];
            puVar2[1] = uVar10;
            puVar2[2] = uVar14;
            iVar7 = iVar6 + -1;
          }
          while (iVar5 = (iVar7 + -1) / 2, 0 < iVar7) {
            puVar2 = param_1 + iVar5 * 3;
            iVar8 = puVar2[1];
            if (iVar9 <= iVar8) break;
            puVar12 = param_1 + iVar7 * 3;
            uVar10 = puVar2[2];
            *puVar12 = *puVar2;
            puVar12[1] = iVar8;
            puVar12[2] = uVar10;
            iVar7 = iVar5;
          }
          puVar2 = param_1 + iVar7 * 3;
          *puVar2 = uVar16;
          puVar2[1] = iVar9;
          puVar2[2] = uVar15;
        }
        param_2 = param_2 + -3;
        iVar5 = (int)param_2 - (int)param_1;
      } while( true );
    }
    iVar7 = param_2[-2];
    iVar5 = param_1[1];
    puVar2 = param_1 + (((int)param_2 - (int)param_1) / 0x18) * 3;
    iVar8 = puVar2[1];
    if (iVar5 < iVar8) {
      if (iVar7 <= iVar8) {
        if (iVar7 <= iVar5) goto LAB_007b041c;
LAB_007b07f8:
        puVar2 = param_2 + -3;
      }
    }
    else if (iVar5 < iVar7) {
LAB_007b041c:
      puVar2 = param_1;
    }
    else if (iVar8 < iVar7) goto LAB_007b07f8;
    iVar5 = puVar2[1];
    puVar2 = param_2;
    puVar12 = param_1;
    while( true ) {
      for (; iVar7 = puVar12[1], iVar7 < iVar5; puVar12 = puVar12 + 3) {
      }
      do {
        puVar3 = puVar2;
        iVar8 = puVar3[-2];
        puVar2 = puVar3 + -3;
      } while (iVar5 < iVar8);
      if (puVar2 <= puVar12) break;
      uVar10 = puVar3[-1];
      uVar14 = *puVar12;
      uVar15 = puVar12[2];
      *puVar12 = *puVar2;
      puVar12[1] = iVar8;
      puVar12[2] = uVar10;
      puVar12 = puVar12 + 3;
      *puVar2 = uVar14;
      puVar3[-2] = iVar7;
      puVar3[-1] = uVar15;
    }
    param_3 = param_3 / 2;
    fn_007b03ac(puVar12,param_2,param_3);
    param_2 = puVar12;
    if ((int)puVar12 - (int)param_1 < 0xc1) {
      return;
    }
  } while( true );
}



/* WARNING: Removing unreachable block (ram,0x007b0090) */
/* WARNING: Removing unreachable block (ram,0x007b00a4) */
/* WARNING: Removing unreachable block (ram,0x007b00b4) */
/* WARNING: Removing unreachable block (ram,0x007b00e0) */
/* WARNING: Removing unreachable block (ram,0x007b00f4) */
/* WARNING: Removing unreachable block (ram,0x007b00f8) */
/* WARNING: Removing unreachable block (ram,0x007b0120) */
/* WARNING: Removing unreachable block (ram,0x007b0128) */
/* WARNING: Removing unreachable block (ram,0x007b0148) */
/* WARNING: Removing unreachable block (ram,0x007b0188) */
/* WARNING: Removing unreachable block (ram,0x007b0190) */
/* WARNING: Removing unreachable block (ram,0x007b015c) */
/* WARNING: Removing unreachable block (ram,0x007b01a4) */
/* WARNING: Removing unreachable block (ram,0x007b01b8) */

void fn_007afecc(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  if ((int)param_2 - (int)param_1 < 0xc1) {
    return;
  }
  do {
    if (param_3 == 0) {
      iVar5 = (int)param_2 - (int)param_1;
      if (0x17 < iVar5) {
        iVar8 = iVar5 / 0xc;
        iVar7 = (iVar8 + -2) / 2;
        do {
          puVar2 = param_1 + iVar7 * 3;
          iVar9 = puVar2[1];
          uVar10 = *puVar2;
          uVar14 = puVar2[2];
          iVar6 = iVar7;
          while( true ) {
            iVar11 = iVar6 * 2;
            iVar4 = iVar11 + 2;
            if (iVar8 <= iVar4) break;
            if ((int)param_1[iVar4 * 3 + -2] < (int)param_1[iVar4 * 3 + 1]) {
              iVar4 = iVar11 + 1;
            }
            puVar12 = param_1 + iVar6 * 3;
            puVar2 = param_1 + iVar4 * 3;
            uVar15 = puVar2[1];
            uVar16 = puVar2[2];
            *puVar12 = *puVar2;
            puVar12[1] = uVar15;
            puVar12[2] = uVar16;
            iVar6 = iVar4;
          }
          iVar1 = iVar6;
          if (iVar4 == iVar8) {
            iVar1 = iVar11 + 1;
            uVar15 = param_1[iVar4 * 3 + -2];
            uVar16 = param_1[iVar4 * 3 + -1];
            puVar2 = param_1 + iVar6 * 3;
            *puVar2 = param_1[iVar4 * 3 + -3];
            puVar2[1] = uVar15;
            puVar2[2] = uVar16;
          }
          while (iVar6 = (iVar1 + -1) / 2, iVar7 < iVar1) {
            puVar2 = param_1 + iVar6 * 3;
            iVar11 = puVar2[1];
            if (iVar11 <= iVar9) break;
            puVar12 = param_1 + iVar1 * 3;
            uVar15 = puVar2[2];
            *puVar12 = *puVar2;
            puVar12[1] = iVar11;
            puVar12[2] = uVar15;
            iVar1 = iVar6;
          }
          bVar13 = iVar7 != 0;
          puVar2 = param_1 + iVar1 * 3;
          if (bVar13) {
            iVar7 = iVar7 + -1;
          }
          *puVar2 = uVar10;
          puVar2[1] = iVar9;
          puVar2[2] = uVar14;
        } while (bVar13);
      }
      do {
        if (iVar5 < 0xd) {
          return;
        }
        if (param_1 != param_2) {
          uVar10 = param_1[1];
          uVar14 = param_1[2];
          iVar9 = param_2[-2];
          uVar16 = param_2[-3];
          uVar15 = param_2[-1];
          param_2[-3] = *param_1;
          param_2[-2] = uVar10;
          param_2[-1] = uVar14;
          iVar7 = 0;
          iVar5 = ((int)(param_2 + -3) - (int)param_1) / 0xc;
          iVar6 = 2;
          iVar8 = iVar7;
          if (2 < iVar5) {
            do {
              iVar7 = iVar6;
              if ((int)param_1[iVar6 * 3 + -2] < (int)param_1[iVar6 * 3 + 1]) {
                iVar7 = iVar6 + -1;
              }
              puVar2 = param_1 + iVar7 * 3;
              uVar14 = puVar2[1];
              uVar10 = puVar2[2];
              puVar12 = param_1 + iVar8 * 3;
              *puVar12 = *puVar2;
              iVar6 = iVar7 * 2 + 2;
              puVar12[1] = uVar14;
              puVar12[2] = uVar10;
              iVar8 = iVar7;
            } while (iVar6 < iVar5);
          }
          if (iVar6 == iVar5) {
            uVar10 = param_1[iVar6 * 3 + -2];
            uVar14 = param_1[iVar6 * 3 + -1];
            puVar2 = param_1 + iVar7 * 3;
            *puVar2 = param_1[iVar6 * 3 + -3];
            puVar2[1] = uVar10;
            puVar2[2] = uVar14;
            iVar7 = iVar6 + -1;
          }
          while (iVar5 = (iVar7 + -1) / 2, 0 < iVar7) {
            puVar2 = param_1 + iVar5 * 3;
            iVar8 = puVar2[1];
            if (iVar8 <= iVar9) break;
            puVar12 = param_1 + iVar7 * 3;
            uVar10 = puVar2[2];
            *puVar12 = *puVar2;
            puVar12[1] = iVar8;
            puVar12[2] = uVar10;
            iVar7 = iVar5;
          }
          puVar2 = param_1 + iVar7 * 3;
          *puVar2 = uVar16;
          puVar2[1] = iVar9;
          puVar2[2] = uVar15;
        }
        param_2 = param_2 + -3;
        iVar5 = (int)param_2 - (int)param_1;
      } while( true );
    }
    iVar7 = param_2[-2];
    iVar5 = param_1[1];
    puVar2 = param_1 + (((int)param_2 - (int)param_1) / 0x18) * 3;
    iVar8 = puVar2[1];
    if (iVar8 < iVar5) {
      if (iVar8 <= iVar7) {
        if (iVar5 <= iVar7) goto LAB_007aff3c;
LAB_007b0318:
        puVar2 = param_2 + -3;
      }
    }
    else if (iVar7 < iVar5) {
LAB_007aff3c:
      puVar2 = param_1;
    }
    else if (iVar7 < iVar8) goto LAB_007b0318;
    iVar5 = puVar2[1];
    puVar2 = param_2;
    puVar12 = param_1;
    while( true ) {
      for (; iVar7 = puVar12[1], iVar5 < iVar7; puVar12 = puVar12 + 3) {
      }
      do {
        puVar3 = puVar2;
        iVar8 = puVar3[-2];
        puVar2 = puVar3 + -3;
      } while (iVar8 < iVar5);
      if (puVar2 <= puVar12) break;
      uVar10 = puVar3[-1];
      uVar14 = *puVar12;
      uVar15 = puVar12[2];
      *puVar12 = *puVar2;
      puVar12[1] = iVar8;
      puVar12[2] = uVar10;
      puVar12 = puVar12 + 3;
      *puVar2 = uVar14;
      puVar3[-2] = iVar7;
      puVar3[-1] = uVar15;
    }
    param_3 = param_3 / 2;
    fn_007afecc(puVar12,param_2,param_3);
    param_2 = puVar12;
    if ((int)puVar12 - (int)param_1 < 0xc1) {
      return;
    }
  } while( true );
}


