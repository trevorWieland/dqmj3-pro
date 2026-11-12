#include "00786a18_00787118.h"



void fn_00787118(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x10);
  piVar2 = (int *)*piVar3;
  while (piVar1 = piVar2, piVar1 != piVar3) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar1 != *(int **)(param_1 + 0x10)) {
      piVar2 = (int *)*piVar1;
      *(int *)piVar1[1] = *piVar1;
      *(int *)(*piVar1 + 4) = piVar1[1];
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
      *piVar1 = *(int *)(param_1 + 4);
      *(int **)(param_1 + 4) = piVar1;
    }
  }
  return;
}



int * fn_00787044(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1[4];
  if (piVar3 != (int *)0x0) {
    piVar2 = (int *)*piVar3;
    while (piVar1 = piVar2, piVar1 != piVar3) {
      piVar2 = (int *)param_1[4];
      if (piVar1 != (int *)param_1[4]) {
        piVar2 = (int *)*piVar1;
        *(int *)piVar1[1] = *piVar1;
        *(int *)(*piVar1 + 4) = piVar1[1];
        param_1[5] = param_1[5] + -1;
        *piVar1 = param_1[1];
        param_1[1] = (int)piVar1;
      }
    }
    piVar3 = (int *)param_1[4];
    *piVar3 = param_1[1];
    param_1[1] = (int)piVar3;
    piVar3 = (int *)*param_1;
    while (piVar3 != (int *)0x0) {
      *param_1 = *piVar3;
      fn_001008c4(piVar3[2],piVar3[1],0);
      fn_001008c4(piVar3,1,0);
      piVar3 = (int *)*param_1;
    }
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}



void fn_00786f78(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 0x10);
  if (piVar4 == (int *)0x0) {
    if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0xc)) {
      fn_00786f00(param_1);
    }
    piVar4 = *(int **)(param_1 + 8);
    *(int **)(param_1 + 8) = piVar4 + 0x28;
  }
  else {
    *(int *)(param_1 + 4) = *piVar4;
  }
  if (piVar4 + 2 != (int *)0x0) {
    piVar4[2] = (int)&DAT_00855d00;
    iVar1 = fn_0013cd7c(piVar4 + 3,param_2 + 4);
    uVar2 = *(undefined4 *)(param_2 + 0x74);
    *(undefined4 *)(iVar1 + 0x6c) = *(undefined4 *)(param_2 + 0x70);
    *(undefined4 *)(iVar1 + 0x70) = uVar2;
    *(undefined4 *)(iVar1 + 0x74) = *(undefined4 *)(param_2 + 0x78);
    uVar2 = *(undefined4 *)(param_2 + 0x84);
    *(undefined4 *)(iVar1 + 0x7c) = *(undefined4 *)(param_2 + 0x80);
    *(undefined4 *)(iVar1 + 0x80) = uVar2;
    *(undefined4 *)(iVar1 + 0x84) = *(undefined4 *)(param_2 + 0x88);
    *(undefined4 *)(iVar1 + 0x88) = *(undefined4 *)(param_2 + 0x8c);
    *(undefined4 *)(iVar1 + 0x8c) = *(undefined4 *)(param_2 + 0x90);
  }
  *piVar4 = iVar3;
  piVar4[1] = *(int *)(iVar3 + 4);
  **(undefined4 **)(iVar3 + 4) = piVar4;
  *(int **)(iVar3 + 4) = piVar4;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return;
}



void fn_00786f00(int *param_1,int param_2)

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
  iVar3 = fn_0015ece0(uVar4 * 0xa0);
  piVar2[2] = iVar3;
  *piVar2 = *param_1;
  piVar2[1] = uVar4;
  *param_1 = (int)piVar2;
  iVar3 = piVar2[2];
  param_1[2] = iVar3;
  param_1[3] = iVar3 + uVar4 * 0xa0;
  return;
}



void fn_00786e84(int *param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)*param_3;
  if (piVar2 == *(int **)(param_2 + 0x10)) {
    *param_1 = (int)*(int **)(param_2 + 0x10);
  }
  else {
    iVar3 = *piVar2;
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*(int *)*param_3 + 4) = ((int *)*param_3)[1];
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
    (*(code *)**(undefined4 **)(*param_3 + 8))();
    puVar1 = (undefined4 *)*param_3;
    *puVar1 = *(undefined4 *)(param_2 + 4);
    *(undefined4 **)(param_2 + 4) = puVar1;
    *param_1 = iVar3;
  }
  return;
}



void fn_00786e18(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x10);
  piVar1 = (int *)*piVar3;
  while (piVar1 != piVar3) {
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
  return;
}



void fn_00786da0(int *param_1,int param_2)

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
  iVar3 = fn_0015ece0(uVar4 * 0x78);
  piVar2[2] = iVar3;
  *piVar2 = *param_1;
  piVar2[1] = uVar4;
  *param_1 = (int)piVar2;
  iVar3 = piVar2[2];
  param_1[2] = iVar3;
  param_1[3] = iVar3 + uVar4 * 0x78;
  return;
}



void fn_00786bd8(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = param_1[4];
  piVar1 = (int *)param_1[1];
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)param_1[2];
    if (piVar1 == (int *)param_1[3]) {
      if (*param_1 == 0) {
        uVar4 = 0x20;
      }
      else {
        uVar2 = *(uint *)(*param_1 + 4);
        uVar4 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
        if (uVar4 < uVar2 + 0x20) {
          uVar4 = uVar2 + 0x20;
        }
      }
      piVar1 = (int *)fn_0015ece0(0xc);
      iVar3 = fn_0015ece0(uVar4 * 0x18);
      piVar1[2] = iVar3;
      *piVar1 = *param_1;
      piVar1[1] = uVar4;
      *param_1 = (int)piVar1;
      piVar1 = (int *)piVar1[2];
      param_1[2] = (int)piVar1;
      param_1[3] = (int)(piVar1 + uVar4 * 6);
    }
    param_1[2] = (int)(piVar1 + 6);
  }
  else {
    param_1[1] = *piVar1;
  }
  if (piVar1 + 2 != (int *)0x0) {
    piVar1[2] = (int)&DAT_00853500;
    iVar3 = *(int *)(param_2 + 8);
    piVar1[3] = *(int *)(param_2 + 4);
    piVar1[4] = iVar3;
    piVar1[5] = *(int *)(param_2 + 0xc);
  }
  *piVar1 = iVar5;
  piVar1[1] = *(int *)(iVar5 + 4);
  **(undefined4 **)(iVar5 + 4) = piVar1;
  *(int **)(iVar5 + 4) = piVar1;
  param_1[5] = param_1[5] + 1;
  return;
}



int * fn_00786a18(int *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  if (param_1 != param_2) {
    puVar5 = (undefined4 *)param_1[4];
    puVar7 = (undefined4 *)param_2[4];
    puVar6 = (undefined4 *)*puVar7;
    for (piVar4 = (int *)*puVar5; piVar4 != puVar5 && puVar6 != puVar7; piVar4 = (int *)*piVar4) {
      piVar4[3] = puVar6[3];
      piVar4[4] = puVar6[4];
      piVar4[5] = puVar6[5];
      puVar6 = (undefined4 *)*puVar6;
    }
    if (puVar6 == puVar7) {
      while (piVar1 = piVar4, piVar1 != puVar5) {
        piVar4 = (int *)param_1[4];
        if (piVar1 != (int *)param_1[4]) {
          piVar4 = (int *)*piVar1;
          *(int **)piVar1[1] = piVar4;
          *(int *)(*piVar1 + 4) = piVar1[1];
          param_1[5] = param_1[5] + -1;
          (**(code **)piVar1[2])(piVar1 + 2);
          *piVar1 = param_1[1];
          param_1[1] = (int)piVar1;
        }
      }
    }
    else {
      do {
        piVar4 = (int *)param_1[1];
        if (piVar4 == (int *)0x0) {
          if (param_1[2] == param_1[3]) {
            if (*param_1 == 0) {
              uVar8 = 0x20;
            }
            else {
              uVar2 = *(uint *)(*param_1 + 4);
              uVar8 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
              if (uVar8 < uVar2 + 0x20) {
                uVar8 = uVar2 + 0x20;
              }
            }
            piVar4 = (int *)fn_0015ece0(0xc);
            iVar3 = fn_0015ece0(uVar8 * 0x18);
            piVar4[2] = iVar3;
            *piVar4 = *param_1;
            piVar4[1] = uVar8;
            *param_1 = (int)piVar4;
            iVar3 = piVar4[2];
            param_1[2] = iVar3;
            param_1[3] = iVar3 + uVar8 * 0x18;
          }
          piVar4 = (int *)param_1[2];
          param_1[2] = (int)(piVar4 + 6);
        }
        else {
          param_1[1] = *piVar4;
        }
        if (piVar4 + 2 != (int *)0x0) {
          piVar4[2] = (int)&DAT_0085346c;
          piVar4[3] = puVar6[3];
          piVar4[4] = puVar6[4];
          piVar4[5] = puVar6[5];
        }
        *piVar4 = (int)puVar5;
        piVar4[1] = puVar5[1];
        *(int **)puVar5[1] = piVar4;
        puVar5[1] = piVar4;
        param_1[5] = param_1[5] + 1;
        puVar6 = (undefined4 *)*puVar6;
      } while (puVar6 != puVar7);
    }
  }
  return param_1;
}


