#include "007b16b4_007b1b30.h"



/* WARNING: Removing unreachable block (ram,0x007b1d20) */
/* WARNING: Removing unreachable block (ram,0x007b1d44) */
/* WARNING: Removing unreachable block (ram,0x007b1d7c) */
/* WARNING: Removing unreachable block (ram,0x007b1d9c) */
/* WARNING: Removing unreachable block (ram,0x007b1da0) */
/* WARNING: Removing unreachable block (ram,0x007b1dc0) */
/* WARNING: Removing unreachable block (ram,0x007b1dc8) */
/* WARNING: Removing unreachable block (ram,0x007b1ddc) */
/* WARNING: Removing unreachable block (ram,0x007b1e14) */
/* WARNING: Removing unreachable block (ram,0x007b1e1c) */
/* WARNING: Removing unreachable block (ram,0x007b1df8) */
/* WARNING: Removing unreachable block (ram,0x007b1e40) */
/* WARNING: Removing unreachable block (ram,0x007b1e48) */

void fn_007b1b30(short *param_1,short *param_2,int param_3)

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
            iVar5 = fn_00692568((int)param_1[iVar8]);
            iVar6 = fn_00692568((int)(param_1 + iVar8)[-1]);
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
            iVar8 = fn_00692568((int)param_1[iVar9]);
            iVar5 = fn_00692568((int)sVar1);
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
              iVar9 = fn_00692568((int)param_1[iVar7]);
              iVar8 = fn_00692568((int)(param_1 + iVar7)[-1]);
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
            iVar3 = fn_00692568((int)param_1[iVar12]);
            iVar7 = fn_00692568((int)sVar1);
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
    iVar3 = fn_00692568((int)*param_1);
    iVar4 = fn_00692568((int)*psVar11);
    if (iVar3 < iVar4) {
      iVar3 = fn_00692568((int)*psVar11);
      iVar4 = fn_00692568((int)param_2[-1]);
      if (iVar4 <= iVar3) {
        iVar3 = fn_00692568((int)*param_1);
        iVar4 = fn_00692568((int)param_2[-1]);
        if (iVar4 <= iVar3) goto LAB_007b1fb0;
LAB_007b1fd8:
        psVar11 = param_2 + -1;
      }
    }
    else {
      iVar3 = fn_00692568((int)*param_1);
      iVar4 = fn_00692568((int)param_2[-1]);
      if (iVar3 < iVar4) {
LAB_007b1fb0:
        psVar11 = param_1;
      }
      else {
        iVar3 = fn_00692568((int)*psVar11);
        iVar4 = fn_00692568((int)param_2[-1]);
        if (iVar3 < iVar4) goto LAB_007b1fd8;
      }
    }
    sVar1 = *psVar11;
    psVar11 = param_1;
    psVar10 = param_2;
    while( true ) {
      while( true ) {
        iVar3 = fn_00692568((int)*psVar11);
        iVar4 = fn_00692568((int)sVar1);
        if (iVar4 <= iVar3) break;
        psVar11 = psVar11 + 1;
      }
      do {
        iVar3 = fn_00692568((int)sVar1);
        psVar10 = psVar10 + -1;
        iVar4 = fn_00692568((int)*psVar10);
      } while (iVar3 < iVar4);
      if (psVar10 <= psVar11) break;
      sVar2 = *psVar11;
      *psVar11 = *psVar10;
      *psVar10 = sVar2;
      psVar11 = psVar11 + 1;
    }
    param_3 = param_3 / 2;
    fn_007b1b30(psVar11,param_2,param_3);
    param_2 = psVar11;
    if ((int)psVar11 - (int)param_1 < 0x21) {
      return;
    }
  } while( true );
}



void fn_007b16b4(uint *param_1,uint *param_2,int param_3,code *param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  bool bVar12;
  ulonglong uVar13;
  uint local_6c;
  uint local_68;
  uint *local_64;
  code *local_60;
  uint local_5c;
  int local_58;
  code *local_54;
  int local_4c;
  uint *local_44;
  int local_40;
  code *pcStack_3c;
  
  if ((int)param_2 - (int)param_1 < 0x41) {
    return;
  }
  do {
    if (param_3 == 0) {
      local_58 = (int)param_2 - (int)param_1;
      local_64 = param_1;
      local_60 = param_4;
      local_54 = (code *)param_2;
      local_44 = param_2;
      if (7 < local_58) {
        local_40 = local_58 >> 2;
        iVar2 = (local_40 + -2) / 2;
        pcStack_3c = param_4;
        do {
          pcVar1 = pcStack_3c;
          iVar11 = local_40;
          uVar5 = param_1[iVar2];
          iVar6 = iVar2;
          while( true ) {
            iVar4 = iVar6 * 2;
            iVar9 = iVar4 + 2;
            if (iVar11 <= iVar9) break;
            iVar3 = (*pcVar1)(param_1 + iVar9,param_1 + iVar9 + -1);
            if (iVar3 != 0) {
              iVar9 = iVar4 + 1;
            }
            param_1[iVar6] = param_1[iVar9];
            iVar6 = iVar9;
          }
          if (iVar9 == iVar11) {
            param_1[iVar6] = param_1[iVar4 + 1];
            iVar6 = iVar4 + 1;
          }
          local_68 = uVar5;
          while ((iVar11 = (iVar6 + -1) / 2, iVar2 < iVar6 &&
                 (iVar4 = (*pcVar1)(param_1 + iVar11,&local_68), iVar4 != 0))) {
            param_1[iVar6] = param_1[iVar11];
            iVar6 = iVar11;
          }
          bVar12 = iVar2 != 0;
          if (bVar12) {
            iVar2 = iVar2 + -1;
          }
          param_1[iVar6] = local_68;
        } while (bVar12);
      }
      puVar7 = local_44;
      if (local_44 < local_54) {
        do {
          iVar2 = (*local_60)(puVar7,local_64);
          pcVar1 = local_60;
          puVar10 = local_64;
          if (iVar2 != 0) {
            uVar5 = *puVar7;
            uVar13 = (ulonglong)uVar5;
            iVar6 = 0;
            iVar4 = 2;
            *puVar7 = *local_64;
            iVar2 = local_58 >> 2;
            iVar11 = iVar6;
            if (2 < iVar2) {
              do {
                iVar9 = (*pcVar1)(puVar10 + iVar4,puVar10 + iVar4 + -1);
                uVar5 = (uint)uVar13;
                iVar6 = iVar4;
                if (iVar9 != 0) {
                  iVar6 = iVar4 + -1;
                }
                puVar10[iVar11] = puVar10[iVar6];
                iVar4 = iVar6 * 2 + 2;
                iVar11 = iVar6;
              } while (iVar4 < iVar2);
            }
            if (iVar4 == iVar2) {
              puVar10[iVar6] = puVar10[iVar4 + -1];
              iVar6 = iVar4 + -1;
            }
            local_5c = uVar5;
            while ((iVar2 = (iVar6 + -1) / 2, 0 < iVar6 &&
                   (iVar11 = (*pcVar1)(puVar10 + iVar2,&local_5c), iVar11 != 0))) {
              puVar10[iVar6] = puVar10[iVar2];
              iVar6 = iVar2;
            }
            puVar10[iVar6] = local_5c;
          }
          puVar7 = puVar7 + 1;
        } while (puVar7 < local_54);
      }
      puVar10 = local_64;
      pcVar1 = local_60;
      puVar7 = local_44;
      iVar2 = local_58;
      while (4 < iVar2) {
        local_54 = pcVar1;
        if (puVar10 != puVar7) {
          uVar5 = puVar7[-1];
          uVar13 = (ulonglong)uVar5;
          iVar2 = (int)puVar7 + (-4 - (int)puVar10) >> 2;
          iVar6 = 0;
          puVar7[-1] = *puVar10;
          iVar4 = 2;
          local_4c = 0;
          iVar11 = iVar6;
          if (2 < iVar2) {
            do {
              iVar9 = (*pcVar1)(puVar10 + iVar4,puVar10 + iVar4 + -1);
              uVar5 = (uint)uVar13;
              iVar6 = iVar4;
              if (iVar9 != 0) {
                iVar6 = iVar4 + -1;
              }
              puVar10[iVar11] = puVar10[iVar6];
              iVar4 = iVar6 * 2 + 2;
              iVar11 = iVar6;
            } while (iVar4 < iVar2);
          }
          iVar11 = local_4c;
          if (iVar4 == iVar2) {
            puVar10[iVar6] = puVar10[iVar4 + -1];
            iVar6 = iVar4 + -1;
          }
          local_68 = uVar5;
          while ((iVar2 = (iVar6 + -1) / 2, iVar11 < iVar6 &&
                 (iVar4 = (*pcVar1)(puVar10 + iVar2,&local_68), iVar4 != 0))) {
            puVar10[iVar6] = puVar10[iVar2];
            iVar6 = iVar2;
          }
          puVar10[iVar6] = local_68;
        }
        puVar7 = puVar7 + -1;
        pcVar1 = local_54;
        iVar2 = (int)puVar7 - (int)puVar10;
      }
      return;
    }
    puVar7 = param_1 + (((int)param_2 - (int)param_1 >> 2) - ((int)param_2 - (int)param_1 >> 0x1f)
                       >> 1);
    iVar2 = (*param_4)(param_1,puVar7);
    if (iVar2 == 0) {
      iVar2 = (*param_4)(param_1,param_2 + -1);
      if (iVar2 == 0) {
        iVar2 = (*param_4)(puVar7,param_2 + -1);
        if (iVar2 != 0) goto LAB_007b1a80;
      }
      else {
LAB_007b1a64:
        puVar7 = param_1;
      }
    }
    else {
      iVar2 = (*param_4)(puVar7);
      if (iVar2 == 0) {
        iVar2 = (*param_4)(param_1,param_2 + -1);
        if (iVar2 == 0) goto LAB_007b1a64;
LAB_007b1a80:
        puVar7 = param_2 + -1;
      }
    }
    local_6c = *puVar7;
    puVar7 = param_1;
    puVar10 = param_2;
    while( true ) {
      iVar2 = (*param_4)(puVar7,&local_6c);
      puVar8 = puVar7;
      while (iVar2 != 0) {
        puVar8 = puVar8 + 1;
        iVar2 = (*param_4)(puVar8,&local_6c);
      }
      do {
        puVar10 = puVar10 + -1;
        iVar2 = (*param_4)(&local_6c,puVar10);
      } while (iVar2 != 0);
      if (puVar10 <= puVar8) break;
      uVar5 = *puVar8;
      puVar7 = puVar8 + 1;
      *puVar8 = *puVar10;
      *puVar10 = uVar5;
    }
    param_3 = param_3 / 2;
    fn_007b16b4(puVar8,param_2,param_3,param_4);
    param_2 = puVar8;
    if ((int)puVar8 - (int)param_1 < 0x41) {
      return;
    }
  } while( true );
}


