#include "0023512c_002358e4.h"



undefined4 * fn_002358e4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 in_lr;
  
  fn_00236200(*(undefined4 *)(param_1 + 4),*(int *)(param_2 + 8) + 0x90);
  puVar1 = *(undefined4 **)(param_2 + 8);
  puVar2 = *(undefined4 **)(param_1 + 8);
  *puVar2 = *puVar1;
  fn_00235500(puVar2,puVar1 + 1);
  *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(puVar1 + 2);
  *(undefined1 *)((int)puVar2 + 9) = *(undefined1 *)((int)puVar1 + 9);
  puVar2[3] = puVar1[3];
  *(undefined2 *)(puVar2 + 4) = *(undefined2 *)(puVar1 + 4);
  *(undefined4 *)((int)puVar2 + 0x12) = *(undefined4 *)((int)puVar1 + 0x12);
  *(undefined4 *)((int)puVar2 + 0x16) = *(undefined4 *)((int)puVar1 + 0x16);
  *(undefined4 *)((int)puVar2 + 0x1a) = *(undefined4 *)((int)puVar1 + 0x1a);
  *(undefined4 *)((int)puVar2 + 0x1e) = *(undefined4 *)((int)puVar1 + 0x1e);
  *(undefined2 *)((int)puVar2 + 0x22) = *(undefined2 *)((int)puVar1 + 0x22);
  puVar2[9] = puVar1[9];
  fn_0017821c(puVar2 + 10,puVar1 + 10,100,param_4,unaff_r4,unaff_r5,unaff_r6,in_lr);
  puVar2[0x23] = puVar1[0x23];
  return puVar2;
}



int fn_0023587c(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 != &DAT_008f9cf4) {
    piVar2 = puVar1 + -3;
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      iVar3 = *(int *)(param_1 + 4);
      fn_001008c4(iVar3 + -0xc,*(int *)(iVar3 + -8) + 8,0);
    }
  }
  return param_1;
}



undefined4 * fn_0023572c(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  puVar5 = &DAT_008f9ce8;
  *param_1 = *param_2;
  iVar1 = param_2[1];
  if (*(int *)(iVar1 + -0xc) == -1) {
    uVar4 = *(uint *)(iVar1 + -4);
    if (0xfffffff1 < uVar4) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar4,0xfffffff1);
    }
    if (uVar4 != 0) {
      puVar5 = (undefined4 *)fn_00100fc6((uVar4 + 8) * 2,0);
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
      }
      puVar5[1] = uVar4;
      puVar3 = (undefined2 *)((int)puVar5 + uVar4 * 2 + 0xc);
      *puVar5 = 0;
      puVar5[2] = uVar4;
      if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
      }
    }
    param_1[1] = puVar5 + 3;
    fn_00301a9c(puVar5 + 3,param_2[1],uVar4 << 1);
  }
  else {
    param_1[1] = iVar1;
    piVar2 = (int *)(iVar1 + -0xc);
    if (piVar2 != &DAT_008f9ce8) {
      *piVar2 = *piVar2 + 1;
    }
  }
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)param_2 + 9);
  param_1[3] = param_2[3];
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  *(undefined4 *)((int)param_1 + 0x12) = *(undefined4 *)((int)param_2 + 0x12);
  *(undefined4 *)((int)param_1 + 0x16) = *(undefined4 *)((int)param_2 + 0x16);
  *(undefined4 *)((int)param_1 + 0x1a) = *(undefined4 *)((int)param_2 + 0x1a);
  *(undefined4 *)((int)param_1 + 0x1e) = *(undefined4 *)((int)param_2 + 0x1e);
  *(undefined2 *)((int)param_1 + 0x22) = *(undefined2 *)((int)param_2 + 0x22);
  param_1[9] = param_2[9];
  fn_0017821c(param_1 + 10,param_2 + 10,100);
  param_1[0x23] = param_2[0x23];
  return param_1;
}



void fn_002354c4(int param_1,undefined1 param_2,undefined2 param_3,undefined4 *param_4)

{
  *(undefined1 *)(param_1 + 8) = param_2;
  *(undefined2 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x12) = *param_4;
  *(undefined4 *)(param_1 + 0x16) = param_4[1];
  *(undefined4 *)(param_1 + 0x1a) = param_4[2];
  *(undefined4 *)(param_1 + 0x1e) = param_4[3];
  *(undefined2 *)(param_1 + 0x22) = *(undefined2 *)(param_4 + 4);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00235414) */

void fn_0023520c(undefined4 *param_1,undefined4 param_2)

{
  short sVar1;
  undefined2 uVar2;
  undefined4 **ppuVar3;
  int *piVar4;
  undefined4 uVar5;
  int **ppiVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined4 ***pppuVar9;
  undefined4 **ppuVar10;
  undefined4 *puVar11;
  undefined4 **local_c8;
  undefined4 *local_c4;
  undefined4 *local_c0;
  undefined4 *local_bc [2];
  undefined4 **local_b4;
  int *local_b0;
  undefined1 auStack_ac [4];
  undefined1 auStack_a8 [100];
  undefined4 *local_44 [2];
  int local_3c;
  undefined4 *puStack_2c;
  undefined4 local_28;
  
  local_3c = *(int *)(DAT_00897804 + 8);
  puStack_2c = param_1;
  local_28 = param_2;
  fn_00230ce8(local_44);
  local_bc[0] = local_44[0];
  ppuVar3 = (undefined4 **)fn_00100b58();
  puVar11 = &DAT_008f9ce8;
  local_c0 = &DAT_008f9cf4;
  if (ppuVar3 != (undefined4 **)0x0) {
    ppiVar6 = &local_b0;
    if ((undefined4 **)0x20 < ppuVar3) {
      ppiVar6 = (int **)&local_b4;
    }
    local_b4 = ppuVar3;
    local_b0 = (int *)0x20;
    ppuVar10 = (undefined4 **)*ppiVar6;
    if ((undefined4 **)0xfffffff1 < ppuVar10) {
      local_c8 = (undefined4 **)0xfffffff1;
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,ppuVar10);
    }
    if (ppuVar10 < ppuVar3) {
      local_c8 = ppuVar10;
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,ppuVar3);
    }
    if (ppuVar10 != (undefined4 **)0x0) {
      puVar11 = (undefined4 *)fn_00100fc6((int)(ppuVar10 + 2) * 2,0);
      if (puVar11 != (undefined4 *)0x0) {
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar11[2] = 0;
      }
      puVar11[2] = ppuVar3;
      puVar7 = (undefined2 *)((int)puVar11 + (int)ppuVar3 * 2 + 0xc);
      *puVar11 = 0;
      puVar11[1] = ppuVar10;
      if (puVar7 != (undefined2 *)0x0) {
        *puVar7 = 0;
      }
    }
    local_c0 = puVar11 + 3;
  }
  fn_00301a9c(local_c0,local_bc[0],(int)ppuVar3 << 1);
  fn_00235500(param_1,&local_c0);
  if (local_c0 != &DAT_008f9cf4) {
    piVar4 = local_c0 + -3;
    iVar8 = *piVar4;
    if ((iVar8 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar8 + -1, iVar8 == 0)))) {
      fn_001008c4(local_c0 + -3,local_c0[-2] + 8,0);
    }
  }
  sVar1 = (short)local_28;
  uVar5 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),(int)sVar1);
  fn_0020bbc4(&local_b0,uVar5);
  uVar2 = fn_006bfda8(auStack_ac);
  puVar11 = (undefined4 *)fn_006c0010(auStack_ac);
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined2 *)(param_1 + 4) = uVar2;
  param_1[3] = 0;
  *(undefined4 *)((int)param_1 + 0x12) = *puVar11;
  *(undefined4 *)((int)param_1 + 0x16) = puVar11[1];
  *(undefined4 *)((int)param_1 + 0x1a) = puVar11[2];
  *(undefined4 *)((int)param_1 + 0x1e) = puVar11[3];
  *(undefined2 *)((int)param_1 + 0x22) = *(undefined2 *)(puVar11 + 4);
  param_1[3] = (int)sVar1;
  local_c8 = (undefined4 **)fn_006b6458(local_3c);
  local_bc[0] = (undefined4 *)0x0;
  local_c4 = (undefined4 *)0x270f;
  pppuVar9 = (undefined4 ***)local_c8;
  if ((int)local_c8 < 0) {
    pppuVar9 = (undefined4 ***)local_bc;
  }
  if (local_c8 < (undefined4 **)0x80000000) {
    pppuVar9 = &local_c8;
  }
  if (9999 < (int)*pppuVar9) {
    pppuVar9 = (undefined4 ***)&local_c4;
  }
  param_1[9] = *pppuVar9;
  *param_1 = 0;
  uVar5 = fn_00236ab8(auStack_a8,*(undefined4 *)(local_3c + 4));
  fn_0017821c(param_1 + 10,uVar5,100);
  if (local_44[0] != &DAT_008f9cf4) {
    piVar4 = local_44[0] + -3;
    iVar8 = *piVar4;
    if ((iVar8 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar8 + -1, iVar8 == 0)))) {
      fn_001008c4(local_44[0] + -3,local_44[0][-2] + 8,0);
    }
  }
  return;
}



void fn_00235500(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  undefined2 *puVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint local_2c;
  uint local_28;
  
  piVar8 = (int *)(param_1 + 4);
  param_2 = (undefined4 *)*param_2;
  uVar1 = fn_00100b58(param_2);
  puVar9 = &DAT_008f9ce8;
  puVar2 = (undefined4 *)*piVar8;
  if (uVar1 == 0) {
    piVar3 = puVar2 + -3;
    iVar7 = *piVar3;
    if (iVar7 != 0) {
      if ((puVar2 != &DAT_008f9cf4) &&
         ((iVar7 == -1 || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))))) {
        fn_001008c4(*piVar8 + -0xc,*(int *)(*piVar8 + -8) + 8,0);
      }
      *piVar8 = (int)&DAT_008f9cf4;
      return;
    }
    puVar2[-1] = 0;
    puVar6 = (undefined2 *)*piVar8;
  }
  else {
    if (((1 < puVar2[-3] + 1) || ((uint)puVar2[-2] < uVar1)) ||
       ((param_2 != (undefined4 *)0x0 &&
        ((puVar2 <= param_2 && (param_2 < (undefined4 *)((int)puVar2 + puVar2[-1] * 2))))))) {
      uVar4 = puVar2[-1];
      local_2c = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
      if (local_2c < uVar4 + 0x80) {
        local_2c = uVar4 + 0x80;
      }
      local_28 = uVar1;
      puVar5 = &local_2c;
      if (local_2c < uVar1) {
        puVar5 = &local_28;
      }
      uVar4 = *puVar5;
      if (0xfffffff1 < uVar4) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar4,0xfffffff1);
      }
      if (uVar4 < uVar1) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar1,uVar4);
      }
      if (uVar4 != 0) {
        puVar9 = (undefined4 *)fn_00100fc6((uVar4 + 8) * 2,0);
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
        }
        puVar6 = (undefined2 *)((int)puVar9 + uVar1 * 2 + 0xc);
        *puVar9 = 0;
        puVar9[1] = uVar4;
        puVar9[2] = uVar1;
        if (puVar6 != (undefined2 *)0x0) {
          *puVar6 = 0;
        }
      }
      fn_00301a9c(puVar9 + 3,param_2,uVar1 << 1);
      if ((undefined4 *)*piVar8 != &DAT_008f9cf4) {
        piVar3 = (undefined4 *)*piVar8 + -3;
        iVar7 = *piVar3;
        if ((iVar7 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))) {
          fn_001008c4(*piVar8 + -0xc,*(int *)(*piVar8 + -8) + 8,0);
        }
      }
      *piVar8 = (int)(puVar9 + 3);
      return;
    }
    fn_001006ac(puVar2,param_2,uVar1);
    *(uint *)(*piVar8 + -4) = uVar1;
    puVar6 = (undefined2 *)(*piVar8 + uVar1 * 2);
  }
  *puVar6 = 0;
  return;
}



undefined1 * fn_00235170(int param_1,undefined1 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  uVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),param_3);
  fn_0020bbc4(auStack_20,uVar2);
  uVar1 = fn_006bfda8(auStack_1c);
  puVar3 = (undefined4 *)fn_006c0010(auStack_1c);
  *(undefined1 *)(param_1 + 8) = param_2;
  *(undefined2 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x12) = *puVar3;
  *(undefined4 *)(param_1 + 0x16) = puVar3[1];
  *(undefined4 *)(param_1 + 0x1a) = puVar3[2];
  *(undefined4 *)(param_1 + 0x1e) = puVar3[3];
  *(undefined2 *)(param_1 + 0x22) = *(undefined2 *)(puVar3 + 4);
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return auStack_20;
}



void fn_0023512c(int param_1,int param_2)

{
  int *piVar1;
  int local_c [3];
  
  local_c[0] = 9999;
  local_c[1] = param_2;
  local_c[2] = 0;
  if (param_2 < 0) {
    piVar1 = local_c + 2;
  }
  else {
    piVar1 = local_c + 1;
  }
  if (9999 < *piVar1) {
    piVar1 = local_c;
  }
  *(int *)(param_1 + 0x24) = *piVar1;
  return;
}


