#include "00791034_00791034.h"



void fn_00791034(int *param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  bool bVar17;
  uint local_30;
  uint local_2c [2];
  
  if (param_3 == 0) {
    return;
  }
  puVar5 = (undefined4 *)param_1[1];
  local_30 = ((int)puVar5 - *param_1) / 0x14 + param_3;
  if ((uint)((param_1[2] - *param_1) / 0x14) < local_30) {
    uVar16 = (param_1[1] - *param_1) / 0x14;
    local_2c[0] = uVar16 + (uVar16 >> 1) + (uVar16 >> 3);
    if (local_2c[0] < uVar16 + 0x20) {
      local_2c[0] = uVar16 + 0x20;
    }
    puVar2 = local_2c;
    if (local_2c[0] <= local_30) {
      puVar2 = &local_30;
    }
    uVar16 = *puVar2;
    puVar3 = (undefined4 *)fn_00100fc6(uVar16 * 0x14,0);
    puVar8 = puVar3;
    for (puVar5 = (undefined4 *)*param_1; puVar5 != param_2; puVar5 = puVar5 + 5) {
      if (puVar8 != (undefined4 *)0x0) {
        uVar11 = puVar5[1];
        uVar13 = puVar5[2];
        uVar14 = puVar5[3];
        uVar15 = puVar5[4];
        *puVar8 = *puVar5;
        puVar8[1] = uVar11;
        puVar8[2] = uVar13;
        puVar8[3] = uVar14;
        puVar8[4] = uVar15;
      }
      puVar8 = puVar8 + 5;
    }
    puVar5 = puVar3 + (((int)param_2 - *param_1) / 0x14) * 5;
    for (iVar7 = param_3; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (puVar5 != (undefined4 *)0x0) {
        uVar11 = param_4[1];
        uVar13 = param_4[2];
        uVar14 = param_4[3];
        uVar15 = param_4[4];
        *puVar5 = *param_4;
        puVar5[1] = uVar11;
        puVar5[2] = uVar13;
        puVar5[3] = uVar14;
        puVar5[4] = uVar15;
      }
      puVar5 = puVar5 + 5;
    }
    puVar8 = (undefined4 *)param_1[1];
    puVar5 = puVar3 + (((int)param_2 - *param_1) / 0x14 + param_3) * 5;
    iVar7 = param_3;
    for (; param_2 != puVar8; param_2 = param_2 + 5) {
      if (puVar5 != (undefined4 *)0x0) {
        uVar11 = param_2[1];
        iVar7 = param_2[2];
        uVar13 = param_2[3];
        uVar14 = param_2[4];
        *puVar5 = *param_2;
        puVar5[1] = uVar11;
        puVar5[2] = iVar7;
        puVar5[3] = uVar13;
        puVar5[4] = uVar14;
      }
      puVar5 = puVar5 + 5;
    }
    iVar10 = *param_1;
    iVar12 = param_1[1];
    iVar9 = iVar12 - iVar10;
    bVar17 = iVar10 != iVar12;
    if (bVar17) {
      iVar7 = 0;
    }
    while (bVar17) {
      fn_002feef8(*(undefined4 *)(iVar10 + 0xc));
      *(int *)(iVar10 + 0xc) = iVar7;
      fn_002feef8(*(undefined4 *)(iVar10 + 8));
      *(int *)(iVar10 + 8) = iVar7;
      if (*(int *)(iVar10 + 4) != 0) {
        iVar4 = fn_00120ec8(*(int *)(iVar10 + 4) + 0x60);
        fn_002feef8(iVar4 + -0x60);
      }
      *(int *)(iVar10 + 4) = iVar7;
      iVar10 = iVar10 + 0x14;
      bVar17 = iVar10 != iVar12;
    }
    fn_001008c4(*param_1,(param_1[2] - *param_1) / 0x14,0);
    *param_1 = (int)puVar3;
    param_1[1] = (int)(puVar3 + (iVar9 / 0x14) * 5 + param_3 * 5);
    param_1[2] = (int)(puVar3 + uVar16 * 5);
    return;
  }
  puVar8 = param_2 + param_3 * 5;
  param_1[1] = (int)(puVar5 + param_3 * 5);
  if (puVar8 < puVar5) {
    puVar1 = puVar5 + param_3 * -5;
    puVar3 = puVar5;
    for (puVar6 = puVar1; puVar6 != puVar5; puVar6 = puVar6 + 5) {
      if (puVar3 != (undefined4 *)0x0) {
        uVar11 = puVar6[1];
        uVar13 = puVar6[2];
        uVar14 = puVar6[3];
        uVar15 = puVar6[4];
        *puVar3 = *puVar6;
        puVar3[1] = uVar11;
        puVar3[2] = uVar13;
        puVar3[3] = uVar14;
        puVar3[4] = uVar15;
      }
      puVar3 = puVar3 + 5;
    }
    if (param_2 < puVar1) {
      if (0 < (int)puVar1 - (int)param_2) {
        uVar16 = ((int)puVar1 - (int)param_2) / 0x14;
        puVar3 = puVar1;
        puVar6 = puVar5;
        if ((uVar16 & 1) != 0) {
          puVar3 = puVar1 + -5;
          puVar6 = puVar5 + -5;
          uVar11 = puVar1[-4];
          uVar13 = puVar1[-3];
          uVar14 = puVar1[-2];
          uVar15 = puVar1[-1];
          *puVar6 = *puVar3;
          puVar5[-4] = uVar11;
          puVar5[-3] = uVar13;
          puVar5[-2] = uVar14;
          puVar5[-1] = uVar15;
        }
        for (iVar7 = (int)uVar16 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
          uVar11 = puVar3[-4];
          uVar13 = puVar3[-3];
          uVar14 = puVar3[-2];
          uVar15 = puVar3[-1];
          puVar6[-5] = puVar3[-5];
          puVar6[-4] = uVar11;
          puVar6[-3] = uVar13;
          puVar6[-2] = uVar14;
          puVar6[-1] = uVar15;
          uVar11 = puVar3[-9];
          uVar13 = puVar3[-8];
          uVar14 = puVar3[-7];
          uVar15 = puVar3[-6];
          puVar6[-10] = puVar3[-10];
          puVar6[-9] = uVar11;
          puVar6[-8] = uVar13;
          puVar6[-7] = uVar14;
          puVar6[-6] = uVar15;
          puVar3 = puVar3 + -10;
          puVar6 = puVar6 + -10;
        }
      }
    }
    else {
      while (param_2 != puVar1) {
        uVar11 = puVar1[-4];
        uVar13 = puVar1[-3];
        uVar14 = puVar1[-2];
        uVar15 = puVar1[-1];
        puVar5[-5] = puVar1[-5];
        puVar5[-4] = uVar11;
        puVar5[-3] = uVar13;
        puVar5[-2] = uVar14;
        puVar5[-1] = uVar15;
        puVar5 = puVar5 + -5;
        puVar1 = puVar1 + -5;
      }
    }
    if (param_2 < puVar8) {
      if (0 < (int)puVar8 - (int)param_2) {
        uVar16 = ((int)puVar8 - (int)param_2) / 0x14;
        puVar5 = param_2;
        if ((uVar16 & 1) != 0) {
          uVar11 = param_4[1];
          uVar13 = param_4[2];
          uVar14 = param_4[3];
          uVar15 = param_4[4];
          puVar5 = param_2 + 5;
          *param_2 = *param_4;
          param_2[1] = uVar11;
          param_2[2] = uVar13;
          param_2[3] = uVar14;
          param_2[4] = uVar15;
        }
        iVar7 = (int)uVar16 >> 1;
        if (iVar7 != 0) {
          do {
            iVar7 = iVar7 + -1;
            uVar11 = param_4[2];
            uVar14 = param_4[3];
            uVar15 = param_4[4];
            uVar13 = param_4[1];
            *puVar5 = *param_4;
            puVar5[1] = uVar13;
            puVar5[2] = uVar11;
            puVar5[3] = uVar14;
            puVar5[4] = uVar15;
            uVar11 = param_4[1];
            uVar13 = param_4[2];
            uVar14 = param_4[3];
            uVar15 = param_4[4];
            puVar5[5] = *param_4;
            puVar5[6] = uVar11;
            puVar5[7] = uVar13;
            puVar5[8] = uVar14;
            puVar5[9] = uVar15;
            puVar5 = puVar5 + 10;
          } while (iVar7 != 0);
          return;
        }
      }
    }
    else {
      for (; param_2 != puVar8; param_2 = param_2 + 5) {
        uVar11 = param_4[1];
        uVar13 = param_4[2];
        uVar14 = param_4[3];
        uVar15 = param_4[4];
        *param_2 = *param_4;
        param_2[1] = uVar11;
        param_2[2] = uVar13;
        param_2[3] = uVar14;
        param_2[4] = uVar15;
      }
    }
  }
  else {
    uVar16 = ((int)puVar5 - (int)param_2) / 0x14;
    puVar3 = puVar5;
    for (param_3 = param_3 - uVar16; puVar6 = param_2, param_3 != 0; param_3 = param_3 + -1) {
      if (puVar3 != (undefined4 *)0x0) {
        uVar11 = param_4[1];
        uVar13 = param_4[2];
        uVar14 = param_4[3];
        uVar15 = param_4[4];
        *puVar3 = *param_4;
        puVar3[1] = uVar11;
        puVar3[2] = uVar13;
        puVar3[3] = uVar14;
        puVar3[4] = uVar15;
      }
      puVar3 = puVar3 + 5;
    }
    for (; puVar6 != puVar5; puVar6 = puVar6 + 5) {
      if (puVar8 != (undefined4 *)0x0) {
        uVar11 = puVar6[1];
        uVar13 = puVar6[2];
        uVar14 = puVar6[3];
        uVar15 = puVar6[4];
        *puVar8 = *puVar6;
        puVar8[1] = uVar11;
        puVar8[2] = uVar13;
        puVar8[3] = uVar14;
        puVar8[4] = uVar15;
      }
      puVar8 = puVar8 + 5;
    }
    if (param_2 < puVar5) {
      if (0 < (int)puVar5 - (int)param_2) {
        puVar5 = param_2;
        if ((uVar16 & 1) != 0) {
          uVar11 = param_4[1];
          uVar13 = param_4[2];
          uVar14 = param_4[3];
          uVar15 = param_4[4];
          puVar5 = param_2 + 5;
          *param_2 = *param_4;
          param_2[1] = uVar11;
          param_2[2] = uVar13;
          param_2[3] = uVar14;
          param_2[4] = uVar15;
        }
        iVar7 = (int)uVar16 >> 1;
        if (iVar7 != 0) {
          do {
            uVar13 = param_4[1];
            uVar15 = param_4[2];
            iVar7 = iVar7 + -1;
            uVar11 = param_4[3];
            uVar14 = param_4[4];
            *puVar5 = *param_4;
            puVar5[3] = uVar11;
            puVar5[4] = uVar14;
            puVar5[1] = uVar13;
            puVar5[2] = uVar15;
            uVar11 = param_4[1];
            uVar13 = param_4[2];
            uVar14 = param_4[3];
            uVar15 = param_4[4];
            puVar5[5] = *param_4;
            puVar5[6] = uVar11;
            puVar5[7] = uVar13;
            puVar5[8] = uVar14;
            puVar5[9] = uVar15;
            puVar5 = puVar5 + 10;
          } while (iVar7 != 0);
          return;
        }
      }
    }
    else if (param_2 != puVar5) {
      do {
        uVar11 = param_4[1];
        uVar13 = param_4[2];
        uVar14 = param_4[3];
        uVar15 = param_4[4];
        puVar8 = param_2 + 5;
        *param_2 = *param_4;
        param_2[1] = uVar11;
        param_2[2] = uVar13;
        param_2[3] = uVar14;
        param_2[4] = uVar15;
        param_2 = puVar8;
      } while (puVar8 != puVar5);
      return;
    }
  }
  return;
}


