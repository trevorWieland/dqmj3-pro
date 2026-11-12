#include "00343d40_00344470.h"



void fn_00344470(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 in_s0;
  
  puVar1 = (undefined4 *)fn_00305244(param_1,4);
  puVar1[0xd] = in_s0;
  *puVar1 = &DAT_00825168;
  return;
}



void fn_0034440c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  undefined8 in_d8;
  
  fn_00305030();
  if (0 < param_3) {
    in_d8 = 0x3cc90fdb;
  }
  iVar1 = 0;
  if (0 < param_3) {
    do {
      pfVar2 = (float *)(*(int *)(param_1 + 8) + iVar1 * 0x1c);
      fVar3 = -*pfVar2;
      fn_00525bd0();
      iVar1 = iVar1 + 1;
      pfVar2[4] = fVar3 * (float)in_d8;
    } while (iVar1 < param_3);
  }
  return;
}



void fn_00344320(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0x3c;
  *param_1 = &DAT_00825128;
  do {
    fn_00343ca8(param_1,iVar4);
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  fn_002afe58();
  if (param_1[8] != 0) {
    uVar2 = fn_005e0a8c();
    if ((int *)param_1[8] != (int *)0x0) {
      (**(code **)(*(int *)param_1[8] + 4))();
      param_1[8] = 0;
    }
    fn_00143b48(uVar2);
  }
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 4))();
  }
  uVar3 = param_1[2];
  uVar1 = uVar3;
  if ((uint)param_1[3] <= uVar3) {
    for (; uVar1 != param_1[3]; uVar1 = uVar1 + 0x28) {
    }
  }
  fn_001008c4(uVar3,(int)(param_1[4] - uVar3) / 0x28,0);
  fn_002feef8(param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00343fe8) */
/* WARNING: Removing unreachable block (ram,0x00343ff0) */
/* WARNING: Removing unreachable block (ram,0x00344008) */
/* WARNING: Removing unreachable block (ram,0x00344024) */
/* WARNING: Removing unreachable block (ram,0x00344040) */
/* WARNING: Removing unreachable block (ram,0x00344050) */
/* WARNING: Removing unreachable block (ram,0x00344060) */
/* WARNING: Removing unreachable block (ram,0x00344070) */
/* WARNING: Removing unreachable block (ram,0x00344090) */

undefined4 * fn_00343d40(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint unaff_r4;
  uint unaff_r5;
  int iVar12;
  uint *puVar13;
  undefined4 *puVar14;
  undefined4 unaff_r8;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  uint local_94 [2];
  uint local_8c [15];
  undefined4 local_50;
  uint uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  
  puVar1 = (undefined4 *)fn_0069c2c8();
  *puVar1 = &DAT_00825128;
  puVar1[1] = 0xffffffff;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = param_2;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  uStack_4c = unaff_r4 & 0xffff0000;
  *(undefined1 *)(puVar1 + 9) = 0;
  local_48 = 0xffffffff;
  local_50 = 0;
  local_44 = 0xffffffff;
  uStack_40 = 0;
  uVar16 = unaff_r5 & 0xffffff00 | 3;
  puVar13 = puVar1 + 2;
  puVar2 = (undefined4 *)*puVar13;
  puVar6 = (undefined4 *)puVar1[3];
  uVar10 = ((int)puVar6 - (int)puVar2) / 0x28;
  if (uVar10 < 0x3d) {
    iVar15 = 0x3d - uVar10;
    if (iVar15 != 0) {
      uVar10 = uVar10 + iVar15;
      if ((uint)((puVar1[4] - (int)puVar2) / 0x28) < uVar10) {
        local_94[0] = uVar10;
        uVar4 = (int)(puVar1[3] - *puVar13) / 0x28;
        local_8c[0] = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
        if (local_8c[0] < uVar4 + 0x20) {
          local_8c[0] = uVar4 + 0x20;
        }
        puVar7 = local_8c;
        if (local_8c[0] <= uVar10) {
          puVar7 = local_94;
        }
        uVar10 = *puVar7;
        puVar3 = (undefined4 *)fn_00100fc6(uVar10 * 0x28,0);
        puVar11 = puVar3;
        for (puVar2 = (undefined4 *)*puVar13; puVar2 != puVar6; puVar2 = puVar2 + 10) {
          if (puVar11 != (undefined4 *)0x0) {
            uVar17 = puVar2[1];
            uVar18 = puVar2[2];
            uVar19 = puVar2[3];
            uVar20 = puVar2[4];
            uVar21 = puVar2[5];
            uVar22 = puVar2[6];
            uVar23 = puVar2[7];
            *puVar11 = *puVar2;
            puVar11[1] = uVar17;
            puVar11[2] = uVar18;
            puVar11[3] = uVar19;
            puVar11[4] = uVar20;
            puVar11[5] = uVar21;
            puVar11[6] = uVar22;
            puVar11[7] = uVar23;
            uVar17 = puVar2[9];
            puVar11[8] = puVar2[8];
            puVar11[9] = uVar17;
          }
          puVar11 = puVar11 + 10;
        }
        puVar2 = puVar3 + ((int)((int)puVar6 - *puVar13) / 0x28) * 10;
        for (iVar12 = iVar15; iVar12 != 0; iVar12 = iVar12 + -1) {
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = local_50;
            puVar2[1] = uStack_4c;
            puVar2[2] = local_48;
            puVar2[3] = local_44;
            puVar2[4] = uStack_40;
            puVar2[5] = unaff_r8;
            puVar2[6] = 0;
            puVar2[7] = 0;
            puVar2[8] = 0;
            puVar2[9] = uVar16;
          }
          puVar2 = puVar2 + 10;
        }
        puVar11 = (undefined4 *)puVar1[3];
        puVar2 = puVar3 + ((int)((int)puVar6 - *puVar13) / 0x28 + iVar15) * 10;
        for (; puVar6 != puVar11; puVar6 = puVar6 + 10) {
          if (puVar2 != (undefined4 *)0x0) {
            uVar17 = puVar6[1];
            uVar18 = puVar6[2];
            uVar19 = puVar6[3];
            uVar20 = puVar6[4];
            uVar21 = puVar6[5];
            uVar22 = puVar6[6];
            uVar23 = puVar6[7];
            *puVar2 = *puVar6;
            puVar2[1] = uVar17;
            puVar2[2] = uVar18;
            puVar2[3] = uVar19;
            puVar2[4] = uVar20;
            puVar2[5] = uVar21;
            puVar2[6] = uVar22;
            puVar2[7] = uVar23;
            uVar17 = puVar6[9];
            puVar2[8] = puVar6[8];
            puVar2[9] = uVar17;
          }
          puVar2 = puVar2 + 10;
        }
        uVar4 = *puVar13;
        uVar8 = puVar1[3];
        uVar16 = uVar4;
        if (uVar8 < uVar4) {
          do {
            uVar16 = uVar16 + 0x28;
          } while (uVar16 != uVar8);
        }
        fn_001008c4(uVar4,(int)(puVar1[4] - uVar4) / 0x28,0);
        *puVar13 = (uint)puVar3;
        puVar1[3] = puVar3 + ((int)(uVar8 - uVar4) / 0x28) * 10 + iVar15 * 10;
        puVar1[4] = puVar3 + uVar10 * 10;
      }
      else {
        puVar2 = puVar6 + iVar15 * 10;
        puVar1[3] = puVar6 + iVar15 * 10;
        if (puVar2 < puVar6) {
          puVar14 = puVar6 + iVar15 * -10;
          puVar11 = puVar6;
          for (puVar3 = puVar14; puVar3 != puVar6; puVar3 = puVar3 + 10) {
            if (puVar11 != (undefined4 *)0x0) {
              uVar17 = puVar3[1];
              uVar18 = puVar3[2];
              uVar19 = puVar3[3];
              uVar20 = puVar3[4];
              uVar21 = puVar3[5];
              uVar22 = puVar3[6];
              uVar23 = puVar3[7];
              *puVar11 = *puVar3;
              puVar11[1] = uVar17;
              puVar11[2] = uVar18;
              puVar11[3] = uVar19;
              puVar11[4] = uVar20;
              puVar11[5] = uVar21;
              puVar11[6] = uVar22;
              puVar11[7] = uVar23;
              uVar17 = puVar3[9];
              puVar11[8] = puVar3[8];
              puVar11[9] = uVar17;
            }
            puVar11 = puVar11 + 10;
          }
          puVar11 = puVar6;
          if (puVar6 < puVar14) {
            iVar15 = (int)puVar14 - (int)puVar6;
            iVar12 = 1;
            if (1 < iVar15 / 0x28 + 1) {
              do {
                puVar14 = puVar14 + -10;
                puVar11 = puVar11 + -10;
                fn_0017821c(puVar11,puVar14,0x25);
                iVar12 = iVar12 + 1;
              } while (iVar12 < iVar15 / 0x28 + 1);
            }
          }
          else {
            while (puVar6 != puVar14) {
              puVar14 = puVar14 + -10;
              fn_0017821c(puVar11 + -10,puVar14,0x25);
              puVar11 = puVar11 + -10;
            }
          }
          if (puVar6 < puVar2) {
            iVar15 = (int)puVar2 - (int)puVar6;
            iVar12 = 1;
            if (1 < iVar15 / 0x28 + 1) {
              do {
                fn_0017821c(puVar6,&local_50,0x25);
                iVar12 = iVar12 + 1;
                puVar6 = puVar6 + 10;
              } while (iVar12 < iVar15 / 0x28 + 1);
            }
          }
          else {
            for (; puVar6 != puVar2; puVar6 = puVar6 + 10) {
              fn_0017821c(puVar6,&local_50,0x25);
            }
          }
        }
        else {
          for (; iVar15 != 0; iVar15 = iVar15 + -1) {
            if (puVar6 != (undefined4 *)0x0) {
              *puVar6 = 0;
              puVar6[1] = uStack_4c;
              puVar6[2] = 0xffffffff;
              puVar6[3] = 0xffffffff;
              puVar6[4] = 0;
              puVar6[5] = unaff_r8;
              puVar6[6] = 0;
              puVar6[7] = 0;
              puVar6[8] = 0;
              puVar6[9] = uVar16;
            }
            puVar6 = puVar6 + 10;
          }
        }
      }
    }
  }
  else if ((0x3d < uVar10) && (puVar11 = puVar2 + 0x262, puVar2 != puVar6)) {
    puVar2 = puVar11;
    if (puVar6 <= puVar11) {
      for (; puVar2 != puVar6; puVar2 = puVar2 + 10) {
      }
    }
    puVar1[3] = puVar6 + (((int)puVar6 - (int)puVar11) / 0x28) * -10;
  }
  iVar15 = fn_00145b00(8,&DAT_00812c8c);
  if (iVar15 == 0) {
    piVar9 = (int *)0x0;
  }
  else {
    uVar17 = fn_001287dc(0x100000,4);
    piVar9 = (int *)fn_005e0a98(iVar15,uVar17,0x100000,100);
  }
  piVar5 = (int *)puVar1[8];
  if (piVar5 != piVar9) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))();
    }
    puVar1[8] = piVar9;
  }
  return puVar1;
}


