#include "0017d938_0017df94.h"



void fn_0017df94(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0x40c80000;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  return;
}



void fn_0017deb4(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)(param_1 + 0x10)) {
    iVar2 = (uint)*(byte *)(param_2 + 0x9d) + *(int *)(param_2 + 0x50);
    do {
      if (*(char *)(param_1 + 0x58) == '\0') {
        iVar4 = 0x7f;
        iVar3 = iVar2 + -0x7f;
        if (0x7f >= iVar2) {
          iVar4 = iVar2;
          iVar3 = iVar2;
        }
        iVar5 = 0;
        if (iVar3 < 0 == (0x7f < iVar2 && SBORROW4(iVar2,0x7f))) {
          iVar5 = iVar4;
        }
        iVar3 = piVar1[-0x2e] + (uint)*(byte *)((int)piVar1 + -0x6b);
        if (iVar3 < 0x80) {
          if (iVar3 < 0) {
            iVar3 = 0;
          }
        }
        else {
          iVar3 = 0x7f;
        }
        if (iVar5 < iVar3) break;
      }
      else {
        iVar4 = 0x7f;
        iVar3 = iVar2 + -0x7f;
        if (0x7f >= iVar2) {
          iVar4 = iVar2;
          iVar3 = iVar2;
        }
        iVar5 = 0;
        if (iVar3 < 0 == (0x7f < iVar2 && SBORROW4(iVar2,0x7f))) {
          iVar5 = iVar4;
        }
        iVar3 = piVar1[-0x2e] + (uint)*(byte *)((int)piVar1 + -0x6b);
        if (iVar3 < 0x80) {
          if (iVar3 < 0) {
            iVar3 = 0;
          }
        }
        else {
          iVar3 = 0x7f;
        }
        if (iVar5 <= iVar3) break;
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)(param_1 + 0x10));
  }
  fn_0017d948(param_1 + 0xc,piVar1,param_2 + 0x108);
  return;
}



void fn_0017de8c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  fn_0017d90c(param_1 + 0xc,param_2 + 0x108);
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)(param_1 + 0x10)) {
    iVar2 = (uint)*(byte *)(param_2 + 0x9d) + *(int *)(param_2 + 0x50);
    do {
      if (*(char *)(param_1 + 0x58) == '\0') {
        iVar4 = 0x7f;
        iVar3 = iVar2 + -0x7f;
        if (0x7f >= iVar2) {
          iVar4 = iVar2;
          iVar3 = iVar2;
        }
        iVar5 = 0;
        if (iVar3 < 0 == (0x7f < iVar2 && SBORROW4(iVar2,0x7f))) {
          iVar5 = iVar4;
        }
        iVar3 = piVar1[-0x2e] + (uint)*(byte *)((int)piVar1 + -0x6b);
        if (iVar3 < 0x80) {
          if (iVar3 < 0) {
            iVar3 = 0;
          }
        }
        else {
          iVar3 = 0x7f;
        }
        if (iVar5 < iVar3) break;
      }
      else {
        iVar4 = 0x7f;
        iVar3 = iVar2 + -0x7f;
        if (0x7f >= iVar2) {
          iVar4 = iVar2;
          iVar3 = iVar2;
        }
        iVar5 = 0;
        if (iVar3 < 0 == (0x7f < iVar2 && SBORROW4(iVar2,0x7f))) {
          iVar5 = iVar4;
        }
        iVar3 = piVar1[-0x2e] + (uint)*(byte *)((int)piVar1 + -0x6b);
        if (iVar3 < 0x80) {
          if (iVar3 < 0) {
            iVar3 = 0;
          }
        }
        else {
          iVar3 = 0x7f;
        }
        if (iVar5 <= iVar3) break;
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)(param_1 + 0x10));
  }
  fn_0017d948(param_1 + 0xc,piVar1,param_2 + 0x108);
  return;
}



void fn_0017dcb0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_r12;
  bool bVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  fn_001718c4(param_2,0x4e414c46,0x7020100,1);
  *param_1 = param_2;
  bVar4 = *(short *)(param_2 + 0x10) != 0;
  if (bVar4) {
    in_r12 = -0x31686170;
  }
  piVar1 = (int *)((uint)*(ushort *)(param_2 + 6) + param_2);
  iVar2 = 0;
  if (bVar4) {
    do {
      iVar3 = *piVar1 + in_r12;
      if (iVar3 == 0) {
        param_1[3] = (int)piVar1;
      }
      else if (iVar3 == 0x10000) {
        param_1[1] = (int)piVar1;
      }
      else if (iVar3 == 0xc0000) {
        param_1[2] = (int)piVar1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = (int *)((int)piVar1 + piVar1[1]);
    } while (iVar2 < (int)(uint)*(ushort *)(param_2 + 0x10));
  }
  return;
}



void fn_0017dc74(uint *param_1,int *param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*param_2 + param_4) - 1U & ~(param_4 - 1U);
    *param_2 = uVar1 + param_3;
  }
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



void fn_0017d96c(undefined4 param_1,uint param_2,int param_3,undefined4 param_4,undefined1 param_5)

{
  undefined1 uStack00000000;
  
  if (param_3 + 1U < param_2) {
    param_2 = param_3 + 1U;
  }
  fn_00100394(param_1,param_2,param_4,&param_5);
  return;
}



int * fn_0017d948(int *param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_2 + 4);
  *param_3 = param_2;
  param_3[1] = (int)puVar1;
  *(int **)(param_2 + 4) = param_3;
  *puVar1 = param_3;
  *param_1 = *param_1 + 1;
  return param_3;
}



int * fn_0017d938(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xc);
  *param_2 = param_1 + 8;
  param_2[1] = (int)piVar1;
  *(int **)(param_1 + 0xc) = param_2;
  *piVar1 = (int)param_2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return param_2;
}


