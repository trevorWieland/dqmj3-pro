#include "00184068_0018437c.h"



undefined8 fn_0018437c(uint *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  byte *pbVar2;
  uint *puVar3;
  uint *puVar4;
  byte *pbVar5;
  uint uVar6;
  undefined2 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  bool bVar20;
  byte *pbVar21;
  
  uVar8 = (int)param_1 - (int)param_2;
  bVar19 = uVar8 == 0;
  if (param_2 <= param_1) {
    bVar19 = param_3 == uVar8;
  }
  if ((param_2 <= param_1 && uVar8 <= param_3) && !bVar19) {
    pbVar2 = (byte *)((int)param_1 + param_3);
    bVar19 = ((uint)pbVar2 & 3) == 0;
    pbVar5 = (byte *)((int)param_2 + param_3);
    do {
      if (!bVar19) {
        param_3 = param_3 - 1;
        pbVar5 = pbVar5 + -1;
        pbVar2 = pbVar2 + -1;
        *pbVar2 = *pbVar5;
      }
      bVar19 = ((uint)pbVar2 & 3) == 0;
    } while (!bVar19);
    while (uVar8 = param_3 - 0x10, 0xf < param_3) {
      pbVar21 = pbVar5 + -4;
      iVar18 = *(int *)(pbVar5 + -8);
      iVar11 = *(int *)(pbVar5 + -0xc);
      iVar9 = *(int *)(pbVar5 + -0x10);
      pbVar5 = pbVar5 + -0x10;
      *(int *)(pbVar2 + -4) = *(int *)pbVar21;
      *(int *)(pbVar2 + -8) = iVar18;
      *(int *)(pbVar2 + -0xc) = iVar11;
      *(int *)(pbVar2 + -0x10) = iVar9;
      pbVar2 = pbVar2 + -0x10;
      param_3 = uVar8;
    }
    iVar9 = param_3 << 0x1d;
    bVar19 = iVar9 < 0;
    if ((bool)((byte)(uVar8 >> 3) & 1)) {
      pbVar21 = pbVar5 + -4;
      iVar9 = *(int *)(pbVar5 + -8);
      pbVar5 = pbVar5 + -8;
      *(int *)(pbVar2 + -4) = *(int *)pbVar21;
      *(int *)(pbVar2 + -8) = iVar9;
      pbVar2 = pbVar2 + -8;
    }
    if (bVar19) {
      pbVar5 = pbVar5 + -4;
      iVar9 = *(int *)pbVar5;
      pbVar2 = pbVar2 + -4;
      *(int *)pbVar2 = iVar9;
    }
    uVar7 = (undefined2)iVar9;
    if ((uVar8 & 3) == 0) {
      return CONCAT44(pbVar5,pbVar2);
    }
    bVar20 = (bool)((byte)(uVar8 >> 1) & 1);
    param_3 = param_3 << 0x1f;
    bVar19 = (int)param_3 < 0;
    if (bVar20) {
      pbVar5 = pbVar5 + -2;
      uVar7 = *(undefined2 *)pbVar5;
    }
    if (bVar19) {
      param_3 = (uint)pbVar5[-1];
    }
    if (bVar20) {
      pbVar2 = pbVar2 + -2;
      *(undefined2 *)pbVar2 = uVar7;
    }
    if (bVar19) {
      pbVar2[-1] = (byte)param_3;
    }
    return CONCAT44(pbVar5,pbVar2);
  }
  uVar6 = param_3 - 0x20;
  if (0x1f < param_3) {
    uVar8 = *param_2;
    uVar10 = param_2[1];
    uVar12 = param_2[2];
    uVar13 = param_2[3];
    HintPreloadData(param_2 + 0x14);
    uVar14 = param_2[4];
    uVar15 = param_2[5];
    uVar16 = param_2[6];
    uVar17 = param_2[7];
    param_2 = param_2 + 8;
    while( true ) {
      *param_1 = uVar8;
      param_1[1] = uVar10;
      param_1[2] = uVar12;
      param_1[3] = uVar13;
      bVar19 = 0x1f < uVar6;
      uVar6 = uVar6 - 0x20;
      param_1[4] = uVar14;
      param_1[5] = uVar15;
      param_1[6] = uVar16;
      param_1[7] = uVar17;
      param_1 = param_1 + 8;
      if (bVar19) {
        uVar8 = *param_2;
        uVar10 = param_2[1];
        uVar12 = param_2[2];
        uVar13 = param_2[3];
        param_2 = param_2 + 4;
      }
      HintPreloadData(param_2 + 0x10);
      if (!bVar19) break;
      uVar14 = *param_2;
      uVar15 = param_2[1];
      uVar16 = param_2[2];
      uVar17 = param_2[3];
      param_2 = param_2 + 4;
    }
  }
  if ((bool)((byte)(uVar6 >> 4) & 1)) {
    uVar8 = *param_2;
    uVar10 = param_2[1];
    uVar12 = param_2[2];
    uVar13 = param_2[3];
    param_2 = param_2 + 4;
    *param_1 = uVar8;
    param_1[1] = uVar10;
    param_1[2] = uVar12;
    param_1[3] = uVar13;
    param_1 = param_1 + 4;
  }
  if ((int)(uVar6 << 0x1c) < 0) {
    uVar8 = *param_2;
    uVar10 = param_2[1];
    param_2 = param_2 + 2;
    *param_1 = uVar8;
    param_1[1] = uVar10;
    param_1 = param_1 + 2;
  }
  puVar1 = param_1;
  puVar4 = param_2;
  if ((bool)((byte)(uVar6 >> 2) & 1)) {
    puVar4 = param_2 + 1;
    uVar8 = *param_2;
    puVar1 = param_1 + 1;
    *param_1 = uVar8;
  }
  uVar7 = (undefined2)uVar8;
  if ((uVar6 & 3) == 0) {
    return CONCAT44(puVar4,puVar1);
  }
  bVar20 = (bool)((byte)(uVar6 >> 1) & 1);
  uVar6 = uVar6 << 0x1f;
  bVar19 = (int)uVar6 < 0;
  puVar3 = puVar4;
  if (bVar20) {
    puVar3 = (uint *)((int)puVar4 + 2);
    uVar7 = (undefined2)*puVar4;
  }
  puVar4 = puVar3;
  if (bVar19) {
    puVar4 = (uint *)((int)puVar3 + 1);
    uVar6 = (uint)(byte)*puVar3;
  }
  puVar3 = puVar1;
  if (bVar20) {
    puVar3 = (uint *)((int)puVar1 + 2);
    *(undefined2 *)puVar1 = uVar7;
  }
  puVar1 = puVar3;
  if (bVar19) {
    puVar1 = (uint *)((int)puVar3 + 1);
    *(byte *)puVar3 = (byte)uVar6;
  }
  return CONCAT44(puVar4,puVar1);
}



void fn_00184220(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  fVar1 = *param_3;
  fVar3 = param_3[1];
  fVar5 = param_3[2];
  fVar7 = param_3[3];
  fVar9 = param_3[4];
  fVar11 = param_3[5];
  fVar13 = param_3[6];
  fVar15 = param_3[7];
  fVar17 = *param_2;
  fVar25 = param_2[4];
  fVar18 = param_2[8];
  fVar26 = param_2[0xc];
  fVar19 = param_2[1];
  fVar27 = param_2[5];
  fVar2 = param_3[8];
  fVar4 = param_3[9];
  fVar6 = param_3[10];
  fVar8 = param_3[0xb];
  fVar20 = param_2[9];
  fVar28 = param_2[0xd];
  fVar21 = param_2[2];
  fVar29 = param_2[6];
  fVar10 = param_3[0xc];
  fVar12 = param_3[0xd];
  fVar14 = param_3[0xe];
  fVar16 = param_3[0xf];
  fVar22 = param_2[10];
  fVar30 = param_2[0xe];
  fVar23 = param_2[3];
  fVar31 = param_2[7];
  fVar24 = param_2[0xb];
  fVar32 = param_2[0xf];
  *param_1 = fVar17 * fVar1 + fVar19 * fVar9 + fVar21 * fVar2 + fVar23 * fVar10;
  param_1[1] = fVar17 * fVar3 + fVar19 * fVar11 + fVar21 * fVar4 + fVar23 * fVar12;
  param_1[2] = fVar17 * fVar5 + fVar19 * fVar13 + fVar21 * fVar6 + fVar23 * fVar14;
  param_1[3] = fVar17 * fVar7 + fVar19 * fVar15 + fVar21 * fVar8 + fVar23 * fVar16;
  param_1[4] = fVar25 * fVar1 + fVar27 * fVar9 + fVar29 * fVar2 + fVar31 * fVar10;
  param_1[5] = fVar25 * fVar3 + fVar27 * fVar11 + fVar29 * fVar4 + fVar31 * fVar12;
  param_1[6] = fVar25 * fVar5 + fVar27 * fVar13 + fVar29 * fVar6 + fVar31 * fVar14;
  param_1[7] = fVar25 * fVar7 + fVar27 * fVar15 + fVar29 * fVar8 + fVar31 * fVar16;
  param_1[8] = fVar18 * fVar1 + fVar20 * fVar9 + fVar22 * fVar2 + fVar24 * fVar10;
  param_1[9] = fVar18 * fVar3 + fVar20 * fVar11 + fVar22 * fVar4 + fVar24 * fVar12;
  param_1[10] = fVar18 * fVar5 + fVar20 * fVar13 + fVar22 * fVar6 + fVar24 * fVar14;
  param_1[0xb] = fVar18 * fVar7 + fVar20 * fVar15 + fVar22 * fVar8 + fVar24 * fVar16;
  param_1[0xc] = fVar26 * fVar1 + fVar28 * fVar9 + fVar30 * fVar2 + fVar32 * fVar10;
  param_1[0xd] = fVar26 * fVar3 + fVar28 * fVar11 + fVar30 * fVar4 + fVar32 * fVar12;
  param_1[0xe] = fVar26 * fVar5 + fVar28 * fVar13 + fVar30 * fVar6 + fVar32 * fVar14;
  param_1[0xf] = fVar26 * fVar7 + fVar28 * fVar15 + fVar30 * fVar8 + fVar32 * fVar16;
  return;
}



void fn_00184068(uint *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  
  puVar8 = (undefined4 *)param_1[1];
  if (puVar8 != (undefined4 *)param_1[2]) {
    param_1[1] = (uint)(puVar8 + 1);
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *param_2;
    }
    return;
  }
  uVar3 = (int)((int)puVar8 - *param_1) >> 2;
  if ((uint)((int)((int)param_1[2] - *param_1) >> 2) <= uVar3) {
    uVar10 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
    if (uVar10 < uVar3 + 0x20) {
      uVar10 = uVar3 + 0x20;
    }
    puVar1 = (undefined4 *)fn_00100fc6(uVar10 << 2,0);
    puVar6 = puVar1;
    for (puVar5 = (undefined4 *)*param_1; puVar5 != puVar8; puVar5 = puVar5 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar5;
      }
      puVar6 = puVar6 + 1;
    }
    puVar5 = (undefined4 *)(((int)puVar8 - *param_1 & 0xfffffffc) + (int)puVar1);
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = *param_2;
    }
    puVar6 = (undefined4 *)param_1[1];
    puVar5 = (undefined4 *)(((int)puVar8 - *param_1 & 0xfffffffc) + (int)puVar1);
    for (; puVar8 != puVar6; puVar8 = puVar8 + 1) {
      puVar5 = puVar5 + 1;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar8;
      }
    }
    uVar2 = *param_1;
    uVar7 = param_1[1];
    uVar3 = uVar2;
    if (uVar7 < uVar2) {
      do {
        uVar3 = uVar3 + 4;
      } while (uVar3 != uVar7);
    }
    fn_001008c4(uVar2,(int)(param_1[2] - uVar2) >> 2,0);
    param_1[2] = (uint)(puVar1 + uVar10);
    param_1[1] = (uint)(puVar1 + ((int)(uVar7 - uVar2) >> 2) + 1);
    *param_1 = (uint)puVar1;
    return;
  }
  param_1[1] = (uint)(puVar8 + 1);
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = puVar8[-1];
  }
  puVar5 = puVar8 + -1;
  puVar6 = puVar8;
  if (puVar8 < puVar5) {
    if (0 < (int)puVar5 - (int)puVar8) {
      iVar9 = (int)puVar5 - (int)puVar8 >> 2;
      iVar4 = 0;
      do {
        iVar9 = iVar9 + -1;
        puVar8[iVar4 + -1] = puVar5[iVar4 + -1];
        iVar4 = iVar4 + -1;
      } while (iVar9 != 0);
    }
  }
  else {
    while (puVar8 != puVar5) {
      puVar5 = puVar5 + -1;
      puVar6[-1] = *puVar5;
      puVar6 = puVar6 + -1;
    }
  }
  *puVar8 = *param_2;
  return;
}


