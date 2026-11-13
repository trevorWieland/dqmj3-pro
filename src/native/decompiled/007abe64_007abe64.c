#include "007abe64_007abe64.h"



void fn_007abe64(uint *param_1,uint *param_2,int param_3,code *param_4)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  uint *puVar13;
  bool bVar14;
  uint uVar15;
  uint *puVar16;
  ulonglong uVar17;
  code *local_50;
  uint *local_4c;
  uint local_48;
  uint *local_44;
  uint *local_40;
  code *local_3c;
  int local_38;
  uint local_34 [4];
  
  if ((int)param_2 - (int)param_1 < 0x41) {
    return;
  }
  do {
    if (param_3 == 0) {
      local_38 = (int)param_2 - (int)param_1;
      local_50 = param_4;
      local_4c = param_1;
      local_44 = param_2;
      local_40 = param_2;
      if (7 < local_38) {
        local_48 = local_38 >> 2;
        uVar7 = (int)(local_48 - 2) / 2;
        local_3c = param_4;
        do {
          pcVar1 = local_3c;
          uVar2 = local_48;
          uVar15 = param_1[uVar7];
          uVar17 = (ulonglong)uVar15;
          uVar8 = uVar7;
          while( true ) {
            iVar3 = uVar8 * 2;
            uVar10 = iVar3 + 2;
            if ((int)uVar2 <= (int)uVar10) break;
            iVar4 = (*pcVar1)(param_1 + uVar10,param_1 + uVar10 + -1);
            uVar15 = (uint)uVar17;
            if (iVar4 != 0) {
              uVar10 = iVar3 + 1;
            }
            param_1[uVar8] = param_1[uVar10];
            uVar8 = uVar10;
          }
          if (uVar10 == uVar2) {
            puVar9 = param_1 + uVar8;
            uVar8 = iVar3 + 1;
            *puVar9 = param_1[iVar3 + 1];
          }
          local_34[0] = uVar15;
          while (uVar15 = (int)(uVar8 - 1) / 2, (int)uVar7 < (int)uVar8) {
            iVar3 = (*pcVar1)(param_1 + uVar15,local_34);
            if (iVar3 == 0) break;
            param_1[uVar8] = param_1[uVar15];
            uVar8 = uVar15;
          }
          bVar14 = uVar7 != 0;
          if (bVar14) {
            uVar7 = uVar7 - 1;
          }
          param_1[uVar8] = local_34[0];
        } while (bVar14);
      }
      puVar13 = local_44;
      pcVar1 = local_50;
      puVar9 = local_4c;
      puVar11 = local_44;
      iVar3 = local_38;
      if (local_44 < local_40) {
        do {
          iVar3 = (*local_50)(puVar13,local_4c);
          puVar9 = local_4c;
          pcVar1 = local_50;
          if (iVar3 != 0) {
            uVar7 = *puVar13;
            uVar17 = (ulonglong)uVar7;
            iVar4 = 0;
            iVar12 = 2;
            *puVar13 = *local_4c;
            iVar3 = local_38 >> 2;
            iVar6 = iVar4;
            if (2 < iVar3) {
              do {
                iVar5 = (*pcVar1)(puVar9 + iVar12,puVar9 + iVar12 + -1);
                uVar7 = (uint)uVar17;
                iVar4 = iVar12;
                if (iVar5 != 0) {
                  iVar4 = iVar12 + -1;
                }
                puVar9[iVar6] = puVar9[iVar4];
                iVar12 = iVar4 * 2 + 2;
                iVar6 = iVar4;
              } while (iVar12 < iVar3);
            }
            if (iVar12 == iVar3) {
              puVar11 = puVar9 + iVar4;
              iVar4 = iVar12 + -1;
              *puVar11 = puVar9[iVar12 + -1];
            }
            local_48 = uVar7;
            while (iVar3 = (iVar4 + -1) / 2, 0 < iVar4) {
              iVar6 = (*pcVar1)(puVar9 + iVar3,&local_48);
              if (iVar6 == 0) break;
              puVar9[iVar4] = puVar9[iVar3];
              iVar4 = iVar3;
            }
            puVar9[iVar4] = local_48;
          }
          puVar13 = puVar13 + 1;
          pcVar1 = local_50;
          puVar9 = local_4c;
          puVar11 = local_44;
          iVar3 = local_38;
        } while (puVar13 < local_40);
      }
      do {
        puVar13 = local_4c;
        if (iVar3 < 5) {
          return;
        }
        local_50 = pcVar1;
        if (local_4c != puVar11) {
          puVar16 = (uint *)puVar11[-1];
          uVar17 = ZEXT48(puVar16);
          iVar3 = (int)puVar11 + (-4 - (int)local_4c) >> 2;
          iVar4 = 0;
          puVar11[-1] = *local_4c;
          iVar12 = 2;
          local_48 = 0;
          iVar6 = iVar4;
          local_4c = puVar9;
          if (2 < iVar3) {
            do {
              iVar5 = (*pcVar1)(puVar13 + iVar12,puVar13 + iVar12 + -1);
              puVar16 = (uint *)uVar17;
              iVar4 = iVar12;
              if (iVar5 != 0) {
                iVar4 = iVar12 + -1;
              }
              iVar12 = iVar4 * 2 + 2;
              puVar13[iVar6] = puVar13[iVar4];
              iVar6 = iVar4;
            } while (iVar12 < iVar3);
          }
          uVar7 = local_48;
          if (iVar12 == iVar3) {
            puVar9 = puVar13 + iVar4;
            iVar4 = iVar12 + -1;
            *puVar9 = puVar13[iVar12 + -1];
          }
          local_4c = puVar16;
          while (iVar3 = (iVar4 + -1) / 2, (int)uVar7 < iVar4) {
            iVar6 = (*pcVar1)(puVar13 + iVar3,&local_4c);
            if (iVar6 == 0) break;
            puVar13[iVar4] = puVar13[iVar3];
            iVar4 = iVar3;
          }
          puVar13[iVar4] = (uint)local_4c;
          puVar9 = local_4c;
        }
        local_4c = puVar9;
        puVar11 = puVar11 + -1;
        pcVar1 = local_50;
        puVar9 = local_4c;
        iVar3 = (int)puVar11 - (int)puVar13;
        local_4c = puVar13;
      } while( true );
    }
    puVar9 = param_1 + (((int)param_2 - (int)param_1 >> 2) - ((int)param_2 - (int)param_1 >> 0x1f)
                       >> 1);
    iVar3 = (*param_4)(param_1,puVar9);
    if (iVar3 == 0) {
      iVar3 = (*param_4)(param_1,param_2 + -1);
      if (iVar3 == 0) {
        iVar3 = (*param_4)(puVar9,param_2 + -1);
        if (iVar3 != 0) goto LAB_007ac258;
      }
      else {
LAB_007ac23c:
        puVar9 = param_1;
      }
    }
    else {
      iVar3 = (*param_4)(puVar9);
      if (iVar3 == 0) {
        iVar3 = (*param_4)(param_1,param_2 + -1);
        if (iVar3 == 0) goto LAB_007ac23c;
LAB_007ac258:
        puVar9 = param_2 + -1;
      }
    }
    local_50 = (code *)*puVar9;
    puVar9 = param_1;
    puVar11 = param_2;
    while( true ) {
      iVar3 = (*param_4)(puVar9,&local_50);
      puVar13 = puVar9;
      while (iVar3 != 0) {
        puVar13 = puVar13 + 1;
        iVar3 = (*param_4)(puVar13,&local_50);
      }
      do {
        puVar11 = puVar11 + -1;
        iVar3 = (*param_4)(&local_50,puVar11);
      } while (iVar3 != 0);
      if (puVar11 <= puVar13) break;
      uVar7 = *puVar13;
      puVar9 = puVar13 + 1;
      *puVar13 = *puVar11;
      *puVar11 = uVar7;
    }
    param_3 = param_3 / 2;
    fn_007abe64(puVar13,param_2,param_3,param_4);
    param_2 = puVar13;
    if ((int)puVar13 - (int)param_1 < 0x41) {
      return;
    }
  } while( true );
}


