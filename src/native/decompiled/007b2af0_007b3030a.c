#include "007b2af0_007b3030a.h"



/* WARNING: Removing unreachable block (ram,0x007b2ce0) */
/* WARNING: Removing unreachable block (ram,0x007b2d04) */
/* WARNING: Removing unreachable block (ram,0x007b2d3c) */
/* WARNING: Removing unreachable block (ram,0x007b2d5c) */
/* WARNING: Removing unreachable block (ram,0x007b2d60) */
/* WARNING: Removing unreachable block (ram,0x007b2d80) */
/* WARNING: Removing unreachable block (ram,0x007b2d88) */
/* WARNING: Removing unreachable block (ram,0x007b2d9c) */
/* WARNING: Removing unreachable block (ram,0x007b2dd4) */
/* WARNING: Removing unreachable block (ram,0x007b2ddc) */
/* WARNING: Removing unreachable block (ram,0x007b2db8) */
/* WARNING: Removing unreachable block (ram,0x007b2e00) */
/* WARNING: Removing unreachable block (ram,0x007b2e08) */

void fn_007b2af0(short *param_1,short *param_2,int param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  short *psVar11;
  int iVar12;
  bool bVar13;
  
  if ((int)param_2 - (int)param_1 < 0x21) {
    return;
  }
  do {
    if (param_3 == 0) {
      iVar4 = (int)param_2 - (int)param_1;
      iVar3 = iVar4 >> 1;
      if (3 < iVar4) {
        iVar12 = (iVar3 + -2) / 2;
        do {
          sVar1 = param_1[iVar12];
          iVar7 = iVar12;
          while( true ) {
            iVar9 = iVar7 * 2;
            iVar8 = iVar9 + 2;
            if (iVar3 <= iVar8) break;
            iVar5 = fn_0020aca8((int)param_1[iVar8]);
            iVar6 = fn_0020aca8((int)(param_1 + iVar8)[-1]);
            if (iVar5 < iVar6) {
              iVar8 = iVar9 + 1;
            }
            param_1[iVar7] = param_1[iVar8];
            iVar7 = iVar8;
          }
          if (iVar8 == iVar3) {
            psVar11 = param_1 + iVar7;
            iVar7 = iVar9 + 1;
            *psVar11 = param_1[iVar9 + 1];
          }
          while (iVar9 = (iVar7 + -1) / 2, iVar12 < iVar7) {
            iVar8 = fn_0020aca8((int)param_1[iVar9]);
            iVar5 = fn_0020aca8((int)sVar1);
            if (iVar5 <= iVar8) break;
            param_1[iVar7] = param_1[iVar9];
            iVar7 = iVar9;
          }
          bVar13 = iVar12 != 0;
          if (bVar13) {
            iVar12 = iVar12 + -1;
          }
          param_1[iVar7] = sVar1;
        } while (bVar13);
      }
      do {
        if (iVar4 < 3) {
          return;
        }
        if (param_1 != param_2) {
          iVar3 = (int)param_2 + (-2 - (int)param_1) >> 1;
          sVar1 = param_2[-1];
          iVar4 = 0;
          param_2[-1] = *param_1;
          iVar7 = 2;
          iVar12 = iVar4;
          if (2 < iVar3) {
            do {
              iVar9 = fn_0020aca8((int)param_1[iVar7]);
              iVar8 = fn_0020aca8((int)(param_1 + iVar7)[-1]);
              iVar4 = iVar7;
              if (iVar9 < iVar8) {
                iVar4 = iVar7 + -1;
              }
              iVar7 = iVar4 * 2 + 2;
              param_1[iVar12] = param_1[iVar4];
              iVar12 = iVar4;
            } while (iVar7 < iVar3);
          }
          if (iVar7 == iVar3) {
            psVar11 = param_1 + iVar4;
            iVar4 = iVar7 + -1;
            *psVar11 = param_1[iVar7 + -1];
          }
          iVar3 = (iVar4 + -1) - (iVar4 + -1 >> 0x1f);
          while (iVar12 = iVar3 >> 1, 0 < iVar4) {
            iVar3 = fn_0020aca8((int)param_1[iVar12]);
            iVar7 = fn_0020aca8((int)sVar1);
            if (iVar7 <= iVar3) break;
            param_1[iVar4] = param_1[iVar12];
            iVar3 = (iVar12 + -1) - (iVar12 + -1 >> 0x1f);
            iVar4 = iVar12;
          }
          param_1[iVar4] = sVar1;
        }
        param_2 = param_2 + -1;
        iVar4 = (int)param_2 - (int)param_1;
      } while( true );
    }
    psVar11 = (short *)((((int)param_2 - (int)param_1 >> 1) - ((int)param_2 - (int)param_1 >> 0x1f)
                        & 0xfffffffeU) + (int)param_1);
    iVar3 = fn_0020aca8((int)*param_1);
    iVar4 = fn_0020aca8((int)*psVar11);
    if (iVar3 < iVar4) {
      iVar3 = fn_0020aca8((int)*psVar11);
      iVar4 = fn_0020aca8((int)param_2[-1]);
      if (iVar4 <= iVar3) {
        iVar3 = fn_0020aca8((int)*param_1);
        iVar4 = fn_0020aca8((int)param_2[-1]);
        if (iVar4 <= iVar3) goto LAB_007b2f70;
LAB_007b2f98:
        psVar11 = param_2 + -1;
      }
    }
    else {
      iVar3 = fn_0020aca8((int)*param_1);
      iVar4 = fn_0020aca8((int)param_2[-1]);
      if (iVar3 < iVar4) {
LAB_007b2f70:
        psVar11 = param_1;
      }
      else {
        iVar3 = fn_0020aca8((int)*psVar11);
        iVar4 = fn_0020aca8((int)param_2[-1]);
        if (iVar3 < iVar4) goto LAB_007b2f98;
      }
    }
    sVar1 = *psVar11;
    psVar11 = param_1;
    psVar10 = param_2;
    while( true ) {
      while( true ) {
        iVar3 = fn_0020aca8((int)*psVar11);
        iVar4 = fn_0020aca8((int)sVar1);
        if (iVar4 <= iVar3) break;
        psVar11 = psVar11 + 1;
      }
      do {
        iVar3 = fn_0020aca8((int)sVar1);
        psVar10 = psVar10 + -1;
        iVar4 = fn_0020aca8((int)*psVar10);
      } while (iVar3 < iVar4);
      if (psVar10 <= psVar11) break;
      sVar2 = *psVar11;
      *psVar11 = *psVar10;
      *psVar10 = sVar2;
      psVar11 = psVar11 + 1;
    }
    param_3 = param_3 / 2;
    fn_007b2af0(psVar11,param_2,param_3);
    param_2 = psVar11;
    if ((int)psVar11 - (int)param_1 < 0x21) {
      return;
    }
  } while( true );
}


