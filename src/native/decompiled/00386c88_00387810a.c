#include "00386c88_00387810a.h"



void fn_00387138(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00387168(iVar1,param_1);
  return;
}



void fn_00387168(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,&DAT_00893af0,1);
  *puVar1 = &DAT_0082a218;
  return;
}



void fn_003870d4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00387104(iVar1,param_1);
  return;
}



void fn_00387104(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,&DAT_007c73fc,1);
  *puVar1 = &DAT_0082a100;
  return;
}



void fn_003870d0(undefined4 *param_1)

{
  *param_1 = &DAT_0081cd10;
  if ((int *)param_1[0x25] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x25] + 4))();
  }
  if ((int *)param_1[0x1e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1e] + 4))();
  }
  fn_0068ad5c(param_1);
  return;
}



void fn_003870a8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00385b88();
  *puVar1 = &PTR_FUN_00829fb4;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00386fdc) */

void fn_00386c88(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int **ppiVar3;
  undefined4 uVar4;
  int *local_30 [2];
  int local_28 [4];
  
  iVar1 = fn_00178f9c(param_1[0x19],param_1[0x1b]);
  uVar4 = *(undefined4 *)(iVar1 + 0x10);
  uVar2 = fn_0068897c(uVar4,(char *)&DAT_00387014);
  local_28[0] = (**(code **)(*param_1 + 0x120))(param_1);
  if (local_28[0] < 0) {
    ppiVar3 = (int **)(local_28 + 2);
  }
  else {
    ppiVar3 = (int **)local_28;
  }
  local_30[0] = (int *)0x270f;
  local_28[2] = 0;
  if (9999 < (int)*ppiVar3) {
    ppiVar3 = local_30;
  }
  fn_00688c04(uVar2,*ppiVar3,0);
  uVar2 = fn_0068897c(uVar4,(char *)&DAT_00387028);
  local_30[0] = (int *)(**(code **)(*param_1 + 0x124))(param_1);
  local_28[2] = 0;
  local_28[0] = 999;
  ppiVar3 = (int **)local_30[0];
  if ((int)local_30[0] < 0) {
    ppiVar3 = (int **)(local_28 + 2);
  }
  if (local_30[0] < (int *)0x80000000) {
    ppiVar3 = local_30;
  }
  if (999 < (int)*ppiVar3) {
    ppiVar3 = (int **)local_28;
  }
  fn_00688c04(uVar2,*ppiVar3,0);
  uVar2 = fn_0068897c(uVar4,(char *)&DAT_00387038);
  local_30[0] = (int *)(**(code **)(*param_1 + 0x128))(param_1);
  local_28[0] = 999;
  local_28[2] = 0;
  ppiVar3 = (int **)local_30[0];
  if ((int)local_30[0] < 0) {
    ppiVar3 = (int **)(local_28 + 2);
  }
  if (local_30[0] < (int *)0x80000000) {
    ppiVar3 = local_30;
  }
  if (999 < (int)*ppiVar3) {
    ppiVar3 = (int **)local_28;
  }
  fn_00688c04(uVar2,*ppiVar3,0);
  uVar2 = fn_0068897c(uVar4,(char *)&DAT_00387048);
  local_30[0] = (int *)(**(code **)(*param_1 + 300))(param_1);
  local_28[0] = 999;
  local_28[2] = 0;
  ppiVar3 = (int **)local_30[0];
  if ((int)local_30[0] < 0) {
    ppiVar3 = (int **)(local_28 + 2);
  }
  if (local_30[0] < (int *)0x80000000) {
    ppiVar3 = local_30;
  }
  if (999 < (int)*ppiVar3) {
    ppiVar3 = (int **)local_28;
  }
  fn_00688c04(uVar2,*ppiVar3,0);
  uVar2 = fn_0068897c(uVar4,(char *)&DAT_00387058);
  local_30[0] = (int *)(**(code **)(*param_1 + 0x130))(param_1);
  local_28[0] = 999;
  local_28[2] = 0;
  ppiVar3 = (int **)local_30[0];
  if ((int)local_30[0] < 0) {
    ppiVar3 = (int **)(local_28 + 2);
  }
  if (local_30[0] < (int *)0x80000000) {
    ppiVar3 = local_30;
  }
  if (999 < (int)*ppiVar3) {
    ppiVar3 = (int **)local_28;
  }
  fn_00688c04(uVar2,*ppiVar3,0);
  uVar2 = fn_0068897c(uVar4,(char *)&DAT_00387068);
  local_30[0] = (int *)(**(code **)(*param_1 + 0x134))(param_1);
  local_28[0] = 999;
  local_28[2] = 0;
  ppiVar3 = (int **)local_30[0];
  if ((int)local_30[0] < 0) {
    ppiVar3 = (int **)(local_28 + 2);
  }
  if (local_30[0] < (int *)0x80000000) {
    ppiVar3 = local_30;
  }
  if (999 < (int)*ppiVar3) {
    ppiVar3 = (int **)local_28;
  }
  fn_00688c04(uVar2,*ppiVar3,0);
  uVar2 = fn_0068897c(uVar4,(char *)&DAT_00387078);
  local_30[0] = (int *)(**(code **)(*param_1 + 0x138))(param_1);
  local_28[0] = 999;
  local_28[2] = 0;
  ppiVar3 = (int **)local_30[0];
  if ((int)local_30[0] < 0) {
    ppiVar3 = (int **)(local_28 + 2);
  }
  if (local_30[0] < (int *)0x80000000) {
    ppiVar3 = local_30;
  }
  if (999 < (int)*ppiVar3) {
    ppiVar3 = (int **)local_28;
  }
  fn_00688c04(uVar2,*ppiVar3,0);
  uVar2 = fn_0068897c(uVar4,(char *)&DAT_00387084);
  local_30[0] = (int *)(**(code **)(*param_1 + 0x13c))(param_1);
  local_28[0] = 999;
  local_28[2] = 0;
  ppiVar3 = (int **)local_30[0];
  if ((int)local_30[0] < 0) {
    ppiVar3 = (int **)(local_28 + 2);
  }
  if (local_30[0] < (int *)0x80000000) {
    ppiVar3 = local_30;
  }
  if (999 < (int)*ppiVar3) {
    ppiVar3 = (int **)local_28;
  }
  fn_00688c04(uVar2,*ppiVar3,0);
  uVar2 = fn_0068897c(uVar4,(char *)&DAT_00387094);
  local_30[0] = (int *)(**(code **)(*param_1 + 0x140))(param_1);
  local_28[0] = 999;
  local_28[1] = 0;
  ppiVar3 = (int **)local_30[0];
  if ((int)local_30[0] < 0) {
    ppiVar3 = (int **)(local_28 + 1);
  }
  if (local_30[0] < (int *)0x80000000) {
    ppiVar3 = local_30;
  }
  if (999 < (int)*ppiVar3) {
    ppiVar3 = (int **)local_28;
  }
  fn_00688c04(uVar2,*ppiVar3,0);
  return;
}


