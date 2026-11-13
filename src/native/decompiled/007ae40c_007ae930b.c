#include "007ae40c_007ae930b.h"



/* WARNING: Removing unreachable block (ram,0x007aeaa4) */
/* WARNING: Removing unreachable block (ram,0x007aeab4) */
/* WARNING: Removing unreachable block (ram,0x007aead8) */
/* WARNING: Removing unreachable block (ram,0x007aeaec) */
/* WARNING: Removing unreachable block (ram,0x007aeaf0) */
/* WARNING: Removing unreachable block (ram,0x007aeb10) */
/* WARNING: Removing unreachable block (ram,0x007aeb18) */
/* WARNING: Removing unreachable block (ram,0x007aeb2c) */
/* WARNING: Removing unreachable block (ram,0x007aeb5c) */
/* WARNING: Removing unreachable block (ram,0x007aeb64) */
/* WARNING: Removing unreachable block (ram,0x007aeb40) */
/* WARNING: Removing unreachable block (ram,0x007aeb78) */
/* WARNING: Removing unreachable block (ram,0x007aeb80) */
/* WARNING: Removing unreachable block (ram,0x007aea9c) */

void fn_007ae930(uint *param_1,uint *param_2,int param_3)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  bool bVar14;
  
  if ((int)param_2 - (int)param_1 < 0x41) {
    return;
  }
  do {
    if (param_3 == 0) {
      iVar13 = (int)param_2 - (int)param_1;
      iVar1 = iVar13 >> 2;
      if (7 < iVar13) {
        iVar11 = (iVar1 + -2) / 2;
        do {
          uVar9 = param_1[iVar11];
          iVar5 = iVar11;
          while( true ) {
            iVar8 = iVar5 * 2;
            iVar7 = iVar8 + 2;
            if (iVar1 <= iVar7) break;
            if ((ushort)param_1[iVar7] < (ushort)(param_1 + iVar7)[-1]) {
              iVar7 = iVar8 + 1;
            }
            param_1[iVar5] = param_1[iVar7];
            iVar5 = iVar7;
          }
          if (iVar7 == iVar1) {
            puVar6 = param_1 + iVar5;
            iVar5 = iVar8 + 1;
            *puVar6 = param_1[iVar8 + 1];
          }
          while ((iVar8 = (iVar5 + -1) / 2, iVar11 < iVar5 &&
                 ((uint)(ushort)param_1[iVar8] < (uVar9 & 0xffff)))) {
            param_1[iVar5] = param_1[iVar8];
            iVar5 = iVar8;
          }
          bVar14 = iVar11 != 0;
          if (bVar14) {
            iVar11 = iVar11 + -1;
          }
          param_1[iVar5] = uVar9;
        } while (bVar14);
      }
      while (4 < iVar13) {
        if (param_1 != param_2) {
          uVar9 = param_2[-1];
          iVar1 = (int)param_2 + (-4 - (int)param_1) >> 2;
          param_2[-1] = *param_1;
          iVar13 = 0;
          iVar5 = 2;
          iVar11 = iVar13;
          if (2 < iVar1) {
            do {
              iVar13 = iVar5;
              if ((ushort)param_1[iVar5] < (ushort)(param_1 + iVar5)[-1]) {
                iVar13 = iVar5 + -1;
              }
              iVar5 = iVar13 * 2 + 2;
              param_1[iVar11] = param_1[iVar13];
              iVar11 = iVar13;
            } while (iVar5 < iVar1);
          }
          if (iVar5 == iVar1) {
            param_1[iVar13] = param_1[iVar5 + -1];
            iVar13 = iVar5 + -1;
          }
          while ((iVar1 = (iVar13 + -1) / 2, 0 < iVar13 &&
                 ((uint)(ushort)param_1[iVar1] < (uVar9 & 0xffff)))) {
            param_1[iVar13] = param_1[iVar1];
            iVar13 = iVar1;
          }
          param_1[iVar13] = uVar9;
        }
        param_2 = param_2 + -1;
        iVar13 = (int)param_2 - (int)param_1;
      }
      return;
    }
    uVar2 = (ushort)param_2[-1];
    puVar6 = param_1 + (((int)param_2 - (int)param_1 >> 2) - ((int)param_2 - (int)param_1 >> 0x1f)
                       >> 1);
    uVar3 = (ushort)*param_1;
    uVar4 = (ushort)*puVar6;
    if (uVar3 < uVar4) {
      if (uVar2 <= uVar4) {
        if (uVar2 <= uVar3) goto LAB_007ae994;
LAB_007aec90:
        puVar6 = param_2 + -1;
      }
    }
    else if (uVar3 < uVar2) {
LAB_007ae994:
      puVar6 = param_1;
    }
    else if (uVar4 < uVar2) goto LAB_007aec90;
    uVar9 = *puVar6;
    puVar6 = param_2;
    puVar12 = param_1;
    while( true ) {
      for (; (uint)(ushort)*puVar12 < (uVar9 & 0xffff); puVar12 = puVar12 + 1) {
      }
      do {
        puVar6 = puVar6 + -1;
      } while ((uVar9 & 0xffff) < (uint)(ushort)*puVar6);
      if (puVar6 <= puVar12) break;
      uVar10 = *puVar12;
      *puVar12 = *puVar6;
      *puVar6 = uVar10;
      puVar12 = puVar12 + 1;
    }
    param_3 = param_3 / 2;
    fn_007ae930(puVar12,param_2,param_3);
    param_2 = puVar12;
    if ((int)puVar12 - (int)param_1 < 0x41) {
      return;
    }
  } while( true );
}


