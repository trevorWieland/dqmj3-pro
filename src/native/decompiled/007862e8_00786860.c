#include "007862e8_00786860.h"



int * fn_00786860(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)param_1[4];
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)*piVar2;
    while (piVar1 = piVar3, piVar1 != piVar2) {
      piVar3 = (int *)param_1[4];
      if (piVar1 != (int *)param_1[4]) {
        piVar3 = (int *)*piVar1;
        *(int **)piVar1[1] = piVar3;
        *(int *)(*piVar1 + 4) = piVar1[1];
        param_1[5] = param_1[5] + -1;
        (**(code **)piVar1[2])(piVar1 + 2);
        *piVar1 = param_1[1];
        param_1[1] = (int)piVar1;
      }
    }
    piVar2 = (int *)param_1[4];
    *piVar2 = param_1[1];
    param_1[1] = (int)piVar2;
    piVar2 = (int *)*param_1;
    while (piVar2 != (int *)0x0) {
      *param_1 = *piVar2;
      fn_0014f1bc(piVar2[2]);
      fn_0014f1bc(piVar2);
      piVar2 = (int *)*param_1;
    }
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}



void fn_007867f0(int *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 1;
  if (param_2 == 0) {
    if (*param_1 == 0) {
      uVar4 = 0x20;
    }
    else {
      uVar1 = *(uint *)(*param_1 + 4);
      uVar4 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
      if (uVar4 < uVar1 + 0x20) {
        uVar4 = uVar1 + 0x20;
      }
    }
  }
  piVar2 = (int *)fn_0015ece0(0xc);
  iVar3 = fn_0015ece0(uVar4 << 4);
  piVar2[2] = iVar3;
  *piVar2 = *param_1;
  piVar2[1] = uVar4;
  *param_1 = (int)piVar2;
  iVar3 = piVar2[2];
  param_1[2] = iVar3;
  param_1[3] = iVar3 + uVar4 * 0x10;
  return;
}



int * fn_0078671c(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)param_1[4];
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)*piVar2;
    while (piVar1 = piVar3, piVar1 != piVar2) {
      piVar3 = (int *)param_1[4];
      if (piVar1 != (int *)param_1[4]) {
        piVar3 = (int *)*piVar1;
        *(int **)piVar1[1] = piVar3;
        *(int *)(*piVar1 + 4) = piVar1[1];
        param_1[5] = param_1[5] + -1;
        (**(code **)piVar1[2])(piVar1 + 2);
        *piVar1 = param_1[1];
        param_1[1] = (int)piVar1;
      }
    }
    piVar2 = (int *)param_1[4];
    *piVar2 = param_1[1];
    param_1[1] = (int)piVar2;
    piVar2 = (int *)*param_1;
    while (piVar2 != (int *)0x0) {
      *param_1 = *piVar2;
      fn_0014f1bc(piVar2[2]);
      fn_0014f1bc(piVar2);
      piVar2 = (int *)*param_1;
    }
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}



void fn_0078667c(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x10);
  piVar2 = (int *)*piVar3;
  while (piVar1 = piVar2, piVar1 != piVar3) {
    piVar2 = (int *)*piVar1;
    if (((piVar1[4] == *(int *)(param_2 + 8)) &&
        (*(short *)((int)piVar1 + 0xe) == *(short *)(param_2 + 6))) &&
       (piVar1 != (int *)*(int *)(param_1 + 0x10))) {
      *(int *)piVar1[1] = *piVar1;
      *(int *)(*piVar1 + 4) = piVar1[1];
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
      (**(code **)piVar1[2])(piVar1 + 2);
      *piVar1 = *(undefined4 *)(param_1 + 4);
      *(int **)(param_1 + 4) = piVar1;
    }
  }
  return;
}



int fn_00786550(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    piVar4 = *(int **)(param_1 + 0x10);
    puVar6 = *(undefined4 **)(param_2 + 0x10);
    puVar5 = (undefined4 *)*puVar6;
    for (piVar1 = (int *)*piVar4; piVar1 != piVar4 && puVar5 != puVar6; piVar1 = (int *)*piVar1) {
      fn_0014e7cc(piVar1 + 2,puVar5 + 2);
      puVar5 = (undefined4 *)*puVar5;
    }
    if (puVar5 == puVar6) {
      while (piVar1 != piVar4) {
        piVar2 = *(int **)(param_1 + 0x10);
        if (piVar1 != *(int **)(param_1 + 0x10)) {
          piVar2 = (int *)*piVar1;
          *(int **)piVar1[1] = piVar2;
          *(int *)(*piVar1 + 4) = piVar1[1];
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
          (**(code **)piVar1[2])(piVar1 + 2);
          *piVar1 = *(int *)(param_1 + 4);
          *(int **)(param_1 + 4) = piVar1;
        }
        piVar1 = piVar2;
      }
    }
    else {
      do {
        puVar3 = *(undefined4 **)(param_1 + 4);
        if (puVar3 == (undefined4 *)0x0) {
          if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0xc)) {
            fn_0078638c(param_1,0);
          }
          puVar3 = *(undefined4 **)(param_1 + 8);
          *(undefined4 **)(param_1 + 8) = puVar3 + 0x1c;
        }
        else {
          *(undefined4 *)(param_1 + 4) = *puVar3;
        }
        if (puVar3 + 2 != (undefined4 *)0x0) {
          fn_0013cd7c(puVar3 + 2,puVar5 + 2);
        }
        *puVar3 = piVar4;
        puVar3[1] = piVar4[1];
        *(undefined4 **)piVar4[1] = puVar3;
        piVar4[1] = (int)puVar3;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        puVar5 = (undefined4 *)*puVar5;
      } while (puVar5 != puVar6);
    }
  }
  return param_1;
}



int * fn_00786480(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)*piVar1;
    while (piVar2 != piVar1) {
      piVar3 = (int *)param_1[4];
      if (piVar2 != (int *)param_1[4]) {
        piVar3 = (int *)*piVar2;
        *(int **)piVar2[1] = piVar3;
        *(int *)(*piVar2 + 4) = piVar2[1];
        param_1[5] = param_1[5] + -1;
        (**(code **)piVar2[2])(piVar2 + 2);
        *piVar2 = param_1[1];
        param_1[1] = (int)piVar2;
      }
      piVar2 = piVar3;
    }
    piVar1 = (int *)param_1[4];
    *piVar1 = param_1[1];
    param_1[1] = (int)piVar1;
    piVar1 = (int *)*param_1;
    while (piVar1 != (int *)0x0) {
      *param_1 = *piVar1;
      fn_0014f1bc(piVar1[2]);
      fn_0014f1bc(piVar1);
      piVar1 = (int *)*param_1;
    }
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}



void fn_0078638c(int *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 1;
  if (param_2 == 0) {
    if (*param_1 == 0) {
      uVar4 = 0x20;
    }
    else {
      uVar1 = *(uint *)(*param_1 + 4);
      uVar4 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
      if (uVar4 < uVar1 + 0x20) {
        uVar4 = uVar1 + 0x20;
      }
    }
  }
  piVar2 = (int *)fn_0015ece0(0xc);
  iVar3 = fn_0015ece0(uVar4 * 0x70);
  piVar2[2] = iVar3;
  *piVar2 = *param_1;
  piVar2[1] = uVar4;
  *param_1 = (int)piVar2;
  iVar3 = piVar2[2];
  param_1[2] = iVar3;
  param_1[3] = iVar3 + uVar4 * 0x70;
  return;
}



int * fn_007862e8(int *param_1,undefined1 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x19) = *param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  piVar1 = (int *)fn_00100fc6(0xc,0);
  iVar2 = fn_00100fc6(0x300,0);
  piVar1[2] = iVar2;
  *piVar1 = *param_1;
  piVar1[1] = 0x20;
  *param_1 = (int)piVar1;
  puVar3 = (undefined1 *)piVar1[2];
  param_1[2] = (int)puVar3;
  param_1[3] = (int)(puVar3 + 0x300);
  param_1[2] = (int)(puVar3 + 0x18);
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *puVar3 = 0;
  param_1[4] = (int)puVar3;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(int *)(param_1[4] + 8) = param_1[4];
  *(int *)(param_1[4] + 0xc) = param_1[4];
  return param_1;
}


