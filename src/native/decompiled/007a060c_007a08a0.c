#include "007a060c_007a08a0.h"



void fn_007a08a0(int param_1,int param_2,int param_3,undefined1 *param_4,int param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar5 = param_2;
  while( true ) {
    iVar7 = iVar5 * 2;
    iVar6 = iVar7 + 2;
    if (param_3 <= iVar6) break;
    iVar3 = param_1 + iVar6 * 0x1c;
    iVar3 = (**(code **)(**(int **)(param_5 + 8) + 8))(*(int **)(param_5 + 8),iVar3,iVar3 + -0x1c);
    if (iVar3 != 0) {
      iVar6 = iVar7 + 1;
    }
    puVar4 = (undefined4 *)(param_1 + iVar6 * 0x1c);
    puVar2 = (undefined4 *)(param_1 + iVar5 * 0x1c);
    uVar8 = puVar4[1];
    uVar9 = puVar4[2];
    uVar10 = puVar4[3];
    uVar11 = puVar4[4];
    uVar12 = puVar4[5];
    uVar13 = puVar4[6];
    *puVar2 = *puVar4;
    puVar2[1] = uVar8;
    puVar2[2] = uVar9;
    puVar2[3] = uVar10;
    puVar2[4] = uVar11;
    puVar2[5] = uVar12;
    puVar2[6] = uVar13;
    iVar5 = iVar6;
  }
  if (iVar6 == param_3) {
    iVar6 = param_1 + iVar6 * 0x1c;
    puVar2 = (undefined4 *)(param_1 + iVar5 * 0x1c);
    uVar13 = *(undefined4 *)(iVar6 + -4);
    iVar5 = iVar7 + 1;
    uVar9 = *(undefined4 *)(iVar6 + -0x18);
    uVar10 = *(undefined4 *)(iVar6 + -0x14);
    uVar11 = *(undefined4 *)(iVar6 + -0x10);
    uVar12 = *(undefined4 *)(iVar6 + -0xc);
    uVar8 = *(undefined4 *)(iVar6 + -8);
    *puVar2 = *(undefined4 *)(iVar6 + -0x1c);
    puVar2[1] = uVar9;
    puVar2[2] = uVar10;
    puVar2[3] = uVar11;
    puVar2[4] = uVar12;
    puVar2[5] = uVar8;
    puVar2[6] = uVar13;
  }
  uVar1 = (uint)local_40 >> 8;
  local_40 = CONCAT31((int3)uVar1,*param_4);
  local_3c = *(undefined4 *)(param_4 + 4);
  uStack_38 = *(undefined4 *)(param_4 + 8);
  local_34 = *(undefined4 *)(param_4 + 0xc);
  local_30 = *(undefined4 *)(param_4 + 0x10);
  local_2c = *(undefined4 *)(param_4 + 0x14);
  local_28 = *(undefined4 *)(param_4 + 0x18);
  while (iVar7 = (iVar5 + -1) / 2, param_2 < iVar5) {
    puVar2 = (undefined4 *)(param_1 + iVar7 * 0x1c);
    iVar6 = (**(code **)(**(int **)(param_5 + 8) + 8))(*(int **)(param_5 + 8),puVar2,&local_40);
    if (iVar6 == 0) break;
    uVar8 = puVar2[1];
    uVar9 = puVar2[2];
    uVar10 = puVar2[3];
    uVar11 = puVar2[4];
    uVar12 = puVar2[5];
    uVar13 = puVar2[6];
    puVar4 = (undefined4 *)(param_1 + iVar5 * 0x1c);
    *puVar4 = *puVar2;
    puVar4[1] = uVar8;
    puVar4[2] = uVar9;
    puVar4[3] = uVar10;
    puVar4[4] = uVar11;
    puVar4[5] = uVar12;
    puVar4[6] = uVar13;
    iVar5 = iVar7;
  }
  puVar2 = (undefined4 *)(param_1 + iVar5 * 0x1c);
  *puVar2 = local_40;
  puVar2[1] = local_3c;
  puVar2[2] = uStack_38;
  puVar2[3] = local_34;
  puVar2[4] = local_30;
  puVar2[5] = local_2c;
  puVar2[6] = local_28;
  return;
}



void fn_007a0770(int param_1,int param_2,int param_3,float *param_4)

{
  int iVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 in_s0;
  undefined4 in_s1;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  
  iVar1 = param_2;
  while( true ) {
    iVar5 = iVar1 * 2;
    iVar7 = iVar5 + 2;
    if (param_3 <= iVar7) break;
    pfVar2 = (float *)(param_1 + iVar7 * 8);
    fVar9 = *pfVar2 - *param_4;
    fVar11 = pfVar2[-2] - *param_4;
    fVar8 = pfVar2[1] - param_4[1];
    fVar10 = pfVar2[-1] - param_4[1];
    if (SQRT(fVar9 * fVar9 + fVar8 * fVar8) < SQRT(fVar11 * fVar11 + fVar10 * fVar10)) {
      iVar7 = iVar5 + 1;
    }
    puVar3 = (undefined4 *)(param_1 + iVar7 * 8);
    uVar6 = puVar3[1];
    puVar4 = (undefined4 *)(param_1 + iVar1 * 8);
    *puVar4 = *puVar3;
    puVar4[1] = uVar6;
    iVar1 = iVar7;
  }
  if (iVar7 == param_3) {
    iVar7 = param_1 + iVar7 * 8;
    puVar3 = (undefined4 *)(param_1 + iVar1 * 8);
    uVar6 = *(undefined4 *)(iVar7 + -4);
    iVar1 = iVar5 + 1;
    *puVar3 = *(undefined4 *)(iVar7 + -8);
    puVar3[1] = uVar6;
  }
  local_28 = param_4;
  local_24 = in_s0;
  uStack_20 = in_s1;
  while (iVar5 = (iVar1 + -1) / 2, param_2 < iVar1) {
    puVar3 = (undefined4 *)(param_1 + iVar5 * 8);
    iVar7 = fn_006ee030(&local_28,puVar3,&local_24);
    if (iVar7 == 0) break;
    uVar6 = puVar3[1];
    puVar4 = (undefined4 *)(param_1 + iVar1 * 8);
    *puVar4 = *puVar3;
    puVar4[1] = uVar6;
    iVar1 = iVar5;
  }
  puVar3 = (undefined4 *)(param_1 + iVar1 * 8);
  *puVar3 = local_24;
  puVar3[1] = uStack_20;
  return;
}



void fn_007a060c(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
                 undefined4 param_14,undefined4 param_15,undefined4 param_16,code *param_17)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  iVar4 = param_2;
  while( true ) {
    iVar6 = iVar4 * 2;
    iVar5 = iVar6 + 2;
    if (param_3 <= iVar5) break;
    iVar1 = param_1 + iVar5 * 0x34;
    iVar1 = (*param_17)(iVar1,iVar1 + -0x34);
    if (iVar1 != 0) {
      iVar5 = iVar6 + 1;
    }
    puVar3 = (undefined4 *)(param_1 + iVar5 * 0x34);
    puVar2 = (undefined4 *)(param_1 + iVar4 * 0x34);
    uVar7 = puVar3[1];
    uVar8 = puVar3[2];
    uVar9 = puVar3[3];
    uVar10 = puVar3[4];
    uVar11 = puVar3[5];
    uVar12 = puVar3[6];
    uVar13 = puVar3[7];
    *puVar2 = *puVar3;
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    puVar2[4] = uVar10;
    puVar2[5] = uVar11;
    puVar2[6] = uVar12;
    puVar2[7] = uVar13;
    uVar7 = puVar3[9];
    uVar8 = puVar3[10];
    uVar9 = puVar3[0xb];
    uVar10 = puVar3[0xc];
    puVar2[8] = puVar3[8];
    puVar2[9] = uVar7;
    puVar2[10] = uVar8;
    puVar2[0xb] = uVar9;
    puVar2[0xc] = uVar10;
    iVar4 = iVar5;
  }
  if (iVar5 == param_3) {
    iVar5 = param_1 + iVar5 * 0x34;
    uVar7 = *(undefined4 *)(iVar5 + -0x30);
    uVar8 = *(undefined4 *)(iVar5 + -0x2c);
    uVar9 = *(undefined4 *)(iVar5 + -0x28);
    uVar10 = *(undefined4 *)(iVar5 + -0x24);
    uVar11 = *(undefined4 *)(iVar5 + -0x20);
    uVar12 = *(undefined4 *)(iVar5 + -0x1c);
    uVar13 = *(undefined4 *)(iVar5 + -0x18);
    puVar2 = (undefined4 *)(param_1 + iVar4 * 0x34);
    iVar4 = iVar6 + 1;
    *puVar2 = *(undefined4 *)(iVar5 + -0x34);
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    puVar2[4] = uVar10;
    puVar2[5] = uVar11;
    puVar2[6] = uVar12;
    puVar2[7] = uVar13;
    uVar7 = *(undefined4 *)(iVar5 + -0x10);
    uVar8 = *(undefined4 *)(iVar5 + -0xc);
    uVar9 = *(undefined4 *)(iVar5 + -8);
    uVar10 = *(undefined4 *)(iVar5 + -4);
    puVar2[8] = *(undefined4 *)(iVar5 + -0x14);
    puVar2[9] = uVar7;
    puVar2[10] = uVar8;
    puVar2[0xb] = uVar9;
    puVar2[0xc] = uVar10;
  }
  local_88 = param_4;
  local_84 = param_5;
  uStack_80 = param_6;
  uStack_7c = param_7;
  uStack_78 = param_8;
  uStack_74 = param_9;
  uStack_70 = param_10;
  uStack_6c = param_11;
  local_68 = param_12;
  uStack_64 = param_13;
  uStack_60 = param_14;
  uStack_5c = param_15;
  uStack_58 = param_16;
  while (iVar6 = (iVar4 + -1) / 2, param_2 < iVar4) {
    puVar2 = (undefined4 *)(param_1 + iVar6 * 0x34);
    iVar5 = (*param_17)(puVar2,&local_88);
    if (iVar5 == 0) break;
    uVar7 = puVar2[1];
    uVar8 = puVar2[2];
    uVar9 = puVar2[3];
    uVar10 = puVar2[4];
    uVar11 = puVar2[5];
    uVar12 = puVar2[6];
    uVar13 = puVar2[7];
    puVar3 = (undefined4 *)(param_1 + iVar4 * 0x34);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
    puVar3[4] = uVar10;
    puVar3[5] = uVar11;
    puVar3[6] = uVar12;
    puVar3[7] = uVar13;
    uVar7 = puVar2[9];
    uVar8 = puVar2[10];
    uVar9 = puVar2[0xb];
    uVar10 = puVar2[0xc];
    puVar3[8] = puVar2[8];
    puVar3[9] = uVar7;
    puVar3[10] = uVar8;
    puVar3[0xb] = uVar9;
    puVar3[0xc] = uVar10;
    iVar4 = iVar6;
  }
  puVar2 = (undefined4 *)(param_1 + iVar4 * 0x34);
  *puVar2 = local_88;
  puVar2[1] = local_84;
  puVar2[2] = uStack_80;
  puVar2[3] = uStack_7c;
  puVar2[4] = uStack_78;
  puVar2[5] = uStack_74;
  puVar2[6] = uStack_70;
  puVar2[7] = uStack_6c;
  puVar2[8] = local_68;
  puVar2[9] = uStack_64;
  puVar2[10] = uStack_60;
  puVar2[0xb] = uStack_5c;
  puVar2[0xc] = uStack_58;
  return;
}


