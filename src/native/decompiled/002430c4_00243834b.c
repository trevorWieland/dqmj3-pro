#include "002430c4_00243834b.h"



int fn_00243834(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 in_r3;
  undefined4 in_s0;
  undefined4 in_stack_00000000;
  undefined1 auStack_14 [12];
  
  puVar1 = (undefined4 *)fn_0069e7cc();
  *puVar1 = &DAT_0081d3c8;
  puVar1[5] = 0;
  puVar1[6] = 0;
  iVar2 = fn_00168a24(puVar1 + 7,&LAB_00243894,auStack_14,in_r3,in_stack_00000000);
  *(undefined4 *)(iVar2 + 4) = in_s0;
  fn_00243414(iVar2 + -0x1c);
  return iVar2 + -0x1c;
}



void fn_00243550(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  uint *puVar7;
  undefined2 *puVar8;
  uint uVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint local_34;
  uint uStack_30;
  undefined4 *local_2c;
  undefined1 auStack_28 [4];
  
  fn_00190d50(*(undefined4 *)(param_1 + 0x14));
  piVar10 = (int *)(param_1 + 0x1c);
  piVar1 = (int *)fn_00168a24(&local_2c,param_2,auStack_28);
  puVar4 = (undefined4 *)*piVar1;
  puVar11 = &DAT_008f9ce8;
  piVar5 = puVar4 + -3;
  if (*piVar5 == -1) {
    if (piVar10 == piVar1) goto LAB_002437dc;
    puVar3 = (undefined4 *)*piVar10;
    uVar9 = puVar4[-1];
    if (uVar9 == 0) {
      if (puVar3 != &DAT_008f9cf4) {
        piVar1 = puVar3 + -3;
        iVar2 = *piVar1;
        if ((iVar2 == -1) || ((piVar1 != &DAT_008f9ce8 && (*piVar1 = iVar2 + -1, iVar2 == 0)))) {
          fn_001008c4(*piVar10 + -0xc,*(int *)(*piVar10 + -8) + 8,0);
        }
      }
      *piVar10 = (int)&DAT_008f9cf4;
      goto LAB_002437dc;
    }
    if (((puVar3[-3] + 1 < 2) && (uVar9 <= (uint)puVar3[-2])) &&
       ((puVar4 == (undefined4 *)0x0 ||
        ((puVar4 < puVar3 || ((undefined4 *)((int)puVar3 + puVar3[-1] * 2) <= puVar4)))))) {
      fn_001006ac(puVar3,puVar4,uVar9);
      *(uint *)(*piVar10 + -4) = uVar9;
      *(undefined2 *)(*piVar10 + uVar9 * 2) = 0;
      goto LAB_002437dc;
    }
    uVar6 = puVar3[-1];
    local_34 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
    if (local_34 < uVar6 + 0x80) {
      local_34 = uVar6 + 0x80;
    }
    puVar7 = &uStack_30;
    if (uVar9 <= local_34) {
      puVar7 = &local_34;
    }
    uStack_30 = uVar9;
    uVar6 = *puVar7;
    if (0xfffffff1 < uVar6) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar6,0xfffffff1);
    }
    if (uVar6 < uVar9) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar9,uVar6);
    }
    if (uVar6 != 0) {
      puVar11 = (undefined4 *)fn_00100fc6((uVar6 + 8) * 2,0);
      if (puVar11 != (undefined4 *)0x0) {
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar11[2] = 0;
      }
      puVar8 = (undefined2 *)((int)puVar11 + uVar9 * 2 + 0xc);
      *puVar11 = 0;
      puVar11[1] = uVar6;
      puVar11[2] = uVar9;
      if (puVar8 != (undefined2 *)0x0) {
        *puVar8 = 0;
      }
    }
    fn_00301a9c(puVar11 + 3,puVar4,uVar9 << 1);
    if ((undefined4 *)*piVar10 != &DAT_008f9cf4) {
      piVar1 = (undefined4 *)*piVar10 + -3;
      iVar2 = *piVar1;
      if ((iVar2 == -1) || ((piVar1 != &DAT_008f9ce8 && (*piVar1 = iVar2 + -1, iVar2 == 0)))) {
        fn_001008c4(*piVar10 + -0xc,*(int *)(*piVar10 + -8) + 8,0);
      }
    }
    puVar11 = puVar11 + 3;
  }
  else {
    if (piVar5 != &DAT_008f9ce8) {
      *piVar5 = *piVar5 + 1;
    }
    if ((undefined4 *)*piVar10 != &DAT_008f9cf4) {
      piVar5 = (undefined4 *)*piVar10 + -3;
      iVar2 = *piVar5;
      if ((iVar2 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar2 + -1, iVar2 == 0)))) {
        fn_001008c4(*piVar10 + -0xc,*(int *)(*piVar10 + -8) + 8,0);
      }
    }
    puVar11 = (undefined4 *)*piVar1;
  }
  *piVar10 = (int)puVar11;
LAB_002437dc:
  if (local_2c != &DAT_008f9cf4) {
    piVar1 = local_2c + -3;
    iVar2 = *piVar1;
    if ((iVar2 == -1) || ((piVar1 != &DAT_008f9ce8 && (*piVar1 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_2c + -3,local_2c[-2] + 8,0);
    }
  }
  return;
}



void fn_00243548(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  uint *puVar7;
  undefined2 *puVar8;
  uint uVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint uStack_34;
  uint uStack_30;
  undefined4 *puStack_2c;
  undefined1 auStack_28 [4];
  
  iVar1 = *(int *)(param_1 + 0x24);
  fn_00190d50(*(undefined4 *)(iVar1 + 0x14));
  piVar10 = (int *)(iVar1 + 0x1c);
  piVar2 = (int *)fn_00168a24(&puStack_2c,param_2,auStack_28);
  puVar4 = (undefined4 *)*piVar2;
  puVar11 = &DAT_008f9ce8;
  piVar5 = puVar4 + -3;
  if (*piVar5 == -1) {
    if (piVar10 == piVar2) goto LAB_002437dc;
    puVar3 = (undefined4 *)*piVar10;
    uVar9 = puVar4[-1];
    if (uVar9 == 0) {
      if (puVar3 != &DAT_008f9cf4) {
        piVar2 = puVar3 + -3;
        iVar1 = *piVar2;
        if ((iVar1 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar1 + -1, iVar1 == 0)))) {
          fn_001008c4(*piVar10 + -0xc,*(int *)(*piVar10 + -8) + 8,0);
        }
      }
      *piVar10 = (int)&DAT_008f9cf4;
      goto LAB_002437dc;
    }
    if (((puVar3[-3] + 1 < 2) && (uVar9 <= (uint)puVar3[-2])) &&
       ((puVar4 == (undefined4 *)0x0 ||
        ((puVar4 < puVar3 || ((undefined4 *)((int)puVar3 + puVar3[-1] * 2) <= puVar4)))))) {
      fn_001006ac(puVar3,puVar4,uVar9);
      *(uint *)(*piVar10 + -4) = uVar9;
      *(undefined2 *)(*piVar10 + uVar9 * 2) = 0;
      goto LAB_002437dc;
    }
    uVar6 = puVar3[-1];
    uStack_34 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
    if (uStack_34 < uVar6 + 0x80) {
      uStack_34 = uVar6 + 0x80;
    }
    puVar7 = &uStack_30;
    if (uVar9 <= uStack_34) {
      puVar7 = &uStack_34;
    }
    uStack_30 = uVar9;
    uVar6 = *puVar7;
    if (0xfffffff1 < uVar6) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar6,0xfffffff1);
    }
    if (uVar6 < uVar9) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar9,uVar6);
    }
    if (uVar6 != 0) {
      puVar11 = (undefined4 *)fn_00100fc6((uVar6 + 8) * 2,0);
      if (puVar11 != (undefined4 *)0x0) {
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar11[2] = 0;
      }
      puVar8 = (undefined2 *)((int)puVar11 + uVar9 * 2 + 0xc);
      *puVar11 = 0;
      puVar11[1] = uVar6;
      puVar11[2] = uVar9;
      if (puVar8 != (undefined2 *)0x0) {
        *puVar8 = 0;
      }
    }
    fn_00301a9c(puVar11 + 3,puVar4,uVar9 << 1);
    if ((undefined4 *)*piVar10 != &DAT_008f9cf4) {
      piVar2 = (undefined4 *)*piVar10 + -3;
      iVar1 = *piVar2;
      if ((iVar1 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar1 + -1, iVar1 == 0)))) {
        fn_001008c4(*piVar10 + -0xc,*(int *)(*piVar10 + -8) + 8,0);
      }
    }
    puVar11 = puVar11 + 3;
  }
  else {
    if (piVar5 != &DAT_008f9ce8) {
      *piVar5 = *piVar5 + 1;
    }
    if ((undefined4 *)*piVar10 != &DAT_008f9cf4) {
      piVar5 = (undefined4 *)*piVar10 + -3;
      iVar1 = *piVar5;
      if ((iVar1 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar1 + -1, iVar1 == 0)))) {
        fn_001008c4(*piVar10 + -0xc,*(int *)(*piVar10 + -8) + 8,0);
      }
    }
    puVar11 = (undefined4 *)*piVar2;
  }
  *piVar10 = (int)puVar11;
LAB_002437dc:
  if (puStack_2c != &DAT_008f9cf4) {
    piVar2 = puStack_2c + -3;
    iVar1 = *piVar2;
    if ((iVar1 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(puStack_2c + -3,puStack_2c[-2] + 8,0);
    }
  }
  return;
}


