#include "00122c9c_00123520a.h"



int fn_0012303c(int param_1)

{
  fn_0013af88();
  if (*(int *)(param_1 + 0x5b3a4) != 0) {
    fn_0012f748();
    fn_002feef8();
  }
  return param_1;
}



int * fn_00122e2c(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_1c [4];
  
  iVar4 = *(int *)(*(int *)(*param_1 + 0x10) + 8);
  if (iVar4 != *(int *)(*param_1 + 0x10)) {
    do {
      fn_00154a58(*(undefined4 *)(iVar4 + 0x14));
      fn_00127fb4(*(undefined4 *)(*param_1 + 0x1c),*(undefined4 *)(iVar4 + 0x14));
      iVar5 = *(int *)(iVar4 + 0xc);
      if (*(int *)(iVar4 + 0xc) == 0) {
        iVar5 = *(int *)(iVar4 + 4);
        while (iVar2 = iVar5, iVar4 == *(int *)(iVar2 + 0xc)) {
          iVar4 = iVar2;
          iVar5 = *(int *)(iVar2 + 4);
        }
        if (*(int *)(iVar4 + 0xc) != iVar2) {
          iVar4 = iVar2;
        }
      }
      else {
        do {
          iVar4 = iVar5;
          iVar5 = *(int *)(iVar4 + 8);
        } while (*(int *)(iVar4 + 8) != 0);
      }
    } while (iVar4 != *(int *)(*param_1 + 0x10));
  }
  piVar6 = (int *)*param_1;
  if (piVar6 != (int *)0x0) {
    if ((int *)piVar6[7] != (int *)0x0) {
      (**(code **)(*(int *)piVar6[7] + 4))();
    }
    iVar4 = piVar6[4];
    if (iVar4 != 0) {
      iVar5 = *(int *)(iVar4 + 8);
      if (piVar6[5] == 0) {
        while (iVar5 != iVar4) {
          iVar2 = *(int *)(iVar5 + 0xc);
          if (*(int *)(iVar5 + 0xc) == 0) {
            iVar2 = *(int *)(iVar5 + 4);
            while (iVar3 = iVar2, iVar5 == *(int *)(iVar3 + 0xc)) {
              iVar5 = iVar3;
              iVar2 = *(int *)(iVar3 + 4);
            }
            if (*(int *)(iVar5 + 0xc) != iVar3) {
              iVar5 = iVar3;
            }
          }
          else {
            do {
              iVar5 = iVar2;
              iVar2 = *(int *)(iVar5 + 8);
            } while (*(int *)(iVar5 + 8) != 0);
          }
          fn_00147274(auStack_1c,piVar6);
        }
      }
      else {
        iVar4 = *(int *)(iVar4 + 4);
        while (iVar4 != 0) {
          fn_001478b4(piVar6,*(undefined4 *)(iVar4 + 0xc));
          iVar5 = *(int *)(iVar4 + 8);
          *(int *)(iVar4 + 0xc) = piVar6[1];
          piVar6[1] = iVar4;
          iVar4 = iVar5;
        }
        *(int *)(piVar6[4] + 8) = piVar6[4];
        *(undefined4 *)(piVar6[4] + 4) = 0;
        *(int *)(piVar6[4] + 0xc) = piVar6[4];
        piVar6[5] = 0;
      }
      iVar4 = piVar6[4];
      *(int *)(iVar4 + 0xc) = piVar6[1];
      piVar6[1] = iVar4;
      piVar1 = (int *)*piVar6;
      while (piVar1 != (int *)0x0) {
        *piVar6 = *piVar1;
        fn_001008c4(piVar1[2],piVar1[1],0);
        fn_001008c4(piVar1,1,0);
        piVar1 = (int *)*piVar6;
      }
    }
    fn_002feef8(piVar6);
  }
  return param_1;
}



int * fn_00122d10(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *param_1;
  *param_1 = 0;
  iVar4 = param_1[1];
  param_1[1] = 0;
  iVar5 = param_1[2];
  param_1[2] = 0;
  for (iVar2 = iVar3; iVar2 != iVar4; iVar2 = iVar2 + 0x14) {
    fn_002feef8(*(undefined4 *)(iVar2 + 0xc));
    *(undefined4 *)(iVar2 + 0xc) = 0;
    fn_002feef8(*(undefined4 *)(iVar2 + 8));
    *(undefined4 *)(iVar2 + 8) = 0;
    if (*(int *)(iVar2 + 4) != 0) {
      iVar1 = fn_00120ec8(*(int *)(iVar2 + 4) + 0x60);
      fn_002feef8(iVar1 + -0x60);
    }
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  fn_001008c4(iVar3,(iVar5 - iVar3) / 0x14,0);
  iVar3 = param_1[1];
  for (iVar2 = *param_1; iVar2 != iVar3; iVar2 = iVar2 + 0x14) {
    fn_002feef8(*(undefined4 *)(iVar2 + 0xc));
    *(undefined4 *)(iVar2 + 0xc) = 0;
    fn_002feef8(*(undefined4 *)(iVar2 + 8));
    *(undefined4 *)(iVar2 + 8) = 0;
    if (*(int *)(iVar2 + 4) != 0) {
      iVar4 = fn_00120ec8(*(int *)(iVar2 + 4) + 0x60);
      fn_002feef8(iVar4 + -0x60);
    }
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  fn_001008c4(*param_1,(param_1[2] - *param_1) / 0x14,0);
  return param_1;
}



undefined4 * fn_00122c9c(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)*param_1;
  if (puVar3 != (uint *)0x0) {
    uVar2 = *puVar3;
    uVar1 = uVar2;
    if (puVar3[1] <= uVar2) {
      for (; uVar1 != puVar3[1]; uVar1 = uVar1 + 300) {
      }
    }
    fn_001008c4(uVar2,(int)(puVar3[2] - uVar2) / 300,0);
    fn_002feef8(puVar3);
  }
  return param_1;
}


