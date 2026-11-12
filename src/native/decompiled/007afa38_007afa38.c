#include "007afa38_007afa38.h"



/* WARNING: Removing unreachable block (ram,0x007afbec) */
/* WARNING: Removing unreachable block (ram,0x007afc00) */
/* WARNING: Removing unreachable block (ram,0x007afc10) */
/* WARNING: Removing unreachable block (ram,0x007afc34) */
/* WARNING: Removing unreachable block (ram,0x007afc48) */
/* WARNING: Removing unreachable block (ram,0x007afc4c) */
/* WARNING: Removing unreachable block (ram,0x007afc74) */
/* WARNING: Removing unreachable block (ram,0x007afc7c) */
/* WARNING: Removing unreachable block (ram,0x007afc9c) */
/* WARNING: Removing unreachable block (ram,0x007afcd4) */
/* WARNING: Removing unreachable block (ram,0x007afcdc) */
/* WARNING: Removing unreachable block (ram,0x007afcb0) */
/* WARNING: Removing unreachable block (ram,0x007afcf0) */
/* WARNING: Removing unreachable block (ram,0x007afd00) */

void fn_007afa38(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  bool bVar16;
  
  if ((int)param_2 - (int)param_1 < 0xc1) {
    return;
  }
  do {
    if (param_3 == 0) {
      iVar6 = (int)param_2 - (int)param_1;
      if (0x17 < iVar6) {
        iVar9 = iVar6 / 0xc;
        iVar7 = (iVar9 + -2) / 2;
        do {
          puVar2 = param_1 + iVar7 * 3;
          uVar8 = *puVar2;
          uVar11 = puVar2[1];
          iVar10 = puVar2[2];
          iVar14 = iVar7;
          while( true ) {
            iVar12 = iVar14 * 2;
            iVar4 = iVar12 + 2;
            if (iVar9 <= iVar4) break;
            if ((int)param_1[iVar4 * 3 + -1] < (int)param_1[iVar4 * 3 + 2]) {
              iVar4 = iVar12 + 1;
            }
            puVar5 = param_1 + iVar14 * 3;
            puVar2 = param_1 + iVar4 * 3;
            uVar13 = puVar2[1];
            uVar15 = puVar2[2];
            *puVar5 = *puVar2;
            puVar5[1] = uVar13;
            puVar5[2] = uVar15;
            iVar14 = iVar4;
          }
          iVar1 = iVar14;
          if (iVar4 == iVar9) {
            iVar1 = iVar12 + 1;
            uVar13 = param_1[iVar4 * 3 + -2];
            uVar15 = param_1[iVar4 * 3 + -1];
            puVar2 = param_1 + iVar14 * 3;
            *puVar2 = param_1[iVar4 * 3 + -3];
            puVar2[1] = uVar13;
            puVar2[2] = uVar15;
          }
          while (iVar14 = (iVar1 + -1) / 2, iVar7 < iVar1) {
            puVar2 = param_1 + iVar14 * 3;
            iVar12 = puVar2[2];
            if (iVar12 <= iVar10) break;
            uVar13 = puVar2[1];
            puVar5 = param_1 + iVar1 * 3;
            *puVar5 = *puVar2;
            puVar5[1] = uVar13;
            puVar5[2] = iVar12;
            iVar1 = iVar14;
          }
          bVar16 = iVar7 != 0;
          puVar2 = param_1 + iVar1 * 3;
          if (bVar16) {
            iVar7 = iVar7 + -1;
          }
          *puVar2 = uVar8;
          puVar2[1] = uVar11;
          puVar2[2] = iVar10;
        } while (bVar16);
      }
      do {
        if (iVar6 < 0xd) {
          return;
        }
        if (param_1 != param_2) {
          uVar8 = param_1[1];
          uVar11 = param_1[2];
          puVar2 = param_2 + -3;
          iVar10 = param_2[-1];
          uVar13 = *puVar2;
          uVar15 = param_2[-2];
          *puVar2 = *param_1;
          param_2[-2] = uVar8;
          param_2[-1] = uVar11;
          iVar7 = 0;
          iVar6 = ((int)puVar2 - (int)param_1) / 0xc;
          iVar14 = 2;
          iVar9 = iVar7;
          if (2 < iVar6) {
            do {
              iVar7 = iVar14;
              if ((int)param_1[iVar14 * 3 + -1] < (int)param_1[iVar14 * 3 + 2]) {
                iVar7 = iVar14 + -1;
              }
              puVar2 = param_1 + iVar7 * 3;
              uVar8 = puVar2[1];
              uVar11 = puVar2[2];
              puVar5 = param_1 + iVar9 * 3;
              iVar14 = iVar7 * 2 + 2;
              *puVar5 = *puVar2;
              puVar5[1] = uVar8;
              puVar5[2] = uVar11;
              iVar9 = iVar7;
            } while (iVar14 < iVar6);
          }
          if (iVar14 == iVar6) {
            uVar8 = param_1[iVar14 * 3 + -2];
            uVar11 = param_1[iVar14 * 3 + -1];
            puVar2 = param_1 + iVar7 * 3;
            *puVar2 = param_1[iVar14 * 3 + -3];
            puVar2[1] = uVar8;
            puVar2[2] = uVar11;
            iVar7 = iVar14 + -1;
          }
          while (iVar6 = (iVar7 + -1) / 2, 0 < iVar7) {
            puVar2 = param_1 + iVar6 * 3;
            if ((int)puVar2[2] <= iVar10) break;
            uVar8 = *puVar2;
            uVar11 = puVar2[1];
            puVar5 = param_1 + iVar7 * 3;
            puVar5[2] = puVar2[2];
            *puVar5 = uVar8;
            puVar5[1] = uVar11;
            iVar7 = iVar6;
          }
          puVar2 = param_1 + iVar7 * 3;
          *puVar2 = uVar13;
          puVar2[1] = uVar15;
          puVar2[2] = iVar10;
        }
        param_2 = param_2 + -3;
        iVar6 = (int)param_2 - (int)param_1;
      } while( true );
    }
    iVar9 = param_2[-1];
    puVar2 = param_1 + (((int)param_2 - (int)param_1) / 0x18) * 3;
    iVar6 = param_1[2];
    iVar7 = puVar2[2];
    if (iVar7 < iVar6) {
      if (iVar7 <= iVar9) {
        if (iVar9 < iVar6) goto LAB_007afe44;
        goto LAB_007afaa8;
      }
    }
    else if (iVar9 < iVar6) {
LAB_007afaa8:
      puVar2 = param_1;
    }
    else if (iVar9 < iVar7) {
LAB_007afe44:
      puVar2 = param_2 + -3;
    }
    iVar6 = puVar2[2];
    puVar2 = param_2;
    puVar5 = param_1;
    while( true ) {
      while( true ) {
        iVar7 = puVar5[2];
        if (iVar7 <= iVar6) break;
        puVar5 = puVar5 + 3;
      }
      do {
        puVar3 = puVar2;
        puVar2 = puVar3 + -3;
      } while ((int)puVar3[-1] < iVar6);
      if (puVar2 <= puVar5) break;
      uVar11 = puVar3[-2];
      uVar13 = puVar3[-1];
      uVar8 = *puVar5;
      uVar15 = puVar5[1];
      *puVar5 = *puVar2;
      puVar5[1] = uVar11;
      puVar5[2] = uVar13;
      *puVar2 = uVar8;
      puVar3[-2] = uVar15;
      puVar3[-1] = iVar7;
      puVar5 = puVar5 + 3;
    }
    param_3 = param_3 / 2;
    fn_007afa38(puVar5,param_2,param_3);
    param_2 = puVar5;
    if ((int)puVar5 - (int)param_1 < 0xc1) {
      return;
    }
  } while( true );
}


