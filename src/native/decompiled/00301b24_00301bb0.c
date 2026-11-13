#include "00301b24_00301bb0.h"



longlong fn_00301bb0(uint param_1,int param_2,uint param_3)

{
  if ((int)(param_3 - 0x20) < 0) {
    return CONCAT44(param_2 << (param_3 & 0xff) | param_1 >> (0x20 - param_3 & 0xff),
                    param_1 << (param_3 & 0xff));
  }
  return (ulonglong)(param_1 << (param_3 - 0x20 & 0xff)) << 0x20;
}



undefined8 fn_00301b24(uint *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  undefined2 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint in_r12;
  bool bVar17;
  bool bVar18;
  
  bVar5 = (byte)in_r12;
  uVar9 = (int)param_1 - (int)param_2;
  bVar17 = uVar9 == 0;
  if (param_2 <= param_1) {
    bVar17 = param_3 == uVar9;
  }
  if ((param_2 <= param_1 && uVar9 <= param_3) && !bVar17) {
    param_1 = (uint *)((int)param_1 + param_3);
    param_2 = (uint *)((int)param_2 + param_3);
    if (3 < param_3) {
      bVar17 = ((uint)param_1 & 3) == 0;
      do {
        if (!bVar17) {
          param_2 = (uint *)((int)param_2 + -1);
          param_3 = param_3 - 1;
          param_1 = (uint *)((int)param_1 + -1);
          *(byte *)param_1 = *(byte *)param_2;
        }
        bVar17 = ((uint)param_1 & 3) == 0;
      } while (!bVar17);
      uVar9 = (uint)param_2 & 3;
      if (uVar9 == 0) {
        while (uVar9 = param_3 - 0x10, 0xf < param_3) {
          puVar3 = param_2 + -1;
          uVar16 = param_2[-2];
          uVar10 = param_2[-3];
          uVar8 = param_2[-4];
          param_2 = param_2 + -4;
          param_1[-1] = *puVar3;
          param_1[-2] = uVar16;
          param_1[-3] = uVar10;
          param_1[-4] = uVar8;
          param_1 = param_1 + -4;
          param_3 = uVar9;
        }
        uVar8 = param_3 << 0x1d;
        bVar17 = (int)uVar8 < 0;
        if ((bool)((byte)(uVar9 >> 3) & 1)) {
          puVar3 = param_2 + -1;
          uVar8 = param_2[-2];
          param_2 = param_2 + -2;
          param_1[-1] = *puVar3;
          param_1[-2] = uVar8;
          param_1 = param_1 + -2;
        }
        if (bVar17) {
          param_2 = param_2 + -1;
          uVar8 = *param_2;
          param_1 = param_1 + -1;
          *param_1 = uVar8;
        }
        uVar7 = (undefined2)uVar8;
        if ((uVar9 & 3) == 0) {
          return CONCAT44(param_2,param_1);
        }
        bVar18 = (bool)((byte)(uVar9 >> 1) & 1);
        param_3 = param_3 << 0x1f;
        bVar17 = (int)param_3 < 0;
        if (bVar18) {
          param_2 = (uint *)((int)param_2 + -2);
          uVar7 = *(undefined2 *)param_2;
        }
        if (bVar17) {
          param_3 = (uint)*(byte *)((int)param_2 + -1);
        }
        if (bVar18) {
          param_1 = (uint *)((int)param_1 + -2);
          *(undefined2 *)param_1 = uVar7;
        }
        if (bVar17) {
          *(byte *)((int)param_1 + -1) = (byte)param_3;
        }
        return CONCAT44(param_2,param_1);
      }
      while( true ) {
        bVar5 = (byte)in_r12;
        if (param_3 < 8) break;
        uVar9 = param_2[-1];
        param_2 = param_2 + -2;
        in_r12 = *param_2;
        param_1[-1] = uVar9;
        param_1 = param_1 + -2;
        *param_1 = in_r12;
        param_3 = param_3 - 8;
      }
      param_3 = param_3 - 4;
      if (-1 < (int)param_3) {
        param_2 = param_2 + -1;
        uVar9 = *param_2;
        param_1 = param_1 + -1;
        *param_1 = uVar9;
      }
    }
    bVar6 = (byte)uVar9;
    bVar18 = (bool)((byte)(param_3 >> 1) & 1);
    param_3 = param_3 << 0x1f;
    bVar17 = (int)param_3 < 0;
    if (bVar18) {
      bVar6 = *(byte *)((int)param_2 + -1);
      param_2 = (uint *)((int)param_2 + -2);
      bVar5 = *(byte *)param_2;
    }
    if (bVar17) {
      param_3 = (uint)*(byte *)((int)param_2 + -1);
    }
    if (bVar18) {
      *(byte *)((int)param_1 + -1) = bVar6;
      param_1 = (uint *)((int)param_1 + -2);
      *(byte *)param_1 = bVar5;
    }
    if (bVar17) {
      *(byte *)((int)param_1 + -1) = (byte)param_3;
    }
    return CONCAT44(param_2,param_1);
  }
  if (3 < param_3) {
    uVar9 = (uint)param_1 & 3;
    puVar3 = param_1;
    uVar8 = uVar9;
    if (uVar9 != 0) {
      bVar5 = (byte)*param_2;
      puVar3 = (uint *)((int)param_2 + 1);
      if (uVar9 < 3) {
        puVar3 = (uint *)((int)param_2 + 2);
        uVar8 = (uint)*(byte *)((int)param_2 + 1);
      }
      *(byte *)param_1 = bVar5;
      param_2 = puVar3;
      if (uVar9 < 2) {
        param_2 = (uint *)((int)puVar3 + 1);
        bVar5 = (byte)*puVar3;
      }
      puVar2 = (uint *)((int)param_1 + 1);
      if (uVar9 < 3) {
        puVar2 = (uint *)((int)param_1 + 2);
        *(byte *)((int)param_1 + 1) = (byte)uVar8;
      }
      param_3 = (param_3 + uVar9) - 4;
      puVar3 = puVar2;
      if (uVar9 < 2) {
        puVar3 = (uint *)((int)puVar2 + 1);
        *(byte *)puVar2 = bVar5;
      }
    }
    uVar9 = (uint)param_2 & 3;
    if (uVar9 == 0) {
      uVar9 = param_3 - 0x20;
      uVar8 = 0;
      if (0x1f < param_3) {
        uVar8 = *param_2;
        uVar10 = param_2[1];
        uVar16 = param_2[2];
        uVar11 = param_2[3];
        HintPreloadData(param_2 + 0x14);
        uVar12 = param_2[4];
        uVar13 = param_2[5];
        uVar14 = param_2[6];
        uVar15 = param_2[7];
        param_2 = param_2 + 8;
        while( true ) {
          *puVar3 = uVar8;
          puVar3[1] = uVar10;
          puVar3[2] = uVar16;
          puVar3[3] = uVar11;
          bVar17 = 0x1f < uVar9;
          uVar9 = uVar9 - 0x20;
          puVar3[4] = uVar12;
          puVar3[5] = uVar13;
          puVar3[6] = uVar14;
          puVar3[7] = uVar15;
          puVar3 = puVar3 + 8;
          if (bVar17) {
            uVar8 = *param_2;
            uVar10 = param_2[1];
            uVar16 = param_2[2];
            uVar11 = param_2[3];
            param_2 = param_2 + 4;
          }
          HintPreloadData(param_2 + 0x10);
          if (!bVar17) break;
          uVar12 = *param_2;
          uVar13 = param_2[1];
          uVar14 = param_2[2];
          uVar15 = param_2[3];
          param_2 = param_2 + 4;
        }
      }
      if ((bool)((byte)(uVar9 >> 4) & 1)) {
        uVar8 = *param_2;
        uVar10 = param_2[1];
        uVar16 = param_2[2];
        uVar11 = param_2[3];
        param_2 = param_2 + 4;
        *puVar3 = uVar8;
        puVar3[1] = uVar10;
        puVar3[2] = uVar16;
        puVar3[3] = uVar11;
        puVar3 = puVar3 + 4;
      }
      if ((int)(uVar9 << 0x1c) < 0) {
        uVar8 = *param_2;
        uVar10 = param_2[1];
        param_2 = param_2 + 2;
        *puVar3 = uVar8;
        puVar3[1] = uVar10;
        puVar3 = puVar3 + 2;
      }
      puVar1 = puVar3;
      puVar2 = param_2;
      if ((bool)((byte)(uVar9 >> 2) & 1)) {
        puVar2 = param_2 + 1;
        uVar8 = *param_2;
        puVar1 = puVar3 + 1;
        *puVar3 = uVar8;
      }
      uVar7 = (undefined2)uVar8;
      if ((uVar9 & 3) == 0) {
        return CONCAT44(puVar2,puVar1);
      }
      bVar18 = (bool)((byte)(uVar9 >> 1) & 1);
      uVar9 = uVar9 << 0x1f;
      bVar17 = (int)uVar9 < 0;
      puVar3 = puVar2;
      if (bVar18) {
        puVar3 = (uint *)((int)puVar2 + 2);
        uVar7 = (undefined2)*puVar2;
      }
      puVar2 = puVar3;
      if (bVar17) {
        puVar2 = (uint *)((int)puVar3 + 1);
        uVar9 = (uint)(byte)*puVar3;
      }
      puVar3 = puVar1;
      if (bVar18) {
        puVar3 = (uint *)((int)puVar1 + 2);
        *(undefined2 *)puVar1 = uVar7;
      }
      puVar1 = puVar3;
      if (bVar17) {
        puVar1 = (uint *)((int)puVar3 + 1);
        *(byte *)puVar3 = (byte)uVar9;
      }
      return CONCAT44(puVar2,puVar1);
    }
    while( true ) {
      bVar5 = (byte)uVar8;
      if (param_3 < 8) break;
      puVar2 = param_2 + 1;
      uVar9 = *param_2;
      param_2 = param_2 + 2;
      uVar8 = *puVar2;
      *puVar3 = uVar9;
      puVar3[1] = uVar8;
      puVar3 = puVar3 + 2;
      param_3 = param_3 - 8;
    }
    param_3 = param_3 - 4;
    param_1 = puVar3;
    if (-1 < (int)param_3) {
      uVar9 = *param_2;
      param_1 = puVar3 + 1;
      *puVar3 = uVar9;
      param_2 = param_2 + 1;
    }
  }
  bVar6 = (byte)uVar9;
  bVar18 = (bool)((byte)(param_3 >> 1) & 1);
  param_3 = param_3 << 0x1f;
  bVar17 = (int)param_3 < 0;
  if (bVar18) {
    pbVar4 = (byte *)((int)param_2 + 1);
    bVar6 = (byte)*param_2;
    param_2 = (uint *)((int)param_2 + 2);
    bVar5 = *pbVar4;
  }
  puVar3 = param_2;
  if (bVar17) {
    puVar3 = (uint *)((int)param_2 + 1);
    param_3 = (uint)(byte)*param_2;
  }
  if (bVar18) {
    pbVar4 = (byte *)((int)param_1 + 1);
    *(byte *)param_1 = bVar6;
    param_1 = (uint *)((int)param_1 + 2);
    *pbVar4 = bVar5;
  }
  puVar2 = param_1;
  if (bVar17) {
    puVar2 = (uint *)((int)param_1 + 1);
    *(byte *)param_1 = (byte)param_3;
  }
  return CONCAT44(puVar3,puVar2);
}


