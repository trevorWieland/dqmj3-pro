#include "003954c8_00395b30b.h"



/* WARNING: Removing unreachable block (ram,0x00395b80) */
/* WARNING: Removing unreachable block (ram,0x00395b88) */
/* WARNING: Removing unreachable block (ram,0x00395b9c) */

void fn_00395b30(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  uint local_34;
  uint uStack_30;
  undefined2 local_2c [4];
  
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  *(undefined1 *)(param_1 + 0x7b) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0x36;
  piVar7 = (int *)(param_1 + 0x84);
  iVar1 = *(int *)(*(int *)(param_1 + 0x84) + -4);
  local_2c[0] = 0;
  puVar2 = (undefined4 *)*piVar7;
  uVar8 = puVar2[-1] - iVar1;
  if (uVar8 == 0) {
    if (puVar2 != &DAT_008f9cf4) {
      piVar3 = puVar2 + -3;
      iVar1 = *piVar3;
      if ((iVar1 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar1 + -1, iVar1 == 0)))) {
        fn_001008c4(*piVar7 + -0xc,*(int *)(*piVar7 + -8) + 8,0);
      }
    }
    *piVar7 = (int)&DAT_008f9cf4;
  }
  else {
    uVar6 = puVar2[-3] + 1;
    bVar10 = puVar2[-3] != -1;
    bVar9 = uVar6 == 1;
    if (uVar6 < 2) {
      bVar10 = (uint)puVar2[-2] <= uVar8;
      bVar9 = uVar8 == puVar2[-2];
    }
    if ((bVar10 && !bVar9) ||
       ((puVar2 <= local_2c && (local_2c < (undefined4 *)((int)puVar2 + puVar2[-1] * 2))))) {
      uVar6 = puVar2[-1];
      local_34 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
      if (local_34 < uVar6 + 0x80) {
        local_34 = uVar6 + 0x80;
      }
      puVar4 = &uStack_30;
      if (uVar8 <= local_34) {
        puVar4 = &local_34;
      }
      uStack_30 = uVar8;
      uVar6 = *puVar4;
      if (0xfffffff1 < uVar6) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar6,0xfffffff1);
      }
      if (uVar6 < uVar8) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar8,uVar6);
      }
      if (uVar6 == 0) {
        puVar2 = &DAT_008f9ce8;
      }
      else {
        puVar2 = (undefined4 *)fn_00100fc6((uVar6 + 8) * 2,0);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
        }
        puVar2[2] = uVar8;
        puVar5 = (undefined2 *)((int)puVar2 + uVar8 * 2 + 0xc);
        *puVar2 = 0;
        puVar2[1] = uVar6;
        if (puVar5 != (undefined2 *)0x0) {
          *puVar5 = 0;
        }
      }
      if (uVar8 != 0) {
        fn_00301a9c(puVar2 + 3,iVar1 * 2 + *piVar7,uVar8 * 2);
      }
      if ((undefined4 *)*piVar7 != &DAT_008f9cf4) {
        piVar3 = (undefined4 *)*piVar7 + -3;
        iVar1 = *piVar3;
        if ((iVar1 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar1 + -1, iVar1 == 0)))) {
          fn_001008c4(*piVar7 + -0xc,*(int *)(*piVar7 + -8) + 8,0);
        }
      }
      *piVar7 = (int)(puVar2 + 3);
    }
    else {
      fn_001006ac(puVar2,(int)puVar2 + iVar1 * 2,uVar8);
      *(uint *)(*piVar7 + -4) = uVar8;
      *(undefined2 *)(*piVar7 + uVar8 * 2) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x88) = 1;
  return;
}



void fn_00395760(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  uint *puVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  
  puVar13 = (uint *)(param_1 + 0xc);
  puVar11 = *(undefined4 **)(param_1 + 0x10);
  if (puVar11 != *(undefined4 **)(param_1 + 0x14)) {
    *(undefined4 **)(param_1 + 0x10) = puVar11 + 6;
    if (puVar11 != (undefined4 *)0x0) {
      uVar8 = param_2[1];
      uVar10 = param_2[2];
      uVar12 = param_2[3];
      uVar14 = param_2[4];
      uVar17 = param_2[5];
      *puVar11 = *param_2;
      puVar11[1] = uVar8;
      puVar11[2] = uVar10;
      puVar11[3] = uVar12;
      puVar11[4] = uVar14;
      puVar11[5] = uVar17;
    }
    return;
  }
  uVar5 = (int)((int)puVar11 - *puVar13) / 0x18;
  if ((uint)((int)((int)*(undefined4 **)(param_1 + 0x14) - *puVar13) / 0x18) <= uVar5) {
    uVar16 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
    if (uVar16 < uVar5 + 0x20) {
      uVar16 = uVar5 + 0x20;
    }
    puVar2 = (undefined4 *)fn_00100fc6(uVar16 * 0x18,0);
    puVar9 = puVar2;
    for (puVar6 = (undefined4 *)*puVar13; puVar6 != puVar11; puVar6 = puVar6 + 6) {
      if (puVar9 != (undefined4 *)0x0) {
        uVar8 = puVar6[1];
        uVar10 = puVar6[2];
        uVar12 = puVar6[3];
        uVar14 = puVar6[4];
        uVar17 = puVar6[5];
        *puVar9 = *puVar6;
        puVar9[1] = uVar8;
        puVar9[2] = uVar10;
        puVar9[3] = uVar12;
        puVar9[4] = uVar14;
        puVar9[5] = uVar17;
      }
      puVar9 = puVar9 + 6;
    }
    puVar6 = puVar2 + ((int)((int)puVar11 - *puVar13) / 0x18) * 6;
    if (puVar6 != (undefined4 *)0x0) {
      uVar8 = param_2[1];
      uVar10 = param_2[2];
      uVar12 = param_2[3];
      uVar14 = param_2[4];
      uVar17 = param_2[5];
      *puVar6 = *param_2;
      puVar6[1] = uVar8;
      puVar6[2] = uVar10;
      puVar6[3] = uVar12;
      puVar6[4] = uVar14;
      puVar6[5] = uVar17;
    }
    puVar9 = *(undefined4 **)(param_1 + 0x10);
    puVar6 = puVar2 + ((int)((int)puVar11 - *puVar13) / 0x18) * 6;
    for (; puVar11 != puVar9; puVar11 = puVar11 + 6) {
      puVar3 = puVar6 + 6;
      if (puVar3 != (undefined4 *)0x0) {
        uVar8 = puVar11[1];
        uVar10 = puVar11[2];
        uVar12 = puVar11[3];
        uVar14 = puVar11[4];
        uVar17 = puVar11[5];
        *puVar3 = *puVar11;
        puVar6[7] = uVar8;
        puVar6[8] = uVar10;
        puVar6[9] = uVar12;
        puVar6[10] = uVar14;
        puVar6[0xb] = uVar17;
      }
      puVar6 = puVar3;
    }
    uVar4 = *puVar13;
    uVar7 = *(uint *)(param_1 + 0x10);
    uVar5 = uVar4;
    if (uVar7 < uVar4) {
      do {
        uVar5 = uVar5 + 0x18;
      } while (uVar5 != uVar7);
    }
    fn_001008c4(uVar4,(int)(*(int *)(param_1 + 0x14) - uVar4) / 0x18,0);
    *puVar13 = (uint)puVar2;
    *(undefined4 **)(param_1 + 0x10) = puVar2 + ((int)(uVar7 - uVar4) / 0x18) * 6 + 6;
    *(undefined4 **)(param_1 + 0x14) = puVar2 + uVar16 * 6;
    return;
  }
  *(undefined4 **)(param_1 + 0x10) = puVar11 + 6;
  if (puVar11 != (undefined4 *)0x0) {
    *puVar11 = puVar11[-6];
    puVar11[1] = puVar11[-5];
    puVar11[2] = puVar11[-4];
    puVar11[3] = puVar11[-3];
    puVar11[4] = puVar11[-2];
    puVar11[5] = puVar11[-1];
  }
  puVar9 = puVar11 + -6;
  puVar6 = puVar11;
  if (puVar11 < puVar9) {
    iVar1 = (int)puVar9 - (int)puVar11;
    iVar15 = 1;
    if (1 < iVar1 / 0x18 + 1) {
      do {
        puVar9 = puVar9 + -6;
        puVar6 = puVar6 + -6;
        fn_0017821c(puVar6,puVar9,0x16);
        iVar15 = iVar15 + 1;
      } while (iVar15 < iVar1 / 0x18 + 1);
    }
  }
  else {
    while (puVar11 != puVar9) {
      puVar9 = puVar9 + -6;
      fn_0017821c(puVar6 + -6,puVar9,0x16);
      puVar6 = puVar6 + -6;
    }
  }
  fn_0017821c(puVar11,param_2,0x16);
  return;
}



void fn_00395750(void)

{
  return;
}



void fn_0039571c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  puVar1[2] = 0;
  *puVar1 = &DAT_0082b838;
  return;
}


