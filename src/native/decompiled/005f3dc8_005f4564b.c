#include "005f3dc8_005f4564b.h"



undefined4 * fn_005f4564(undefined4 *param_1)

{
  *param_1 = &DAT_00858f3c;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[1] = 0;
    fn_002feef8();
  }
  return param_1;
}



void fn_005f452c(undefined4 *param_1)

{
  *param_1 = &DAT_00858f3c;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[1] = 0;
    fn_002feef8();
  }
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_005f44cc(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *unaff_r4;
  
  *param_1 = &DAT_00858f3c;
  param_1[1] = 0;
  puVar1 = (undefined4 *)fn_00145b00(4,&DAT_00812c8c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    unaff_r4 = puVar1;
  }
  puVar2 = (undefined4 *)param_1[1];
  if (puVar1 == (undefined4 *)0x0) {
    unaff_r4 = (undefined4 *)0x0;
  }
  if (puVar2 != unaff_r4) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      fn_002feef8();
    }
    param_1[1] = unaff_r4;
  }
  return param_1;
}



undefined4 fn_005f4484(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 4);
  if ((param_2 == 0) || (iVar1 = fn_001010c8(&DAT_007d63cc,param_2,4), iVar1 != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    *piVar3 = param_2;
  }
  return uVar2;
}



void fn_005f4448(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  if (DAT_0089a508 == '\0') {
    return;
  }
  iVar1 = fn_00124ffc();
  fn_0014e774(*(undefined4 *)(iVar1 + 4),param_1);
  return;
}



void fn_005f43f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if (iVar3 != 0) {
    if (DAT_0089a508 != '\0') {
      iVar1 = fn_00124ffc();
      fn_0014e774(*(undefined4 *)(iVar1 + 4),iVar3);
      piVar2 = (int *)fn_00124ffc();
      (**(code **)(*piVar2 + 4))(piVar2,iVar3);
    }
    *param_1 = 0;
  }
  return;
}


