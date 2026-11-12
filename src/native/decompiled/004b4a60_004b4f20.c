#include "004b4a60_004b4f20.h"



int * fn_004b4f20(int *param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int *piVar4;
  
  piVar2 = (int *)param_1[4];
  if (piVar2 != (int *)0x0) {
    piVar4 = (int *)*piVar2;
    while (piVar1 = piVar4, piVar1 != piVar2) {
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
    piVar2 = (int *)param_1[4];
    *piVar2 = param_1[1];
    param_1[1] = (int)piVar2;
    piVar2 = (int *)*param_1;
    while (piVar2 != (int *)0x0) {
      *param_1 = *piVar2;
      if (piVar2[2] != 0) {
        pcVar3 = *(code **)(piVar2[2] + -8);
        if (pcVar3 == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (*pcVar3)();
        }
      }
      if (piVar2 != (int *)0x0) {
        if ((code *)piVar2[-2] == (code *)0x0) {
          fn_0030233c(piVar2 + -2);
        }
        else {
          (*(code *)piVar2[-2])();
        }
      }
      piVar2 = (int *)*param_1;
    }
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}



int * fn_004b4d90(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  piVar1 = (int *)fn_0015ece0(0xc);
  iVar2 = fn_0015ece0(0x300);
  piVar1[2] = iVar2;
  *piVar1 = *param_1;
  piVar1[1] = 0x20;
  *param_1 = (int)piVar1;
  iVar2 = piVar1[2];
  param_1[2] = iVar2;
  param_1[3] = iVar2 + 0x300;
  param_1[4] = iVar2;
  param_1[2] = iVar2 + 0x18;
  *(int *)iVar2 = iVar2;
  *(int *)(param_1[4] + 4) = param_1[4];
  piVar6 = *(int **)(param_2 + 0x10);
  iVar2 = *(int *)param_1[4];
  for (piVar1 = (int *)*piVar6; piVar1 != piVar6; piVar1 = (int *)*piVar1) {
    piVar3 = (int *)param_1[1];
    if (piVar3 == (int *)0x0) {
      if (param_1[2] == param_1[3]) {
        if (*param_1 == 0) {
          uVar7 = 0x20;
        }
        else {
          uVar4 = *(uint *)(*param_1 + 4);
          uVar7 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
          if (uVar7 < uVar4 + 0x20) {
            uVar7 = uVar4 + 0x20;
          }
        }
        piVar3 = (int *)fn_0015ece0(0xc);
        iVar5 = fn_0015ece0(uVar7 * 0x18);
        piVar3[2] = iVar5;
        *piVar3 = *param_1;
        piVar3[1] = uVar7;
        *param_1 = (int)piVar3;
        iVar5 = piVar3[2];
        param_1[2] = iVar5;
        param_1[3] = iVar5 + uVar7 * 0x18;
      }
      piVar3 = (int *)param_1[2];
      param_1[2] = (int)(piVar3 + 6);
    }
    else {
      param_1[1] = *piVar3;
    }
    if (piVar3 + 2 != (int *)0x0) {
      piVar3[2] = (int)&DAT_0085346c;
      piVar3[3] = piVar1[3];
      piVar3[4] = piVar1[4];
      piVar3[5] = piVar1[5];
    }
    *piVar3 = iVar2;
    piVar3[1] = *(int *)(iVar2 + 4);
    **(undefined4 **)(iVar2 + 4) = piVar3;
    *(int **)(iVar2 + 4) = piVar3;
    param_1[5] = param_1[5] + 1;
  }
  return param_1;
}



void fn_004b4d84(void)

{
  fn_00786860();
  return;
}



undefined4 * fn_004b4d30(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  fn_007867f0(param_1,1);
  iVar1 = param_1[2];
  param_1[4] = iVar1;
  param_1[2] = iVar1 + 0x10;
  *(int *)iVar1 = iVar1;
  *(undefined4 *)(param_1[4] + 4) = param_1[4];
  return param_1;
}



void fn_004b4d24(void)

{
  fn_0078671c();
  return;
}



int * fn_004b4ca4(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  piVar1 = (int *)fn_0015ece0(0xc);
  iVar2 = fn_0015ece0(0x7c);
  piVar1[2] = iVar2;
  *piVar1 = *param_1;
  piVar1[1] = 1;
  *param_1 = (int)piVar1;
  iVar2 = piVar1[2];
  param_1[2] = iVar2;
  param_1[3] = iVar2 + 0x7c;
  iVar2 = param_1[2];
  param_1[4] = iVar2;
  param_1[2] = iVar2 + 0x7c;
  *(int *)iVar2 = iVar2;
  *(int *)(param_1[4] + 4) = param_1[4];
  return param_1;
}



void fn_004b4c98(void)

{
  fn_00786480();
  return;
}



undefined4 * fn_004b4c44(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  fn_0078638c(param_1,1);
  iVar1 = param_1[2];
  param_1[4] = iVar1;
  param_1[2] = iVar1 + 0x70;
  *(int *)iVar1 = iVar1;
  *(undefined4 *)(param_1[4] + 4) = param_1[4];
  return param_1;
}



undefined4 * fn_004b4b60(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  fn_0078638c();
  iVar1 = param_1[2];
  param_1[4] = iVar1;
  param_1[2] = iVar1 + 0x70;
  *(int *)iVar1 = iVar1;
  *(undefined4 *)(param_1[4] + 4) = param_1[4];
  piVar4 = *(int **)(param_2 + 0x10);
  iVar1 = *(int *)param_1[4];
  for (piVar3 = (int *)*piVar4; piVar3 != piVar4; piVar3 = (int *)*piVar3) {
    piVar2 = (int *)param_1[1];
    if (piVar2 == (int *)0x0) {
      if (param_1[2] == param_1[3]) {
        fn_0078638c(param_1,0);
      }
      piVar2 = (int *)param_1[2];
      param_1[2] = piVar2 + 0x1c;
    }
    else {
      param_1[1] = *piVar2;
    }
    if (piVar2 + 2 != (int *)0x0) {
      fn_0013cd7c(piVar2 + 2,piVar3 + 2);
    }
    *piVar2 = iVar1;
    piVar2[1] = *(int *)(iVar1 + 4);
    **(undefined4 **)(iVar1 + 4) = piVar2;
    *(int **)(iVar1 + 4) = piVar2;
    param_1[5] = param_1[5] + 1;
  }
  return param_1;
}



void fn_004b4a60(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 local_20;
  int local_1c;
  undefined1 auStack_18 [8];
  
  iVar1 = fn_001249d0();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  piVar2 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar2 + 8))();
  local_1c = *(int *)(*(int *)(param_1 + 4) + 0x24);
  local_20 = *(undefined4 *)(local_1c + 8);
  fn_007654a4(auStack_18,*(int *)(param_1 + 4) + 0x14,&local_20,&local_1c);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x44) = 0xffffffff;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x40) = 0xffffffff;
  iVar1 = fn_004b7748();
  if (iVar1 != 0) {
    iVar1 = fn_004b7748();
    if (*(int *)(iVar1 + 0x100) != 0) {
      iVar1 = fn_004b7748();
      iVar1 = *(int *)(iVar1 + 0x100);
      uVar3 = fn_004b6318(&local_20,&DAT_004b4b5c);
      fn_00170fa4(iVar1 + 0x110,uVar3);
      fn_00170f54(&local_20);
      iVar1 = fn_004b7748();
      *(undefined2 *)(*(int *)(iVar1 + 0x100) + 0x118) = 0;
    }
    iVar1 = fn_004b7748();
    if (iVar1 != -0x104) {
      iVar1 = fn_004b7748();
      *(undefined4 *)(*(int *)(iVar1 + 0x114) + 8) = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x004b4b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0xc))(piVar2);
  return;
}


