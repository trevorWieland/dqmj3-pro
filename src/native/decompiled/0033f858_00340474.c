#include "0033f858_00340474.h"



void fn_00340474(int param_1,int param_2)

{
  *(int *)(param_1 + 0x38) = param_2 + *(int *)(param_1 + 0x38);
  return;
}



void fn_00340420(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = fn_006f7a9c(DAT_008977e0);
  uVar2 = fn_00277748(uVar1,param_2);
  uVar3 = fn_006b7664(uVar1,uVar2);
  fn_0033fe38(param_1,uVar3);
  fn_00279ae4(uVar1,uVar2);
  return;
}



void fn_003403dc(int param_1,int param_2,int param_3)

{
  if (param_2 == 3) {
    param_3 = param_3 * 500;
  }
  else {
    if (param_2 == 2) {
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + param_3 * 100;
      return;
    }
    param_3 = param_3 * 10;
  }
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + param_3;
  return;
}



void fn_0033f858(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  undefined4 *puVar14;
  int *piVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int iStack_34;
  int iStack_30;
  undefined4 local_2c;
  undefined4 *local_28;
  
  uVar1 = 0;
  iVar12 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  iVar5 = iVar12 >> 0x1f;
  iVar12 = iVar12 / 0x14 + iVar5;
  iStack_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  if (iVar12 != iVar5) {
    do {
      if (*(int *)(*(int *)(param_1 + 0x10) + uVar1 * 0x14) == param_2) {
        iVar12 = *(int *)(param_1 + 0x10) + uVar1 * 0x14;
        if (iVar12 != 0) goto LAB_0033fb88;
        break;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)(iVar12 - iVar5));
  }
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  piVar2 = *(int **)(param_1 + 0x14);
  piVar13 = (int *)(param_1 + 0x10);
  local_68 = param_2;
  if (piVar2 == *(int **)(param_1 + 0x18)) {
    uVar1 = ((int)piVar2 - *piVar13) / 0x14;
    if (uVar1 < (uint)(((int)*(int **)(param_1 + 0x18) - *piVar13) / 0x14)) {
      *(int **)(param_1 + 0x14) = piVar2 + 5;
      if (piVar2 != (int *)0x0) {
        fn_0034194c(piVar2,piVar2 + -5);
      }
      piVar13 = piVar2;
      piVar15 = piVar2 + -5;
      while (piVar2 != piVar15) {
        piVar13[-5] = piVar15[-5];
        piVar13[-4] = piVar15[-4];
        fn_0078e228(piVar13 + -3,piVar15 + -3);
        piVar13 = piVar13 + -5;
        piVar15 = piVar15 + -5;
      }
      *piVar2 = local_68;
      piVar2[1] = local_64;
      fn_0078e228(piVar2 + 2,&local_60);
    }
    else {
      uVar16 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
      if (uVar16 < uVar1 + 0x20) {
        uVar16 = uVar1 + 0x20;
      }
      iVar5 = fn_00100fc6(uVar16 * 0x14,0);
      iVar12 = iVar5;
      for (piVar15 = (int *)*piVar13; piVar15 != piVar2; piVar15 = piVar15 + 5) {
        if (iVar12 != 0) {
          fn_0034194c(iVar12,piVar15);
        }
        iVar12 = iVar12 + 0x14;
      }
      iVar12 = iVar5 + (((int)piVar2 - *piVar13) / 0x14) * 0x14;
      if (iVar12 != 0) {
        fn_0034194c(iVar12,&local_68);
      }
      piVar15 = *(int **)(param_1 + 0x14);
      iVar12 = iVar5 + (((int)piVar2 - *piVar13) / 0x14) * 0x14;
      for (; piVar2 != piVar15; piVar2 = piVar2 + 5) {
        iVar12 = iVar12 + 0x14;
        if (iVar12 != 0) {
          fn_0034194c(iVar12,piVar2);
        }
      }
      iVar12 = *piVar13;
      iVar10 = *(int *)(param_1 + 0x14);
      iVar8 = iVar10 - iVar12;
      for (; iVar12 != iVar10; iVar12 = iVar12 + 0x14) {
        iVar3 = *(int *)(iVar12 + 8);
        for (iVar4 = iVar3; iVar4 != *(int *)(iVar12 + 0xc); iVar4 = iVar4 + 0x20) {
        }
        fn_001008c4(iVar3,*(int *)(iVar12 + 0x10) - iVar3 >> 5,0);
      }
      fn_001008c4(*piVar13,(*(int *)(param_1 + 0x18) - *piVar13) / 0x14,0);
      *piVar13 = iVar5;
      *(int *)(param_1 + 0x14) = iVar5 + (iVar8 / 0x14) * 0x14 + 0x14;
      *(uint *)(param_1 + 0x18) = iVar5 + uVar16 * 0x14;
    }
  }
  else {
    *(int **)(param_1 + 0x14) = piVar2 + 5;
    if (piVar2 != (int *)0x0) {
      fn_0034194c(piVar2);
    }
  }
  iVar12 = *(int *)(param_1 + 0x10) +
           ((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0x14 + -1) * 0x14;
  for (iVar5 = local_60; iVar5 != local_5c; iVar5 = iVar5 + 0x20) {
  }
  fn_001008c4(local_60,local_58 - local_60 >> 5,0);
LAB_0033fb88:
  uVar31 = 0;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar5 = fn_00303afc(&DAT_008c62fc), iVar5 != 0)) {
    DAT_008f9e2c = uVar31;
    DAT_008f9e30 = uVar31;
    DAT_008f9e34 = uVar31;
  }
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar5 = fn_00303afc(&DAT_008c62fc), iVar5 != 0)) {
    DAT_008f9e2c = uVar31;
    DAT_008f9e30 = uVar31;
    DAT_008f9e34 = uVar31;
  }
  uVar17 = local_2c;
  uVar23 = DAT_008f9e34;
  uVar21 = DAT_008f9e30;
  uVar19 = DAT_008f9e2c;
  puVar14 = *(undefined4 **)(iVar12 + 0xc);
  piVar2 = (int *)(iVar12 + 8);
  uVar28 = *local_28;
  uVar29 = local_28[1];
  uVar30 = local_28[2];
  if (puVar14 == *(undefined4 **)(iVar12 + 0x10)) {
    uVar1 = (int)puVar14 - *piVar2 >> 5;
    if (uVar1 < (uint)((int)*(undefined4 **)(iVar12 + 0x10) - *piVar2 >> 5)) {
      *(undefined4 **)(iVar12 + 0xc) = puVar14 + 8;
      if (puVar14 != (undefined4 *)0x0) {
        *puVar14 = puVar14[-8];
        puVar14[1] = puVar14[-7];
        puVar14[2] = puVar14[-6];
        puVar14[3] = puVar14[-5];
        puVar14[4] = puVar14[-4];
        puVar14[5] = puVar14[-3];
        puVar14[6] = puVar14[-2];
        puVar14[7] = puVar14[-1];
      }
      puVar9 = puVar14 + -8;
      puVar11 = puVar14;
      if (puVar14 < puVar9) {
        iVar12 = (int)puVar9 - (int)puVar14;
        if (0 < iVar12) {
          if (iVar12 * 0x4000000 < 0) {
            puVar9 = puVar14 + -0x10;
            puVar11 = puVar14 + -8;
            *puVar11 = *puVar9;
            puVar14[-7] = puVar14[-0xf];
            puVar14[-6] = puVar14[-0xe];
            puVar14[-5] = puVar14[-0xd];
            puVar14[-4] = puVar14[-0xc];
            puVar14[-3] = puVar14[-0xb];
            puVar14[-2] = puVar14[-10];
            puVar14[-1] = puVar14[-9];
          }
          for (iVar12 = iVar12 >> 6; iVar12 != 0; iVar12 = iVar12 + -1) {
            uVar17 = puVar9[-7];
            uVar18 = puVar9[-6];
            uVar20 = puVar9[-5];
            uVar22 = puVar9[-4];
            uVar24 = puVar9[-3];
            uVar25 = puVar9[-2];
            uVar26 = puVar9[-1];
            puVar11[-8] = puVar9[-8];
            puVar11[-7] = uVar17;
            puVar11[-6] = uVar18;
            puVar11[-5] = uVar20;
            puVar11[-4] = uVar22;
            puVar11[-3] = uVar24;
            puVar11[-2] = uVar25;
            puVar11[-1] = uVar26;
            uVar17 = puVar9[-0xf];
            uVar18 = puVar9[-0xe];
            uVar20 = puVar9[-0xd];
            uVar22 = puVar9[-0xc];
            uVar24 = puVar9[-0xb];
            uVar25 = puVar9[-10];
            uVar26 = puVar9[-9];
            puVar11[-0x10] = puVar9[-0x10];
            puVar11[-0xf] = uVar17;
            puVar11[-0xe] = uVar18;
            puVar11[-0xd] = uVar20;
            puVar11[-0xc] = uVar22;
            puVar11[-0xb] = uVar24;
            puVar11[-10] = uVar25;
            puVar11[-9] = uVar26;
            puVar11 = puVar11 + -0x10;
            puVar9 = puVar9 + -0x10;
          }
        }
      }
      else {
        while (puVar14 != puVar9) {
          uVar17 = puVar9[-7];
          uVar18 = puVar9[-6];
          uVar20 = puVar9[-5];
          uVar22 = puVar9[-4];
          uVar24 = puVar9[-3];
          uVar25 = puVar9[-2];
          uVar26 = puVar9[-1];
          puVar11[-8] = puVar9[-8];
          puVar11[-7] = uVar17;
          puVar11[-6] = uVar18;
          puVar11[-5] = uVar20;
          puVar11[-4] = uVar22;
          puVar11[-3] = uVar24;
          puVar11[-2] = uVar25;
          puVar11[-1] = uVar26;
          puVar11 = puVar11 + -8;
          puVar9 = puVar9 + -8;
        }
      }
      *puVar14 = local_2c;
      puVar14[1] = uVar28;
      puVar14[2] = uVar29;
      puVar14[3] = uVar30;
      puVar14[4] = uVar19;
      puVar14[5] = uVar21;
      puVar14[6] = uVar23;
      puVar14[7] = uVar31;
    }
    else {
      uVar16 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
      if (uVar16 < uVar1 + 0x20) {
        uVar16 = uVar1 + 0x20;
      }
      puVar6 = (undefined4 *)fn_00100fc6(uVar16 << 5,0);
      puVar11 = puVar6;
      for (puVar9 = (undefined4 *)*piVar2; puVar9 != puVar14; puVar9 = puVar9 + 8) {
        if (puVar11 != (undefined4 *)0x0) {
          uVar18 = puVar9[1];
          uVar20 = puVar9[2];
          uVar22 = puVar9[3];
          uVar24 = puVar9[4];
          uVar25 = puVar9[5];
          uVar26 = puVar9[6];
          uVar27 = puVar9[7];
          *puVar11 = *puVar9;
          puVar11[1] = uVar18;
          puVar11[2] = uVar20;
          puVar11[3] = uVar22;
          puVar11[4] = uVar24;
          puVar11[5] = uVar25;
          puVar11[6] = uVar26;
          puVar11[7] = uVar27;
        }
        puVar11 = puVar11 + 8;
      }
      puVar9 = (undefined4 *)(((int)puVar14 - *piVar2 & 0xffffffe0U) + (int)puVar6);
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = uVar17;
        puVar9[1] = uVar28;
        puVar9[2] = uVar29;
        puVar9[3] = uVar30;
        puVar9[4] = uVar19;
        puVar9[5] = uVar21;
        puVar9[6] = uVar23;
        puVar9[7] = uVar31;
      }
      puVar11 = *(undefined4 **)(iVar12 + 0xc);
      puVar9 = (undefined4 *)(((int)puVar14 - *piVar2 & 0xffffffe0U) + (int)puVar6);
      for (; puVar14 != puVar11; puVar14 = puVar14 + 8) {
        puVar7 = puVar9 + 8;
        if (puVar7 != (undefined4 *)0x0) {
          uVar31 = puVar14[1];
          uVar19 = puVar14[2];
          uVar21 = puVar14[3];
          uVar23 = puVar14[4];
          uVar17 = puVar14[5];
          uVar28 = puVar14[6];
          uVar29 = puVar14[7];
          *puVar7 = *puVar14;
          puVar9[9] = uVar31;
          puVar9[10] = uVar19;
          puVar9[0xb] = uVar21;
          puVar9[0xc] = uVar23;
          puVar9[0xd] = uVar17;
          puVar9[0xe] = uVar28;
          puVar9[0xf] = uVar29;
        }
        puVar9 = puVar7;
      }
      iVar8 = *piVar2;
      iVar10 = *(int *)(iVar12 + 0xc);
      for (iVar5 = iVar8; iVar5 != iVar10; iVar5 = iVar5 + 0x20) {
      }
      fn_001008c4(iVar8,*(int *)(iVar12 + 0x10) - iVar8 >> 5,0);
      *(undefined4 **)(iVar12 + 0x10) = puVar6 + uVar16 * 8;
      *(undefined4 **)(iVar12 + 0xc) = puVar6 + (iVar10 - iVar8 >> 5) * 8 + 8;
      *piVar2 = (int)puVar6;
    }
  }
  else {
    *(undefined4 **)(iVar12 + 0xc) = puVar14 + 8;
    if (puVar14 != (undefined4 *)0x0) {
      *puVar14 = local_2c;
      puVar14[1] = uVar28;
      puVar14[2] = uVar29;
      puVar14[3] = uVar30;
      puVar14[4] = uVar19;
      puVar14[5] = uVar21;
      puVar14[6] = uVar23;
      puVar14[7] = uVar31;
    }
  }
  return;
}


