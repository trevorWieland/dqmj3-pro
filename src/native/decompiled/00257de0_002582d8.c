#include "00257de0_002582d8.h"



void fn_002582d8(int param_1)

{
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 4))();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



undefined1 * fn_0025825c(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return param_1;
}



void fn_00258120(char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  
  if (*(int *)(*(int *)(DAT_008977e0 + 8) + 0x58) != 0) {
    cVar1 = *param_1;
    if (cVar1 == '\0') {
      fn_006b5fa4(param_1,param_1 + 0x18);
      iVar2 = fn_006f7a0c(DAT_008977e0);
      fn_00338008(*(undefined4 *)(iVar2 + 0x30));
      *param_1 = '\x01';
      return;
    }
    if (cVar1 == '\x01') {
      if (param_1[0x24] == '\0') {
        fn_006b5fa4(param_1,param_1 + 0xc);
        param_1[8] = '\x1e';
        param_1[9] = '\0';
        param_1[10] = '\0';
        param_1[0xb] = '\0';
      }
      else {
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x34);
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x28);
        *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x2c);
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x30);
      }
      if (((*(float *)(param_1 + 0x18) == *(float *)(param_1 + 0xc)) &&
          (*(float *)(param_1 + 0x1c) == *(float *)(param_1 + 0x10))) &&
         (*(float *)(param_1 + 0x20) == *(float *)(param_1 + 0x14))) {
        return;
      }
      *param_1 = '\x02';
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x20);
      pcVar6 = param_1 + 0x44;
      uVar3 = *(undefined4 *)(param_1 + 0xc);
      uVar4 = *(undefined4 *)(param_1 + 0x10);
      uVar5 = *(undefined4 *)(param_1 + 0x14);
    }
    else {
      if (cVar1 != '\x02') {
        return;
      }
      iVar2 = fn_00258034(param_1);
      if (iVar2 == 0) {
        return;
      }
      uVar3 = *(undefined4 *)(param_1 + 0xc);
      uVar4 = *(undefined4 *)(param_1 + 0x10);
      uVar5 = *(undefined4 *)(param_1 + 0x14);
      pcVar6 = param_1 + 0x18;
      *param_1 = '\x01';
    }
    *(undefined4 *)pcVar6 = uVar3;
    *(undefined4 *)(pcVar6 + 4) = uVar4;
    *(undefined4 *)(pcVar6 + 8) = uVar5;
  }
  return;
}



void fn_002580f8(int param_1,undefined4 param_2)

{
  undefined4 in_s0;
  undefined4 in_s1;
  undefined4 in_s2;
  
  *(undefined1 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x34) = param_2;
  *(undefined4 *)(param_1 + 0x28) = in_s0;
  *(undefined4 *)(param_1 + 0x2c) = in_s1;
  *(undefined4 *)(param_1 + 0x30) = in_s2;
  return;
}



undefined4 fn_00258034(int param_1)

{
  int iVar1;
  uint in_fpscr;
  
  iVar1 = *(int *)(param_1 + 4) + -1;
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 < 0) {
    iVar1 = fn_006f7a0c(DAT_008977e0);
    fn_00338008(*(undefined4 *)(iVar1 + 0x30));
    return 1;
  }
  VectorSignedToFloat(*(undefined4 *)(param_1 + 8),(byte)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  iVar1 = fn_006f7a0c(DAT_008977e0);
  fn_00338008(*(undefined4 *)(iVar1 + 0x30));
  return 0;
}



void fn_00257ff8(undefined4 *param_1)

{
  *param_1 = &DAT_0081d7c0;
  fn_00100414(param_1 + 10,fn_0079d618,0xc,6);
  fn_0023a768(param_1);
  fn_002feef8();
  return;
}



int fn_00257fc8(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_0023a524();
  *puVar1 = &DAT_0081d7c0;
  iVar2 = fn_00101a1c(puVar1 + 10,&LAB_001ad7ec,0xc,6);
  return iVar2 + -0x28;
}



void fn_00257ef4(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  fn_0023a24c();
  param_1 = param_1 + param_2 * 0xc;
  piVar1 = *(int **)(param_1 + 0x4c);
  piVar3 = *(int **)(param_1 + 0x50);
  piVar2 = piVar1;
  if (piVar1 != piVar3) {
    while (*piVar2 != param_3) {
      piVar2 = piVar2 + 1;
      if (piVar2 == piVar3) {
        return;
      }
    }
    if (piVar1 != piVar3) {
      piVar1 = piVar2 + 1;
      if (piVar3 != piVar1) {
        if (piVar3 < piVar1) {
          for (; piVar1 != piVar3; piVar1 = piVar1 + 1) {
            *piVar2 = *piVar1;
            piVar2 = piVar2 + 1;
          }
        }
        else {
          iVar4 = (int)piVar3 - (int)piVar1;
          if (0 < iVar4) {
            piVar3 = piVar2 + -1;
            if (iVar4 * 0x20000000 < 0) {
              *piVar2 = *piVar1;
              piVar3 = piVar2;
              piVar2 = piVar1;
            }
            for (iVar4 = iVar4 >> 3; iVar4 != 0; iVar4 = iVar4 + -1) {
              piVar3[1] = piVar2[1];
              piVar2 = piVar2 + 2;
              piVar3 = piVar3 + 2;
              *piVar3 = *piVar2;
            }
          }
        }
      }
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -4;
    }
  }
  return;
}



int fn_00257ebc(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int local_10;
  
  local_10 = param_4;
  local_10 = fn_0023a04c();
  if (local_10 != -1) {
    fn_0079d450(param_1 + param_2 * 0xc + 0x4c,&local_10);
  }
  return local_10;
}



void fn_00257de0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  fn_0023a24c();
  param_1 = param_1 + param_2 * 0xc;
  piVar1 = *(int **)(param_1 + 0x28);
  if (*(int **)(param_1 + 0x2c) != piVar1) {
    piVar3 = *(int **)(param_1 + 0x2c);
    piVar2 = piVar1;
    while (*piVar2 != param_3) {
      piVar2 = piVar2 + 1;
      if (piVar3 == piVar2) {
        return;
      }
    }
    if (piVar1 != piVar3) {
      piVar1 = piVar2 + 1;
      if (piVar3 != piVar1) {
        if (piVar3 < piVar1) {
          for (; piVar1 != piVar3; piVar1 = piVar1 + 1) {
            *piVar2 = *piVar1;
            piVar2 = piVar2 + 1;
          }
        }
        else {
          iVar4 = (int)piVar3 - (int)piVar1;
          if (0 < iVar4) {
            piVar3 = piVar2 + -1;
            if (iVar4 * 0x20000000 < 0) {
              *piVar2 = *piVar1;
              piVar3 = piVar2;
              piVar2 = piVar1;
            }
            for (iVar4 = iVar4 >> 3; iVar4 != 0; iVar4 = iVar4 + -1) {
              piVar3[1] = piVar2[1];
              piVar2 = piVar2 + 2;
              piVar3 = piVar3 + 2;
              *piVar3 = *piVar2;
            }
          }
        }
      }
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -4;
    }
  }
  return;
}


