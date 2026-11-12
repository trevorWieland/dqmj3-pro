#include "007a6308_007a6308.h"



void fn_007a6308(undefined4 *param_1,undefined4 *param_2,int param_3,code *param_4)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 *local_70;
  undefined4 *local_68;
  code *local_60;
  int local_58;
  code *local_54;
  undefined4 *local_44;
  int local_40;
  code *pcStack_3c;
  
  if ((int)param_2 - (int)param_1 < 0x101) {
    return;
  }
  do {
    if (param_3 == 0) {
      local_58 = (int)param_2 - (int)param_1;
      local_70 = param_1;
      local_68 = param_2;
      local_60 = param_4;
      local_44 = param_2;
      if (0x1f < local_58) {
        local_40 = local_58 >> 4;
        iVar3 = (local_40 + -2) / 2;
        pcStack_3c = param_4;
        do {
          pcVar1 = pcStack_3c;
          iVar14 = local_40;
          puVar11 = param_1 + iVar3 * 4;
          uVar8 = puVar11[2];
          uVar9 = puVar11[3];
          uVar16 = *puVar11;
          uVar17 = puVar11[1];
          iVar10 = iVar3;
          while( true ) {
            iVar5 = iVar10 * 2;
            iVar12 = iVar5 + 2;
            if (iVar14 <= iVar12) break;
            iVar4 = (*pcVar1)(param_1 + iVar12 * 4,param_1 + iVar12 * 4 + -4);
            if (iVar4 != 0) {
              iVar12 = iVar5 + 1;
            }
            puVar11 = param_1 + iVar12 * 4;
            uVar18 = puVar11[1];
            uVar19 = puVar11[2];
            uVar20 = puVar11[3];
            puVar13 = param_1 + iVar10 * 4;
            *puVar13 = *puVar11;
            puVar13[1] = uVar18;
            puVar13[2] = uVar19;
            puVar13[3] = uVar20;
            iVar10 = iVar12;
          }
          if (iVar12 == iVar14) {
            puVar11 = param_1 + iVar10 * 4;
            uVar18 = param_1[iVar12 * 4 + -3];
            uVar19 = param_1[iVar12 * 4 + -2];
            uVar20 = param_1[iVar12 * 4 + -1];
            iVar10 = iVar5 + 1;
            *puVar11 = param_1[iVar12 * 4 + -4];
            puVar11[1] = uVar18;
            puVar11[2] = uVar19;
            puVar11[3] = uVar20;
          }
          local_88 = uVar16;
          local_84 = uVar17;
          local_80 = uVar8;
          local_7c = uVar9;
          while (iVar14 = (iVar10 + -1) / 2, iVar3 < iVar10) {
            puVar11 = param_1 + iVar14 * 4;
            iVar5 = (*pcVar1)(puVar11,&local_88);
            if (iVar5 == 0) break;
            uVar8 = puVar11[1];
            uVar9 = puVar11[2];
            uVar16 = puVar11[3];
            puVar13 = param_1 + iVar10 * 4;
            *puVar13 = *puVar11;
            puVar13[1] = uVar8;
            puVar13[2] = uVar9;
            puVar13[3] = uVar16;
            iVar10 = iVar14;
          }
          puVar11 = param_1 + iVar10 * 4;
          bVar15 = iVar3 != 0;
          if (bVar15) {
            iVar3 = iVar3 + -1;
          }
          *puVar11 = local_88;
          puVar11[1] = local_84;
          puVar11[2] = local_80;
          puVar11[3] = local_7c;
        } while (bVar15);
      }
      puVar11 = local_44;
      if (local_44 < local_68) {
        do {
          iVar3 = (*local_60)(puVar11,local_70);
          pcVar1 = local_60;
          puVar13 = local_70;
          if (iVar3 != 0) {
            iVar10 = 0;
            uVar17 = *puVar11;
            uVar18 = puVar11[1];
            uVar19 = puVar11[2];
            uVar20 = puVar11[3];
            iVar5 = 2;
            uVar8 = local_70[1];
            uVar9 = local_70[2];
            uVar16 = local_70[3];
            *puVar11 = *local_70;
            puVar11[1] = uVar8;
            puVar11[2] = uVar9;
            puVar11[3] = uVar16;
            iVar3 = local_58 >> 4;
            iVar14 = iVar10;
            if (2 < iVar3) {
              do {
                iVar12 = (*pcVar1)(puVar13 + iVar5 * 4,puVar13 + iVar5 * 4 + -4);
                iVar10 = iVar5;
                if (iVar12 != 0) {
                  iVar10 = iVar5 + -1;
                }
                puVar6 = puVar13 + iVar10 * 4;
                uVar8 = puVar6[1];
                uVar9 = puVar6[2];
                uVar16 = puVar6[3];
                puVar7 = puVar13 + iVar14 * 4;
                iVar5 = iVar10 * 2 + 2;
                *puVar7 = *puVar6;
                puVar7[1] = uVar8;
                puVar7[2] = uVar9;
                puVar7[3] = uVar16;
                iVar14 = iVar10;
              } while (iVar5 < iVar3);
            }
            if (iVar5 == iVar3) {
              puVar6 = puVar13 + iVar10 * 4;
              uVar8 = puVar13[iVar5 * 4 + -3];
              uVar9 = puVar13[iVar5 * 4 + -2];
              uVar16 = puVar13[iVar5 * 4 + -1];
              iVar10 = iVar5 + -1;
              *puVar6 = puVar13[iVar5 * 4 + -4];
              puVar6[1] = uVar8;
              puVar6[2] = uVar9;
              puVar6[3] = uVar16;
            }
            local_88 = uVar17;
            local_84 = uVar18;
            local_80 = uVar19;
            local_7c = uVar20;
            while (iVar3 = (iVar10 + -1) / 2, 0 < iVar10) {
              puVar6 = puVar13 + iVar3 * 4;
              iVar14 = (*pcVar1)(puVar6,&local_88);
              if (iVar14 == 0) break;
              uVar8 = puVar6[1];
              uVar9 = puVar6[2];
              uVar16 = puVar6[3];
              puVar7 = puVar13 + iVar10 * 4;
              *puVar7 = *puVar6;
              puVar7[1] = uVar8;
              puVar7[2] = uVar9;
              puVar7[3] = uVar16;
              iVar10 = iVar3;
            }
            puVar13 = puVar13 + iVar10 * 4;
            *puVar13 = local_88;
            puVar13[1] = local_84;
            puVar13[2] = local_80;
            puVar13[3] = local_7c;
          }
          puVar11 = puVar11 + 4;
        } while (puVar11 < local_68);
      }
      puVar13 = local_70;
      pcVar1 = local_60;
      puVar11 = local_44;
      iVar3 = local_58;
      do {
        if (iVar3 < 0x11) {
          return;
        }
        local_54 = pcVar1;
        if (puVar13 != puVar11) {
          uVar8 = puVar13[1];
          uVar9 = puVar13[2];
          uVar16 = puVar13[3];
          iVar10 = 0;
          uVar20 = puVar11[-4];
          uVar19 = puVar11[-3];
          uVar18 = puVar11[-2];
          uVar17 = puVar11[-1];
          puVar11[-4] = *puVar13;
          puVar11[-3] = uVar8;
          puVar11[-2] = uVar9;
          puVar11[-1] = uVar16;
          iVar3 = (int)(puVar11 + -4) - (int)puVar13 >> 4;
          iVar5 = 2;
          local_60 = (code *)0x0;
          iVar14 = iVar10;
          if (2 < iVar3) {
            do {
              iVar12 = (*pcVar1)(puVar13 + iVar5 * 4,puVar13 + iVar5 * 4 + -4);
              iVar10 = iVar5;
              if (iVar12 != 0) {
                iVar10 = iVar5 + -1;
              }
              puVar6 = puVar13 + iVar10 * 4;
              uVar8 = puVar6[1];
              uVar9 = puVar6[2];
              uVar16 = puVar6[3];
              puVar7 = puVar13 + iVar14 * 4;
              iVar5 = iVar10 * 2 + 2;
              *puVar7 = *puVar6;
              puVar7[1] = uVar8;
              puVar7[2] = uVar9;
              puVar7[3] = uVar16;
              iVar14 = iVar10;
            } while (iVar5 < iVar3);
          }
          pcVar2 = local_60;
          if (iVar5 == iVar3) {
            puVar6 = puVar13 + iVar10 * 4;
            uVar8 = puVar13[iVar5 * 4 + -3];
            uVar9 = puVar13[iVar5 * 4 + -2];
            uVar16 = puVar13[iVar5 * 4 + -1];
            iVar10 = iVar5 + -1;
            *puVar6 = puVar13[iVar5 * 4 + -4];
            puVar6[1] = uVar8;
            puVar6[2] = uVar9;
            puVar6[3] = uVar16;
          }
          local_80 = uVar20;
          local_7c = uVar19;
          local_78 = uVar18;
          local_74 = uVar17;
          while (iVar3 = (iVar10 + -1) / 2, (int)pcVar2 < iVar10) {
            puVar6 = puVar13 + iVar3 * 4;
            iVar14 = (*pcVar1)(puVar6,&local_80);
            if (iVar14 == 0) break;
            uVar8 = puVar6[1];
            uVar9 = puVar6[2];
            uVar16 = puVar6[3];
            puVar7 = puVar13 + iVar10 * 4;
            *puVar7 = *puVar6;
            puVar7[1] = uVar8;
            puVar7[2] = uVar9;
            puVar7[3] = uVar16;
            iVar10 = iVar3;
          }
          puVar6 = puVar13 + iVar10 * 4;
          *puVar6 = local_80;
          puVar6[1] = local_7c;
          puVar6[2] = local_78;
          puVar6[3] = local_74;
        }
        puVar11 = puVar11 + -4;
        iVar3 = (int)puVar11 - (int)puVar13;
        pcVar1 = local_54;
      } while( true );
    }
    puVar11 = param_1 + (((int)param_2 - (int)param_1 >> 4) - ((int)param_2 - (int)param_1 >> 0x1f)
                        >> 1) * 4;
    iVar3 = (*param_4)(param_1,puVar11);
    if (iVar3 == 0) {
      iVar3 = (*param_4)(param_1,param_2 + -4);
      if (iVar3 == 0) {
        iVar3 = (*param_4)(puVar11,param_2 + -4);
        if (iVar3 != 0) goto LAB_007a6758;
      }
      else {
LAB_007a673c:
        puVar11 = param_1;
      }
    }
    else {
      iVar3 = (*param_4)(puVar11);
      if (iVar3 == 0) {
        iVar3 = (*param_4)(param_1,param_2 + -4);
        if (iVar3 == 0) goto LAB_007a673c;
LAB_007a6758:
        puVar11 = param_2 + -4;
      }
    }
    local_84 = *puVar11;
    local_80 = puVar11[1];
    local_7c = puVar11[2];
    local_78 = puVar11[3];
    puVar11 = param_1;
    puVar13 = param_2;
    while( true ) {
      iVar3 = (*param_4)(puVar11,&local_84);
      while (iVar3 != 0) {
        puVar11 = puVar11 + 4;
        iVar3 = (*param_4)(puVar11,&local_84);
      }
      do {
        puVar6 = puVar13;
        puVar13 = puVar6 + -4;
        iVar3 = (*param_4)(&local_84,puVar13);
      } while (iVar3 != 0);
      if (puVar13 <= puVar11) break;
      uVar9 = puVar11[3];
      uVar16 = puVar11[1];
      uVar18 = puVar11[2];
      uVar17 = puVar6[-1];
      uVar8 = *puVar11;
      uVar19 = *puVar13;
      uVar20 = puVar6[-3];
      puVar11[2] = puVar6[-2];
      puVar11[3] = uVar17;
      *puVar11 = uVar19;
      puVar11[1] = uVar20;
      puVar11 = puVar11 + 4;
      *puVar13 = uVar8;
      puVar6[-3] = uVar16;
      puVar6[-2] = uVar18;
      puVar6[-1] = uVar9;
    }
    param_3 = param_3 / 2;
    fn_007a6308(puVar11,param_2,param_3,param_4);
    param_2 = puVar11;
    if ((int)puVar11 - (int)param_1 < 0x101) {
      return;
    }
  } while( true );
}


