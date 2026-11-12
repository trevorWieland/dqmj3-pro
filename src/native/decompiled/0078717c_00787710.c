#include "0078717c_00787710.h"



void fn_00787710(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_r4;
  int iVar4;
  undefined4 in_lr;
  
  puVar1 = (undefined4 *)param_1[3];
  param_1[3] = (int)(puVar1 + 1);
  fn_001008c4(*puVar1,0x20);
  if (param_1[8] == 0) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    fn_002feef8(param_1[9],param_1[10],0,param_4,unaff_r4,in_lr);
    return;
  }
  iVar2 = *(int *)param_1[3];
  if ((int *)param_1[3] == (int *)0x0) {
    iVar3 = 0;
    iVar4 = 0;
  }
  else {
    iVar3 = iVar2 + 0x20;
    iVar4 = iVar2;
  }
  param_1[2] = iVar3;
  *param_1 = iVar2;
  param_1[1] = iVar4;
  return;
}



int * fn_0078757c(int *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  
  if (param_1 != param_2) {
    piVar1 = (int *)param_1[4];
    piVar6 = (int *)param_2[4];
    piVar5 = (int *)*piVar6;
    for (piVar4 = (int *)*piVar1; piVar4 != piVar1 && piVar5 != piVar6; piVar4 = (int *)*piVar4) {
      piVar4[2] = piVar5[2];
      piVar5 = (int *)*piVar5;
    }
    if (piVar5 == piVar6) {
      while (piVar4 != piVar1) {
        piVar5 = (int *)param_1[4];
        if (piVar4 != piVar5) {
          piVar5 = (int *)*piVar4;
          *(int *)piVar4[1] = *piVar4;
          *(int *)(*piVar4 + 4) = piVar4[1];
          param_1[5] = param_1[5] + -1;
          *piVar4 = param_1[1];
          param_1[1] = (int)piVar4;
        }
        piVar4 = piVar5;
      }
    }
    else {
      for (; piVar5 != piVar6; piVar5 = (int *)*piVar5) {
        piVar4 = (int *)param_1[1];
        if (piVar4 == (int *)0x0) {
          if (param_1[2] == param_1[3]) {
            if (*param_1 == 0) {
              uVar7 = 0x20;
            }
            else {
              uVar2 = *(uint *)(*param_1 + 4);
              uVar7 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
              if (uVar7 < uVar2 + 0x20) {
                uVar7 = uVar2 + 0x20;
              }
            }
            piVar4 = (int *)fn_00100fc6(0xc,0);
            iVar3 = fn_00100fc6(uVar7 * 0xc,0);
            piVar4[2] = iVar3;
            *piVar4 = *param_1;
            piVar4[1] = uVar7;
            *param_1 = (int)piVar4;
            iVar3 = piVar4[2];
            param_1[2] = iVar3;
            param_1[3] = iVar3 + uVar7 * 0xc;
          }
          piVar4 = (int *)param_1[2];
          param_1[2] = (int)(piVar4 + 3);
        }
        else {
          param_1[1] = *piVar4;
        }
        if (piVar4 + 2 != (int *)0x0) {
          piVar4[2] = piVar5[2];
        }
        *piVar4 = (int)piVar1;
        piVar4[1] = piVar1[1];
        *(int **)piVar1[1] = piVar4;
        piVar1[1] = (int)piVar4;
        param_1[5] = param_1[5] + 1;
      }
    }
  }
  return param_1;
}



int * fn_007874ac(int *param_1)

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



void fn_0078742c(int *param_1,int param_2)

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
  piVar2 = (int *)fn_00100fc6(0xc,0);
  iVar3 = fn_00100fc6(uVar4 * 0xc,0);
  piVar2[2] = iVar3;
  *piVar2 = *param_1;
  piVar2[1] = uVar4;
  *param_1 = (int)piVar2;
  iVar3 = piVar2[2];
  param_1[2] = iVar3;
  param_1[3] = iVar3 + uVar4 * 0xc;
  return;
}



int * fn_00787350(int *param_1)

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
        *(int **)piVar1[1] = piVar2;
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



int * fn_00787250(int *param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1[4];
  if (piVar4 != (int *)0x0) {
    piVar2 = (int *)*piVar4;
    while (piVar1 = piVar2, piVar1 != piVar4) {
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
    piVar4 = (int *)param_1[4];
    *piVar4 = param_1[1];
    param_1[1] = (int)piVar4;
    piVar4 = (int *)*param_1;
    while (piVar4 != (int *)0x0) {
      *param_1 = *piVar4;
      if (piVar4[2] != 0) {
        pcVar3 = *(code **)(piVar4[2] + -8);
        if (pcVar3 == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (*pcVar3)();
        }
      }
      if (piVar4 != (int *)0x0) {
        if ((code *)piVar4[-2] == (code *)0x0) {
          fn_0030233c(piVar4 + -2);
        }
        else {
          (*(code *)piVar4[-2])();
        }
      }
      piVar4 = (int *)*param_1;
    }
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}



void fn_0078717c(int *param_1,int *param_2)

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
      piVar1 = (int *)fn_00100fc6(0xc,0);
      iVar3 = fn_00100fc6(uVar4 * 0xc,0);
      piVar1[2] = iVar3;
      *piVar1 = *param_1;
      piVar1[1] = uVar4;
      *param_1 = (int)piVar1;
      piVar1 = (int *)piVar1[2];
      param_1[2] = (int)piVar1;
      param_1[3] = (int)(piVar1 + uVar4 * 3);
    }
    param_1[2] = (int)(piVar1 + 3);
  }
  else {
    param_1[1] = *piVar1;
  }
  if (piVar1 + 2 != (int *)0x0) {
    piVar1[2] = *param_2;
  }
  *piVar1 = iVar5;
  piVar1[1] = *(int *)(iVar5 + 4);
  **(undefined4 **)(iVar5 + 4) = piVar1;
  *(int **)(iVar5 + 4) = piVar1;
  param_1[5] = param_1[5] + 1;
  return;
}


