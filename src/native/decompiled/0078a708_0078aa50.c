#include "0078a708_0078aa50.h"



undefined4 * fn_0078aa50(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  puVar3 = (undefined4 *)param_1[1];
  if ((undefined4 *)*param_1 != puVar3) {
    puVar5 = param_3;
    puVar2 = param_2;
    if (param_3 < puVar3) {
      if (0 < (int)puVar3 - (int)param_3) {
        uVar1 = ((int)puVar3 - (int)param_3) / 0x28;
        puVar3 = param_3 + -10;
        puVar5 = param_2 + -10;
        if ((uVar1 & 1) != 0) {
          uVar6 = param_3[1];
          uVar7 = param_3[2];
          uVar8 = param_3[3];
          uVar9 = param_3[4];
          uVar10 = param_3[5];
          uVar11 = param_3[6];
          uVar12 = param_3[7];
          *param_2 = *param_3;
          param_2[1] = uVar6;
          param_2[2] = uVar7;
          param_2[3] = uVar8;
          param_2[4] = uVar9;
          param_2[5] = uVar10;
          param_2[6] = uVar11;
          param_2[7] = uVar12;
          uVar6 = param_3[9];
          param_2[8] = param_3[8];
          param_2[9] = uVar6;
          puVar3 = param_3;
          puVar5 = param_2;
        }
        for (iVar4 = (int)uVar1 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
          uVar6 = puVar3[0xb];
          uVar7 = puVar3[0xc];
          uVar8 = puVar3[0xd];
          uVar9 = puVar3[0xe];
          uVar10 = puVar3[0xf];
          uVar11 = puVar3[0x10];
          uVar12 = puVar3[0x11];
          puVar5[10] = puVar3[10];
          puVar5[0xb] = uVar6;
          puVar5[0xc] = uVar7;
          puVar5[0xd] = uVar8;
          puVar5[0xe] = uVar9;
          puVar5[0xf] = uVar10;
          puVar5[0x10] = uVar11;
          puVar5[0x11] = uVar12;
          uVar6 = puVar3[0x13];
          puVar5[0x12] = puVar3[0x12];
          puVar5[0x13] = uVar6;
          uVar6 = puVar3[0x15];
          uVar7 = puVar3[0x16];
          uVar8 = puVar3[0x17];
          uVar9 = puVar3[0x18];
          uVar10 = puVar3[0x19];
          uVar11 = puVar3[0x1a];
          uVar12 = puVar3[0x1b];
          puVar2 = puVar3 + 0x1c;
          puVar5[0x14] = puVar3[0x14];
          puVar5[0x15] = uVar6;
          puVar5[0x16] = uVar7;
          puVar5[0x17] = uVar8;
          puVar5[0x18] = uVar9;
          puVar5[0x19] = uVar10;
          puVar5[0x1a] = uVar11;
          puVar5[0x1b] = uVar12;
          uVar6 = puVar3[0x1d];
          puVar3 = puVar3 + 0x14;
          puVar5[0x1c] = *puVar2;
          puVar5[0x1d] = uVar6;
          puVar5 = puVar5 + 0x14;
        }
        puVar2 = param_2 + uVar1 * 10;
      }
    }
    else {
      for (; puVar5 != puVar3; puVar5 = puVar5 + 10) {
        uVar6 = puVar5[1];
        uVar7 = puVar5[2];
        uVar8 = puVar5[3];
        uVar9 = puVar5[4];
        uVar10 = puVar5[5];
        uVar11 = puVar5[6];
        uVar12 = puVar5[7];
        *puVar2 = *puVar5;
        puVar2[1] = uVar6;
        puVar2[2] = uVar7;
        puVar2[3] = uVar8;
        puVar2[4] = uVar9;
        puVar2[5] = uVar10;
        puVar2[6] = uVar11;
        puVar2[7] = uVar12;
        uVar6 = puVar5[9];
        puVar2[8] = puVar5[8];
        puVar2[9] = uVar6;
        puVar2 = puVar2 + 10;
      }
    }
    puVar3 = (undefined4 *)param_1[1];
    if (puVar3 < puVar2) {
      do {
        puVar2 = puVar2 + 10;
      } while (puVar2 != puVar3);
    }
    param_1[1] = (uint)(puVar3 + (((int)param_3 - (int)param_2) / 0x28) * -10);
  }
  return param_2;
}



void fn_0078a864(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  
  puVar9 = param_1 + 1;
  puVar1 = (undefined4 *)*puVar9;
  uVar4 = (int)((int)puVar1 - *param_1) >> 4;
  if ((uint)((int)(param_1[2] - *param_1) >> 4) <= uVar4) {
    uVar6 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
    uVar12 = uVar4 + 0x20;
    if (uVar4 + 0x20 <= uVar6) {
      uVar12 = uVar6;
    }
    puVar2 = (undefined4 *)fn_00100fc6(uVar12 << 4,0);
    puVar7 = puVar2;
    for (puVar1 = (undefined4 *)*param_1; puVar1 != param_2; puVar1 = puVar1 + 4) {
      if (puVar7 != (undefined4 *)0x0) {
        uVar10 = puVar1[1];
        uVar11 = puVar1[2];
        uVar13 = puVar1[3];
        *puVar7 = *puVar1;
        puVar7[1] = uVar10;
        puVar7[2] = uVar11;
        puVar7[3] = uVar13;
      }
      puVar7 = puVar7 + 4;
    }
    puVar1 = (undefined4 *)(((int)param_2 - *param_1 & 0xfffffff0) + (int)puVar2);
    if (puVar1 != (undefined4 *)0x0) {
      uVar10 = param_3[1];
      uVar11 = param_3[2];
      uVar13 = param_3[3];
      *puVar1 = *param_3;
      puVar1[1] = uVar10;
      puVar1[2] = uVar11;
      puVar1[3] = uVar13;
    }
    puVar7 = (undefined4 *)*puVar9;
    puVar1 = (undefined4 *)(((int)param_2 - *param_1 & 0xfffffff0) + (int)puVar2);
    for (; param_2 != puVar7; param_2 = param_2 + 4) {
      puVar3 = puVar1 + 4;
      if (puVar3 != (undefined4 *)0x0) {
        uVar10 = param_2[1];
        uVar11 = param_2[2];
        uVar13 = param_2[3];
        *puVar3 = *param_2;
        puVar1[5] = uVar10;
        puVar1[6] = uVar11;
        puVar1[7] = uVar13;
      }
      puVar1 = puVar3;
    }
    uVar6 = *param_1;
    uVar8 = *puVar9;
    uVar4 = uVar6;
    if (uVar8 < uVar6) {
      do {
        uVar4 = uVar4 + 0x10;
      } while (uVar4 != uVar8);
    }
    fn_001008c4(uVar6,(int)(param_1[2] - uVar6) >> 4,0);
    param_1[2] = (uint)(puVar2 + uVar12 * 4);
    *puVar9 = (uint)(puVar2 + ((int)(uVar8 - uVar6) >> 4) * 4 + 4);
    *param_1 = (uint)puVar2;
    return;
  }
  *puVar9 = (uint)(puVar1 + 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = puVar1[-4];
    puVar1[1] = puVar1[-3];
    puVar1[2] = puVar1[-2];
    puVar1[3] = puVar1[-1];
  }
  puVar7 = puVar1 + -4;
  if (param_2 < puVar7) {
    iVar5 = (int)puVar7 - (int)param_2;
    if (0 < iVar5) {
      puVar2 = puVar1;
      if (iVar5 * 0x8000000 < 0) {
        puVar7 = puVar1 + -8;
        puVar2 = puVar1 + -4;
        *puVar2 = *puVar7;
        puVar1[-3] = puVar1[-7];
        puVar1[-2] = puVar1[-6];
        puVar1[-1] = puVar1[-5];
      }
      for (iVar5 = iVar5 >> 5; iVar5 != 0; iVar5 = iVar5 + -1) {
        uVar10 = puVar7[-3];
        uVar11 = puVar7[-2];
        uVar13 = puVar7[-1];
        puVar2[-4] = puVar7[-4];
        puVar2[-3] = uVar10;
        puVar2[-2] = uVar11;
        puVar2[-1] = uVar13;
        uVar10 = puVar7[-7];
        uVar11 = puVar7[-6];
        uVar13 = puVar7[-5];
        puVar2[-8] = puVar7[-8];
        puVar2[-7] = uVar10;
        puVar2[-6] = uVar11;
        puVar2[-5] = uVar13;
        puVar2 = puVar2 + -8;
        puVar7 = puVar7 + -8;
      }
    }
  }
  else {
    while (param_2 != puVar7) {
      uVar10 = puVar7[-3];
      uVar11 = puVar7[-2];
      uVar13 = puVar7[-1];
      puVar1[-4] = puVar7[-4];
      puVar1[-3] = uVar10;
      puVar1[-2] = uVar11;
      puVar1[-1] = uVar13;
      puVar1 = puVar1 + -4;
      puVar7 = puVar7 + -4;
    }
  }
  uVar10 = param_3[1];
  uVar11 = param_3[2];
  uVar13 = param_3[3];
  *param_2 = *param_3;
  param_2[1] = uVar10;
  param_2[2] = uVar11;
  param_2[3] = uVar13;
  return;
}



void fn_0078a708(uint *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_30 [2];
  uint *puStack_28;
  uint local_24;
  
  local_24 = param_2;
  puStack_28 = param_1;
  puVar1 = local_30;
  if (0xfc0fc0 < param_2) {
    local_30[0] = 0xfc0fc0;
    fn_002ff628(8,&DAT_008c7620);
  }
  if ((uint)((int)(param_1[2] - *param_1) / 0x104) < local_24) {
    uVar4 = (int)(param_1[1] - *param_1) / 0x104;
    local_30[0] = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
    if (local_30[0] < uVar4 + 0x20) {
      local_30[0] = uVar4 + 0x20;
    }
    if (local_30[0] <= local_24) {
      puVar1 = &local_24;
    }
    uVar5 = *puVar1;
    uVar2 = fn_00100fc6(uVar5 * 0x104,0);
    uVar6 = param_1[1];
    uVar3 = uVar2;
    for (uVar4 = *param_1; uVar4 != uVar6; uVar4 = uVar4 + 0x104) {
      if (uVar3 != 0) {
        fn_0017821c(uVar3,uVar4,0x104);
      }
      uVar3 = uVar3 + 0x104;
    }
    uVar3 = *param_1;
    uVar4 = uVar3;
    if (param_1[1] < uVar3) {
      do {
        uVar4 = uVar4 + 0x104;
      } while (uVar4 != param_1[1]);
    }
    fn_001008c4(uVar3,(int)(param_1[2] - uVar3) / 0x104,0);
    uVar4 = *param_1;
    *param_1 = uVar2;
    param_1[1] = uVar2 + ((int)(param_1[1] - uVar4) / 0x104) * 0x104;
    param_1[2] = uVar2 + uVar5 * 0x104;
  }
  return;
}


