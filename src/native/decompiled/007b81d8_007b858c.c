#include "007b81d8_007b858c.h"



undefined4 * fn_007b858c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  if (param_1 < param_2) {
    if (0 < (int)param_2 - (int)param_1) {
      uVar1 = ((int)param_2 - (int)param_1) / 0x28;
      puVar2 = param_3 + -10;
      puVar3 = param_1 + -10;
      if ((uVar1 & 1) != 0) {
        uVar6 = param_1[1];
        uVar7 = param_1[2];
        uVar8 = param_1[3];
        uVar9 = param_1[4];
        uVar10 = param_1[5];
        uVar11 = param_1[6];
        uVar12 = param_1[7];
        *param_3 = *param_1;
        param_3[1] = uVar6;
        param_3[2] = uVar7;
        param_3[3] = uVar8;
        param_3[4] = uVar9;
        param_3[5] = uVar10;
        param_3[6] = uVar11;
        param_3[7] = uVar12;
        uVar6 = param_1[9];
        param_3[8] = param_1[8];
        param_3[9] = uVar6;
        puVar2 = param_3;
        puVar3 = param_1;
      }
      for (iVar5 = (int)uVar1 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
        uVar6 = puVar3[0xb];
        uVar7 = puVar3[0xc];
        uVar8 = puVar3[0xd];
        uVar9 = puVar3[0xe];
        uVar10 = puVar3[0xf];
        uVar11 = puVar3[0x10];
        uVar12 = puVar3[0x11];
        puVar2[10] = puVar3[10];
        puVar2[0xb] = uVar6;
        puVar2[0xc] = uVar7;
        puVar2[0xd] = uVar8;
        puVar2[0xe] = uVar9;
        puVar2[0xf] = uVar10;
        puVar2[0x10] = uVar11;
        puVar2[0x11] = uVar12;
        uVar6 = puVar3[0x13];
        puVar2[0x12] = puVar3[0x12];
        puVar2[0x13] = uVar6;
        uVar6 = puVar3[0x15];
        uVar7 = puVar3[0x16];
        uVar8 = puVar3[0x17];
        uVar9 = puVar3[0x18];
        uVar10 = puVar3[0x19];
        uVar11 = puVar3[0x1a];
        uVar12 = puVar3[0x1b];
        puVar4 = puVar3 + 0x1c;
        puVar2[0x14] = puVar3[0x14];
        puVar2[0x15] = uVar6;
        puVar2[0x16] = uVar7;
        puVar2[0x17] = uVar8;
        puVar2[0x18] = uVar9;
        puVar2[0x19] = uVar10;
        puVar2[0x1a] = uVar11;
        puVar2[0x1b] = uVar12;
        uVar6 = puVar3[0x1d];
        puVar3 = puVar3 + 0x14;
        puVar2[0x1c] = *puVar4;
        puVar2[0x1d] = uVar6;
        puVar2 = puVar2 + 0x14;
      }
      param_3 = param_3 + uVar1 * 10;
    }
  }
  else {
    for (; param_1 != param_2; param_1 = param_1 + 10) {
      uVar6 = param_1[1];
      uVar7 = param_1[2];
      uVar8 = param_1[3];
      uVar9 = param_1[4];
      uVar10 = param_1[5];
      uVar11 = param_1[6];
      uVar12 = param_1[7];
      *param_3 = *param_1;
      param_3[1] = uVar6;
      param_3[2] = uVar7;
      param_3[3] = uVar8;
      param_3[4] = uVar9;
      param_3[5] = uVar10;
      param_3[6] = uVar11;
      param_3[7] = uVar12;
      uVar6 = param_1[9];
      param_3[8] = param_1[8];
      param_3[9] = uVar6;
      param_3 = param_3 + 10;
    }
  }
  return param_3;
}



void fn_007b81d8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,code *param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *unaff_r6;
  undefined4 *puVar11;
  undefined4 uVar12;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 *local_34;
  undefined4 *puStack_30;
  undefined4 *local_2c;
  undefined4 uStack_28;
  
  local_48 = (int)param_2 - (int)param_1;
  local_44 = 7;
  local_4c = local_48 >> 2;
  local_40 = param_3 + local_4c;
  local_50 = 7;
  puVar4 = param_1;
  local_3c = param_2;
  local_34 = param_1;
  puStack_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  if (6 < local_4c) {
    do {
      param_1 = puVar4 + local_50;
      if (puVar4 != param_1) {
        unaff_r6 = puVar4 + 1;
      }
      if (puVar4 != param_1 && unaff_r6 != param_1) {
        do {
          uVar12 = *unaff_r6;
          iVar2 = (*param_6)(uVar12,*puVar4);
          if (iVar2 == 0) {
            iVar2 = (*param_6)(uVar12,unaff_r6[-1]);
            puVar7 = unaff_r6 + -1;
            puVar3 = unaff_r6;
            while (puVar10 = puVar7, iVar2 != 0) {
              *puVar3 = *puVar10;
              iVar2 = (*param_6)(uVar12,puVar10[-1]);
              puVar7 = puVar10 + -1;
              puVar3 = puVar10;
            }
            *puVar3 = uVar12;
          }
          else {
            puVar3 = unaff_r6 + 1;
            puVar7 = unaff_r6;
            if (puVar4 < unaff_r6) {
              if (0 < (int)unaff_r6 - (int)puVar4) {
                iVar2 = (int)unaff_r6 - (int)puVar4 >> 2;
                iVar6 = 0;
                do {
                  iVar2 = iVar2 + -1;
                  puVar3[iVar6 + -1] = unaff_r6[iVar6 + -1];
                  iVar6 = iVar6 + -1;
                } while (iVar2 != 0);
              }
            }
            else {
              while (puVar4 != puVar7) {
                puVar3 = puVar3 + -1;
                *puVar3 = puVar7[-1];
                puVar7 = puVar7 + -1;
              }
            }
            *puVar4 = uVar12;
          }
          unaff_r6 = unaff_r6 + 1;
        } while (unaff_r6 != param_1);
      }
      puVar4 = param_1;
    } while (local_50 <= (int)local_3c - (int)param_1 >> 2);
  }
  fn_007a5bf0(param_1,local_3c,param_6);
  if (local_44 < local_4c) {
    local_3c = (undefined4 *)((int)local_40 - (int)local_2c);
    do {
      puVar7 = puStack_30;
      iVar1 = local_44;
      iVar2 = local_44 * 2;
      local_50 = local_44;
      puVar4 = local_34;
      puVar3 = local_2c;
      iVar6 = local_48;
      while (iVar2 <= iVar6 >> 2) {
        puVar9 = puVar4 + iVar1 * 2;
        puVar11 = puVar4 + local_50;
        puVar10 = puVar11;
        while (puVar4 != puVar11 && puVar10 != puVar9) {
          iVar6 = (*param_6)(*puVar10,*puVar4);
          if (iVar6 == 0) {
            puVar8 = puVar4 + 1;
            uVar12 = *puVar4;
          }
          else {
            uVar12 = *puVar10;
            puVar8 = puVar4;
            puVar10 = puVar10 + 1;
          }
          *puVar3 = uVar12;
          puVar4 = puVar8;
          puVar3 = puVar3 + 1;
        }
        uVar12 = fn_007b8b4c(puVar4,puVar11,puVar3);
        puVar3 = (undefined4 *)fn_007b8b4c(puVar10,puVar9,uVar12);
        puVar4 = puVar9;
        iVar6 = (int)puVar7 - (int)puVar9;
      }
      local_44 = (int)puVar7 - (int)puVar4 >> 2;
      piVar5 = &local_44;
      if (local_50 < local_44) {
        piVar5 = &local_50;
      }
      local_50 = *piVar5;
      puVar11 = puVar4 + local_50;
      puVar10 = puVar11;
      while (puVar4 != puVar11 && puVar10 != puVar7) {
        iVar6 = (*param_6)(*puVar10,*puVar4);
        if (iVar6 == 0) {
          puVar9 = puVar4 + 1;
          uVar12 = *puVar4;
        }
        else {
          uVar12 = *puVar10;
          puVar9 = puVar4;
          puVar10 = puVar10 + 1;
        }
        *puVar3 = uVar12;
        puVar4 = puVar9;
        puVar3 = puVar3 + 1;
      }
      uVar12 = fn_007b8b4c(puVar4,puVar11,puVar3);
      fn_007b8b4c(puVar10,puVar7,uVar12);
      puVar10 = local_40;
      local_50 = iVar2;
      iVar2 = iVar1 * 4;
      puVar4 = local_34;
      puVar3 = local_2c;
      puVar7 = local_3c;
      while (iVar2 <= (int)puVar7 >> 2) {
        puVar9 = puVar3 + iVar1 * 4;
        puVar11 = puVar3 + local_50;
        puVar7 = puVar11;
        while (puVar3 != puVar11 && puVar7 != puVar9) {
          iVar6 = (*param_6)(*puVar7,*puVar3);
          if (iVar6 == 0) {
            puVar8 = puVar3 + 1;
            uVar12 = *puVar3;
          }
          else {
            uVar12 = *puVar7;
            puVar8 = puVar3;
            puVar7 = puVar7 + 1;
          }
          *puVar4 = uVar12;
          puVar3 = puVar8;
          puVar4 = puVar4 + 1;
        }
        uVar12 = fn_007b8b4c(puVar3,puVar11,puVar4);
        puVar4 = (undefined4 *)fn_007b8b4c(puVar7,puVar9,uVar12);
        puVar3 = puVar9;
        puVar7 = (undefined4 *)((int)puVar10 - (int)puVar9);
      }
      local_44 = (int)puVar10 - (int)puVar3 >> 2;
      piVar5 = &local_44;
      if (local_50 < local_44) {
        piVar5 = &local_50;
      }
      local_50 = *piVar5;
      puVar11 = puVar3 + local_50;
      puVar7 = puVar11;
      while (puVar3 != puVar11 && puVar7 != puVar10) {
        iVar6 = (*param_6)(*puVar7,*puVar3);
        if (iVar6 == 0) {
          puVar9 = puVar3 + 1;
          uVar12 = *puVar3;
        }
        else {
          uVar12 = *puVar7;
          puVar9 = puVar3;
          puVar7 = puVar7 + 1;
        }
        *puVar4 = uVar12;
        puVar3 = puVar9;
        puVar4 = puVar4 + 1;
      }
      uVar12 = fn_007b8b4c(puVar3,puVar11,puVar4);
      fn_007b8b4c(puVar7,puVar10,uVar12);
      local_44 = iVar2;
    } while (iVar2 < local_4c);
  }
  return;
}


