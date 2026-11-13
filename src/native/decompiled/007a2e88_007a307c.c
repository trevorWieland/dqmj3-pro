#include "007a2e88_007a307c.h"



void fn_007a307c(undefined4 *param_1,undefined4 *param_2,code *param_3)

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
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_1 == param_2) {
    return;
  }
  puVar2 = param_1;
  while (puVar2 = puVar2 + 0xb, puVar2 != param_2) {
    local_54 = *puVar2;
    uStack_50 = puVar2[1];
    uStack_4c = puVar2[2];
    uStack_48 = puVar2[3];
    uStack_44 = puVar2[4];
    uStack_40 = puVar2[5];
    uStack_3c = puVar2[6];
    uStack_38 = puVar2[7];
    local_34 = puVar2[8];
    uStack_30 = puVar2[9];
    uStack_2c = puVar2[10];
    iVar3 = (*param_3)(&local_54,param_1);
    if (iVar3 == 0) {
      local_80 = local_54;
      uStack_7c = uStack_50;
      uStack_78 = uStack_4c;
      uStack_74 = uStack_48;
      uStack_70 = uStack_44;
      uStack_6c = uStack_40;
      uStack_68 = uStack_3c;
      uStack_64 = uStack_38;
      local_60 = local_34;
      uStack_5c = uStack_30;
      uStack_58 = uStack_2c;
      iVar3 = (*param_3)(&local_80);
      puVar5 = puVar2 + -0xb;
      puVar4 = puVar2;
      while (puVar6 = puVar5, iVar3 != 0) {
        uVar7 = puVar6[1];
        uVar8 = puVar6[2];
        uVar9 = puVar6[3];
        uVar10 = puVar6[4];
        uVar11 = puVar6[5];
        uVar12 = puVar6[6];
        uVar13 = puVar6[7];
        *puVar4 = *puVar6;
        puVar4[1] = uVar7;
        puVar4[2] = uVar8;
        puVar4[3] = uVar9;
        puVar4[4] = uVar10;
        puVar4[5] = uVar11;
        puVar4[6] = uVar12;
        puVar4[7] = uVar13;
        uVar7 = puVar6[9];
        uVar8 = puVar6[10];
        puVar4[8] = puVar6[8];
        puVar4[9] = uVar7;
        puVar4[10] = uVar8;
        iVar3 = (*param_3)(&local_80,puVar6 + -0xb);
        puVar5 = puVar6 + -0xb;
        puVar4 = puVar6;
      }
      *puVar4 = local_80;
      puVar4[1] = uStack_7c;
      puVar4[2] = uStack_78;
      puVar4[3] = uStack_74;
      puVar4[4] = uStack_70;
      puVar4[5] = uStack_6c;
      puVar4[6] = uStack_68;
      puVar4[7] = uStack_64;
      puVar4[8] = local_60;
      puVar4[9] = uStack_5c;
      puVar4[10] = uStack_58;
    }
    else {
      puVar4 = puVar2 + 0xb;
      puVar5 = puVar2;
      if (param_1 < puVar2) {
        if (0 < (int)puVar2 - (int)param_1) {
          uVar1 = ((int)puVar2 - (int)param_1) / 0x2c;
          if ((uVar1 & 1) != 0) {
            *puVar2 = puVar2[-0xb];
            puVar2[1] = puVar2[-10];
            puVar2[2] = puVar2[-9];
            puVar2[3] = puVar2[-8];
            puVar2[4] = puVar2[-7];
            puVar2[5] = puVar2[-6];
            puVar2[6] = puVar2[-5];
            puVar2[7] = puVar2[-4];
            puVar5 = puVar2 + -0xb;
            puVar2[8] = puVar2[-3];
            puVar2[9] = puVar2[-2];
            puVar2[10] = puVar2[-1];
            puVar4 = puVar2;
          }
          for (iVar3 = (int)uVar1 >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
            uVar7 = puVar5[-10];
            uVar8 = puVar5[-9];
            uVar9 = puVar5[-8];
            uVar10 = puVar5[-7];
            uVar11 = puVar5[-6];
            uVar12 = puVar5[-5];
            uVar13 = puVar5[-4];
            puVar4[-0xb] = puVar5[-0xb];
            puVar4[-10] = uVar7;
            puVar4[-9] = uVar8;
            puVar4[-8] = uVar9;
            puVar4[-7] = uVar10;
            puVar4[-6] = uVar11;
            puVar4[-5] = uVar12;
            puVar4[-4] = uVar13;
            uVar7 = puVar5[-2];
            uVar8 = puVar5[-1];
            puVar4[-3] = puVar5[-3];
            puVar4[-2] = uVar7;
            puVar4[-1] = uVar8;
            uVar7 = puVar5[-0x15];
            uVar8 = puVar5[-0x14];
            uVar9 = puVar5[-0x13];
            uVar10 = puVar5[-0x12];
            uVar11 = puVar5[-0x11];
            uVar12 = puVar5[-0x10];
            uVar13 = puVar5[-0xf];
            puVar6 = puVar5 + -0xe;
            puVar4[-0x16] = puVar5[-0x16];
            puVar4[-0x15] = uVar7;
            puVar4[-0x14] = uVar8;
            puVar4[-0x13] = uVar9;
            puVar4[-0x12] = uVar10;
            puVar4[-0x11] = uVar11;
            puVar4[-0x10] = uVar12;
            puVar4[-0xf] = uVar13;
            uVar7 = puVar5[-0xd];
            uVar8 = puVar5[-0xc];
            puVar5 = puVar5 + -0x16;
            puVar4[-0xe] = *puVar6;
            puVar4[-0xd] = uVar7;
            puVar4[-0xc] = uVar8;
            puVar4 = puVar4 + -0x16;
          }
        }
      }
      else {
        for (; param_1 != puVar5; puVar5 = puVar5 + -0xb) {
          uVar7 = puVar5[-10];
          uVar8 = puVar5[-9];
          uVar9 = puVar5[-8];
          uVar10 = puVar5[-7];
          uVar11 = puVar5[-6];
          uVar12 = puVar5[-5];
          uVar13 = puVar5[-4];
          puVar4[-0xb] = puVar5[-0xb];
          puVar4[-10] = uVar7;
          puVar4[-9] = uVar8;
          puVar4[-8] = uVar9;
          puVar4[-7] = uVar10;
          puVar4[-6] = uVar11;
          puVar4[-5] = uVar12;
          puVar4[-4] = uVar13;
          uVar7 = puVar5[-2];
          uVar8 = puVar5[-1];
          puVar4[-3] = puVar5[-3];
          puVar4[-2] = uVar7;
          puVar4[-1] = uVar8;
          puVar4 = puVar4 + -0xb;
        }
      }
      *param_1 = local_54;
      param_1[1] = uStack_50;
      param_1[2] = uStack_4c;
      param_1[3] = uStack_48;
      param_1[4] = uStack_44;
      param_1[5] = uStack_40;
      param_1[6] = uStack_3c;
      param_1[7] = uStack_38;
      param_1[8] = local_34;
      param_1[9] = uStack_30;
      param_1[10] = uStack_2c;
    }
  }
  return;
}



void fn_007a2e88(int param_1,int param_2,code *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_53;
  undefined4 local_50;
  undefined *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined1 local_37;
  undefined4 local_34;
  int iStack_30;
  int iStack_2c;
  code *local_28;
  
  if (param_1 == param_2) {
    return;
  }
  iVar5 = param_1 + 0x1c;
  if (iVar5 != param_2) {
    iStack_30 = param_1;
    iStack_2c = param_2;
    local_28 = param_3;
    do {
      pcVar1 = local_28;
      local_48 = *(undefined4 *)(iVar5 + 4);
      local_44 = *(undefined4 *)(iVar5 + 8);
      uStack_40 = *(undefined4 *)(iVar5 + 0xc);
      local_3c = *(undefined4 *)(iVar5 + 0x10);
      local_38 = *(undefined1 *)(iVar5 + 0x14);
      local_37 = *(undefined1 *)(iVar5 + 0x15);
      local_34 = *(undefined4 *)(iVar5 + 0x18);
      local_4c = &DAT_00851808;
      iVar2 = (*local_28)(&local_4c,param_1);
      if (iVar2 == 0) {
        local_64 = local_48;
        local_60 = local_44;
        uStack_5c = uStack_40;
        local_58 = local_3c;
        local_54 = local_38;
        local_53 = local_37;
        local_50 = local_34;
        local_68 = &DAT_00851808;
        iVar4 = (*pcVar1)(&local_68);
        iVar2 = iVar5;
        while (iVar4 != 0) {
          *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar2 + -0x18);
          *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar2 + -0x14);
          *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar2 + -0x10);
          *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar2 + -0xc);
          *(undefined1 *)(iVar2 + 0x14) = *(undefined1 *)(iVar2 + -8);
          *(undefined1 *)(iVar2 + 0x15) = *(undefined1 *)(iVar2 + -7);
          *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar2 + -4);
          iVar4 = (*pcVar1)(&local_68);
          iVar2 = iVar2 + -0x1c;
        }
        *(undefined4 *)(iVar2 + 4) = local_64;
        *(undefined4 *)(iVar2 + 8) = local_60;
        *(undefined4 *)(iVar2 + 0xc) = uStack_5c;
        *(undefined4 *)(iVar2 + 0x10) = local_58;
        *(undefined1 *)(iVar2 + 0x14) = local_54;
        *(undefined1 *)(iVar2 + 0x15) = local_53;
        *(undefined4 *)(iVar2 + 0x18) = local_50;
      }
      else {
        iVar2 = iVar5 + 0x1c;
        for (iVar4 = iVar5; param_1 != iVar4; iVar4 = iVar4 + -0x1c) {
          *(undefined4 *)(iVar2 + -0x18) = *(undefined4 *)(iVar4 + -0x18);
          uVar3 = *(undefined4 *)(iVar4 + -0x10);
          *(undefined4 *)(iVar2 + -0x14) = *(undefined4 *)(iVar4 + -0x14);
          *(undefined4 *)(iVar2 + -0x10) = uVar3;
          *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar4 + -0xc);
          *(undefined1 *)(iVar2 + -8) = *(undefined1 *)(iVar4 + -8);
          *(undefined1 *)(iVar2 + -7) = *(undefined1 *)(iVar4 + -7);
          *(undefined4 *)(iVar2 + -4) = *(undefined4 *)(iVar4 + -4);
          iVar2 = iVar2 + -0x1c;
        }
        *(undefined4 *)(param_1 + 4) = local_48;
        *(undefined4 *)(param_1 + 8) = local_44;
        *(undefined4 *)(param_1 + 0xc) = uStack_40;
        *(undefined4 *)(param_1 + 0x10) = local_3c;
        *(undefined1 *)(param_1 + 0x14) = local_38;
        *(undefined1 *)(param_1 + 0x15) = local_37;
        *(undefined4 *)(param_1 + 0x18) = local_34;
      }
      iVar5 = iVar5 + 0x1c;
    } while (iVar5 != param_2);
  }
  return;
}


