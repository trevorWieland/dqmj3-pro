#include "005d4560_005d4f1c.h"



undefined4 * fn_005d4f1c(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  uint local_30;
  uint local_2c [2];
  
  puVar1 = (undefined4 *)fn_00397a0c();
  *puVar1 = &PTR_LAB_0084c9b8;
  puVar1[0x39] = 0;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  local_30 = 10;
  piVar5 = puVar1 + 0x39;
  if ((uint)((int)(puVar1[0x3b] - puVar1[0x39]) / 0xf4) < 10) {
    uVar10 = (int)(puVar1[0x3a] - puVar1[0x39]) / 0xf4;
    local_2c[0] = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
    if (local_2c[0] < uVar10 + 0x20) {
      local_2c[0] = uVar10 + 0x20;
    }
    puVar4 = local_2c;
    if (local_2c[0] < 0xb) {
      puVar4 = &local_30;
    }
    uVar10 = *puVar4;
    iVar2 = fn_00100fc6(uVar10 * 0xf4,0);
    iVar11 = puVar1[0x3a];
    iVar6 = iVar2;
    for (iVar8 = *piVar5; iVar8 != iVar11; iVar8 = iVar8 + 0xf4) {
      if (iVar6 != 0) {
        fn_005d4e34(iVar6,iVar8);
      }
      iVar6 = iVar6 + 0xf4;
    }
    piVar9 = (int *)puVar1[0x3a];
    for (piVar7 = (int *)*piVar5; piVar7 != piVar9; piVar7 = piVar7 + 0x3d) {
      if ((undefined4 *)*piVar7 != &DAT_008f9cf4) {
        piVar3 = (undefined4 *)*piVar7 + -3;
        iVar8 = *piVar3;
        if ((iVar8 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar8 + -1, iVar8 == 0)))) {
          fn_001008c4(*piVar7 + -0xc,*(int *)(*piVar7 + -8) + 8,0);
        }
      }
    }
    fn_001008c4(*piVar5,(puVar1[0x3b] - *piVar5) / 0xf4,0);
    iVar8 = *piVar5;
    *piVar5 = iVar2;
    puVar1[0x3a] = iVar2 + ((puVar1[0x3a] - iVar8) / 0xf4) * 0xf4;
    puVar1[0x3b] = iVar2 + uVar10 * 0xf4;
  }
  return puVar1;
}



void fn_005d4d80(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  fn_002c3e78();
  iVar4 = 0;
  iVar1 = fn_006ba274(param_1);
  if (0 < iVar1) {
    do {
      iVar1 = fn_006ba284(param_1);
      iVar2 = fn_006ba274(param_1);
      uVar3 = iVar1 * iVar2 + iVar4;
      if (uVar3 < (uint)((*(int *)(param_1 + 0xe8) - *(int *)(param_1 + 0xe4)) / 0xf4)) {
        fn_0031b78c(param_1,iVar4,0,*(undefined4 *)(*(int *)(param_1 + 0xe4) + uVar3 * 0xf4));
      }
      iVar4 = iVar4 + 1;
      iVar1 = fn_006ba274(param_1);
    } while (iVar4 < iVar1);
  }
                    /* WARNING: Subroutine does not return */
  fn_006ba250(param_1);
}



void fn_005d4a54(void)

{
                    /* WARNING: Subroutine does not return */
  fn_002c3de4();
}



void fn_005d4a3c(undefined4 param_1)

{
  fn_002c3d68();
  fn_003ca138(param_1);
  return;
}



void fn_005d4710(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  
  piVar7 = (int *)(param_1 + 0xe4);
  piVar2 = *(int **)(param_1 + 0xe8);
  if (piVar2 != *(int **)(param_1 + 0xec)) {
    *(int **)(param_1 + 0xe8) = piVar2 + 0x3d;
    if (piVar2 != (int *)0x0) {
      fn_005d4e34();
    }
    return;
  }
  uVar1 = ((int)piVar2 - *(int *)(param_1 + 0xe4)) / 0xf4;
  if ((uint)(((int)*(int **)(param_1 + 0xec) - *(int *)(param_1 + 0xe4)) / 0xf4) <= uVar1) {
    uVar9 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
    if (uVar9 < uVar1 + 0x20) {
      uVar9 = uVar1 + 0x20;
    }
    iVar5 = fn_00100fc6(uVar9 * 0xf4,0);
    iVar3 = iVar5;
    for (piVar11 = (int *)*piVar7; piVar11 != piVar2; piVar11 = piVar11 + 0x3d) {
      if (iVar3 != 0) {
        fn_005d4e34(iVar3,piVar11);
      }
      iVar3 = iVar3 + 0xf4;
    }
    iVar3 = iVar5 + (((int)piVar2 - *piVar7) / 0xf4) * 0xf4;
    if (iVar3 != 0) {
      fn_005d4e34(iVar3,param_2);
    }
    piVar11 = *(int **)(param_1 + 0xe8);
    iVar3 = iVar5 + (((int)piVar2 - *piVar7) / 0xf4) * 0xf4;
    for (; piVar2 != piVar11; piVar2 = piVar2 + 0x3d) {
      iVar3 = iVar3 + 0xf4;
      if (iVar3 != 0) {
        fn_005d4e34(iVar3,piVar2);
      }
    }
    piVar2 = (int *)*piVar7;
    piVar11 = *(int **)(param_1 + 0xe8);
    iVar3 = (int)piVar11 - (int)piVar2;
    for (; piVar2 != piVar11; piVar2 = piVar2 + 0x3d) {
      if ((undefined4 *)*piVar2 != &DAT_008f9cf4) {
        piVar4 = (undefined4 *)*piVar2 + -3;
        iVar6 = *piVar4;
        if ((iVar6 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar6 + -1, iVar6 == 0)))) {
          fn_001008c4(*piVar2 + -0xc,*(int *)(*piVar2 + -8) + 8,0);
        }
      }
    }
    fn_001008c4(*piVar7,(*(int *)(param_1 + 0xec) - *piVar7) / 0xf4,0);
    *piVar7 = iVar5;
    *(int *)(param_1 + 0xe8) = iVar5 + (iVar3 / 0xf4) * 0xf4 + 0xf4;
    *(uint *)(param_1 + 0xec) = iVar5 + uVar9 * 0xf4;
    return;
  }
  *(int **)(param_1 + 0xe8) = piVar2 + 0x3d;
  if (piVar2 != (int *)0x0) {
    fn_005d4e34(piVar2,piVar2 + -0x3d);
  }
  piVar7 = piVar2;
  piVar11 = piVar2 + -0x3d;
  while (piVar2 != piVar11) {
    piVar10 = piVar11 + -0x3d;
    piVar8 = piVar7 + -0x3d;
    iVar3 = *piVar10;
    piVar4 = (int *)(iVar3 + -0xc);
    if (*piVar4 == -1) {
      if (piVar8 != piVar10) {
        fn_00177c88(piVar8,0,*(undefined4 *)(*piVar8 + -4),iVar3,*(undefined4 *)(iVar3 + -4),0,
                     *(undefined4 *)(iVar3 + -4));
      }
    }
    else {
      if (piVar4 != &DAT_008f9ce8) {
        *piVar4 = *piVar4 + 1;
      }
      if ((undefined4 *)*piVar8 != &DAT_008f9cf4) {
        piVar4 = (undefined4 *)*piVar8 + -3;
        iVar3 = *piVar4;
        if ((iVar3 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar3 + -1, iVar3 == 0)))) {
          fn_001008c4(*piVar8 + -0xc,*(int *)(*piVar8 + -8) + 8,0);
        }
      }
      *piVar8 = *piVar10;
    }
    fn_0017821c(piVar7 + -0x3c,piVar11 + -0x3c,0xf0);
    piVar7 = piVar8;
    piVar11 = piVar10;
  }
  fn_007854f8(piVar2,param_2);
  fn_0017821c(piVar2 + 1,param_2 + 4,0xf0);
  return;
}



int * fn_005d4e34(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  iVar1 = *param_2;
  puVar5 = &DAT_008f9ce8;
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
    *param_1 = (int)(puVar5 + 3);
    fn_00301a9c(puVar5 + 3,*param_2,uVar4 << 1);
  }
  else {
    *param_1 = iVar1;
    piVar2 = (int *)(iVar1 + -0xc);
    if (piVar2 != &DAT_008f9ce8) {
      *piVar2 = *piVar2 + 1;
    }
  }
  fn_0017821c(param_1 + 1,param_2 + 1,0xf0);
  return param_1;
}



void fn_005d46a0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  if (-1 < param_3) {
    do {
      iVar3 = param_4 + iVar1 * 0x18;
      iVar2 = param_5 + (param_1 + iVar1) * 0x34;
      *(int *)(iVar3 + 4) = param_2 - iVar1;
      *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar2 + 8);
      iVar1 = iVar1 + 1;
      *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar2 + 0xc);
      *(int *)(iVar3 + 0x18) = iVar2 + 0x14;
      *(ushort *)(iVar3 + 0x14) = (ushort)*(byte *)(iVar2 + 0x10);
      *(ushort *)(iVar3 + 0x16) = (ushort)*(byte *)(iVar2 + 0x11);
    } while (iVar1 <= param_3);
  }
  return;
}



void fn_005d4638(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  do {
    iVar2 = param_2 + uVar3 * 0x18;
    iVar4 = param_3 + (param_1 + uVar3) * 0x44;
    uVar3 = uVar3 + 1;
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar4 + 0x2c);
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar4 + 0x28);
    *(uint *)(iVar2 + 0xc) = (uint)*(ushort *)(iVar4 + 0x24);
    uVar1 = *(ushort *)(iVar4 + 0x20);
    *(int *)(iVar2 + 0x18) = iVar4 + 0x30;
    *(uint *)(iVar2 + 0x10) = (uint)uVar1;
    *(ushort *)(iVar2 + 0x14) = (ushort)*(byte *)(iVar4 + 0x26);
    *(ushort *)(iVar2 + 0x16) = (ushort)*(byte *)(iVar4 + 0x27);
  } while (uVar3 < 10);
  return;
}



void fn_005d45b8(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xf5);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_0089715c) goto LAB_005d4608;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005d4608:
  *(undefined1 *)(puVar1 + 4) = param_2;
  fn_00689930(param_1,0xf5,0);
  fn_00397618(param_1,param_3);
  return;
}



void fn_005d4560(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0043f144();
  *puVar1 = &DAT_0084c9a0;
  puVar1[4] = 0;
  puVar1[5] = 0xffffffff;
  puVar1[6] = 0;
  puVar1[8] = 0xffffffff;
  puVar1[7] = 0;
  puVar1[9] = 0xffffffff;
  puVar1[10] = 0xffffffff;
  puVar1[0xb] = 0xffffffff;
  puVar1[0xc] = 0xffffffff;
  puVar1[0xd] = 0xffffffff;
  return;
}


