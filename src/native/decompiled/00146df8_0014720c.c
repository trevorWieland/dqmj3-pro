#include "00146df8_0014720c.h"



void fn_00147178(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_2 + 4) != 0) {
    fn_0014720c();
  }
  *(int *)(param_2 + 4) = param_1;
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x10) = param_2;
  }
  else {
    iVar2 = *(int *)(param_2 + 0x14);
    if (iVar2 <= *(int *)(*(int *)(param_1 + 0x10) + 0x14)) {
      *(int *)(*(int *)(param_1 + 0x10) + 8) = param_2;
      *(int *)(param_1 + 0x10) = param_2;
      return;
    }
    if (iVar2 <= *(int *)(iVar1 + 0x14)) {
      iVar3 = *(int *)(*(int *)(iVar1 + 8) + 0x14);
      while (iVar2 <= iVar3) {
        iVar1 = *(int *)(iVar1 + 8);
        iVar3 = *(int *)(*(int *)(iVar1 + 8) + 0x14);
      }
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar1 + 8);
      *(int *)(iVar1 + 8) = param_2;
      return;
    }
    *(int *)(param_2 + 8) = iVar1;
  }
  *(int *)(param_1 + 0xc) = param_2;
  return;
}



void fn_0014720c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_2 + 4) == param_1) {
    iVar2 = *(int *)(param_1 + 0xc);
    iVar1 = 0;
    if (iVar2 == param_2) {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 8);
    }
    else {
      iVar1 = iVar2;
      for (iVar2 = *(int *)(iVar2 + 8); iVar2 != param_2; iVar2 = *(int *)(iVar2 + 8)) {
        iVar1 = iVar2;
      }
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_2 + 8);
    }
    if (*(int *)(param_1 + 0x10) == param_2) {
      *(int *)(param_1 + 0x10) = iVar1;
    }
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 4) = 0;
  }
  return;
}



void fn_00147090(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  if (piVar4 != (int *)0x0) {
    piVar3 = (int *)piVar4[4];
    if (piVar3 != (int *)0x0) {
      piVar2 = (int *)*piVar3;
      while (piVar1 = piVar2, piVar1 != piVar3) {
        piVar2 = (int *)piVar4[4];
        if (piVar1 != (int *)piVar4[4]) {
          piVar2 = (int *)*piVar1;
          *(int *)piVar1[1] = *piVar1;
          *(int *)(*piVar1 + 4) = piVar1[1];
          piVar4[5] = piVar4[5] + -1;
          *piVar1 = piVar4[1];
          piVar4[1] = (int)piVar1;
        }
      }
      piVar3 = (int *)piVar4[4];
      *piVar3 = piVar4[1];
      piVar4[1] = (int)piVar3;
      piVar3 = (int *)*piVar4;
      while (piVar3 != (int *)0x0) {
        *piVar4 = *piVar3;
        fn_001008c4(piVar3[2],piVar3[1],0);
        fn_001008c4(piVar3,1,0);
        piVar3 = (int *)*piVar4;
      }
      piVar4[1] = 0;
      piVar4[2] = 0;
      piVar4[3] = 0;
    }
    fn_002feef8(piVar4);
  }
  *param_1 = 0;
  return;
}



void fn_00147080(undefined4 *param_1)

{
  *param_1 = &DAT_008586d0;
  return;
}



void fn_00146df8(int param_1,int param_2)

{
  *(uint *)(*(int *)(param_1 + 0x34) + 8) =
       ((*(int *)(param_2 + 4) + *(int *)(param_2 + 8)) - *(int *)(param_1 + 0x34)) - 0x18U >> 3;
  fn_00157bfc(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 4;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}


