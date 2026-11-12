#include "00789bd4_0078be14.h"



void fn_0078be14(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint local_28;
  uint local_24;
  
  puVar10 = (undefined4 *)*param_1;
  puVar14 = (undefined4 *)param_1[1];
  if (puVar10 != puVar14) {
    puVar8 = puVar10;
    if (puVar14 <= puVar10) {
      do {
        puVar8 = puVar8 + 4;
      } while (puVar8 != puVar14);
    }
    puVar14 = (undefined4 *)((int)puVar14 - ((int)puVar14 - (int)puVar10 & 0xfffffff0U));
    param_1[1] = (uint)puVar14;
  }
  if (param_2 != param_3) {
    iVar5 = (int)param_3 - (int)param_2;
    iVar7 = iVar5 >> 4;
    local_28 = iVar7 + ((int)puVar14 - (int)puVar10 >> 4);
    if ((uint)((int)(param_1[2] - (int)puVar10) >> 4) < local_28) {
      uVar13 = (int)(param_1[1] - *param_1) >> 4;
      local_24 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
      if (local_24 < uVar13 + 0x20) {
        local_24 = uVar13 + 0x20;
      }
      puVar1 = &local_24;
      if (local_24 <= local_28) {
        puVar1 = &local_28;
      }
      uVar13 = *puVar1;
      puVar2 = (undefined4 *)fn_00100fc6(uVar13 << 4,0);
      puVar8 = puVar2;
      for (puVar14 = (undefined4 *)*param_1; puVar14 != puVar10; puVar14 = puVar14 + 4) {
        if (puVar8 != (undefined4 *)0x0) {
          uVar11 = puVar14[1];
          uVar12 = puVar14[2];
          uVar15 = puVar14[3];
          *puVar8 = *puVar14;
          puVar8[1] = uVar11;
          puVar8[2] = uVar12;
          puVar8[3] = uVar15;
        }
        puVar8 = puVar8 + 4;
      }
      puVar14 = (undefined4 *)(((int)puVar10 - *param_1 & 0xfffffff0) + (int)puVar2);
      for (; param_2 != param_3; param_2 = param_2 + 4) {
        if (puVar14 != (undefined4 *)0x0) {
          uVar11 = param_2[1];
          uVar12 = param_2[2];
          uVar15 = param_2[3];
          *puVar14 = *param_2;
          puVar14[1] = uVar11;
          puVar14[2] = uVar12;
          puVar14[3] = uVar15;
        }
        puVar14 = puVar14 + 4;
      }
      puVar8 = (undefined4 *)param_1[1];
      puVar14 = puVar2 + (iVar7 + ((int)((int)puVar10 - *param_1) >> 4)) * 4;
      for (; puVar10 != puVar8; puVar10 = puVar10 + 4) {
        if (puVar14 != (undefined4 *)0x0) {
          uVar11 = puVar10[1];
          uVar12 = puVar10[2];
          uVar15 = puVar10[3];
          *puVar14 = *puVar10;
          puVar14[1] = uVar11;
          puVar14[2] = uVar12;
          puVar14[3] = uVar15;
        }
        puVar14 = puVar14 + 4;
      }
      uVar3 = *param_1;
      uVar6 = param_1[1];
      uVar4 = uVar3;
      if (uVar6 < uVar3) {
        do {
          uVar4 = uVar4 + 0x10;
        } while (uVar4 != uVar6);
      }
      fn_001008c4(uVar3,(int)(param_1[2] - uVar3) >> 4,0);
      param_1[2] = (uint)(puVar2 + uVar13 * 4);
      param_1[1] = (uint)(puVar2 + ((int)(uVar6 - uVar3) >> 4) * 4 + iVar7 * 4);
      *param_1 = (uint)puVar2;
      return;
    }
    param_1[1] = (uint)(puVar14 + iVar7 * 4);
    if (puVar10 + iVar7 * 4 < puVar14) {
      puVar2 = puVar14;
      for (puVar8 = puVar14 + iVar7 * -4; puVar8 != puVar14; puVar8 = puVar8 + 4) {
        if (puVar2 != (undefined4 *)0x0) {
          uVar11 = puVar8[1];
          uVar12 = puVar8[2];
          uVar15 = puVar8[3];
          *puVar2 = *puVar8;
          puVar2[1] = uVar11;
          puVar2[2] = uVar12;
          puVar2[3] = uVar15;
        }
        puVar2 = puVar2 + 4;
      }
      puVar8 = puVar14 + iVar7 * -4;
      if (puVar10 < puVar8) {
        iVar7 = (int)puVar8 - (int)puVar10;
        if (0 < iVar7) {
          puVar2 = puVar8;
          puVar9 = puVar14;
          if (iVar7 * 0x8000000 < 0) {
            puVar2 = puVar8 + -4;
            puVar9 = puVar14 + -4;
            uVar11 = puVar8[-3];
            uVar12 = puVar8[-2];
            uVar15 = puVar8[-1];
            *puVar9 = *puVar2;
            puVar14[-3] = uVar11;
            puVar14[-2] = uVar12;
            puVar14[-1] = uVar15;
          }
          for (iVar7 = iVar7 >> 5; iVar7 != 0; iVar7 = iVar7 + -1) {
            uVar11 = puVar2[-3];
            uVar12 = puVar2[-2];
            uVar15 = puVar2[-1];
            puVar9[-4] = puVar2[-4];
            puVar9[-3] = uVar11;
            puVar9[-2] = uVar12;
            puVar9[-1] = uVar15;
            uVar11 = puVar2[-7];
            uVar12 = puVar2[-6];
            uVar15 = puVar2[-5];
            puVar9[-8] = puVar2[-8];
            puVar9[-7] = uVar11;
            puVar9[-6] = uVar12;
            puVar9[-5] = uVar15;
            puVar2 = puVar2 + -8;
            puVar9 = puVar9 + -8;
          }
        }
      }
      else {
        while (puVar10 != puVar8) {
          uVar11 = puVar8[-3];
          uVar12 = puVar8[-2];
          uVar15 = puVar8[-1];
          puVar14[-4] = puVar8[-4];
          puVar14[-3] = uVar11;
          puVar14[-2] = uVar12;
          puVar14[-1] = uVar15;
          puVar8 = puVar8 + -4;
          puVar14 = puVar14 + -4;
        }
      }
      if (param_2 < param_3) {
        if (0 < iVar5) {
          puVar14 = param_2 + -4;
          puVar8 = puVar10 + -4;
          if (iVar5 * 0x8000000 < 0) {
            uVar11 = param_2[1];
            uVar12 = param_2[2];
            uVar15 = param_2[3];
            *puVar10 = *param_2;
            puVar10[1] = uVar11;
            puVar10[2] = uVar12;
            puVar10[3] = uVar15;
            puVar14 = param_2;
            puVar8 = puVar10;
          }
          iVar5 = iVar5 >> 5;
          if (iVar5 != 0) {
            do {
              uVar11 = puVar14[5];
              uVar12 = puVar14[6];
              uVar15 = puVar14[7];
              iVar5 = iVar5 + -1;
              puVar8[4] = puVar14[4];
              puVar8[5] = uVar11;
              puVar8[6] = uVar12;
              puVar8[7] = uVar15;
              uVar11 = puVar14[9];
              uVar12 = puVar14[10];
              uVar15 = puVar14[0xb];
              puVar8[8] = puVar14[8];
              puVar8[9] = uVar11;
              puVar8[10] = uVar12;
              puVar8[0xb] = uVar15;
              puVar14 = puVar14 + 8;
              puVar8 = puVar8 + 8;
            } while (iVar5 != 0);
            return;
          }
        }
      }
      else {
        for (; param_2 != param_3; param_2 = param_2 + 4) {
          uVar11 = param_2[1];
          uVar12 = param_2[2];
          uVar15 = param_2[3];
          *puVar10 = *param_2;
          puVar10[1] = uVar11;
          puVar10[2] = uVar12;
          puVar10[3] = uVar15;
          puVar10 = puVar10 + 4;
        }
      }
    }
    else {
      puVar9 = param_2 + ((int)puVar14 - (int)puVar10 >> 4) * 4;
      puVar2 = puVar14;
      for (puVar8 = puVar9; puVar8 != param_3; puVar8 = puVar8 + 4) {
        if (puVar2 != (undefined4 *)0x0) {
          uVar11 = puVar8[1];
          uVar12 = puVar8[2];
          uVar15 = puVar8[3];
          *puVar2 = *puVar8;
          puVar2[1] = uVar11;
          puVar2[2] = uVar12;
          puVar2[3] = uVar15;
        }
        puVar2 = puVar2 + 4;
      }
      puVar2 = puVar10 + iVar7 * 4;
      for (puVar8 = puVar10; puVar8 != puVar14; puVar8 = puVar8 + 4) {
        if (puVar2 != (undefined4 *)0x0) {
          uVar11 = puVar8[1];
          uVar12 = puVar8[2];
          uVar15 = puVar8[3];
          *puVar2 = *puVar8;
          puVar2[1] = uVar11;
          puVar2[2] = uVar12;
          puVar2[3] = uVar15;
        }
        puVar2 = puVar2 + 4;
      }
      if (param_2 < puVar9) {
        iVar7 = (int)puVar9 - (int)param_2;
        if (0 < iVar7) {
          puVar14 = puVar10 + -4;
          puVar8 = param_2 + -4;
          if (iVar7 * 0x8000000 < 0) {
            uVar11 = param_2[1];
            uVar12 = param_2[2];
            uVar15 = param_2[3];
            *puVar10 = *param_2;
            puVar10[1] = uVar11;
            puVar10[2] = uVar12;
            puVar10[3] = uVar15;
            puVar14 = puVar10;
            puVar8 = param_2;
          }
          iVar7 = iVar7 >> 5;
          if (iVar7 != 0) {
            do {
              uVar11 = puVar8[5];
              uVar12 = puVar8[6];
              uVar15 = puVar8[7];
              iVar7 = iVar7 + -1;
              puVar14[4] = puVar8[4];
              puVar14[5] = uVar11;
              puVar14[6] = uVar12;
              puVar14[7] = uVar15;
              uVar11 = puVar8[9];
              uVar12 = puVar8[10];
              uVar15 = puVar8[0xb];
              puVar14[8] = puVar8[8];
              puVar14[9] = uVar11;
              puVar14[10] = uVar12;
              puVar14[0xb] = uVar15;
              puVar14 = puVar14 + 8;
              puVar8 = puVar8 + 8;
            } while (iVar7 != 0);
            return;
          }
        }
      }
      else if (param_2 != puVar9) {
        do {
          uVar11 = *param_2;
          uVar12 = param_2[1];
          uVar15 = param_2[2];
          uVar16 = param_2[3];
          param_2 = param_2 + 4;
          *puVar10 = uVar11;
          puVar10[1] = uVar12;
          puVar10[2] = uVar15;
          puVar10[3] = uVar16;
          puVar10 = puVar10 + 4;
        } while (param_2 != puVar9);
        return;
      }
    }
  }
  return;
}



void fn_00789bd4(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  
  iVar2 = param_1[1];
  uVar1 = (iVar2 - *param_1) / 0x2c;
  if (uVar1 < (uint)((param_1[2] - *param_1) / 0x2c)) {
    param_1[1] = iVar2 + 0x2c;
    iVar7 = iVar2;
    if (iVar2 != 0) {
      iVar3 = fn_001c6ba4(iVar2,iVar2 + -0x2c);
      *(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)(iVar2 + -4);
    }
    while (param_2 != iVar7 + -0x2c) {
      fn_003007d0(iVar2 + -0x2c,iVar7 + -0x58);
      uVar5 = *(undefined4 *)(iVar7 + -0x50);
      uVar6 = *(undefined4 *)(iVar7 + -0x4c);
      *(undefined4 *)(iVar2 + -0x28) = *(undefined4 *)(iVar7 + -0x54);
      *(undefined4 *)(iVar2 + -0x24) = uVar5;
      *(undefined4 *)(iVar2 + -0x20) = uVar6;
      uVar5 = *(undefined4 *)(iVar7 + -0x44);
      uVar6 = *(undefined4 *)(iVar7 + -0x40);
      *(undefined4 *)(iVar2 + -0x1c) = *(undefined4 *)(iVar7 + -0x48);
      *(undefined4 *)(iVar2 + -0x18) = uVar5;
      *(undefined4 *)(iVar2 + -0x14) = uVar6;
      uVar5 = *(undefined4 *)(iVar7 + -0x38);
      uVar6 = *(undefined4 *)(iVar7 + -0x34);
      *(undefined4 *)(iVar2 + -0x10) = *(undefined4 *)(iVar7 + -0x3c);
      *(undefined4 *)(iVar2 + -0xc) = uVar5;
      *(undefined4 *)(iVar2 + -8) = uVar6;
      puVar9 = (undefined4 *)(iVar2 + -4);
      iVar2 = iVar2 + -0x2c;
      *puVar9 = *(undefined4 *)(iVar7 + -0x30);
      iVar7 = iVar7 + -0x2c;
    }
    fn_003007d0(param_2,param_3);
    uVar5 = *(undefined4 *)(param_3 + 8);
    uVar6 = *(undefined4 *)(param_3 + 0xc);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)(param_2 + 8) = uVar5;
    *(undefined4 *)(param_2 + 0xc) = uVar6;
    uVar5 = *(undefined4 *)(param_3 + 0x14);
    uVar6 = *(undefined4 *)(param_3 + 0x18);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = uVar5;
    *(undefined4 *)(param_2 + 0x18) = uVar6;
    uVar5 = *(undefined4 *)(param_3 + 0x20);
    uVar6 = *(undefined4 *)(param_3 + 0x24);
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(param_2 + 0x20) = uVar5;
    *(undefined4 *)(param_2 + 0x24) = uVar6;
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
    return;
  }
  uVar8 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
  if (uVar8 < uVar1 + 0x20) {
    uVar8 = uVar1 + 0x20;
  }
  iVar3 = fn_00100fc6(uVar8 * 0x2c,0);
  iVar7 = iVar3;
  for (iVar2 = *param_1; iVar2 != param_2; iVar2 = iVar2 + 0x2c) {
    if (iVar7 != 0) {
      iVar4 = fn_001c6ba4(iVar7,iVar2);
      *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)(iVar2 + 0x28);
    }
    iVar7 = iVar7 + 0x2c;
  }
  iVar2 = iVar3 + ((param_2 - *param_1) / 0x2c) * 0x2c;
  if (iVar2 != 0) {
    iVar2 = fn_001c6ba4(iVar2,param_3);
    *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
  }
  iVar7 = param_1[1];
  iVar2 = iVar3 + ((param_2 - *param_1) / 0x2c) * 0x2c;
  for (; param_2 != iVar7; param_2 = param_2 + 0x2c) {
    iVar2 = iVar2 + 0x2c;
    if (iVar2 != 0) {
      iVar4 = fn_001c6ba4(iVar2,param_2);
      *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    }
  }
  iVar2 = *param_1;
  iVar4 = param_1[1];
  iVar7 = iVar4 - iVar2;
  for (; iVar2 != iVar4; iVar2 = iVar2 + 0x2c) {
    fn_002fedf4(iVar2);
  }
  fn_001008c4(*param_1,(param_1[2] - *param_1) / 0x2c,0);
  *param_1 = iVar3;
  param_1[1] = iVar3 + (iVar7 / 0x2c) * 0x2c + 0x2c;
  param_1[2] = iVar3 + uVar8 * 0x2c;
  return;
}


