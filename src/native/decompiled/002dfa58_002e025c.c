#include "002dfa58_002e025c.h"



undefined4 fn_002e025c(int param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint in_s0;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  undefined8 uVar12;
  
  lVar11 = (ulonglong)in_s0 << 0x20;
  uVar12 = fn_006f7a84(DAT_008977e0);
  uVar5 = (uint)((ulonglong)uVar12 >> 0x20);
  iVar1 = (int)uVar12;
  pfVar2 = *(float **)(iVar1 + 0x100);
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x100)) {
    do {
      iVar7 = param_1 + iVar6 * 4;
      iVar3 = *(int *)(iVar7 + 0x140);
      if (iVar3 != 0) {
        uVar5 = (uint)*(byte *)(iVar3 + 0x58);
      }
      if (iVar3 != 0 && uVar5 != 0) {
        pfVar4 = *(float **)(iVar3 + 0x100);
        fVar10 = (*(float *)(iVar1 + 0x20) + *pfVar2) - (*(float *)(iVar3 + 0x20) + *pfVar4);
        fVar8 = (*(float *)(iVar1 + 0x24) + pfVar2[1]) - (*(float *)(iVar3 + 0x24) + pfVar4[1]);
        fVar9 = (*(float *)(iVar1 + 0x28) + pfVar2[2]) - (*(float *)(iVar3 + 0x28) + pfVar4[2]);
        fVar8 = fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9;
        fVar9 = *(float *)(*(int *)(iVar1 + 0x100) + 0xc) +
                *(float *)(*(int *)(*(int *)(iVar7 + 0x140) + 0x100) + 0xc) +
                (float)((ulonglong)lVar11 >> 0x20);
        lVar11 = CONCAT44(fVar9,fVar8);
        if (fVar8 < fVar9 * fVar9) {
          return 1;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x100));
  }
  return 0;
}



undefined4 fn_002e0230(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 0x11c) < 2) || ((param_2 != 2 && param_2 != 3) && param_2 != 0xf)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



void fn_002dfa58(int param_1,int *param_2,int *param_3)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined4 **ppuVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined4 **ppuVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined2 *puVar11;
  undefined4 uVar12;
  uint *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined2 *puVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 *local_30;
  undefined4 *local_2c [2];
  
  ppuVar4 = &local_30;
  ppuVar7 = &local_30;
  uVar10 = *(uint *)(param_1 + 0x1a4);
  uVar18 = *(uint *)(param_1 + 0x1a8);
  if (uVar10 != uVar18) {
    uVar1 = uVar10;
    if (uVar18 <= uVar10) {
      do {
        uVar1 = uVar1 + 2;
      } while (uVar1 != uVar18);
    }
    *(uint *)(param_1 + 0x1a8) = uVar18 - (uVar18 - uVar10 & 0xfffffffe);
  }
  puVar13 = (uint *)(param_1 + 0x1a4);
  local_2c[0] = (undefined4 *)(param_2[1] - *param_2 >> 1);
  if ((undefined4 *)0x7fffffff < local_2c[0]) {
    local_30 = (undefined4 *)0x7fffffff;
    fn_002ff628(8,&DAT_008c7675);
  }
  if ((undefined4 *)((int)(*(int *)(param_1 + 0x1ac) - *puVar13) >> 1) < local_2c[0]) {
    uVar10 = (int)(*(int *)(param_1 + 0x1a8) - *puVar13) >> 1;
    local_30 = (undefined4 *)(uVar10 + (uVar10 >> 1) + (uVar10 >> 3));
    if (local_30 < (undefined4 *)(uVar10 + 0x20)) {
      local_30 = (undefined4 *)(uVar10 + 0x20);
    }
    if (local_30 <= local_2c[0]) {
      ppuVar4 = local_2c;
    }
    puVar15 = *ppuVar4;
    puVar2 = (undefined2 *)fn_00100fc6((int)puVar15 << 1,0);
    puVar5 = *(undefined2 **)(param_1 + 0x1a8);
    puVar16 = puVar2;
    for (puVar11 = (undefined2 *)*puVar13; puVar11 != puVar5; puVar11 = puVar11 + 1) {
      if (puVar16 != (undefined2 *)0x0) {
        *puVar16 = *puVar11;
      }
      puVar16 = puVar16 + 1;
    }
    uVar18 = *puVar13;
    uVar10 = uVar18;
    if (*(uint *)(param_1 + 0x1a8) < uVar18) {
      do {
        uVar10 = uVar10 + 2;
      } while (uVar10 != *(uint *)(param_1 + 0x1a8));
    }
    fn_001008c4(uVar18,(int)(*(int *)(param_1 + 0x1ac) - uVar18) >> 1,0);
    uVar10 = *puVar13;
    *(undefined2 **)(param_1 + 0x1a4) = puVar2;
    *(int *)(param_1 + 0x1a8) = (*(int *)(param_1 + 0x1a8) - uVar10 & 0xfffffffe) + (int)puVar2;
    *(undefined2 **)(param_1 + 0x1ac) = puVar2 + (int)puVar15;
  }
  uVar10 = 0;
  iVar6 = *param_2;
  if (param_2[1] - iVar6 >> 1 != 0) {
    do {
      puVar13 = (uint *)(param_1 + 0x1a4);
      puVar16 = (undefined2 *)(iVar6 + uVar10 * 2);
      puVar11 = *(undefined2 **)(param_1 + 0x1a8);
      if (puVar11 == *(undefined2 **)(param_1 + 0x1ac)) {
        uVar18 = (int)((int)puVar11 - *puVar13) >> 1;
        if (uVar18 < (uint)((int)((int)*(undefined2 **)(param_1 + 0x1ac) - *puVar13) >> 1)) {
          *(undefined2 **)(param_1 + 0x1a8) = puVar11 + 1;
          if (puVar11 != (undefined2 *)0x0) {
            *puVar11 = puVar11[-1];
          }
          puVar2 = puVar11 + -1;
          puVar5 = puVar11;
          if (puVar11 < puVar2) {
            iVar6 = (int)puVar2 - (int)puVar11;
            if (0 < iVar6) {
              if (iVar6 * 0x40000000 < 0) {
                puVar2 = puVar11 + -2;
                puVar5 = puVar11 + -1;
                *puVar5 = *puVar2;
              }
              for (iVar6 = iVar6 >> 2; iVar6 != 0; iVar6 = iVar6 + -1) {
                puVar5[-1] = puVar2[-1];
                puVar2 = puVar2 + -2;
                puVar5 = puVar5 + -2;
                *puVar5 = *puVar2;
              }
            }
          }
          else {
            while (puVar11 != puVar2) {
              puVar2 = puVar2 + -1;
              puVar5[-1] = *puVar2;
              puVar5 = puVar5 + -1;
            }
          }
          *puVar11 = *puVar16;
        }
        else {
          local_30 = (undefined4 *)(uVar18 + (uVar18 >> 1) + (uVar18 >> 3));
          if (local_30 < (undefined4 *)(uVar18 + 0x20)) {
            local_30 = (undefined4 *)(uVar18 + 0x20);
          }
          puVar3 = (undefined2 *)fn_00100fc6((int)local_30 << 1,0);
          puVar5 = puVar3;
          for (puVar2 = (undefined2 *)*puVar13; puVar2 != puVar11; puVar2 = puVar2 + 1) {
            if (puVar5 != (undefined2 *)0x0) {
              *puVar5 = *puVar2;
            }
            puVar5 = puVar5 + 1;
          }
          puVar2 = (undefined2 *)(((int)puVar11 - *puVar13 & 0xfffffffe) + (int)puVar3);
          if (puVar2 != (undefined2 *)0x0) {
            *puVar2 = *puVar16;
          }
          puVar2 = *(undefined2 **)(param_1 + 0x1a8);
          puVar16 = (undefined2 *)(((int)puVar11 - *puVar13 & 0xfffffffe) + (int)puVar3);
          for (; puVar11 != puVar2; puVar11 = puVar11 + 1) {
            puVar16 = puVar16 + 1;
            if (puVar16 != (undefined2 *)0x0) {
              *puVar16 = *puVar11;
            }
          }
          uVar1 = *puVar13;
          uVar17 = *(uint *)(param_1 + 0x1a8);
          uVar18 = uVar1;
          if (uVar17 < uVar1) {
            do {
              uVar18 = uVar18 + 2;
            } while (uVar18 != uVar17);
          }
          fn_001008c4(uVar1,(int)(*(int *)(param_1 + 0x1ac) - uVar1) >> 1,0);
          *(undefined2 **)(param_1 + 0x1ac) = puVar3 + (int)local_30;
          *(undefined2 **)(param_1 + 0x1a8) = puVar3 + ((int)(uVar17 - uVar1) >> 1) + 1;
          *puVar13 = (uint)puVar3;
        }
      }
      else {
        *(undefined2 **)(param_1 + 0x1a8) = puVar11 + 1;
        if (puVar11 != (undefined2 *)0x0) {
          *puVar11 = *puVar16;
        }
      }
      iVar6 = *param_2;
      uVar10 = uVar10 + 1;
    } while (uVar10 < (uint)(param_2[1] - iVar6 >> 1));
  }
  uVar10 = *(uint *)(param_1 + 0x198);
  uVar18 = *(uint *)(param_1 + 0x19c);
  if (uVar10 != uVar18) {
    uVar1 = uVar10;
    if (uVar18 <= uVar10) {
      do {
        uVar1 = uVar1 + 0xc;
      } while (uVar1 != uVar18);
    }
    *(uint *)(param_1 + 0x19c) = uVar18 + ((int)(uVar18 - uVar10) / 0xc) * -0xc;
  }
  puVar13 = (uint *)(param_1 + 0x198);
  local_2c[0] = (undefined4 *)((param_3[1] - *param_3) / 0xc);
  if ((undefined4 *)0x15555555 < local_2c[0]) {
    local_30 = (undefined4 *)0x15555555;
    fn_002ff628(8,&DAT_008c761f);
  }
  if ((undefined4 *)((int)(*(int *)(param_1 + 0x1a0) - *puVar13) / 0xc) < local_2c[0]) {
    uVar10 = (int)(*(int *)(param_1 + 0x19c) - *puVar13) / 0xc;
    local_30 = (undefined4 *)(uVar10 + (uVar10 >> 1) + (uVar10 >> 3));
    if (local_30 < (undefined4 *)(uVar10 + 0x20)) {
      local_30 = (undefined4 *)(uVar10 + 0x20);
    }
    if (local_30 <= local_2c[0]) {
      ppuVar7 = local_2c;
    }
    puVar15 = *ppuVar7;
    uVar1 = fn_00100fc6((int)puVar15 * 0xc,0);
    uVar17 = *(uint *)(param_1 + 0x19c);
    uVar18 = uVar1;
    for (uVar10 = *puVar13; uVar10 != uVar17; uVar10 = uVar10 + 0xc) {
      if (uVar18 != 0) {
        fn_001c6c38(uVar18,uVar10);
      }
      uVar18 = uVar18 + 0xc;
    }
    uVar18 = *puVar13;
    uVar10 = uVar18;
    if (*(uint *)(param_1 + 0x19c) < uVar18) {
      do {
        uVar10 = uVar10 + 0xc;
      } while (uVar10 != *(uint *)(param_1 + 0x19c));
    }
    fn_001008c4(uVar18,(int)(*(int *)(param_1 + 0x1a0) - uVar18) / 0xc,0);
    uVar10 = *puVar13;
    *puVar13 = uVar1;
    *(uint *)(param_1 + 0x19c) = uVar1 + ((int)(*(int *)(param_1 + 0x19c) - uVar10) / 0xc) * 0xc;
    *(uint *)(param_1 + 0x1a0) = uVar1 + (int)puVar15 * 0xc;
  }
  uVar10 = 0;
  iVar6 = param_3[1] - *param_3 >> 0x1f;
  if ((param_3[1] - *param_3) / 0xc + iVar6 != iVar6) {
    do {
      puVar15 = *(undefined4 **)(param_1 + 0x19c);
      puVar13 = (uint *)(param_1 + 0x198);
      puVar8 = (undefined4 *)(*param_3 + uVar10 * 0xc);
      if (puVar15 == *(undefined4 **)(param_1 + 0x1a0)) {
        uVar18 = (int)((int)puVar15 - *puVar13) / 0xc;
        local_2c[0] = puVar8;
        if (uVar18 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x1a0) - *puVar13) / 0xc)) {
          *(undefined4 **)(param_1 + 0x19c) = puVar15 + 3;
          if (puVar15 != (undefined4 *)0x0) {
            fn_001c6c38(puVar15,puVar15 + -3);
          }
          puVar8 = puVar15 + -3;
          puVar14 = puVar15;
          if (puVar15 < puVar8) {
            if (0 < (int)puVar8 - (int)puVar15) {
              uVar18 = ((int)puVar8 - (int)puVar15) / 0xc;
              if ((uVar18 & 1) != 0) {
                puVar8 = puVar15 + -6;
                puVar14 = puVar15 + -3;
                *puVar14 = *puVar8;
                puVar15[-2] = puVar15[-5];
                puVar15[-1] = puVar15[-4];
              }
              for (iVar6 = (int)uVar18 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
                uVar12 = puVar8[-2];
                uVar19 = puVar8[-1];
                puVar14[-3] = puVar8[-3];
                puVar14[-2] = uVar12;
                puVar14[-1] = uVar19;
                uVar12 = puVar8[-5];
                uVar19 = puVar8[-4];
                puVar14[-6] = puVar8[-6];
                puVar14[-5] = uVar12;
                puVar14[-4] = uVar19;
                puVar8 = puVar8 + -6;
                puVar14 = puVar14 + -6;
              }
            }
          }
          else {
            while (puVar15 != puVar8) {
              uVar12 = puVar8[-2];
              uVar19 = puVar8[-1];
              puVar14[-3] = puVar8[-3];
              puVar14[-2] = uVar12;
              puVar14[-1] = uVar19;
              puVar14 = puVar14 + -3;
              puVar8 = puVar8 + -3;
            }
          }
          uVar12 = local_2c[0][1];
          uVar19 = local_2c[0][2];
          *puVar15 = *local_2c[0];
          puVar15[1] = uVar12;
          puVar15[2] = uVar19;
        }
        else {
          local_30 = (undefined4 *)(uVar18 + (uVar18 >> 1) + (uVar18 >> 3));
          if (local_30 < (undefined4 *)(uVar18 + 0x20)) {
            local_30 = (undefined4 *)(uVar18 + 0x20);
          }
          uVar1 = fn_00100fc6((int)local_30 * 0xc,0);
          uVar18 = uVar1;
          for (puVar8 = (undefined4 *)*puVar13; puVar8 != puVar15; puVar8 = puVar8 + 3) {
            if (uVar18 != 0) {
              fn_001c6c38(uVar18,puVar8);
            }
            uVar18 = uVar18 + 0xc;
          }
          iVar6 = uVar1 + ((int)((int)puVar15 - *puVar13) / 0xc) * 0xc;
          if (iVar6 != 0) {
            fn_001c6c38(iVar6,local_2c[0]);
          }
          puVar8 = *(undefined4 **)(param_1 + 0x19c);
          iVar6 = uVar1 + ((int)((int)puVar15 - *puVar13) / 0xc) * 0xc;
          for (; puVar15 != puVar8; puVar15 = puVar15 + 3) {
            iVar6 = iVar6 + 0xc;
            if (iVar6 != 0) {
              fn_001c6c38(iVar6,puVar15);
            }
          }
          uVar17 = *puVar13;
          uVar9 = *(uint *)(param_1 + 0x19c);
          uVar18 = uVar17;
          if (uVar9 < uVar17) {
            do {
              uVar18 = uVar18 + 0xc;
            } while (uVar18 != uVar9);
          }
          fn_001008c4(uVar17,(int)(*(int *)(param_1 + 0x1a0) - uVar17) / 0xc,0);
          *puVar13 = uVar1;
          *(uint *)(param_1 + 0x19c) = uVar1 + ((int)(uVar9 - uVar17) / 0xc) * 0xc + 0xc;
          *(uint *)(param_1 + 0x1a0) = uVar1 + (int)local_30 * 0xc;
        }
      }
      else {
        *(undefined4 **)(param_1 + 0x19c) = puVar15 + 3;
        if (puVar15 != (undefined4 *)0x0) {
          fn_001c6c38();
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < (uint)((param_3[1] - *param_3) / 0xc));
  }
  return;
}


