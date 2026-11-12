#include "0078f330_007902c0.h"



/* WARNING: Removing unreachable block (ram,0x0079050c) */
/* WARNING: Removing unreachable block (ram,0x00790524) */
/* WARNING: Removing unreachable block (ram,0x007904dc) */
/* WARNING: Removing unreachable block (ram,0x007904e4) */
/* WARNING: Removing unreachable block (ram,0x007904f0) */
/* WARNING: Removing unreachable block (ram,0x00790554) */
/* WARNING: Removing unreachable block (ram,0x00790578) */
/* WARNING: Removing unreachable block (ram,0x00790530) */
/* WARNING: Removing unreachable block (ram,0x00790538) */
/* WARNING: Removing unreachable block (ram,0x00790540) */
/* WARNING: Removing unreachable block (ram,0x0079054c) */

void fn_007902c0(uint *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint local_38;
  uint local_34 [4];
  
  puVar8 = (undefined4 *)*param_1;
  puVar10 = (undefined4 *)param_1[1];
  local_38 = ((int)puVar10 - (int)puVar8) / 0xc;
  if (local_38 < param_2) {
    iVar11 = param_2 - local_38;
    if (iVar11 != 0) {
      local_38 = local_38 + iVar11;
      if ((uint)((int)(param_1[2] - (int)puVar8) / 0xc) < local_38) {
        uVar14 = (int)(param_1[1] - *param_1) / 0xc;
        local_34[0] = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
        if (local_34[0] < uVar14 + 0x20) {
          local_34[0] = uVar14 + 0x20;
        }
        puVar4 = local_34;
        if (local_34[0] <= local_38) {
          puVar4 = &local_38;
        }
        uVar14 = *puVar4;
        puVar1 = (undefined4 *)fn_00100fc6(uVar14 * 0xc,0);
        puVar6 = puVar1;
        for (puVar8 = (undefined4 *)*param_1; puVar8 != puVar10; puVar8 = puVar8 + 3) {
          if (puVar6 != (undefined4 *)0x0) {
            uVar12 = puVar8[1];
            uVar13 = puVar8[2];
            *puVar6 = *puVar8;
            puVar6[1] = uVar12;
            puVar6[2] = uVar13;
          }
          puVar6 = puVar6 + 3;
        }
        puVar8 = puVar1 + ((int)((int)puVar10 - *param_1) / 0xc) * 3;
        for (iVar5 = iVar11; iVar5 != 0; iVar5 = iVar5 + -1) {
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = param_3;
            puVar8[1] = param_4;
            puVar8[2] = param_5;
          }
          puVar8 = puVar8 + 3;
        }
        puVar6 = (undefined4 *)param_1[1];
        puVar8 = puVar1 + ((int)((int)puVar10 - *param_1) / 0xc + iVar11) * 3;
        for (; puVar10 != puVar6; puVar10 = puVar10 + 3) {
          if (puVar8 != (undefined4 *)0x0) {
            uVar12 = puVar10[1];
            uVar13 = puVar10[2];
            *puVar8 = *puVar10;
            puVar8[1] = uVar12;
            puVar8[2] = uVar13;
          }
          puVar8 = puVar8 + 3;
        }
        uVar2 = *param_1;
        uVar7 = param_1[1];
        uVar3 = uVar2;
        if (uVar7 < uVar2) {
          do {
            uVar3 = uVar3 + 0xc;
          } while (uVar3 != uVar7);
        }
        fn_001008c4(uVar2,(int)(param_1[2] - uVar2) / 0xc,0);
        *param_1 = (uint)puVar1;
        param_1[1] = (uint)(puVar1 + ((int)(uVar7 - uVar2) / 0xc) * 3 + iVar11 * 3);
        param_1[2] = (uint)(puVar1 + uVar14 * 3);
        return;
      }
      puVar8 = puVar10 + iVar11 * 3;
      param_1[1] = (uint)(puVar10 + iVar11 * 3);
      if (puVar8 < puVar10) {
        puVar9 = puVar10 + iVar11 * -3;
        puVar6 = puVar10;
        for (puVar1 = puVar9; puVar1 != puVar10; puVar1 = puVar1 + 3) {
          if (puVar6 != (undefined4 *)0x0) {
            uVar12 = puVar1[1];
            uVar13 = puVar1[2];
            *puVar6 = *puVar1;
            puVar6[1] = uVar12;
            puVar6[2] = uVar13;
          }
          puVar6 = puVar6 + 3;
        }
        puVar6 = puVar10;
        if (puVar10 < puVar9) {
          if (0 < (int)puVar9 - (int)puVar10) {
            uVar14 = ((int)puVar9 - (int)puVar10) / 0xc;
            puVar6 = puVar9;
            puVar1 = puVar10;
            if ((uVar14 & 1) != 0) {
              puVar6 = puVar9 + -3;
              puVar1 = puVar10 + -3;
              uVar12 = puVar9[-2];
              uVar13 = puVar9[-1];
              *puVar1 = *puVar6;
              puVar10[-2] = uVar12;
              puVar10[-1] = uVar13;
            }
            for (iVar11 = (int)uVar14 >> 1; iVar11 != 0; iVar11 = iVar11 + -1) {
              uVar12 = puVar6[-2];
              uVar13 = puVar6[-1];
              puVar1[-3] = puVar6[-3];
              puVar1[-2] = uVar12;
              puVar1[-1] = uVar13;
              uVar12 = puVar6[-5];
              uVar13 = puVar6[-4];
              puVar1[-6] = puVar6[-6];
              puVar1[-5] = uVar12;
              puVar1[-4] = uVar13;
              puVar6 = puVar6 + -6;
              puVar1 = puVar1 + -6;
            }
          }
        }
        else {
          while (puVar10 != puVar9) {
            uVar12 = puVar9[-2];
            uVar13 = puVar9[-1];
            puVar6[-3] = puVar9[-3];
            puVar6[-2] = uVar12;
            puVar6[-1] = uVar13;
            puVar6 = puVar6 + -3;
            puVar9 = puVar9 + -3;
          }
        }
        if (puVar10 < puVar8) {
          if (0 < (int)puVar8 - (int)puVar10) {
            uVar14 = ((int)puVar8 - (int)puVar10) / 0xc;
            if ((uVar14 & 1) != 0) {
              *puVar10 = param_3;
              puVar10[1] = param_4;
              puVar10[2] = param_5;
              puVar10 = puVar10 + 3;
            }
            iVar11 = (int)uVar14 >> 1;
            if (iVar11 != 0) {
              do {
                *puVar10 = param_3;
                puVar10[1] = param_4;
                puVar10[2] = param_5;
                puVar10[3] = param_3;
                puVar10[4] = param_4;
                iVar11 = iVar11 + -1;
                puVar10[5] = param_5;
                puVar10 = puVar10 + 6;
              } while (iVar11 != 0);
              return;
            }
          }
        }
        else {
          for (; puVar10 != puVar8; puVar10 = puVar10 + 3) {
            *puVar10 = param_3;
            puVar10[1] = param_4;
            puVar10[2] = param_5;
          }
        }
      }
      else {
        for (; iVar11 != 0; iVar11 = iVar11 + -1) {
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = param_3;
            puVar10[1] = param_4;
            puVar10[2] = param_5;
          }
          puVar10 = puVar10 + 3;
        }
      }
    }
  }
  else if ((local_38 != param_2) && (puVar6 = puVar8 + param_2 * 3, puVar8 != puVar10)) {
    puVar8 = puVar6;
    if (puVar10 <= puVar6) {
      for (; puVar8 != puVar10; puVar8 = puVar8 + 3) {
      }
    }
    param_1[1] = (uint)(puVar10 + (((int)puVar10 - (int)puVar6) / 0xc) * -3);
    return;
  }
  return;
}



void fn_0078f330(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  puVar1 = (undefined4 *)param_1[1];
  uVar3 = (int)((int)puVar1 - *param_1) / 0x34;
  if (uVar3 < (uint)((int)(param_1[2] - *param_1) / 0x34)) {
    param_1[1] = (uint)(puVar1 + 0xd);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = puVar1[-0xd];
      puVar1[1] = puVar1[-0xc];
      puVar1[2] = puVar1[-0xb];
      puVar1[3] = puVar1[-10];
      puVar1[4] = puVar1[-9];
      puVar1[5] = puVar1[-8];
      puVar1[6] = puVar1[-7];
      puVar1[7] = puVar1[-6];
      puVar1[8] = puVar1[-5];
      puVar1[9] = puVar1[-4];
      puVar1[10] = puVar1[-3];
      puVar1[0xb] = puVar1[-2];
      puVar1[0xc] = puVar1[-1];
    }
    fn_007a1a80(param_2,puVar1 + -0xd);
    uVar5 = param_3[1];
    uVar7 = param_3[2];
    uVar8 = param_3[3];
    uVar9 = param_3[4];
    uVar10 = param_3[5];
    uVar12 = param_3[6];
    uVar13 = param_3[7];
    *param_2 = *param_3;
    param_2[1] = uVar5;
    param_2[2] = uVar7;
    param_2[3] = uVar8;
    param_2[4] = uVar9;
    param_2[5] = uVar10;
    param_2[6] = uVar12;
    param_2[7] = uVar13;
    uVar5 = param_3[9];
    uVar7 = param_3[10];
    uVar8 = param_3[0xb];
    uVar9 = param_3[0xc];
    param_2[8] = param_3[8];
    param_2[9] = uVar5;
    param_2[10] = uVar7;
    param_2[0xb] = uVar8;
    param_2[0xc] = uVar9;
    return;
  }
  uVar2 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
  uVar11 = uVar3 + 0x20;
  if (uVar3 + 0x20 <= uVar2) {
    uVar11 = uVar2;
  }
  uVar3 = fn_00100fc6(uVar11 * 0x34,0);
  fn_007b5c2c(*param_1,param_2,uVar3,param_1);
  puVar1 = (undefined4 *)(uVar3 + ((int)((int)param_2 - *param_1) / 0x34) * 0x34);
  if (puVar1 != (undefined4 *)0x0) {
    uVar5 = param_3[1];
    uVar7 = param_3[2];
    uVar8 = param_3[3];
    uVar9 = param_3[4];
    uVar10 = param_3[5];
    uVar12 = param_3[6];
    uVar13 = param_3[7];
    *puVar1 = *param_3;
    puVar1[1] = uVar5;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    puVar1[4] = uVar9;
    puVar1[5] = uVar10;
    puVar1[6] = uVar12;
    puVar1[7] = uVar13;
    uVar5 = param_3[9];
    uVar7 = param_3[10];
    uVar8 = param_3[0xb];
    uVar9 = param_3[0xc];
    puVar1[8] = param_3[8];
    puVar1[9] = uVar5;
    puVar1[10] = uVar7;
    puVar1[0xb] = uVar8;
    puVar1[0xc] = uVar9;
  }
  fn_007b5c2c(param_2,param_1[1],uVar3 + ((int)((int)param_2 - *param_1) / 0x34) * 0x34 + 0x34,
               param_1);
  uVar4 = *param_1;
  uVar6 = param_1[1];
  uVar2 = uVar4;
  if (uVar6 < uVar4) {
    do {
      uVar2 = uVar2 + 0x34;
    } while (uVar2 != uVar6);
  }
  fn_001008c4(uVar4,(int)(param_1[2] - uVar4) / 0x34,0);
  *param_1 = uVar3;
  param_1[1] = uVar3 + ((int)(uVar6 - uVar4) / 0x34) * 0x34 + 0x34;
  param_1[2] = uVar3 + uVar11 * 0x34;
  return;
}


