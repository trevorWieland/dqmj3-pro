#include "00598fa0_00599e48.h"



void fn_00599e48(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  
  puVar9 = (uint *)(param_1 + 0x14);
  puVar1 = (undefined4 *)*puVar9;
  puVar10 = (uint *)(param_1 + 0x10);
  if (puVar1 != *(undefined4 **)(param_1 + 0x18)) {
    *puVar9 = (uint)(puVar1 + 1);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_2;
    }
    return;
  }
  uVar4 = (int)((int)puVar1 - *puVar10) >> 2;
  if (uVar4 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x18) - *puVar10) >> 2)) {
    *puVar9 = (uint)(puVar1 + 1);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = puVar1[-1];
    }
    puVar6 = puVar1 + -1;
    puVar7 = puVar1;
    if (puVar1 < puVar6) {
      iVar5 = (int)puVar6 - (int)puVar1;
      if (0 < iVar5) {
        if (iVar5 * 0x20000000 < 0) {
          puVar6 = puVar1 + -2;
          puVar7 = puVar1 + -1;
          *puVar7 = *puVar6;
        }
        for (iVar5 = iVar5 >> 3; iVar5 != 0; iVar5 = iVar5 + -1) {
          puVar7[-1] = puVar6[-1];
          puVar6 = puVar6 + -2;
          puVar7 = puVar7 + -2;
          *puVar7 = *puVar6;
        }
      }
    }
    else {
      while (puVar1 != puVar6) {
        puVar6 = puVar6 + -1;
        puVar7[-1] = *puVar6;
        puVar7 = puVar7 + -1;
      }
    }
    *puVar1 = *param_2;
    return;
  }
  uVar11 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
  if (uVar11 < uVar4 + 0x20) {
    uVar11 = uVar4 + 0x20;
  }
  puVar2 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
  puVar7 = puVar2;
  for (puVar6 = (undefined4 *)*puVar10; puVar6 != puVar1; puVar6 = puVar6 + 1) {
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = *puVar6;
    }
    puVar7 = puVar7 + 1;
  }
  puVar6 = (undefined4 *)(((int)puVar1 - *puVar10 & 0xfffffffc) + (int)puVar2);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = *param_2;
  }
  puVar7 = (undefined4 *)*puVar9;
  puVar6 = (undefined4 *)(((int)puVar1 - *puVar10 & 0xfffffffc) + (int)puVar2);
  for (; puVar1 != puVar7; puVar1 = puVar1 + 1) {
    puVar6 = puVar6 + 1;
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = *puVar1;
    }
  }
  uVar3 = *puVar10;
  uVar8 = *puVar9;
  uVar4 = uVar3;
  if (uVar8 < uVar3) {
    do {
      uVar4 = uVar4 + 4;
    } while (uVar4 != uVar8);
  }
  fn_001008c4(uVar3,(int)(*(int *)(param_1 + 0x18) - uVar3) >> 2,0);
  *(undefined4 **)(param_1 + 0x18) = puVar2 + uVar11;
  *puVar9 = (uint)(puVar2 + ((int)(uVar8 - uVar3) >> 2) + 1);
  *puVar10 = (uint)puVar2;
  return;
}



void fn_00599a6c(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  undefined2 *puVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint local_34;
  uint uStack_30;
  undefined4 *local_2c [2];
  
  fn_002317d8(local_2c,(int)*(short *)(param_1 + 0xa8),0);
  puVar1 = local_2c[0];
  piVar9 = (int *)(*(int *)(param_1 + 0x98) + 0x20);
  uVar2 = fn_00100b58(local_2c[0]);
  puVar10 = &DAT_008f9ce8;
  puVar3 = (undefined4 *)*piVar9;
  if (uVar2 == 0) {
    piVar6 = puVar3 + -3;
    iVar8 = *piVar6;
    if (iVar8 != 0) {
      if ((puVar3 != &DAT_008f9cf4) &&
         ((iVar8 == -1 || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar8 + -1, iVar8 == 0)))))) {
        fn_001008c4(*piVar9 + -0xc,*(int *)(*piVar9 + -8) + 8,0);
      }
      *piVar9 = (int)&DAT_008f9cf4;
      goto LAB_00599c9c;
    }
    puVar3[-1] = 0;
    puVar7 = (undefined2 *)*piVar9;
  }
  else {
    if (((1 < puVar3[-3] + 1) || ((uint)puVar3[-2] < uVar2)) ||
       ((puVar1 != (undefined4 *)0x0 &&
        ((puVar3 <= puVar1 && (puVar1 < (undefined4 *)((int)puVar3 + puVar3[-1] * 2))))))) {
      uVar4 = puVar3[-1];
      local_34 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
      if (local_34 < uVar4 + 0x80) {
        local_34 = uVar4 + 0x80;
      }
      puVar5 = &uStack_30;
      if (uVar2 <= local_34) {
        puVar5 = &local_34;
      }
      uStack_30 = uVar2;
      uVar4 = *puVar5;
      if (0xfffffff1 < uVar4) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar4,0xfffffff1);
      }
      if (uVar4 < uVar2) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar4);
      }
      if (uVar4 != 0) {
        puVar10 = (undefined4 *)fn_00100fc6((uVar4 + 8) * 2,0);
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
        }
        puVar7 = (undefined2 *)((int)puVar10 + uVar2 * 2 + 0xc);
        *puVar10 = 0;
        puVar10[1] = uVar4;
        puVar10[2] = uVar2;
        if (puVar7 != (undefined2 *)0x0) {
          *puVar7 = 0;
        }
      }
      fn_00301a9c(puVar10 + 3,puVar1,uVar2 << 1);
      if ((undefined4 *)*piVar9 != &DAT_008f9cf4) {
        piVar6 = (undefined4 *)*piVar9 + -3;
        iVar8 = *piVar6;
        if ((iVar8 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar8 + -1, iVar8 == 0)))) {
          fn_001008c4(*piVar9 + -0xc,*(int *)(*piVar9 + -8) + 8,0);
        }
      }
      *piVar9 = (int)(puVar10 + 3);
      goto LAB_00599c9c;
    }
    fn_001006ac(puVar3,puVar1,uVar2);
    *(uint *)(*piVar9 + -4) = uVar2;
    puVar7 = (undefined2 *)(*piVar9 + uVar2 * 2);
  }
  *puVar7 = 0;
LAB_00599c9c:
  if (local_2c[0] != &DAT_008f9cf4) {
    piVar9 = local_2c[0] + -3;
    iVar8 = *piVar9;
    if ((iVar8 == -1) || ((piVar9 != &DAT_008f9ce8 && (*piVar9 = iVar8 + -1, iVar8 == 0)))) {
      fn_001008c4(local_2c[0] + -3,local_2c[0][-2] + 8,0);
    }
  }
  return;
}



void fn_005996e4(int param_1)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  *(undefined2 *)(param_1 + 0xae) = *(undefined2 *)(*(int *)(param_1 + 0x98) + 0x30);
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  fn_0018a618(&local_14,5,4,&LAB_0059973c,(int)*(short *)(param_1 + 0xae));
  fn_00190d50(*(undefined4 *)(param_1 + 0xd0),&local_14);
  return;
}



undefined4 * fn_005996b4(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = fn_00145b00(0xf8,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_003bc118(iVar1,param_1);
  *puVar2 = &DAT_00845b68;
  *(undefined2 *)(puVar2 + 0x2a) = 0;
  *(undefined1 *)((int)puVar2 + 0xaa) = 0;
  *(undefined1 *)((int)puVar2 + 0xab) = 0;
  *(undefined2 *)(puVar2 + 0x2b) = 0;
  *(undefined2 *)((int)puVar2 + 0xae) = 0;
  *(undefined2 *)(puVar2 + 0x2c) = 0;
  *(undefined2 *)((int)puVar2 + 0xb2) = 0;
  *(undefined2 *)(puVar2 + 0x2d) = 0;
  *(undefined2 *)((int)puVar2 + 0xb6) = 0;
  *(undefined2 *)(puVar2 + 0x2e) = 0;
  *(undefined4 *)((int)puVar2 + 0xba) = 0;
  *(undefined4 *)((int)puVar2 + 0xbe) = 0;
  *(undefined4 *)((int)puVar2 + 0xc2) = 0;
  *(undefined4 *)((int)puVar2 + 0xc6) = 0;
  *(undefined2 *)((int)puVar2 + 0xca) = 0;
  puVar2[0x33] = 0;
  puVar2[0x34] = 0;
  puVar2[0x35] = 0;
  puVar2[0x36] = 0;
  puVar2[0x37] = 0;
  puVar2[0x38] = 0;
  puVar2[0x39] = 0;
  puVar2[0x3a] = 0;
  puVar2[0x3b] = 0;
  puVar2[0x3c] = 0;
  puVar3 = (undefined4 *)fn_00100fc6(0x80,0);
  iVar1 = 7;
  puVar2[0x3a] = puVar3;
  do {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
    }
    iVar1 = iVar1 + -1;
    puVar3 = puVar3 + 1;
  } while (iVar1 != 0);
  iVar1 = puVar2[0x3a];
  puVar2[0x3b] = iVar1 + 0x1c;
  puVar2[0x3c] = iVar1 + 0x80;
  puVar2[0x3d] = 0;
  return puVar2;
}



void fn_00599224(int param_1)

{
  if (*(int **)(param_1 + 0xf4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xf4) + 0x18))();
    if (*(int **)(param_1 + 0xf4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xf4) + 4))();
      *(undefined4 *)(param_1 + 0xf4) = 0;
    }
  }
  fn_0022ccb4(param_1);
  return;
}



undefined4 * fn_00599118(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_003d454c();
  *puVar1 = &DAT_00845a38;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  iVar3 = 9;
  puVar1[0x28] = puVar2;
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0);
  iVar3 = puVar1[0x28];
  puVar1[0x29] = iVar3 + 0x24;
  puVar1[0x2a] = iVar3 + 0x80;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  return puVar1;
}



void fn_005990ec(int param_1)

{
  fn_003d4398();
  if (*(int **)(param_1 + 0xac) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00599110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0xac) + 0x14))();
  return;
}



void fn_00598fa0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)0x0;
  if (param_2 == 0) {
    puVar3 = (undefined4 *)fn_001f74ec(param_1,0xd8);
    if (puVar3 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)(**(code **)*puVar3)(puVar3);
      do {
        if (puVar1 == &DAT_00890afc) goto LAB_00599034;
        puVar1 = (undefined4 *)*puVar1;
      } while (puVar1 != (undefined4 *)0x0);
    }
    puVar3 = (undefined4 *)0x0;
LAB_00599034:
    puVar1 = (undefined4 *)fn_001f74ec(param_1,0xd9);
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
      do {
        if (puVar2 == &DAT_00890b20) goto LAB_00599074;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    puVar1 = (undefined4 *)0x0;
LAB_00599074:
    fn_00604740(puVar1,puVar3 + 2,0xd6);
    fn_006899f4(param_1,0xd9,0,1);
  }
  else {
    puVar1 = (undefined4 *)fn_001f74ec(param_1,0xd6);
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
      do {
        if (puVar2 == &DAT_00890b08) {
          puVar3 = puVar1;
          break;
        }
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    fn_00601670(puVar3);
    fn_006899f4(param_1,0xd6,0,1);
  }
  fn_0068ab44(param_1,0x100094b);
  return;
}


