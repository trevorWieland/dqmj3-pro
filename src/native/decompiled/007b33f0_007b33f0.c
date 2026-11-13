#include "007b33f0_007b33f0.h"



void fn_007b33f0(undefined2 *param_1,undefined2 *param_2,int param_3,code *param_4)

{
  undefined2 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined2 *puVar11;
  bool bVar12;
  undefined2 local_64 [2];
  code *local_60;
  undefined2 *local_5c;
  undefined2 local_58 [4];
  int local_50;
  code *local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined2 *local_38;
  int local_34;
  code *pcStack_30;
  
  if ((int)param_2 - (int)param_1 < 0x21) {
    return;
  }
  do {
    if (param_3 == 0) {
      local_50 = (int)param_2 - (int)param_1;
      local_60 = param_4;
      local_5c = param_1;
      local_4c = (code *)param_2;
      local_38 = param_2;
      if (3 < local_50) {
        local_34 = local_50 >> 1;
        iVar3 = (local_34 + -2) / 2;
        pcStack_30 = param_4;
        do {
          pcVar2 = pcStack_30;
          iVar10 = local_34;
          uVar1 = param_1[iVar3];
          iVar7 = iVar3;
          while( true ) {
            iVar5 = iVar7 * 2;
            iVar8 = iVar5 + 2;
            if (iVar10 <= iVar8) break;
            iVar4 = (*pcVar2)(param_1 + iVar8,param_1 + iVar8 + -1);
            if (iVar4 != 0) {
              iVar8 = iVar5 + 1;
            }
            param_1[iVar7] = param_1[iVar8];
            iVar7 = iVar8;
          }
          if (iVar8 == iVar10) {
            puVar11 = param_1 + iVar7;
            iVar7 = iVar5 + 1;
            *puVar11 = param_1[iVar5 + 1];
          }
          local_64[0] = uVar1;
          while (iVar10 = (iVar7 + -1) / 2, iVar3 < iVar7) {
            iVar5 = (*pcVar2)(param_1 + iVar10,local_64);
            if (iVar5 == 0) break;
            param_1[iVar7] = param_1[iVar10];
            iVar7 = iVar10;
          }
          bVar12 = iVar3 != 0;
          if (bVar12) {
            iVar3 = iVar3 + -1;
          }
          param_1[iVar7] = local_64[0];
        } while (bVar12);
      }
      puVar11 = local_38;
      if (local_38 < local_4c) {
        do {
          iVar3 = (*local_60)(puVar11,local_5c);
          puVar9 = local_5c;
          pcVar2 = local_60;
          if (iVar3 != 0) {
            uVar1 = *puVar11;
            iVar7 = 0;
            iVar5 = 2;
            *puVar11 = *local_5c;
            local_40 = 0;
            iVar3 = local_50 >> 1;
            iVar10 = iVar7;
            if (2 < iVar3) {
              do {
                iVar8 = (*pcVar2)(puVar9 + iVar5,puVar9 + iVar5 + -1);
                iVar7 = iVar5;
                if (iVar8 != 0) {
                  iVar7 = iVar5 + -1;
                }
                iVar5 = iVar7 * 2 + 2;
                puVar9[iVar10] = puVar9[iVar7];
                iVar10 = iVar7;
              } while (iVar5 < iVar3);
            }
            iVar10 = local_40;
            if (iVar5 == iVar3) {
              puVar6 = puVar9 + iVar7;
              iVar7 = iVar5 + -1;
              *puVar6 = puVar9[iVar5 + -1];
            }
            local_58[0] = uVar1;
            while (iVar3 = (iVar7 + -1) / 2, iVar10 < iVar7) {
              iVar5 = (*pcVar2)(puVar9 + iVar3,local_58);
              if (iVar5 == 0) break;
              puVar9[iVar7] = puVar9[iVar3];
              iVar7 = iVar3;
            }
            puVar9[iVar7] = local_58[0];
          }
          puVar11 = puVar11 + 1;
        } while (puVar11 < local_4c);
      }
      puVar9 = local_5c;
      pcVar2 = local_60;
      puVar11 = local_38;
      iVar3 = local_50;
      do {
        if (iVar3 < 3) {
          return;
        }
        local_4c = pcVar2;
        if (puVar9 != puVar11) {
          local_44 = (int)(short)puVar11[-1];
          puVar11[-1] = *puVar9;
          iVar3 = (int)puVar11 + (-2 - (int)puVar9) >> 1;
          iVar7 = 0;
          iVar5 = 2;
          local_48 = 0;
          iVar10 = iVar7;
          if (2 < iVar3) {
            do {
              iVar8 = (*pcVar2)(puVar9 + iVar5,puVar9 + iVar5 + -1);
              iVar7 = iVar5;
              if (iVar8 != 0) {
                iVar7 = iVar5 + -1;
              }
              iVar5 = iVar7 * 2 + 2;
              puVar9[iVar10] = puVar9[iVar7];
              iVar10 = iVar7;
            } while (iVar5 < iVar3);
          }
          iVar10 = local_48;
          if (iVar5 == iVar3) {
            puVar6 = puVar9 + iVar7;
            iVar7 = iVar5 + -1;
            *puVar6 = puVar9[iVar5 + -1];
          }
          local_5c = (undefined2 *)CONCAT22(((unsigned int)(local_5c) >> 16) & 0xffff,(short)local_44);
          while (iVar3 = (iVar7 + -1) / 2, iVar10 < iVar7) {
            iVar5 = (*pcVar2)(puVar9 + iVar3,&local_5c);
            if (iVar5 == 0) break;
            puVar9[iVar7] = puVar9[iVar3];
            iVar7 = iVar3;
          }
          puVar9[iVar7] = ((unsigned int)(local_5c)) & 0xffff;
        }
        puVar11 = puVar11 + -1;
        iVar3 = (int)puVar11 - (int)puVar9;
        pcVar2 = local_4c;
      } while( true );
    }
    puVar11 = (undefined2 *)
              ((((int)param_2 - (int)param_1 >> 1) - ((int)param_2 - (int)param_1 >> 0x1f) &
               0xfffffffeU) + (int)param_1);
    iVar3 = (*param_4)(param_1,puVar11);
    if (iVar3 == 0) {
      iVar3 = (*param_4)(param_1,param_2 + -1);
      if (iVar3 == 0) {
        iVar3 = (*param_4)(puVar11,param_2 + -1);
        if (iVar3 != 0) goto LAB_007b3814;
      }
      else {
LAB_007b37f8:
        puVar11 = param_1;
      }
    }
    else {
      iVar3 = (*param_4)(puVar11);
      if (iVar3 == 0) {
        iVar3 = (*param_4)(param_1,param_2 + -1);
        if (iVar3 == 0) goto LAB_007b37f8;
LAB_007b3814:
        puVar11 = param_2 + -1;
      }
    }
    local_64[0] = *puVar11;
    puVar11 = param_1;
    puVar9 = param_2;
    while( true ) {
      iVar3 = (*param_4)(puVar11,local_64);
      puVar6 = puVar11;
      while (iVar3 != 0) {
        puVar6 = puVar6 + 1;
        iVar3 = (*param_4)(puVar6,local_64);
      }
      do {
        puVar9 = puVar9 + -1;
        iVar3 = (*param_4)(local_64);
      } while (iVar3 != 0);
      if (puVar9 <= puVar6) break;
      uVar1 = *puVar6;
      puVar11 = puVar6 + 1;
      *puVar6 = *puVar9;
      *puVar9 = uVar1;
    }
    param_3 = param_3 / 2;
    fn_007b33f0(puVar6,param_2,param_3,param_4);
    param_2 = puVar6;
    if ((int)puVar6 - (int)param_1 < 0x21) {
      return;
    }
  } while( true );
}


