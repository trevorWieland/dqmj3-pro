#include "002fed6c_002ff19ca.h"



void fn_002feee8(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = fn_005f6f1c();
  if (iVar3 == 0) {
    return;
  }
  if (DAT_0089a508 == '\0') {
    return;
  }
  iVar1 = fn_00124ffc();
  fn_0014e774(*(undefined4 *)(iVar1 + 4),iVar3);
  piVar2 = (int *)fn_00124ffc();
                    /* WARNING: Could not recover jumptable at 0x00143b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 4))(piVar2,iVar3);
  return;
}



undefined4 * fn_002feed4(undefined4 *param_1)

{
  fn_00300904(*param_1,0x2fedf5);
  return param_1;
}



int * fn_002feeb0(int *param_1)

{
  int iVar1;
  
  if (DAT_008c3db4 == 0) {
    fn_002ff020();
  }
  iVar1 = DAT_008c3db4;
  *param_1 = DAT_008c3db4;
  *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
  return param_1;
}



void fn_002fee00(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  
  puVar6 = (uint *)(param_1 + 0xc);
  iVar1 = (int)(*(int *)(param_1 + 0x10) - *puVar6) >> 2;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*puVar6 + iVar1 * 4);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xa4))();
      piVar7 = (int *)(*puVar6 + iVar1 * 4);
      piVar2 = (int *)*piVar7;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
      *piVar7 = 0;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x10);
  uVar5 = *puVar6;
  if (uVar5 != uVar4) {
    uVar3 = uVar5;
    if (uVar4 <= uVar5) {
      do {
        uVar3 = uVar3 + 4;
      } while (uVar3 != uVar4);
    }
    *(uint *)(param_1 + 0x10) = uVar4 - (uVar4 - uVar5 & 0xfffffffc);
  }
  return;
}



undefined4 fn_002fedf4(undefined4 param_1)

{
  fn_002ff1b4();
  return param_1;
}



int * fn_002fedb8(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *param_2;
  if (*(int *)(iVar1 + -0xc) == -1) {
    uVar2 = *(undefined4 *)(iVar1 + -4);
    iVar1 = fn_002ff0c8(param_1,uVar2,uVar2);
    *param_1 = iVar1 + 0xc;
    fn_002ff0a8(iVar1 + 0xc,*param_2,uVar2);
  }
  else {
    *param_1 = iVar1;
    fn_002ff0b4(iVar1 + -0xc);
  }
  return param_1;
}



undefined4 * fn_002fed80(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = fn_002febd8(param_2,param_3);
  if (iVar1 == 0) {
    puVar2 = &DAT_008f9d04;
  }
  else {
    puVar2 = (undefined1 *)fn_00100fe8(param_1,0,iVar1);
  }
  *param_1 = puVar2;
  fn_002ff0a8(puVar2,param_2,iVar1);
  return param_1;
}



void fn_002fed6c(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 == (int *)0x0) {
    return;
  }
  *(undefined1 *)(piVar2 + 0x90) = 1;
  if (-1 < piVar2[0x72]) {
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
    piVar2[0x72] = -1;
  }
  if (-1 < piVar2[0x73]) {
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
    piVar2[0x73] = -1;
  }
  if ((char)piVar2[0x65] != -1) {
    fn_00223ff8(piVar2,0);
  }
  fn_00225fd8(piVar2,1);
  (**(code **)(*piVar2 + 0x54))(piVar2,0);
  fn_00259728(piVar2 + 0x71,1);
  iVar1 = fn_006a7f8c(piVar2 + 0x66);
  if (iVar1 != 0) {
    fn_00223510(piVar2);
  }
  if ((int *)piVar2[0x61] != (int *)0x0) {
    (**(code **)(*(int *)piVar2[0x61] + 4))();
    piVar2[0x61] = 0;
  }
  piVar2[0x38] = -1;
  *(undefined1 *)((int)piVar2 + 0x241) = 0;
  return;
}


