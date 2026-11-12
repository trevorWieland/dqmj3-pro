#include "single_001ccea8_r.h"


extern undefined4 SupervisorCall;

/* WARNING: Removing unreachable block (ram,0x001cd418) */
/* WARNING: Removing unreachable block (ram,0x001cd424) */
/* WARNING: Removing unreachable block (ram,0x001cd3f0) */
/* WARNING: Removing unreachable block (ram,0x001cd3f4) */
/* WARNING: Removing unreachable block (ram,0x001cd3f8) */
/* WARNING: Removing unreachable block (ram,0x001cd3fc) */
/* WARNING: Removing unreachable block (ram,0x001cd400) */
/* WARNING: Removing unreachable block (ram,0x001cd440) */
/* WARNING: Removing unreachable block (ram,0x001cd450) */
/* WARNING: Removing unreachable block (ram,0x001cd428) */
/* WARNING: Removing unreachable block (ram,0x001cd430) */
/* WARNING: Removing unreachable block (ram,0x001cd434) */
/* WARNING: Removing unreachable block (ram,0x001cd438) */

uint * fn_001ccea8(uint *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  uint local_30;
  uint local_2c [2];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_30 = 8;
  puVar8 = (uint *)((int)(param_1[2] - *param_1) / 0xc);
  if (puVar8 < &SupervisorCall) {
    uVar14 = (int)(param_1[1] - *param_1) / 0xc;
    local_2c[0] = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
    if (local_2c[0] < uVar14 + 0x20) {
      local_2c[0] = uVar14 + 0x20;
    }
    puVar8 = local_2c;
    if (local_2c[0] < 9) {
      puVar8 = &local_30;
    }
    uVar14 = *puVar8;
    puVar1 = (undefined4 *)fn_00100fc6(uVar14 * 0xc,0);
    puVar11 = (undefined4 *)param_1[1];
    puVar7 = puVar1;
    for (puVar9 = (undefined4 *)*param_1; puVar9 != puVar11; puVar9 = puVar9 + 3) {
      if (puVar7 != (undefined4 *)0x0) {
        uVar17 = puVar9[1];
        uVar20 = puVar9[2];
        *puVar7 = *puVar9;
        puVar7[1] = uVar17;
        puVar7[2] = uVar20;
      }
      puVar7 = puVar7 + 3;
    }
    uVar2 = *param_1;
    uVar3 = uVar2;
    if (param_1[1] < uVar2) {
      do {
        uVar3 = uVar3 + 0xc;
      } while (uVar3 != param_1[1]);
    }
    fn_001008c4(uVar2,(int)(param_1[2] - uVar2) / 0xc,0);
    uVar3 = *param_1;
    *param_1 = (uint)puVar1;
    puVar8 = puVar1 + uVar14 * 3;
    param_1[2] = (uint)puVar8;
    param_1[1] = (uint)(puVar1 + ((int)(param_1[1] - uVar3) / 0xc) * 3);
  }
  uVar14 = 0;
  do {
    uVar3 = uVar14 & 0xff;
    if (uVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (&DAT_007d05dc)[uVar3];
    }
    uVar16 = (&DAT_007d05e0)[uVar3];
    uVar3 = (uint)puVar8 & 0xffffff00 | uVar3;
    puVar4 = (uint *)param_1[1];
    if (puVar4 == (uint *)param_1[2]) {
      uVar13 = (int)((int)puVar4 - *param_1) / 0xc;
      if (uVar13 < (uint)((int)((int)param_1[2] - *param_1) / 0xc)) {
        param_1[1] = (uint)(puVar4 + 3);
        if (puVar4 != (uint *)0x0) {
          *puVar4 = puVar4[-3];
          puVar4[1] = puVar4[-2];
          puVar4[2] = puVar4[-1];
        }
        puVar8 = puVar4 + -3;
        puVar12 = puVar4;
        if (puVar4 < puVar8) {
          if (0 < (int)puVar8 - (int)puVar4) {
            uVar13 = ((int)puVar8 - (int)puVar4) / 0xc;
            if ((uVar13 & 1) != 0) {
              puVar8 = puVar4 + -6;
              puVar12 = puVar4 + -3;
              *puVar12 = *puVar8;
              puVar4[-2] = puVar4[-5];
              puVar4[-1] = puVar4[-4];
            }
            for (iVar15 = (int)uVar13 >> 1; iVar15 != 0; iVar15 = iVar15 + -1) {
              uVar13 = puVar8[-2];
              uVar18 = puVar8[-1];
              puVar12[-3] = puVar8[-3];
              puVar12[-2] = uVar13;
              puVar12[-1] = uVar18;
              uVar13 = puVar8[-5];
              uVar18 = puVar8[-4];
              puVar12[-6] = puVar8[-6];
              puVar12[-5] = uVar13;
              puVar12[-4] = uVar18;
              puVar12 = puVar12 + -6;
              puVar8 = puVar8 + -6;
            }
          }
        }
        else {
          for (; puVar4 != puVar8; puVar8 = puVar8 + -3) {
            uVar13 = puVar8[-2];
            uVar18 = puVar8[-1];
            puVar12[-3] = puVar8[-3];
            puVar12[-2] = uVar13;
            puVar12[-1] = uVar18;
            puVar12 = puVar12 + -3;
          }
        }
        *puVar4 = uVar3;
        puVar4[1] = uVar2;
        puVar4[2] = uVar16;
      }
      else {
        local_30 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
        if (local_30 < uVar13 + 0x20) {
          local_30 = uVar13 + 0x20;
        }
        puVar5 = (uint *)fn_00100fc6(local_30 * 0xc,0);
        puVar12 = puVar5;
        for (puVar8 = (uint *)*param_1; puVar8 != puVar4; puVar8 = puVar8 + 3) {
          if (puVar12 != (uint *)0x0) {
            uVar13 = puVar8[1];
            uVar18 = puVar8[2];
            *puVar12 = *puVar8;
            puVar12[1] = uVar13;
            puVar12[2] = uVar18;
          }
          puVar12 = puVar12 + 3;
        }
        puVar8 = puVar5 + ((int)((int)puVar4 - *param_1) / 0xc) * 3;
        if (puVar8 != (uint *)0x0) {
          *puVar8 = uVar3;
          puVar8[1] = uVar2;
          puVar8[2] = uVar16;
        }
        puVar12 = (uint *)param_1[1];
        puVar8 = puVar5 + ((int)((int)puVar4 - *param_1) / 0xc) * 3;
        for (; puVar4 != puVar12; puVar4 = puVar4 + 3) {
          puVar6 = puVar8 + 3;
          if (puVar6 != (uint *)0x0) {
            uVar3 = puVar4[1];
            uVar2 = puVar4[2];
            *puVar6 = *puVar4;
            puVar8[4] = uVar3;
            puVar8[5] = uVar2;
          }
          puVar8 = puVar6;
        }
        uVar2 = *param_1;
        uVar16 = param_1[1];
        uVar3 = uVar2;
        if (uVar16 < uVar2) {
          do {
            uVar3 = uVar3 + 0xc;
          } while (uVar3 != uVar16);
        }
        fn_001008c4(uVar2,(int)(param_1[2] - uVar2) / 0xc,0);
        *param_1 = (uint)puVar5;
        puVar8 = puVar5 + ((int)(uVar16 - uVar2) / 0xc) * 3 + 3;
        param_1[1] = (uint)puVar8;
        param_1[2] = (uint)(puVar5 + local_30 * 3);
      }
    }
    else {
      puVar8 = puVar4 + 3;
      param_1[1] = (uint)puVar8;
      if (puVar4 != (uint *)0x0) {
        *puVar4 = uVar3;
        puVar4[1] = uVar2;
        puVar4[2] = uVar16;
      }
    }
    uVar14 = uVar14 + 1;
  } while (uVar14 < 8);
  puVar9 = (undefined4 *)param_1[4];
  puVar7 = (undefined4 *)param_1[3];
  puVar8 = param_1 + 3;
  uVar14 = (int)puVar9 - (int)puVar7 >> 2;
  if (uVar14 == 0) {
    iVar15 = 1;
    if ((int)(param_1[5] - (int)puVar7) >> 2 == 0) {
      local_30 = 1;
      uVar14 = (int)(param_1[4] - *puVar8) >> 2;
      local_2c[0] = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
      if (local_2c[0] < uVar14 + 0x20) {
        local_2c[0] = uVar14 + 0x20;
      }
      puVar4 = local_2c;
      if (local_2c[0] < 2) {
        puVar4 = &local_30;
      }
      uVar14 = *puVar4;
      puVar11 = (undefined4 *)fn_00100fc6(uVar14 << 2,0);
      puVar1 = puVar11;
      for (puVar7 = (undefined4 *)*puVar8; puVar7 != puVar9; puVar7 = puVar7 + 1) {
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *puVar7;
        }
        puVar1 = puVar1 + 1;
      }
      puVar7 = (undefined4 *)(((int)puVar9 - *puVar8 & 0xfffffffc) + (int)puVar11);
      do {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = 0;
        }
        iVar15 = iVar15 + -1;
        puVar7 = puVar7 + 1;
      } while (iVar15 != 0);
      puVar1 = (undefined4 *)param_1[4];
      puVar7 = puVar11 + ((int)((int)puVar9 - *puVar8) >> 2) + 1;
      for (; puVar9 != puVar1; puVar9 = puVar9 + 1) {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = *puVar9;
        }
        puVar7 = puVar7 + 1;
      }
      uVar2 = *puVar8;
      uVar16 = param_1[4];
      uVar3 = uVar2;
      if (uVar16 < uVar2) {
        do {
          uVar3 = uVar3 + 4;
        } while (uVar3 != uVar16);
      }
      fn_001008c4(uVar2,(int)(param_1[5] - uVar2) >> 2,0);
      param_1[5] = (uint)(puVar11 + uVar14);
      param_1[4] = (uint)(puVar11 + ((int)(uVar16 - uVar2) >> 2) + 1);
      *puVar8 = (uint)puVar11;
    }
    else {
      puVar7 = puVar9 + 1;
      param_1[4] = (uint)(puVar9 + 1);
      if (puVar7 < puVar9) {
        puVar19 = puVar9 + -1;
        puVar11 = puVar9;
        for (puVar1 = puVar19; puVar1 != puVar9; puVar1 = puVar1 + 1) {
          if (puVar11 != (undefined4 *)0x0) {
            *puVar11 = *puVar1;
          }
          puVar11 = puVar11 + 1;
        }
        puVar1 = puVar9;
        if (puVar9 < puVar19) {
          if (0 < (int)puVar19 - (int)puVar9) {
            iVar15 = (int)puVar19 - (int)puVar9 >> 2;
            iVar10 = 0;
            do {
              iVar15 = iVar15 + -1;
              puVar9[iVar10 + -1] = puVar19[iVar10 + -1];
              iVar10 = iVar10 + -1;
            } while (iVar15 != 0);
          }
        }
        else {
          while (puVar9 != puVar19) {
            puVar19 = puVar19 + -1;
            puVar1[-1] = *puVar19;
            puVar1 = puVar1 + -1;
          }
        }
        if (puVar9 < puVar7) {
          iVar15 = (int)puVar7 - (int)puVar9;
          if (0 < iVar15) {
            puVar7 = puVar9;
            if (iVar15 * 0x20000000 < 0) {
              puVar7 = puVar9 + 1;
              *puVar9 = 0;
            }
            for (iVar15 = iVar15 >> 3; iVar15 != 0; iVar15 = iVar15 + -1) {
              puVar9 = puVar7 + 1;
              *puVar7 = 0;
              puVar7 = puVar7 + 2;
              *puVar9 = 0;
            }
          }
        }
        else {
          for (; puVar9 != puVar7; puVar9 = puVar9 + 1) {
            *puVar9 = 0;
          }
        }
      }
      else {
        do {
          if (puVar9 != (undefined4 *)0x0) {
            *puVar9 = 0;
          }
          iVar15 = iVar15 + -1;
          puVar9 = puVar9 + 1;
        } while (iVar15 != 0);
      }
    }
  }
  else if ((1 < uVar14) && (puVar1 = puVar7 + 1, puVar7 != puVar9)) {
    puVar7 = puVar1;
    if (puVar9 < puVar1) {
      do {
        puVar7 = puVar7 + 1;
      } while (puVar7 != puVar9);
    }
    param_1[4] = (int)puVar9 - ((int)puVar9 - (int)puVar1 & 0xfffffffcU);
  }
  puVar9 = (undefined4 *)fn_00145b00(8,&DAT_00812c8c);
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = &DAT_0085174c;
    puVar9[1] = param_1;
  }
  *(undefined4 **)param_1[3] = puVar9;
  return param_1;
}


