#include "001694d4_001694d4.h"



undefined8 fn_001694d4(uint *param_1,uint *param_2)

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
  uint uVar10;
  int iVar11;
  undefined2 uVar12;
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
  
  uVar10 = *param_1;
  uVar13 = param_1[7];
  puVar3 = (uint *)(uVar13 + 0x14);
  if (8 < uVar10) {
    puVar6 = puVar3;
    puVar4 = param_2;
    if (((uint)param_2 & 1) != 0) {
      uVar10 = uVar10 - 1;
      puVar4 = (uint *)((int)param_2 + 1);
      puVar6 = (uint *)(uVar13 + 0x15);
      *(byte *)puVar3 = (byte)*param_2;
    }
    if (((uint)puVar4 & 2) != 0) {
      uVar10 = uVar10 - 2;
      pbVar7 = (byte *)((int)puVar4 + 1);
      uVar13 = *puVar4;
      puVar4 = (uint *)((int)puVar4 + 2);
      bVar1 = *pbVar7;
      pbVar7 = (byte *)((int)puVar6 + 1);
      *(byte *)puVar6 = (byte)uVar13;
      puVar6 = (uint *)((int)puVar6 + 2);
      *pbVar7 = bVar1;
    }
    uVar13 = (uint)puVar6 & 3;
    if (uVar13 == 0) {
      while (uVar13 = uVar10 - 0x20, 0x1f < uVar10) {
        uVar10 = puVar4[1];
        uVar14 = puVar4[2];
        uVar15 = puVar4[3];
        uVar16 = puVar4[4];
        uVar17 = puVar4[5];
        uVar18 = puVar4[6];
        uVar20 = puVar4[7];
        HintPreloadData(puVar4 + 0x18);
        *puVar6 = *puVar4;
        puVar6[1] = uVar10;
        puVar6[2] = uVar14;
        puVar6[3] = uVar15;
        puVar6[4] = uVar16;
        puVar6[5] = uVar17;
        puVar6[6] = uVar18;
        puVar6[7] = uVar20;
        puVar6 = puVar6 + 8;
        puVar4 = puVar4 + 8;
        uVar10 = uVar13;
      }
      uVar14 = 0;
      if ((bool)((byte)(uVar13 >> 4) & 1)) {
        uVar14 = *puVar4;
        uVar15 = puVar4[1];
        uVar16 = puVar4[2];
        uVar17 = puVar4[3];
        puVar4 = puVar4 + 4;
        *puVar6 = uVar14;
        puVar6[1] = uVar15;
        puVar6[2] = uVar16;
        puVar6[3] = uVar17;
        puVar6 = puVar6 + 4;
      }
      if ((int)(uVar10 << 0x1c) < 0) {
        uVar14 = *puVar4;
        uVar15 = puVar4[1];
        puVar4 = puVar4 + 2;
        *puVar6 = uVar14;
        puVar6[1] = uVar15;
        puVar6 = puVar6 + 2;
      }
      puVar5 = puVar6;
      puVar3 = puVar4;
      if ((bool)((byte)(uVar13 >> 2) & 1)) {
        puVar3 = puVar4 + 1;
        uVar14 = *puVar4;
        puVar5 = puVar6 + 1;
        *puVar6 = uVar14;
      }
      uVar12 = (undefined2)uVar14;
      if ((uVar13 & 3) == 0) {
        return CONCAT44(puVar3,puVar5);
      }
      bVar23 = (bool)((byte)(uVar13 >> 1) & 1);
      uVar10 = uVar10 << 0x1f;
      bVar22 = (int)uVar10 < 0;
      puVar4 = puVar3;
      if (bVar23) {
        puVar4 = (uint *)((int)puVar3 + 2);
        uVar12 = (undefined2)*puVar3;
      }
      puVar3 = puVar4;
      if (bVar22) {
        puVar3 = (uint *)((int)puVar4 + 1);
        uVar10 = (uint)(byte)*puVar4;
      }
      puVar4 = puVar5;
      if (bVar23) {
        puVar4 = (uint *)((int)puVar5 + 2);
        *(undefined2 *)puVar5 = uVar12;
      }
      puVar6 = puVar4;
      if (bVar22) {
        puVar6 = (uint *)((int)puVar4 + 1);
        *(byte *)puVar4 = (byte)uVar10;
      }
      return CONCAT44(puVar3,puVar6);
    }
    puVar6 = (uint *)((uint)puVar6 & 0xfffffffc);
    if (uVar13 == 2) {
      uVar13 = *puVar6 & 0xffff;
      bVar23 = SBORROW4(uVar10,0x20);
      iVar11 = uVar10 - 0x20;
      bVar22 = iVar11 < 0;
      if (0x1f < (int)uVar10) {
        do {
          if (bVar22 == bVar23) {
            uVar10 = *puVar4;
            uVar15 = puVar4[1];
            uVar16 = puVar4[2];
            uVar17 = puVar4[3];
            uVar18 = puVar4[4];
            uVar20 = puVar4[5];
            uVar19 = puVar4[6];
            uVar21 = puVar4[7];
            puVar4 = puVar4 + 8;
            uVar14 = uVar13 | uVar10 << 0x10;
            uVar13 = uVar21 >> 0x10;
            *puVar6 = uVar14;
            puVar6[1] = uVar10 >> 0x10 | uVar15 << 0x10;
            puVar6[2] = uVar15 >> 0x10 | uVar16 << 0x10;
            puVar6[3] = uVar16 >> 0x10 | uVar17 << 0x10;
            puVar6[4] = uVar17 >> 0x10 | uVar18 << 0x10;
            puVar6[5] = uVar18 >> 0x10 | uVar20 << 0x10;
            puVar6[6] = uVar20 >> 0x10 | uVar19 << 0x10;
            puVar6[7] = uVar19 >> 0x10 | uVar21 << 0x10;
            puVar6 = puVar6 + 8;
            bVar23 = SBORROW4(iVar11,0x20);
            iVar11 = iVar11 + -0x20;
            bVar22 = iVar11 < 0;
          }
        } while (bVar22 == bVar23);
      }
      bVar23 = SBORROW4(iVar11 + 0x20,4);
      iVar11 = iVar11 + 0x1c;
      bVar22 = iVar11 < 0;
      do {
        if (bVar22 == bVar23) {
          uVar10 = *puVar4;
          *puVar6 = uVar13 | uVar10 << 0x10;
          uVar13 = uVar10 >> 0x10;
          bVar23 = SBORROW4(iVar11,4);
          iVar11 = iVar11 + -4;
          bVar22 = iVar11 < 0;
          puVar6 = puVar6 + 1;
          puVar4 = puVar4 + 1;
        }
      } while (bVar22 == bVar23);
      pbVar7 = (byte *)((int)puVar4 + -2);
      uVar10 = iVar11 + 6;
    }
    else if (uVar13 < 3) {
      uVar13 = *puVar6 & 0xff;
      bVar23 = SBORROW4(uVar10,0x20);
      iVar11 = uVar10 - 0x20;
      bVar22 = iVar11 < 0;
      if (0x1f < (int)uVar10) {
        do {
          if (bVar22 == bVar23) {
            uVar10 = *puVar4;
            uVar15 = puVar4[1];
            uVar16 = puVar4[2];
            uVar17 = puVar4[3];
            uVar18 = puVar4[4];
            uVar20 = puVar4[5];
            uVar19 = puVar4[6];
            uVar21 = puVar4[7];
            puVar4 = puVar4 + 8;
            uVar14 = uVar13 | uVar10 << 8;
            uVar13 = uVar21 >> 0x18;
            *puVar6 = uVar14;
            puVar6[1] = uVar10 >> 0x18 | uVar15 << 8;
            puVar6[2] = uVar15 >> 0x18 | uVar16 << 8;
            puVar6[3] = uVar16 >> 0x18 | uVar17 << 8;
            puVar6[4] = uVar17 >> 0x18 | uVar18 << 8;
            puVar6[5] = uVar18 >> 0x18 | uVar20 << 8;
            puVar6[6] = uVar20 >> 0x18 | uVar19 << 8;
            puVar6[7] = uVar19 >> 0x18 | uVar21 << 8;
            puVar6 = puVar6 + 8;
            bVar23 = SBORROW4(iVar11,0x20);
            iVar11 = iVar11 + -0x20;
            bVar22 = iVar11 < 0;
          }
        } while (bVar22 == bVar23);
      }
      bVar23 = SBORROW4(iVar11 + 0x20,4);
      iVar11 = iVar11 + 0x1c;
      bVar22 = iVar11 < 0;
      do {
        if (bVar22 == bVar23) {
          uVar10 = *puVar4;
          *puVar6 = uVar13 | uVar10 << 8;
          uVar13 = uVar10 >> 0x18;
          bVar23 = SBORROW4(iVar11,4);
          iVar11 = iVar11 + -4;
          bVar22 = iVar11 < 0;
          puVar6 = puVar6 + 1;
          puVar4 = puVar4 + 1;
        }
      } while (bVar22 == bVar23);
      pbVar7 = (byte *)((int)puVar4 + -1);
      uVar10 = iVar11 + 5;
    }
    else {
      uVar13 = *puVar6 & 0xffffff;
      bVar23 = SBORROW4(uVar10,0x20);
      iVar11 = uVar10 - 0x20;
      bVar22 = iVar11 < 0;
      if (0x1f < (int)uVar10) {
        do {
          if (bVar22 == bVar23) {
            uVar10 = *puVar4;
            uVar15 = puVar4[1];
            uVar16 = puVar4[2];
            uVar17 = puVar4[3];
            uVar18 = puVar4[4];
            uVar20 = puVar4[5];
            uVar19 = puVar4[6];
            uVar21 = puVar4[7];
            puVar4 = puVar4 + 8;
            uVar14 = uVar13 | uVar10 << 0x18;
            uVar13 = uVar21 >> 8;
            *puVar6 = uVar14;
            puVar6[1] = uVar10 >> 8 | uVar15 << 0x18;
            puVar6[2] = uVar15 >> 8 | uVar16 << 0x18;
            puVar6[3] = uVar16 >> 8 | uVar17 << 0x18;
            puVar6[4] = uVar17 >> 8 | uVar18 << 0x18;
            puVar6[5] = uVar18 >> 8 | uVar20 << 0x18;
            puVar6[6] = uVar20 >> 8 | uVar19 << 0x18;
            puVar6[7] = uVar19 >> 8 | uVar21 << 0x18;
            puVar6 = puVar6 + 8;
            bVar23 = SBORROW4(iVar11,0x20);
            iVar11 = iVar11 + -0x20;
            bVar22 = iVar11 < 0;
          }
        } while (bVar22 == bVar23);
      }
      bVar23 = SBORROW4(iVar11 + 0x20,4);
      iVar11 = iVar11 + 0x1c;
      bVar22 = iVar11 < 0;
      do {
        if (bVar22 == bVar23) {
          uVar10 = *puVar4;
          *puVar6 = uVar13 | uVar10 << 0x18;
          uVar13 = uVar10 >> 8;
          bVar23 = SBORROW4(iVar11,4);
          iVar11 = iVar11 + -4;
          bVar22 = iVar11 < 0;
          puVar6 = puVar6 + 1;
          puVar4 = puVar4 + 1;
        }
      } while (bVar22 == bVar23);
      pbVar7 = (byte *)((int)puVar4 + -3);
      uVar10 = iVar11 + 7;
    }
    if ((uVar10 & 4) != 0) {
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
    if ((uVar10 & 2) != 0) {
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
    if ((uVar10 & 1) != 0) {
      pbVar9 = pbVar7 + 1;
      puVar3 = (uint *)((int)puVar6 + 1);
      *(byte *)puVar6 = *pbVar7;
    }
    return CONCAT44(pbVar9,puVar3);
  }
  if (uVar10 == 8) {
    uVar10 = param_2[1];
    *puVar3 = *param_2;
    *(uint *)(uVar13 + 0x18) = uVar10;
    return CONCAT44(param_2 + 2,uVar13 + 0x1c);
  }
  if (4 < uVar10) {
    if (uVar10 == 6) {
      uVar10 = param_2[1];
      *puVar3 = *param_2;
      *(short *)(uVar13 + 0x18) = (short)uVar10;
      return CONCAT44((byte *)((int)param_2 + 6),uVar13 + 0x1a);
    }
    if (uVar10 < 6) {
      uVar10 = param_2[1];
      *puVar3 = *param_2;
      *(byte *)(uVar13 + 0x18) = (byte)uVar10;
      return CONCAT44((byte *)((int)param_2 + 5),uVar13 + 0x19);
    }
    uVar10 = param_2[1];
    *puVar3 = *param_2;
    bVar1 = *(byte *)((int)param_2 + 6);
    *(short *)(uVar13 + 0x18) = (short)uVar10;
    *(byte *)(uVar13 + 0x1a) = bVar1;
    return CONCAT44((byte *)((int)param_2 + 7),uVar13 + 0x1b);
  }
  if (uVar10 == 4) {
    *puVar3 = *param_2;
    return CONCAT44(param_2 + 1,uVar13 + 0x18);
  }
  if (1 < uVar10) {
    if (uVar10 == 2) {
      *(short *)puVar3 = (short)*param_2;
      return CONCAT44((byte *)((int)param_2 + 2),uVar13 + 0x16);
    }
    bVar1 = *(byte *)((int)param_2 + 2);
    *(short *)puVar3 = (short)*param_2;
    *(byte *)(uVar13 + 0x16) = bVar1;
    return CONCAT44((byte *)((int)param_2 + 3),uVar13 + 0x17);
  }
  puVar4 = puVar3;
  puVar6 = param_2;
  if (uVar10 != 0) {
    puVar6 = (uint *)((int)param_2 + 1);
    puVar4 = (uint *)(uVar13 + 0x15);
    *(byte *)puVar3 = (byte)*param_2;
  }
  return CONCAT44(puVar6,puVar4);
}


