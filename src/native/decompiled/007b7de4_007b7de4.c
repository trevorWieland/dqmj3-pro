#include "007b7de4_007b7de4.h"



void fn_007b7de4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,code *param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *unaff_r7;
  undefined4 local_88;
  int local_84 [2];
  undefined4 local_7c;
  int iStack_78;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  undefined4 *local_58;
  undefined4 *local_44;
  undefined4 *local_34;
  undefined4 *puStack_30;
  undefined4 *local_2c;
  undefined4 uStack_28;
  
  local_60 = (int)param_2 - (int)param_1;
  local_68 = 7;
  local_64 = local_60 >> 3;
  local_44 = param_3 + local_64 * 2;
  uStack_28 = param_4;
  local_2c = param_3;
  local_58 = param_2;
  puStack_30 = param_2;
  local_34 = param_1;
  iVar2 = local_64;
  while (6 < iVar2) {
    puVar4 = param_1 + 0xe;
    if (param_1 != puVar4) {
      unaff_r7 = param_1 + 2;
    }
    if (param_1 != puVar4 && unaff_r7 != puVar4) {
      do {
        local_88 = *unaff_r7;
        local_84[0] = unaff_r7[1];
        iVar2 = (*param_6)(&local_88,param_1);
        if (iVar2 == 0) {
          local_7c = local_88;
          iStack_78 = local_84[0];
          iVar2 = (*param_6)(&local_7c);
          puVar3 = unaff_r7;
          while (iVar2 != 0) {
            *puVar3 = puVar3[-2];
            puVar3[1] = puVar3[-1];
            iVar2 = (*param_6)(&local_7c);
            puVar3 = puVar3 + -2;
          }
          *puVar3 = local_7c;
          puVar3[1] = iStack_78;
        }
        else {
          puVar3 = unaff_r7 + 2;
          puVar8 = unaff_r7;
          if (param_1 < unaff_r7) {
            iVar2 = (int)unaff_r7 - (int)param_1;
            if (0 < iVar2) {
              if (iVar2 * 0x10000000 < 0) {
                puVar8 = unaff_r7 + -2;
                *unaff_r7 = *puVar8;
                unaff_r7[1] = unaff_r7[-1];
                puVar3 = unaff_r7;
              }
              for (iVar2 = iVar2 >> 4; iVar2 != 0; iVar2 = iVar2 + -1) {
                uVar9 = puVar8[-1];
                puVar3[-2] = puVar8[-2];
                puVar3[-1] = uVar9;
                uVar9 = puVar8[-3];
                puVar3[-4] = puVar8[-4];
                puVar3[-3] = uVar9;
                puVar3 = puVar3 + -4;
                puVar8 = puVar8 + -4;
              }
            }
          }
          else {
            while (param_1 != puVar8) {
              uVar9 = puVar8[-1];
              puVar3[-2] = puVar8[-2];
              puVar3[-1] = uVar9;
              puVar3 = puVar3 + -2;
              puVar8 = puVar8 + -2;
            }
          }
          *param_1 = local_88;
          param_1[1] = local_84[0];
        }
        unaff_r7 = unaff_r7 + 2;
      } while (unaff_r7 != puVar4);
    }
    param_1 = puVar4;
    iVar2 = (int)local_58 - (int)puVar4 >> 3;
  }
  fn_007a56b4(param_1,local_58,param_6);
  if (local_68 < local_64) {
    local_58 = (undefined4 *)((int)local_44 - (int)local_2c);
    do {
      puVar8 = puStack_30;
      iVar1 = local_68;
      iVar2 = local_68 * 2;
      local_84[0] = local_68;
      puVar4 = local_34;
      puVar3 = local_2c;
      iVar7 = local_60;
      while (iVar2 <= iVar7 >> 3) {
        puVar11 = puVar4 + iVar1 * 4;
        puVar13 = puVar4 + local_84[0] * 2;
        puVar12 = puVar13;
        while (puVar4 != puVar13 && puVar12 != puVar11) {
          iVar7 = (*param_6)(puVar12,puVar4);
          if (iVar7 == 0) {
            puVar10 = puVar4 + 2;
            uVar9 = *puVar4;
            uVar6 = puVar4[1];
          }
          else {
            uVar9 = *puVar12;
            uVar6 = puVar12[1];
            puVar10 = puVar4;
            puVar12 = puVar12 + 2;
          }
          *puVar3 = uVar9;
          puVar3[1] = uVar6;
          puVar3 = puVar3 + 2;
          puVar4 = puVar10;
        }
        uVar9 = fn_007b8ab0(puVar4,puVar13,puVar3);
        puVar3 = (undefined4 *)fn_007b8ab0(puVar12,puVar11,uVar9);
        puVar4 = puVar11;
        iVar7 = (int)puVar8 - (int)puVar11;
      }
      piVar5 = &local_68;
      local_68 = (int)puVar8 - (int)puVar4 >> 3;
      if (local_84[0] < local_68) {
        piVar5 = local_84;
      }
      local_84[0] = *piVar5;
      puVar13 = puVar4 + local_84[0] * 2;
      puVar12 = puVar13;
      while (puVar4 != puVar13 && puVar12 != puVar8) {
        iVar7 = (*param_6)(puVar12,puVar4);
        if (iVar7 == 0) {
          puVar11 = puVar4 + 2;
          uVar9 = *puVar4;
          uVar6 = puVar4[1];
        }
        else {
          uVar9 = *puVar12;
          uVar6 = puVar12[1];
          puVar11 = puVar4;
          puVar12 = puVar12 + 2;
        }
        *puVar3 = uVar9;
        puVar3[1] = uVar6;
        puVar3 = puVar3 + 2;
        puVar4 = puVar11;
      }
      uVar9 = fn_007b8ab0(puVar4,puVar13,puVar3);
      fn_007b8ab0(puVar12,puVar8,uVar9);
      puVar12 = local_44;
      local_84[0] = iVar2;
      iVar2 = iVar1 * 4;
      puVar4 = local_34;
      puVar3 = local_2c;
      puVar8 = local_58;
      while (iVar2 <= (int)puVar8 >> 3) {
        puVar11 = puVar3 + iVar1 * 8;
        puVar13 = puVar3 + local_84[0] * 2;
        puVar8 = puVar13;
        while (puVar3 != puVar13 && puVar8 != puVar11) {
          iVar7 = (*param_6)(puVar8,puVar3);
          if (iVar7 == 0) {
            puVar10 = puVar3 + 2;
            uVar9 = *puVar3;
            uVar6 = puVar3[1];
          }
          else {
            uVar9 = *puVar8;
            uVar6 = puVar8[1];
            puVar10 = puVar3;
            puVar8 = puVar8 + 2;
          }
          *puVar4 = uVar9;
          puVar4[1] = uVar6;
          puVar4 = puVar4 + 2;
          puVar3 = puVar10;
        }
        uVar9 = fn_007b8ab0(puVar3,puVar13,puVar4);
        puVar4 = (undefined4 *)fn_007b8ab0(puVar8,puVar11,uVar9);
        puVar3 = puVar11;
        puVar8 = (undefined4 *)((int)puVar12 - (int)puVar11);
      }
      piVar5 = &local_6c;
      local_6c = (int)puVar12 - (int)puVar3 >> 3;
      if (local_84[0] < local_6c) {
        piVar5 = local_84;
      }
      local_84[0] = *piVar5;
      puVar13 = puVar3 + local_84[0] * 2;
      puVar8 = puVar13;
      while (puVar3 != puVar13 && puVar8 != puVar12) {
        iVar7 = (*param_6)(puVar8,puVar3);
        if (iVar7 == 0) {
          puVar11 = puVar3 + 2;
          uVar9 = *puVar3;
          uVar6 = puVar3[1];
        }
        else {
          uVar9 = *puVar8;
          uVar6 = puVar8[1];
          puVar11 = puVar3;
          puVar8 = puVar8 + 2;
        }
        *puVar4 = uVar9;
        puVar4[1] = uVar6;
        puVar4 = puVar4 + 2;
        puVar3 = puVar11;
      }
      uVar9 = fn_007b8ab0(puVar3,puVar13,puVar4);
      fn_007b8ab0(puVar8,puVar12,uVar9);
      local_68 = iVar2;
    } while (iVar2 < local_64);
  }
  return;
}


