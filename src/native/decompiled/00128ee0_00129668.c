#include "00128ee0_00129668.h"



void fn_00129668(int param_1)

{
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  fn_00301f50(&DAT_008cff54,0x100);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00129620) */

void fn_00129290(int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint *puVar10;
  int *piVar11;
  int *piVar12;
  undefined *puVar13;
  int *piVar14;
  int iVar15;
  undefined1 auStack_a0 [104];
  undefined1 auStack_38 [8];
  undefined *local_30;
  undefined *local_2c [2];
  
  DAT_008b63b4 = &LAB_001446b8;
  DAT_008b63b8 = &DAT_00143b44;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x498) = 0;
  *(undefined4 *)(param_1 + 0x49c) = 0;
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  *(undefined4 *)(param_1 + 0x4a4) = 0;
  *(undefined4 *)(param_1 + 0x544) = 0;
  *(undefined4 *)(param_1 + 0x4ac) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x5b4) = 0;
  fn_001443a0(DAT_00898840,param_1,1);
  *(undefined4 *)(param_1 + 0x70) = 0;
  local_30 = (undefined *)0x8;
  puVar10 = (uint *)(param_1 + 0x5a8);
  if ((uint)(*(int *)(param_1 + 0x5b0) - *(int *)(param_1 + 0x5a8)) < 8) {
    uVar5 = *(int *)(param_1 + 0x5ac) - *(int *)(param_1 + 0x5a8);
    local_2c[0] = (undefined *)(uVar5 + (uVar5 >> 1) + (uVar5 >> 3));
    if (local_2c[0] < (undefined *)(uVar5 + 0x20)) {
      local_2c[0] = (undefined *)(uVar5 + 0x20);
    }
    ppuVar6 = local_2c;
    if (local_2c[0] < (undefined *)0x9) {
      ppuVar6 = &local_30;
    }
    puVar13 = *ppuVar6;
    puVar1 = (undefined1 *)fn_0015ece0(puVar13);
    puVar9 = *(undefined1 **)(param_1 + 0x5ac);
    puVar2 = puVar1;
    for (puVar7 = (undefined1 *)*puVar10; puVar7 != puVar9; puVar7 = puVar7 + 1) {
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = *puVar7;
      }
      puVar2 = puVar2 + 1;
    }
    uVar3 = *puVar10;
    uVar8 = *(uint *)(param_1 + 0x5ac);
    uVar5 = uVar3;
    if (uVar3 < uVar8) {
      if (0 < (int)(uVar8 - uVar3)) {
        for (iVar15 = (int)(uVar8 - uVar3) >> 1; iVar15 != 0; iVar15 = iVar15 + -1) {
        }
      }
    }
    else {
      for (; uVar5 != uVar8; uVar5 = uVar5 + 1) {
      }
    }
    fn_0014f1bc(uVar3);
    uVar5 = *puVar10;
    *puVar10 = (uint)puVar1;
    *(undefined1 **)(param_1 + 0x5ac) = puVar1 + (*(int *)(param_1 + 0x5ac) - uVar5);
    *(undefined1 **)(param_1 + 0x5b0) = puVar1 + (int)puVar13;
  }
  local_30 = &DAT_008533d0;
  fn_0013ce04(auStack_a0);
  piVar11 = (int *)(param_1 + 0x578);
  uVar5 = 0;
  do {
    piVar14 = *(int **)(param_1 + 0x57c);
    iVar15 = *(int *)(param_1 + 0x588);
    if (piVar14 == (int *)0x0) {
      if (*(int *)(param_1 + 0x580) == *(int *)(param_1 + 0x584)) {
        if (*piVar11 == 0) {
          uVar3 = 0x20;
        }
        else {
          uVar8 = *(uint *)(*piVar11 + 4);
          uVar3 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
          if (uVar3 < uVar8 + 0x20) {
            uVar3 = uVar8 + 0x20;
          }
        }
        piVar14 = (int *)fn_0015ece0(0xc);
        iVar4 = fn_0015ece0(uVar3 * 0x70);
        piVar14[2] = iVar4;
        *piVar14 = *piVar11;
        piVar14[1] = uVar3;
        *piVar11 = (int)piVar14;
        iVar4 = piVar14[2];
        *(int *)(param_1 + 0x580) = iVar4;
        *(uint *)(param_1 + 0x584) = iVar4 + uVar3 * 0x70;
      }
      piVar14 = *(int **)(param_1 + 0x580);
      *(int **)(param_1 + 0x580) = piVar14 + 0x1c;
    }
    else {
      *(int *)(param_1 + 0x57c) = *piVar14;
    }
    if (piVar14 != (int *)0xfffffff8) {
      fn_0013cd7c();
    }
    *piVar14 = iVar15;
    piVar12 = (int *)(param_1 + 0x590);
    piVar14[1] = *(int *)(iVar15 + 4);
    **(undefined4 **)(iVar15 + 4) = piVar14;
    *(int **)(iVar15 + 4) = piVar14;
    *(int *)(param_1 + 0x58c) = *(int *)(param_1 + 0x58c) + 1;
    piVar14 = *(int **)(param_1 + 0x594);
    iVar15 = *(int *)(param_1 + 0x5a0);
    if (piVar14 == (int *)0x0) {
      piVar14 = *(int **)(param_1 + 0x598);
      if (piVar14 == *(int **)(param_1 + 0x59c)) {
        if (*piVar12 == 0) {
          uVar3 = 0x20;
        }
        else {
          uVar8 = *(uint *)(*piVar12 + 4);
          uVar3 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
          if (uVar3 < uVar8 + 0x20) {
            uVar3 = uVar8 + 0x20;
          }
        }
        piVar14 = (int *)fn_0015ece0(0xc);
        iVar4 = fn_0015ece0(uVar3 << 4);
        piVar14[2] = iVar4;
        *piVar14 = *piVar12;
        piVar14[1] = uVar3;
        *piVar12 = (int)piVar14;
        piVar14 = (int *)piVar14[2];
        *(int **)(param_1 + 0x598) = piVar14;
        *(int **)(param_1 + 0x59c) = piVar14 + uVar3 * 4;
      }
      *(int **)(param_1 + 0x598) = piVar14 + 4;
    }
    else {
      *(int *)(param_1 + 0x594) = *piVar14;
    }
    if (piVar14 + 2 != (int *)0x0) {
      piVar14[3] = 0;
      piVar14[2] = (int)local_30;
    }
    *piVar14 = iVar15;
    uVar5 = uVar5 + 1;
    piVar14[1] = *(int *)(iVar15 + 4);
    **(int **)(iVar15 + 4) = (int)piVar14;
    *(int **)(iVar15 + 4) = piVar14;
    *(int *)(param_1 + 0x5a4) = *(int *)(param_1 + 0x5a4) + 1;
  } while (uVar5 < 8);
  fn_00147b74(piVar11);
  fn_00147be0(param_1 + 0x590);
  *(undefined1 *)(param_1 + 0x5c8) = 0;
  DAT_0089884c = 0;
  DAT_00898850 = 0;
  fn_0013d3e8(auStack_38,L"5812c478");
  fn_0013d29c();
  fn_00170f54(auStack_38);
  fn_0013ce98(auStack_a0);
  return;
}



undefined4 * fn_001290d8(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  if (piVar3 != (int *)0x0) {
    if ((int *)piVar3[0xb] != (int *)0x0) {
      (**(code **)(*(int *)piVar3[0xb] + 4))();
      piVar3[0xb] = 0;
    }
    if ((int *)piVar3[10] != (int *)0x0) {
      (**(code **)(*(int *)piVar3[10] + 4))();
      piVar3[10] = 0;
    }
    if ((int *)piVar3[9] != (int *)0x0) {
      (**(code **)(*(int *)piVar3[9] + 8))();
      if ((int *)piVar3[9] != (int *)0x0) {
        (**(code **)(*(int *)piVar3[9] + 4))();
        piVar3[9] = 0;
      }
    }
    fn_00144298(piVar3);
    if ((int *)piVar3[0xb] != (int *)0x0) {
      (**(code **)(*(int *)piVar3[0xb] + 4))();
    }
    if ((int *)piVar3[10] != (int *)0x0) {
      (**(code **)(*(int *)piVar3[10] + 4))();
    }
    if ((int *)piVar3[9] != (int *)0x0) {
      (**(code **)(*(int *)piVar3[9] + 4))();
    }
    uVar1 = piVar3[6];
    uVar2 = uVar1;
    if ((uint)piVar3[7] < uVar1) {
      do {
        uVar2 = uVar2 + 0xc;
      } while (uVar2 != piVar3[7]);
    }
    fn_001008c4(uVar1,(int)(piVar3[8] - uVar1) / 0xc,0);
    uVar1 = piVar3[3];
    uVar2 = uVar1;
    if ((uint)piVar3[4] < uVar1) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != piVar3[4]);
    }
    fn_001008c4(uVar1,(int)(piVar3[5] - uVar1) >> 2,0);
    if ((int *)piVar3[2] != (int *)0x0) {
      (**(code **)(*(int *)piVar3[2] + 4))();
    }
    if ((int *)piVar3[1] != (int *)0x0) {
      (**(code **)(*(int *)piVar3[1] + 4))();
    }
    if ((int *)*piVar3 != (int *)0x0) {
      (**(code **)(*(int *)*piVar3 + 4))();
    }
    fn_002feef8(piVar3);
  }
  return param_1;
}



void fn_0012904c(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (*(int **)(iVar1 + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(iVar1 + 0x2c) + 4))();
    *(undefined4 *)(iVar1 + 0x2c) = 0;
  }
  if (*(int **)(iVar1 + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(iVar1 + 0x28) + 4))();
    *(undefined4 *)(iVar1 + 0x28) = 0;
  }
  if (*(int **)(iVar1 + 0x24) != (int *)0x0) {
    (**(code **)(**(int **)(iVar1 + 0x24) + 8))();
    if (*(int **)(iVar1 + 0x24) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0x24) + 4))();
      *(undefined4 *)(iVar1 + 0x24) = 0;
    }
  }
  fn_00144298(iVar1);
  return;
}



void fn_00129024(void)

{
  fn_002feca8(DAT_00896d60);
  DAT_00896d60 = 0;
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_00129014(undefined4 param_1)

{
  DAT_00893198 = param_1;
  return;
}



undefined4 * fn_00128fc4(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &DAT_00859450;
  puVar1 = (undefined4 *)param_1[1];
  if (puVar1 != (undefined4 *)0x0) {
    fn_0019d650(*puVar1);
    fn_002feef8(puVar1);
  }
  return param_1;
}



undefined4 * fn_00128f40(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  *param_1 = &DAT_00859450;
  param_1[1] = 0;
  puVar1 = (undefined4 *)fn_00145b00(8,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *(undefined1 *)(puVar1 + 1) = 0;
    uVar2 = fn_00146994(0x400);
    *puVar1 = uVar2;
  }
  puVar3 = (undefined4 *)param_1[1];
  if (puVar3 != puVar1) {
    if (puVar3 != (undefined4 *)0x0) {
      fn_0019d650(*puVar3);
      fn_002feef8(puVar3);
    }
    param_1[1] = puVar1;
  }
  return param_1;
}



undefined4 fn_00128ee0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 4);
  if (param_2 == 0 || param_3 == 0) {
    uVar1 = 0;
  }
  else {
    *(undefined1 *)(puVar3 + 1) = 0;
    iVar2 = fn_0015427c(*puVar3,(char *)&DAT_00144260);
    uVar1 = 0;
    if (iVar2 != 0) {
      iVar2 = fn_001541ec(*puVar3,(char *)&DAT_00144260);
      uVar1 = 0;
      if (iVar2 != 0) {
        uVar1 = 1;
        *(undefined1 *)(puVar3 + 1) = 1;
      }
    }
  }
  return uVar1;
}


