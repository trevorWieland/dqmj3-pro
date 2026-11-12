#include "0011db10_0011e134.h"



int * fn_0011e134(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if (iVar3 != 0) {
    if (*(int **)(iVar3 + 0x1dc) != (int *)0x0) {
      (**(code **)(**(int **)(iVar3 + 0x1dc) + 4))();
    }
    if (*(int *)(iVar3 + 0xac) != 0) {
      fn_0012f110();
      fn_002feef8();
    }
    *(undefined **)(iVar3 + 4) = &DAT_00858878;
    uVar2 = *(uint *)(iVar3 + 8);
    uVar1 = uVar2;
    if (*(uint *)(iVar3 + 0xc) < uVar2) {
      do {
        uVar1 = uVar1 + 1;
      } while (uVar1 != *(uint *)(iVar3 + 0xc));
    }
    fn_001008c4(uVar2,*(int *)(iVar3 + 0x10) - uVar2,0);
    fn_002feef8(iVar3);
  }
  return param_1;
}



void fn_0011e0ac(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = (int *)*param_1;
  piVar1[5] = 0;
  piVar1[6] = 0;
  if (*piVar1 == 0) {
    return;
  }
  piVar1[0x28] = 0;
  fn_00159f34(*piVar1,piVar1[0x27]);
  piVar1[0x27] = -1;
  uVar2 = 0;
  do {
    fn_00159f34(*piVar1,piVar1[uVar2 + 7]);
    uVar3 = uVar2 + 1;
    piVar1[uVar2 + 7] = -1;
    uVar2 = uVar3;
  } while (uVar3 < 0x20);
  fn_0016a43c(*piVar1,piVar1[0x2a]);
  piVar1[0x2a] = -1;
                    /* WARNING: Subroutine does not return */
  fn_001482f4(*piVar1,piVar1[0x29]);
}



int * fn_0011e054(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xe44) != 0) {
      fn_0013aee8();
      fn_002feef8();
    }
    fn_00100414(iVar1 + 0xe34,&LAB_00147d74,4);
    fn_002feef8(iVar1);
  }
  return param_1;
}



void fn_0011dee0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = (int *)*param_1;
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    piVar3[iVar1 * 4 + 0x32] = 0;
    piVar3[iVar1 * 4 + 0x33] = 0;
    piVar3[iVar1 * 4 + 0x34] = 0;
    piVar3[iVar1 * 4 + 0x35] = 0;
    iVar1 = iVar2;
  } while (iVar2 < 0x32);
  piVar3[0x28] = 0;
  piVar3[0x29] = 0;
  piVar3[0x2a] = 0;
  piVar3[0x2b] = 0;
  piVar3[0x2c] = 0;
  piVar3[0x2d] = 0;
  piVar3[0x2e] = 0;
  piVar3[0x2f] = 0;
  piVar3[0x30] = 0;
  piVar3[0x31] = 0;
  piVar3[0x1f] = 0;
  piVar3[0x20] = 0;
  piVar3[0x21] = 0;
  uVar4 = 0;
  piVar3[0x22] = 0;
  do {
    piVar3[uVar4 + 0x23] = 0;
    if (piVar3[uVar4 + 0x38d] != 0) {
      fn_0013ae4c(piVar3[uVar4 + 0x38d],*piVar3);
      iVar1 = piVar3[uVar4 + 0x38d];
      if (iVar1 != 0) {
        fn_002feef8(iVar1);
        piVar3[uVar4 + 0x38d] = 0;
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  piVar3[0x1b] = 0;
  piVar3[0x1c] = 0;
  piVar3[0x1d] = 0;
  piVar3[0x1e] = 0;
  piVar3[5] = 0;
  if (*piVar3 != 0) {
    if (piVar3[0x387] != -1) {
      fn_00159f34();
      piVar3[0x387] = -1;
    }
    if (piVar3[0x386] != -1) {
      fn_00159f34(*piVar3);
      piVar3[0x386] = -1;
    }
    if (piVar3[4] != -1) {
      fn_0016a43c(*piVar3);
      piVar3[4] = -1;
    }
    if (piVar3[3] != -1) {
      fn_0016a43c(*piVar3);
      piVar3[3] = -1;
    }
    if (piVar3[2] != -1) {
                    /* WARNING: Subroutine does not return */
      fn_001482f4(*piVar3);
    }
    if (piVar3[1] != -1) {
                    /* WARNING: Subroutine does not return */
      fn_001482f4(*piVar3);
    }
  }
  return;
}



bool fn_0011dec8(void)

{
  return DAT_00896cc0 != 0;
}



void fn_0011de7c(void)

{
  int iVar1;
  
  fn_002feef8(DAT_00896cc0);
  DAT_00896cc0 = 0;
  iVar1 = 0;
  do {
    fn_002feef8((&DAT_008cd180)[iVar1]);
    (&DAT_008cd180)[iVar1] = 0;
    (&DAT_008cd180)[iVar1] = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}



int * fn_0011de54(int *param_1)

{
  if (*param_1 != 0) {
    fn_0012d73c();
    *param_1 = 0;
  }
  return param_1;
}



void fn_0011de30(int *param_1)

{
  if (*param_1 != 0) {
    fn_0012d73c();
    *param_1 = 0;
  }
  return;
}



undefined4 * fn_0011de18(undefined4 *param_1)

{
  fn_002feef8(*param_1);
  return param_1;
}



void fn_0011ddb8(void)

{
  int *piVar1;
  int iVar2;
  int local_10 [4];
  
  piVar1 = local_10 + 1;
  if (0 < DAT_008987c0 + -1) {
    piVar1 = local_10;
  }
  local_10[0] = DAT_008987c0 + -1;
  local_10[1] = 0;
  DAT_008987c0 = *piVar1;
  if (DAT_008987c0 == 0) {
    iVar2 = 0;
    if (DAT_008987bc != 0) {
      iVar2 = *(int *)(DAT_008987bc + 0x24);
    }
    if (DAT_008987bc != 0 && iVar2 != 0) {
      fn_00148e1c();
    }
  }
  return;
}



undefined4 fn_0011dd90(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0012ebb4(param_1,param_1 + 4,param_2);
  return *puVar1;
}



undefined4 *
fn_0011db10(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            int param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int *piVar9;
  uint local_3c;
  uint uStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined4 *local_2c;
  undefined4 uStack_28;
  
  piVar9 = param_1 + 1;
  param_1[1] = &DAT_008f9cf4;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = param_2;
  puStack_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  uVar1 = fn_00100b58(param_3);
  puVar2 = (undefined4 *)*piVar9;
  if (uVar1 == 0) {
    piVar3 = puVar2 + -3;
    iVar6 = *piVar3;
    if (iVar6 != 0) {
      if ((puVar2 != &DAT_008f9cf4) &&
         ((iVar6 == -1 || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar6 + -1, iVar6 == 0)))))) {
        fn_001008c4(*piVar9 + -0xc,*(int *)(*piVar9 + -8) + 8,0);
      }
      *piVar9 = (int)&DAT_008f9cf4;
      goto LAB_0011dd3c;
    }
    puVar2[-1] = 0;
    puVar5 = (undefined2 *)*piVar9;
  }
  else {
    if (((1 < puVar2[-3] + 1) || ((uint)puVar2[-2] < uVar1)) ||
       ((param_3 != (undefined4 *)0x0 &&
        ((puVar2 <= param_3 && (param_3 < (undefined4 *)((int)puVar2 + puVar2[-1] * 2))))))) {
      uVar7 = puVar2[-1];
      local_3c = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
      if (local_3c < uVar7 + 0x80) {
        local_3c = uVar7 + 0x80;
      }
      puVar8 = &uStack_38;
      if (uVar1 <= local_3c) {
        puVar8 = &local_3c;
      }
      uStack_38 = uVar1;
      uVar7 = *puVar8;
      if (0xfffffff1 < uVar7) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar7,0xfffffff1);
      }
      if (uVar7 < uVar1) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar1,uVar7);
      }
      if (uVar7 == 0) {
        puVar2 = &DAT_008f9ce8;
      }
      else {
        puVar2 = (undefined4 *)fn_00100fc6((uVar7 + 8) * 2,0);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
        }
        puVar5 = (undefined2 *)((int)puVar2 + uVar1 * 2 + 0xc);
        *puVar2 = 0;
        puVar2[1] = uVar7;
        puVar2[2] = uVar1;
        if (puVar5 != (undefined2 *)0x0) {
          *puVar5 = 0;
        }
      }
      fn_00301a9c(puVar2 + 3,param_3,uVar1 << 1);
      if ((undefined4 *)*piVar9 != &DAT_008f9cf4) {
        piVar3 = (undefined4 *)*piVar9 + -3;
        iVar6 = *piVar3;
        if ((iVar6 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar6 + -1, iVar6 == 0)))) {
          fn_001008c4(*piVar9 + -0xc,*(int *)(*piVar9 + -8) + 8,0);
        }
      }
      *piVar9 = (int)(puVar2 + 3);
      goto LAB_0011dd3c;
    }
    fn_001006ac(puVar2,param_3,uVar1);
    *(uint *)(*piVar9 + -4) = uVar1;
    puVar5 = (undefined2 *)(*piVar9 + uVar1 * 2);
  }
  *puVar5 = 0;
LAB_0011dd3c:
  if (param_5 == 0) {
    uVar4 = fn_0012d6b0(local_2c,uStack_28,0x80,5);
  }
  else {
    uVar4 = fn_0011c184();
  }
  param_1[2] = uVar4;
  param_1[3] = 1;
  return param_1;
}


