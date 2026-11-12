#include "001694e4_001694e4.h"



undefined8 fn_001694e4(uint *param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  undefined2 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  bool bVar23;
  
  if (8 < param_3) {
    puVar6 = param_1;
    puVar3 = param_2;
    if (((uint)param_2 & 1) != 0) {
      param_3 = param_3 - 1;
      puVar3 = (uint *)((int)param_2 + 1);
      puVar6 = (uint *)((int)param_1 + 1);
      *(byte *)param_1 = (byte)*param_2;
    }
    if (((uint)puVar3 & 2) != 0) {
      param_3 = param_3 - 2;
      pbVar7 = (byte *)((int)puVar3 + 1);
      uVar12 = *puVar3;
      puVar3 = (uint *)((int)puVar3 + 2);
      bVar1 = *pbVar7;
      pbVar7 = (byte *)((int)puVar6 + 1);
      *(byte *)puVar6 = (byte)uVar12;
      puVar6 = (uint *)((int)puVar6 + 2);
      *pbVar7 = bVar1;
    }
    uVar12 = (uint)puVar6 & 3;
    if (uVar12 == 0) {
      while (uVar12 = param_3 - 0x20, 0x1f < param_3) {
        uVar13 = puVar3[1];
        uVar14 = puVar3[2];
        uVar15 = puVar3[3];
        uVar16 = puVar3[4];
        uVar17 = puVar3[5];
        uVar18 = puVar3[6];
        uVar20 = puVar3[7];
        HintPreloadData(puVar3 + 0x18);
        *puVar6 = *puVar3;
        puVar6[1] = uVar13;
        puVar6[2] = uVar14;
        puVar6[3] = uVar15;
        puVar6[4] = uVar16;
        puVar6[5] = uVar17;
        puVar6[6] = uVar18;
        puVar6[7] = uVar20;
        puVar6 = puVar6 + 8;
        puVar3 = puVar3 + 8;
        param_3 = uVar12;
      }
      uVar13 = 0;
      if ((bool)((byte)(uVar12 >> 4) & 1)) {
        uVar13 = *puVar3;
        uVar14 = puVar3[1];
        uVar15 = puVar3[2];
        uVar16 = puVar3[3];
        puVar3 = puVar3 + 4;
        *puVar6 = uVar13;
        puVar6[1] = uVar14;
        puVar6[2] = uVar15;
        puVar6[3] = uVar16;
        puVar6 = puVar6 + 4;
      }
      if ((int)(param_3 << 0x1c) < 0) {
        uVar13 = *puVar3;
        uVar14 = puVar3[1];
        puVar3 = puVar3 + 2;
        *puVar6 = uVar13;
        puVar6[1] = uVar14;
        puVar6 = puVar6 + 2;
      }
      puVar4 = puVar6;
      puVar5 = puVar3;
      if ((bool)((byte)(uVar12 >> 2) & 1)) {
        puVar5 = puVar3 + 1;
        uVar13 = *puVar3;
        puVar4 = puVar6 + 1;
        *puVar6 = uVar13;
      }
      uVar11 = (undefined2)uVar13;
      if ((uVar12 & 3) == 0) {
        return CONCAT44(puVar5,puVar4);
      }
      bVar23 = (bool)((byte)(uVar12 >> 1) & 1);
      param_3 = param_3 << 0x1f;
      bVar22 = (int)param_3 < 0;
      puVar3 = puVar5;
      if (bVar23) {
        puVar3 = (uint *)((int)puVar5 + 2);
        uVar11 = (undefined2)*puVar5;
      }
      puVar6 = puVar3;
      if (bVar22) {
        puVar6 = (uint *)((int)puVar3 + 1);
        param_3 = (uint)(byte)*puVar3;
      }
      puVar3 = puVar4;
      if (bVar23) {
        puVar3 = (uint *)((int)puVar4 + 2);
        *(undefined2 *)puVar4 = uVar11;
      }
      puVar5 = puVar3;
      if (bVar22) {
        puVar5 = (uint *)((int)puVar3 + 1);
        *(byte *)puVar3 = (byte)param_3;
      }
      return CONCAT44(puVar6,puVar5);
    }
    puVar6 = (uint *)((uint)puVar6 & 0xfffffffc);
    if (uVar12 == 2) {
      uVar12 = *puVar6 & 0xffff;
      bVar23 = SBORROW4(param_3,0x20);
      iVar10 = param_3 - 0x20;
      bVar22 = iVar10 < 0;
      if (0x1f < (int)param_3) {
        do {
          if (bVar22 == bVar23) {
            uVar13 = *puVar3;
            uVar15 = puVar3[1];
            uVar16 = puVar3[2];
            uVar17 = puVar3[3];
            uVar18 = puVar3[4];
            uVar20 = puVar3[5];
            uVar19 = puVar3[6];
            uVar21 = puVar3[7];
            puVar3 = puVar3 + 8;
            uVar14 = uVar12 | uVar13 << 0x10;
            uVar12 = uVar21 >> 0x10;
            *puVar6 = uVar14;
            puVar6[1] = uVar13 >> 0x10 | uVar15 << 0x10;
            puVar6[2] = uVar15 >> 0x10 | uVar16 << 0x10;
            puVar6[3] = uVar16 >> 0x10 | uVar17 << 0x10;
            puVar6[4] = uVar17 >> 0x10 | uVar18 << 0x10;
            puVar6[5] = uVar18 >> 0x10 | uVar20 << 0x10;
            puVar6[6] = uVar20 >> 0x10 | uVar19 << 0x10;
            puVar6[7] = uVar19 >> 0x10 | uVar21 << 0x10;
            puVar6 = puVar6 + 8;
            bVar23 = SBORROW4(iVar10,0x20);
            iVar10 = iVar10 + -0x20;
            bVar22 = iVar10 < 0;
          }
        } while (bVar22 == bVar23);
      }
      bVar23 = SBORROW4(iVar10 + 0x20,4);
      iVar10 = iVar10 + 0x1c;
      bVar22 = iVar10 < 0;
      do {
        if (bVar22 == bVar23) {
          uVar13 = *puVar3;
          *puVar6 = uVar12 | uVar13 << 0x10;
          uVar12 = uVar13 >> 0x10;
          bVar23 = SBORROW4(iVar10,4);
          iVar10 = iVar10 + -4;
          bVar22 = iVar10 < 0;
          puVar6 = puVar6 + 1;
          puVar3 = puVar3 + 1;
        }
      } while (bVar22 == bVar23);
      pbVar7 = (byte *)((int)puVar3 + -2);
      uVar12 = iVar10 + 6;
    }
    else if (uVar12 < 3) {
      uVar12 = *puVar6 & 0xff;
      bVar23 = SBORROW4(param_3,0x20);
      iVar10 = param_3 - 0x20;
      bVar22 = iVar10 < 0;
      if (0x1f < (int)param_3) {
        do {
          if (bVar22 == bVar23) {
            uVar13 = *puVar3;
            uVar15 = puVar3[1];
            uVar16 = puVar3[2];
            uVar17 = puVar3[3];
            uVar18 = puVar3[4];
            uVar20 = puVar3[5];
            uVar19 = puVar3[6];
            uVar21 = puVar3[7];
            puVar3 = puVar3 + 8;
            uVar14 = uVar12 | uVar13 << 8;
            uVar12 = uVar21 >> 0x18;
            *puVar6 = uVar14;
            puVar6[1] = uVar13 >> 0x18 | uVar15 << 8;
            puVar6[2] = uVar15 >> 0x18 | uVar16 << 8;
            puVar6[3] = uVar16 >> 0x18 | uVar17 << 8;
            puVar6[4] = uVar17 >> 0x18 | uVar18 << 8;
            puVar6[5] = uVar18 >> 0x18 | uVar20 << 8;
            puVar6[6] = uVar20 >> 0x18 | uVar19 << 8;
            puVar6[7] = uVar19 >> 0x18 | uVar21 << 8;
            puVar6 = puVar6 + 8;
            bVar23 = SBORROW4(iVar10,0x20);
            iVar10 = iVar10 + -0x20;
            bVar22 = iVar10 < 0;
          }
        } while (bVar22 == bVar23);
      }
      bVar23 = SBORROW4(iVar10 + 0x20,4);
      iVar10 = iVar10 + 0x1c;
      bVar22 = iVar10 < 0;
      do {
        if (bVar22 == bVar23) {
          uVar13 = *puVar3;
          *puVar6 = uVar12 | uVar13 << 8;
          uVar12 = uVar13 >> 0x18;
          bVar23 = SBORROW4(iVar10,4);
          iVar10 = iVar10 + -4;
          bVar22 = iVar10 < 0;
          puVar6 = puVar6 + 1;
          puVar3 = puVar3 + 1;
        }
      } while (bVar22 == bVar23);
      pbVar7 = (byte *)((int)puVar3 + -1);
      uVar12 = iVar10 + 5;
    }
    else {
      uVar12 = *puVar6 & 0xffffff;
      bVar23 = SBORROW4(param_3,0x20);
      iVar10 = param_3 - 0x20;
      bVar22 = iVar10 < 0;
      if (0x1f < (int)param_3) {
        do {
          if (bVar22 == bVar23) {
            uVar13 = *puVar3;
            uVar15 = puVar3[1];
            uVar16 = puVar3[2];
            uVar17 = puVar3[3];
            uVar18 = puVar3[4];
            uVar20 = puVar3[5];
            uVar19 = puVar3[6];
            uVar21 = puVar3[7];
            puVar3 = puVar3 + 8;
            uVar14 = uVar12 | uVar13 << 0x18;
            uVar12 = uVar21 >> 8;
            *puVar6 = uVar14;
            puVar6[1] = uVar13 >> 8 | uVar15 << 0x18;
            puVar6[2] = uVar15 >> 8 | uVar16 << 0x18;
            puVar6[3] = uVar16 >> 8 | uVar17 << 0x18;
            puVar6[4] = uVar17 >> 8 | uVar18 << 0x18;
            puVar6[5] = uVar18 >> 8 | uVar20 << 0x18;
            puVar6[6] = uVar20 >> 8 | uVar19 << 0x18;
            puVar6[7] = uVar19 >> 8 | uVar21 << 0x18;
            puVar6 = puVar6 + 8;
            bVar23 = SBORROW4(iVar10,0x20);
            iVar10 = iVar10 + -0x20;
            bVar22 = iVar10 < 0;
          }
        } while (bVar22 == bVar23);
      }
      bVar23 = SBORROW4(iVar10 + 0x20,4);
      iVar10 = iVar10 + 0x1c;
      bVar22 = iVar10 < 0;
      do {
        if (bVar22 == bVar23) {
          uVar13 = *puVar3;
          *puVar6 = uVar12 | uVar13 << 0x18;
          uVar12 = uVar13 >> 8;
          bVar23 = SBORROW4(iVar10,4);
          iVar10 = iVar10 + -4;
          bVar22 = iVar10 < 0;
          puVar6 = puVar6 + 1;
          puVar3 = puVar3 + 1;
        }
      } while (bVar22 == bVar23);
      pbVar7 = (byte *)((int)puVar3 + -3);
      uVar12 = iVar10 + 7;
    }
    if ((uVar12 & 4) != 0) {
      pbVar8 = pbVar7 + 2;
      bVar1 = pbVar7[1];
      *(byte *)puVar6 = *pbVar7;
      *(byte *)((int)puVar6 + 1) = bVar1;
      pbVar9 = pbVar7 + 3;
      pbVar7 = pbVar7 + 4;
      bVar1 = *pbVar9;
      pbVar9 = (byte *)((int)puVar6 + 3);
      *(byte *)((int)puVar6 + 2) = *pbVar8;
      puVar6 = puVar6 + 1;
      *pbVar9 = bVar1;
    }
    if ((uVar12 & 2) != 0) {
      pbVar9 = pbVar7 + 1;
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 2;
      bVar2 = *pbVar9;
      pbVar9 = (byte *)((int)puVar6 + 1);
      *(byte *)puVar6 = bVar1;
      puVar6 = (uint *)((int)puVar6 + 2);
      *pbVar9 = bVar2;
    }
    puVar3 = puVar6;
    pbVar9 = pbVar7;
    if ((uVar12 & 1) != 0) {
      pbVar9 = pbVar7 + 1;
      puVar3 = (uint *)((int)puVar6 + 1);
      *(byte *)puVar6 = *pbVar7;
    }
    return CONCAT44(pbVar9,puVar3);
  }
  if (param_3 == 8) {
    uVar12 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar12;
    return CONCAT44(param_2 + 2,param_1 + 2);
  }
  if (4 < param_3) {
    if (param_3 == 6) {
      uVar12 = param_2[1];
      *param_1 = *param_2;
      *(short *)(param_1 + 1) = (short)uVar12;
      return CONCAT44((byte *)((int)param_2 + 6),(byte *)((int)param_1 + 6));
    }
    if (param_3 < 6) {
      uVar12 = param_2[1];
      *param_1 = *param_2;
      *(byte *)(param_1 + 1) = (byte)uVar12;
      return CONCAT44((byte *)((int)param_2 + 5),(byte *)((int)param_1 + 5));
    }
    uVar12 = param_2[1];
    *param_1 = *param_2;
    bVar1 = *(byte *)((int)param_2 + 6);
    *(short *)(param_1 + 1) = (short)uVar12;
    *(byte *)((int)param_1 + 6) = bVar1;
    return CONCAT44((byte *)((int)param_2 + 7),(byte *)((int)param_1 + 7));
  }
  if (param_3 == 4) {
    *param_1 = *param_2;
    return CONCAT44(param_2 + 1,param_1 + 1);
  }
  if (1 < param_3) {
    if (param_3 == 2) {
      *(short *)param_1 = (short)*param_2;
      return CONCAT44((byte *)((int)param_2 + 2),(byte *)((int)param_1 + 2));
    }
    bVar1 = *(byte *)((int)param_2 + 2);
    *(short *)param_1 = (short)*param_2;
    *(byte *)((int)param_1 + 2) = bVar1;
    return CONCAT44((byte *)((int)param_2 + 3),(byte *)((int)param_1 + 3));
  }
  puVar3 = param_1;
  puVar6 = param_2;
  if (param_3 != 0) {
    puVar6 = (uint *)((int)param_2 + 1);
    puVar3 = (uint *)((int)param_1 + 1);
    *(byte *)param_1 = (byte)*param_2;
  }
  return CONCAT44(puVar6,puVar3);
}


