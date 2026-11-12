#include "0079fe04_007a0058.h"



void fn_007a0058(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,code *param_11)

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
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  iVar4 = param_2;
  while( true ) {
    iVar6 = iVar4 * 2;
    iVar5 = iVar6 + 2;
    if (param_3 <= iVar5) break;
    iVar1 = param_1 + iVar5 * 0x1c;
    iVar1 = (*param_11)(iVar1,iVar1 + -0x1c);
    if (iVar1 != 0) {
      iVar5 = iVar6 + 1;
    }
    puVar2 = (undefined4 *)(param_1 + iVar4 * 0x1c);
    puVar3 = (undefined4 *)(param_1 + iVar5 * 0x1c);
    uVar7 = puVar3[1];
    uVar8 = puVar3[2];
    uVar9 = puVar3[3];
    uVar10 = puVar3[4];
    uVar11 = puVar3[5];
    uVar12 = puVar3[6];
    *puVar2 = *puVar3;
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    puVar2[4] = uVar10;
    puVar2[5] = uVar11;
    puVar2[6] = uVar12;
    iVar4 = iVar5;
  }
  if (iVar5 == param_3) {
    iVar5 = param_1 + iVar5 * 0x1c;
    puVar2 = (undefined4 *)(param_1 + iVar4 * 0x1c);
    uVar7 = *(undefined4 *)(iVar5 + -0x18);
    uVar8 = *(undefined4 *)(iVar5 + -0x14);
    uVar9 = *(undefined4 *)(iVar5 + -0x10);
    uVar10 = *(undefined4 *)(iVar5 + -0xc);
    uVar11 = *(undefined4 *)(iVar5 + -8);
    uVar12 = *(undefined4 *)(iVar5 + -4);
    iVar4 = iVar6 + 1;
    *puVar2 = *(undefined4 *)(iVar5 + -0x1c);
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    puVar2[4] = uVar10;
    puVar2[5] = uVar11;
    puVar2[6] = uVar12;
  }
  local_58 = param_4;
  local_54 = param_5;
  uStack_50 = param_6;
  uStack_4c = param_7;
  uStack_48 = param_8;
  uStack_44 = param_9;
  uStack_40 = param_10;
  while (iVar6 = (iVar4 + -1) / 2, param_2 < iVar4) {
    puVar2 = (undefined4 *)(param_1 + iVar6 * 0x1c);
    iVar5 = (*param_11)(puVar2,&local_58);
    if (iVar5 == 0) break;
    uVar7 = puVar2[1];
    uVar8 = puVar2[2];
    uVar9 = puVar2[3];
    uVar10 = puVar2[4];
    uVar11 = puVar2[5];
    uVar12 = puVar2[6];
    puVar3 = (undefined4 *)(param_1 + iVar4 * 0x1c);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
    puVar3[4] = uVar10;
    puVar3[5] = uVar11;
    puVar3[6] = uVar12;
    iVar4 = iVar6;
  }
  puVar2 = (undefined4 *)(param_1 + iVar4 * 0x1c);
  *puVar2 = local_58;
  puVar2[1] = local_54;
  puVar2[2] = uStack_50;
  puVar2[3] = uStack_4c;
  puVar2[4] = uStack_48;
  puVar2[5] = uStack_44;
  puVar2[6] = uStack_40;
  return;
}



void fn_0079ff68(int param_1,int param_2,int param_3,undefined4 *param_4,code *param_5)

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
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar4 = param_2;
  while( true ) {
    iVar6 = iVar4 * 2;
    iVar5 = iVar6 + 2;
    if (param_3 <= iVar5) break;
    iVar1 = param_1 + iVar5 * 0x20;
    iVar1 = (*param_5)(iVar1,iVar1 + -0x20);
    if (iVar1 != 0) {
      iVar5 = iVar6 + 1;
    }
    puVar2 = (undefined4 *)(param_1 + iVar4 * 0x20);
    puVar3 = (undefined4 *)(param_1 + iVar5 * 0x20);
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
    iVar4 = iVar5;
  }
  if (iVar5 == param_3) {
    iVar5 = param_1 + iVar5 * 0x20;
    puVar2 = (undefined4 *)(param_1 + iVar4 * 0x20);
    uVar7 = *(undefined4 *)(iVar5 + -0x1c);
    uVar8 = *(undefined4 *)(iVar5 + -0x18);
    uVar9 = *(undefined4 *)(iVar5 + -0x14);
    uVar10 = *(undefined4 *)(iVar5 + -0x10);
    uVar11 = *(undefined4 *)(iVar5 + -0xc);
    uVar12 = *(undefined4 *)(iVar5 + -8);
    uVar13 = *(undefined4 *)(iVar5 + -4);
    iVar4 = iVar6 + 1;
    *puVar2 = *(undefined4 *)(iVar5 + -0x20);
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    puVar2[4] = uVar10;
    puVar2[5] = uVar11;
    puVar2[6] = uVar12;
    puVar2[7] = uVar13;
  }
  local_48 = *param_4;
  uStack_44 = param_4[1];
  uStack_40 = param_4[2];
  uStack_3c = param_4[3];
  uStack_38 = param_4[4];
  uStack_34 = param_4[5];
  uStack_30 = param_4[6];
  uStack_2c = param_4[7];
  while (iVar6 = (iVar4 + -1) / 2, param_2 < iVar4) {
    puVar2 = (undefined4 *)(param_1 + iVar6 * 0x20);
    iVar5 = (*param_5)(puVar2,&local_48);
    if (iVar5 == 0) break;
    uVar7 = puVar2[1];
    uVar8 = puVar2[2];
    uVar9 = puVar2[3];
    uVar10 = puVar2[4];
    uVar11 = puVar2[5];
    uVar12 = puVar2[6];
    uVar13 = puVar2[7];
    puVar3 = (undefined4 *)(param_1 + iVar4 * 0x20);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
    puVar3[4] = uVar10;
    puVar3[5] = uVar11;
    puVar3[6] = uVar12;
    puVar3[7] = uVar13;
    iVar4 = iVar6;
  }
  puVar2 = (undefined4 *)(param_1 + iVar4 * 0x20);
  *puVar2 = local_48;
  puVar2[1] = uStack_44;
  puVar2[2] = uStack_40;
  puVar2[3] = uStack_3c;
  puVar2[4] = uStack_38;
  puVar2[5] = uStack_34;
  puVar2[6] = uStack_30;
  puVar2[7] = uStack_2c;
  return;
}



void fn_0079fe04(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
                 undefined4 param_14,code *param_15)

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
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  
  iVar4 = param_2;
  while( true ) {
    iVar6 = iVar4 * 2;
    iVar5 = iVar6 + 2;
    if (param_3 <= iVar5) break;
    iVar1 = param_1 + iVar5 * 0x2c;
    iVar1 = (*param_15)(iVar1,iVar1 + -0x2c);
    if (iVar1 != 0) {
      iVar5 = iVar6 + 1;
    }
    puVar3 = (undefined4 *)(param_1 + iVar5 * 0x2c);
    puVar2 = (undefined4 *)(param_1 + iVar4 * 0x2c);
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
    puVar2[8] = puVar3[8];
    puVar2[9] = uVar7;
    puVar2[10] = uVar8;
    iVar4 = iVar5;
  }
  if (iVar5 == param_3) {
    iVar5 = param_1 + iVar5 * 0x2c;
    uVar7 = *(undefined4 *)(iVar5 + -0x28);
    uVar8 = *(undefined4 *)(iVar5 + -0x24);
    uVar9 = *(undefined4 *)(iVar5 + -0x20);
    uVar10 = *(undefined4 *)(iVar5 + -0x1c);
    uVar11 = *(undefined4 *)(iVar5 + -0x18);
    uVar12 = *(undefined4 *)(iVar5 + -0x14);
    uVar13 = *(undefined4 *)(iVar5 + -0x10);
    puVar2 = (undefined4 *)(param_1 + iVar4 * 0x2c);
    iVar4 = iVar6 + 1;
    *puVar2 = *(undefined4 *)(iVar5 + -0x2c);
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    puVar2[4] = uVar10;
    puVar2[5] = uVar11;
    puVar2[6] = uVar12;
    puVar2[7] = uVar13;
    uVar7 = *(undefined4 *)(iVar5 + -8);
    uVar8 = *(undefined4 *)(iVar5 + -4);
    puVar2[8] = *(undefined4 *)(iVar5 + -0xc);
    puVar2[9] = uVar7;
    puVar2[10] = uVar8;
  }
  local_78 = param_4;
  local_74 = param_5;
  uStack_70 = param_6;
  uStack_6c = param_7;
  uStack_68 = param_8;
  uStack_64 = param_9;
  uStack_60 = param_10;
  uStack_5c = param_11;
  local_58 = param_12;
  uStack_54 = param_13;
  uStack_50 = param_14;
  while (iVar6 = (iVar4 + -1) / 2, param_2 < iVar4) {
    puVar2 = (undefined4 *)(param_1 + iVar6 * 0x2c);
    iVar5 = (*param_15)(puVar2,&local_78);
    if (iVar5 == 0) break;
    uVar7 = puVar2[1];
    uVar8 = puVar2[2];
    uVar9 = puVar2[3];
    uVar10 = puVar2[4];
    uVar11 = puVar2[5];
    uVar12 = puVar2[6];
    uVar13 = puVar2[7];
    puVar3 = (undefined4 *)(param_1 + iVar4 * 0x2c);
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
    puVar3[8] = puVar2[8];
    puVar3[9] = uVar7;
    puVar3[10] = uVar8;
    iVar4 = iVar6;
  }
  puVar2 = (undefined4 *)(param_1 + iVar4 * 0x2c);
  *puVar2 = local_78;
  puVar2[1] = local_74;
  puVar2[2] = uStack_70;
  puVar2[3] = uStack_6c;
  puVar2[4] = uStack_68;
  puVar2[5] = uStack_64;
  puVar2[6] = uStack_60;
  puVar2[7] = uStack_5c;
  puVar2[8] = local_58;
  puVar2[9] = uStack_54;
  puVar2[10] = uStack_50;
  return;
}


