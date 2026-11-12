#include "007a0184_007a04a8.h"



void fn_007a04a8(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
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



void fn_007a030c(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,code *param_9)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  iVar4 = param_2;
  while( true ) {
    iVar6 = iVar4 * 2;
    iVar5 = iVar6 + 2;
    if (param_3 <= iVar5) break;
    iVar1 = param_1 + iVar5 * 0x12;
    iVar1 = (*param_9)(iVar1,iVar1 + -0x12);
    if (iVar1 != 0) {
      iVar5 = iVar6 + 1;
    }
    puVar3 = (undefined4 *)(param_1 + iVar4 * 0x12);
    puVar2 = (undefined4 *)(param_1 + iVar5 * 0x12);
    *puVar3 = *puVar2;
    puVar3[1] = puVar2[1];
    puVar3[2] = puVar2[2];
    puVar3[3] = puVar2[3];
    *(undefined2 *)(puVar3 + 4) = *(undefined2 *)(puVar2 + 4);
    iVar4 = iVar5;
  }
  if (iVar5 == param_3) {
    iVar5 = param_1 + iVar5 * 0x12;
    puVar2 = (undefined4 *)(param_1 + iVar4 * 0x12);
    iVar4 = iVar6 + 1;
    *puVar2 = *(undefined4 *)(iVar5 + -0x12);
    puVar2[1] = *(undefined4 *)(iVar5 + -0xe);
    puVar2[2] = *(undefined4 *)(iVar5 + -10);
    puVar2[3] = *(undefined4 *)(iVar5 + -6);
    *(undefined2 *)(puVar2 + 4) = *(undefined2 *)(iVar5 + -2);
  }
  local_48 = param_4;
  local_44 = param_5;
  local_40 = param_6;
  local_3c = param_7;
  local_38 = param_8;
  while (iVar6 = (iVar4 + -1) / 2, param_2 < iVar4) {
    puVar2 = (undefined4 *)(param_1 + iVar6 * 0x12);
    iVar5 = (*param_9)(puVar2,&local_48);
    if (iVar5 == 0) break;
    puVar3 = (undefined4 *)(param_1 + iVar4 * 0x12);
    *puVar3 = *puVar2;
    puVar3[1] = puVar2[1];
    puVar3[2] = puVar2[2];
    puVar3[3] = puVar2[3];
    *(undefined2 *)(puVar3 + 4) = *(undefined2 *)(puVar2 + 4);
    iVar4 = iVar6;
  }
  puVar2 = (undefined4 *)(param_1 + iVar4 * 0x12);
  *puVar2 = local_48;
  puVar2[1] = local_44;
  puVar2[2] = local_40;
  puVar2[3] = local_3c;
  *(undefined2 *)(puVar2 + 4) = (undefined2)local_38;
  return;
}



void fn_007a0184(int param_1,int param_2,int param_3,undefined4 param_4,code *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_38 [8];
  int local_30;
  int iStack_2c;
  int local_28;
  
  iVar5 = param_2;
  while( true ) {
    iVar4 = iVar5 * 2;
    iVar6 = iVar4 + 2;
    if (param_3 <= iVar6) break;
    iVar1 = param_1 + iVar6 * 0x14;
    iVar1 = (*param_5)(iVar1,iVar1 + -0x14);
    if (iVar1 != 0) {
      iVar6 = iVar4 + 1;
    }
    iVar4 = param_1 + iVar6 * 0x14;
    puVar2 = (undefined4 *)(param_1 + iVar5 * 0x14);
    *puVar2 = *(undefined4 *)(param_1 + iVar6 * 0x14);
    puVar2[1] = *(undefined4 *)(iVar4 + 4);
    fn_0078e228(puVar2 + 2,iVar4 + 8);
    iVar5 = iVar6;
  }
  if (iVar6 == param_3) {
    iVar6 = param_1 + iVar6 * 0x14;
    puVar2 = (undefined4 *)(param_1 + iVar5 * 0x14);
    *puVar2 = *(undefined4 *)(iVar6 + -0x14);
    puVar2[1] = *(undefined4 *)(iVar6 + -0x10);
    fn_0078e228(puVar2 + 2,iVar6 + -0xc);
    iVar5 = iVar4 + 1;
  }
  puVar2 = (undefined4 *)fn_0034194c(auStack_38,param_4);
  while (iVar4 = (iVar5 + -1) / 2, param_2 < iVar5) {
    iVar6 = param_1 + iVar4 * 0x14;
    iVar1 = (*param_5)(iVar6,puVar2);
    if (iVar1 == 0) break;
    puVar3 = (undefined4 *)(param_1 + iVar5 * 0x14);
    *puVar3 = *(undefined4 *)(param_1 + iVar4 * 0x14);
    puVar3[1] = *(undefined4 *)(iVar6 + 4);
    fn_0078e228(puVar3 + 2,iVar6 + 8);
    iVar5 = iVar4;
  }
  puVar3 = (undefined4 *)(param_1 + iVar5 * 0x14);
  *puVar3 = *puVar2;
  puVar3[1] = puVar2[1];
  fn_0078e228(puVar3 + 2,puVar2 + 2);
  for (iVar5 = local_30; iVar5 != iStack_2c; iVar5 = iVar5 + 0x20) {
  }
  fn_001008c4(local_30,local_28 - local_30 >> 5,0);
  return;
}


