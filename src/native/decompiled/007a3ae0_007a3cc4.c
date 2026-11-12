#include "007a3ae0_007a3cc4.h"



void fn_007a3cc4(uint *param_1,uint *param_2)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *in_r12;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if (param_1 != param_2) {
    in_r12 = param_1 + 3;
  }
  if (param_1 == param_2 || in_r12 == param_2) {
    return;
  }
  do {
    uVar6 = *in_r12;
    uVar7 = in_r12[1];
    uVar8 = in_r12[2];
    cVar1 = (char)uVar6;
    if (cVar1 == (char)*param_1) {
      if ((uVar6 & 0xffff) >> 8 < (uint)*(byte *)((int)param_1 + 1)) goto LAB_007a3d20;
LAB_007a3dc0:
      puVar5 = in_r12;
      if (cVar1 == (char)in_r12[-3]) {
        puVar2 = in_r12 + -3;
        puVar4 = in_r12;
        if ((uVar6 & 0xffff) >> 8 < (uint)*(byte *)((int)in_r12 + -0xb)) goto LAB_007a3df8;
      }
      else {
        puVar2 = in_r12 + -3;
        puVar4 = in_r12;
        if (cVar1 != '\0') {
LAB_007a3df8:
          do {
            while( true ) {
              puVar5 = puVar2;
              uVar9 = puVar5[1];
              uVar10 = puVar5[2];
              *puVar4 = *puVar5;
              puVar4[1] = uVar9;
              puVar4[2] = uVar10;
              puVar2 = puVar5 + -3;
              puVar4 = puVar5;
              if (cVar1 == (char)*puVar2) break;
              if (cVar1 == '\0') goto LAB_007a3e30;
            }
          } while ((uVar6 & 0xffff) >> 8 < (uint)*(byte *)((int)puVar5 + -0xb));
        }
      }
LAB_007a3e30:
      *puVar5 = uVar6;
      puVar5[1] = uVar7;
      puVar5[2] = uVar8;
    }
    else {
      if (cVar1 == '\0') goto LAB_007a3dc0;
LAB_007a3d20:
      puVar5 = in_r12 + 3;
      puVar2 = in_r12;
      if (param_1 < in_r12) {
        if (0 < (int)in_r12 - (int)param_1) {
          uVar9 = ((int)in_r12 - (int)param_1) / 0xc;
          if ((uVar9 & 1) != 0) {
            puVar2 = in_r12 + -3;
            *in_r12 = *puVar2;
            in_r12[1] = in_r12[-2];
            in_r12[2] = in_r12[-1];
            puVar5 = in_r12;
          }
          for (iVar3 = (int)uVar9 >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
            uVar9 = puVar2[-2];
            uVar10 = puVar2[-1];
            puVar5[-3] = puVar2[-3];
            puVar5[-2] = uVar9;
            puVar5[-1] = uVar10;
            uVar9 = puVar2[-5];
            uVar10 = puVar2[-4];
            puVar5[-6] = puVar2[-6];
            puVar5[-5] = uVar9;
            puVar5[-4] = uVar10;
            puVar2 = puVar2 + -6;
            puVar5 = puVar5 + -6;
          }
        }
      }
      else {
        while (param_1 != puVar2) {
          uVar9 = puVar2[-2];
          uVar10 = puVar2[-1];
          puVar5[-3] = puVar2[-3];
          puVar5[-2] = uVar9;
          puVar5[-1] = uVar10;
          puVar5 = puVar5 + -3;
          puVar2 = puVar2 + -3;
        }
      }
      *param_1 = uVar6;
      param_1[1] = uVar7;
      param_1[2] = uVar8;
    }
    in_r12 = in_r12 + 3;
    if (in_r12 == param_2) {
      return;
    }
  } while( true );
}



void fn_007a3ae0(undefined4 *param_1,undefined4 *param_2,code *param_3)

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


