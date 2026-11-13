#include "007a36c0_007a38fc.h"



void fn_007a38fc(undefined4 *param_1,undefined4 *param_2,code *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_1 == param_2) {
    return;
  }
  puVar2 = param_1;
  while (puVar2 = puVar2 + 0xd, puVar2 != param_2) {
    local_5c = *puVar2;
    uStack_58 = puVar2[1];
    uStack_54 = puVar2[2];
    uStack_50 = puVar2[3];
    uStack_4c = puVar2[4];
    uStack_48 = puVar2[5];
    uStack_44 = puVar2[6];
    uStack_40 = puVar2[7];
    local_3c = puVar2[8];
    uStack_38 = puVar2[9];
    uStack_34 = puVar2[10];
    uStack_30 = puVar2[0xb];
    uStack_2c = puVar2[0xc];
    iVar3 = (*param_3)(&local_5c,param_1);
    if (iVar3 == 0) {
      local_90 = local_5c;
      uStack_8c = uStack_58;
      uStack_88 = uStack_54;
      uStack_84 = uStack_50;
      uStack_80 = uStack_4c;
      uStack_7c = uStack_48;
      uStack_78 = uStack_44;
      uStack_74 = uStack_40;
      local_70 = local_3c;
      uStack_6c = uStack_38;
      uStack_68 = uStack_34;
      uStack_64 = uStack_30;
      uStack_60 = uStack_2c;
      iVar3 = (*param_3)(&local_90);
      puVar4 = puVar2;
      while (iVar3 != 0) {
        *puVar4 = puVar4[-0xd];
        puVar4[1] = puVar4[-0xc];
        puVar4[2] = puVar4[-0xb];
        puVar4[3] = puVar4[-10];
        puVar4[4] = puVar4[-9];
        puVar4[5] = puVar4[-8];
        puVar4[6] = puVar4[-7];
        puVar4[7] = puVar4[-6];
        puVar4[8] = puVar4[-5];
        puVar4[9] = puVar4[-4];
        puVar4[10] = puVar4[-3];
        puVar4[0xb] = puVar4[-2];
        puVar4[0xc] = puVar4[-1];
        iVar3 = (*param_3)(&local_90);
        puVar4 = puVar4 + -0xd;
      }
      *puVar4 = local_90;
      puVar4[1] = uStack_8c;
      puVar4[2] = uStack_88;
      puVar4[3] = uStack_84;
      puVar4[4] = uStack_80;
      puVar4[5] = uStack_7c;
      puVar4[6] = uStack_78;
      puVar4[7] = uStack_74;
      puVar4[8] = local_70;
      puVar4[9] = uStack_6c;
      puVar4[10] = uStack_68;
      puVar4[0xb] = uStack_64;
      puVar4[0xc] = uStack_60;
    }
    else {
      puVar4 = puVar2 + 0xd;
      puVar5 = puVar2;
      if (param_1 < puVar2) {
        if (0 < (int)puVar2 - (int)param_1) {
          uVar1 = ((int)puVar2 - (int)param_1) / 0x34;
          if ((uVar1 & 1) != 0) {
            *puVar2 = puVar2[-0xd];
            puVar2[1] = puVar2[-0xc];
            puVar2[2] = puVar2[-0xb];
            puVar2[3] = puVar2[-10];
            puVar2[4] = puVar2[-9];
            puVar2[5] = puVar2[-8];
            puVar2[6] = puVar2[-7];
            puVar2[7] = puVar2[-6];
            puVar5 = puVar2 + -0xd;
            puVar2[8] = puVar2[-5];
            puVar2[9] = puVar2[-4];
            puVar2[10] = puVar2[-3];
            puVar2[0xb] = puVar2[-2];
            puVar2[0xc] = puVar2[-1];
            puVar4 = puVar2;
          }
          for (iVar3 = (int)uVar1 >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
            uVar7 = puVar5[-0xc];
            uVar8 = puVar5[-0xb];
            uVar9 = puVar5[-10];
            uVar10 = puVar5[-9];
            uVar11 = puVar5[-8];
            uVar12 = puVar5[-7];
            uVar13 = puVar5[-6];
            puVar4[-0xd] = puVar5[-0xd];
            puVar4[-0xc] = uVar7;
            puVar4[-0xb] = uVar8;
            puVar4[-10] = uVar9;
            puVar4[-9] = uVar10;
            puVar4[-8] = uVar11;
            puVar4[-7] = uVar12;
            puVar4[-6] = uVar13;
            uVar7 = puVar5[-4];
            uVar8 = puVar5[-3];
            uVar9 = puVar5[-2];
            uVar10 = puVar5[-1];
            puVar4[-5] = puVar5[-5];
            puVar4[-4] = uVar7;
            puVar4[-3] = uVar8;
            puVar4[-2] = uVar9;
            puVar4[-1] = uVar10;
            uVar7 = puVar5[-0x19];
            uVar8 = puVar5[-0x18];
            uVar9 = puVar5[-0x17];
            uVar10 = puVar5[-0x16];
            uVar11 = puVar5[-0x15];
            uVar12 = puVar5[-0x14];
            uVar13 = puVar5[-0x13];
            puVar6 = puVar5 + -0x12;
            puVar4[-0x1a] = puVar5[-0x1a];
            puVar4[-0x19] = uVar7;
            puVar4[-0x18] = uVar8;
            puVar4[-0x17] = uVar9;
            puVar4[-0x16] = uVar10;
            puVar4[-0x15] = uVar11;
            puVar4[-0x14] = uVar12;
            puVar4[-0x13] = uVar13;
            uVar7 = puVar5[-0x11];
            uVar8 = puVar5[-0x10];
            uVar9 = puVar5[-0xf];
            uVar10 = puVar5[-0xe];
            puVar5 = puVar5 + -0x1a;
            puVar4[-0x12] = *puVar6;
            puVar4[-0x11] = uVar7;
            puVar4[-0x10] = uVar8;
            puVar4[-0xf] = uVar9;
            puVar4[-0xe] = uVar10;
            puVar4 = puVar4 + -0x1a;
          }
        }
      }
      else {
        for (; param_1 != puVar5; puVar5 = puVar5 + -0xd) {
          uVar7 = puVar5[-0xc];
          uVar8 = puVar5[-0xb];
          uVar9 = puVar5[-10];
          uVar10 = puVar5[-9];
          uVar11 = puVar5[-8];
          uVar12 = puVar5[-7];
          uVar13 = puVar5[-6];
          puVar4[-0xd] = puVar5[-0xd];
          puVar4[-0xc] = uVar7;
          puVar4[-0xb] = uVar8;
          puVar4[-10] = uVar9;
          puVar4[-9] = uVar10;
          puVar4[-8] = uVar11;
          puVar4[-7] = uVar12;
          puVar4[-6] = uVar13;
          uVar7 = puVar5[-4];
          uVar8 = puVar5[-3];
          uVar9 = puVar5[-2];
          uVar10 = puVar5[-1];
          puVar4[-5] = puVar5[-5];
          puVar4[-4] = uVar7;
          puVar4[-3] = uVar8;
          puVar4[-2] = uVar9;
          puVar4[-1] = uVar10;
          puVar4 = puVar4 + -0xd;
        }
      }
      *param_1 = local_5c;
      param_1[1] = uStack_58;
      param_1[2] = uStack_54;
      param_1[3] = uStack_50;
      param_1[4] = uStack_4c;
      param_1[5] = uStack_48;
      param_1[6] = uStack_44;
      param_1[7] = uStack_40;
      param_1[8] = local_3c;
      param_1[9] = uStack_38;
      param_1[10] = uStack_34;
      param_1[0xb] = uStack_30;
      param_1[0xc] = uStack_2c;
    }
  }
  return;
}



void fn_007a36c0(undefined4 *param_1,undefined4 *param_2,code *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (param_1 == param_2) {
    return;
  }
  puVar2 = param_1;
  while (puVar3 = (undefined4 *)((int)puVar2 + 0x12), puVar3 != param_2) {
    local_3c = *puVar3;
    local_38 = puVar3[1];
    local_34 = puVar3[2];
    local_30 = puVar3[3];
    uVar1 = (uint)local_2c >> 0x10;
    local_2c = CONCAT22((short)uVar1,*(undefined2 *)(puVar3 + 4));
    iVar4 = (*param_3)(&local_3c,param_1);
    if (iVar4 == 0) {
      local_50 = local_3c;
      local_4c = local_38;
      local_48 = local_34;
      local_44 = local_30;
      local_40 = local_2c;
      iVar4 = (*param_3)(&local_50);
      puVar2 = puVar3;
      while (iVar4 != 0) {
        *puVar2 = *(undefined4 *)((int)puVar2 + -0x12);
        puVar2[1] = *(undefined4 *)((int)puVar2 + -0xe);
        puVar2[2] = *(undefined4 *)((int)puVar2 + -10);
        puVar2[3] = *(undefined4 *)((int)puVar2 + -6);
        *(undefined2 *)(puVar2 + 4) = *(undefined2 *)((int)puVar2 + -2);
        iVar4 = (*param_3)(&local_50);
        puVar2 = (undefined4 *)((int)puVar2 + -0x12);
      }
      *puVar2 = local_50;
      puVar2[1] = local_4c;
      puVar2[2] = local_48;
      puVar2[3] = local_44;
      *(undefined2 *)(puVar2 + 4) = (undefined2)local_40;
      puVar2 = puVar3;
    }
    else {
      puVar5 = puVar2 + 9;
      puVar6 = puVar3;
      if (param_1 < puVar3) {
        if (0 < (int)puVar3 - (int)param_1) {
          uVar1 = ((int)puVar3 - (int)param_1) / 0x12;
          if ((uVar1 & 1) != 0) {
            *puVar3 = *puVar2;
            puVar3[1] = puVar2[1];
            puVar3[2] = puVar2[2];
            puVar3[3] = puVar2[3];
            *(undefined2 *)(puVar3 + 4) = *(undefined2 *)(puVar2 + 4);
            puVar5 = puVar3;
            puVar6 = puVar2;
          }
          for (iVar4 = (int)uVar1 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
            *(undefined4 *)((int)puVar5 + -0x12) = *(undefined4 *)((int)puVar6 + -0x12);
            *(undefined4 *)((int)puVar5 + -0xe) = *(undefined4 *)((int)puVar6 + -0xe);
            *(undefined4 *)((int)puVar5 + -10) = *(undefined4 *)((int)puVar6 + -10);
            *(undefined4 *)((int)puVar5 + -6) = *(undefined4 *)((int)puVar6 + -6);
            *(undefined2 *)((int)puVar5 + -2) = *(undefined2 *)((int)puVar6 + -2);
            puVar5[-9] = puVar6[-9];
            puVar5[-8] = puVar6[-8];
            puVar5[-7] = puVar6[-7];
            puVar5[-6] = puVar6[-6];
            *(undefined2 *)(puVar5 + -5) = *(undefined2 *)(puVar6 + -5);
            puVar5 = puVar5 + -9;
            puVar6 = puVar6 + -9;
          }
        }
      }
      else {
        while (param_1 != puVar6) {
          *(undefined4 *)((int)puVar5 + -0x12) = *(undefined4 *)((int)puVar6 + -0x12);
          *(undefined4 *)((int)puVar5 + -0xe) = *(undefined4 *)((int)puVar6 + -0xe);
          *(undefined4 *)((int)puVar5 + -10) = *(undefined4 *)((int)puVar6 + -10);
          *(undefined4 *)((int)puVar5 + -6) = *(undefined4 *)((int)puVar6 + -6);
          *(undefined2 *)((int)puVar5 + -2) = *(undefined2 *)((int)puVar6 + -2);
          puVar5 = (undefined4 *)((int)puVar5 + -0x12);
          puVar6 = (undefined4 *)((int)puVar6 + -0x12);
        }
      }
      *param_1 = local_3c;
      param_1[1] = local_38;
      param_1[2] = local_34;
      param_1[3] = local_30;
      *(undefined2 *)(param_1 + 4) = (undefined2)local_2c;
      puVar2 = puVar3;
    }
  }
  return;
}


