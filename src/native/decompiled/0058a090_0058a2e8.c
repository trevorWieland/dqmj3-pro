#include "0058a090_0058a2e8.h"



void fn_0058a2e8(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x48))();
  if (iVar1 != 0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x44))(*(int **)(param_1 + 0x14),6,4,0);
    *(undefined4 *)(param_1 + 0xc) = 5;
  }
  return;
}



void fn_0058a254(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 local_18 [12];
  
  (**(code **)(**(int **)(param_1 + 0x14) + 0x44))(*(int **)(param_1 + 0x14),6,4,0);
  piVar2 = *(int **)(param_1 + 0x14);
  (**(code **)(*(int *)(param_1 + 0x58) + 0x10))(param_1 + 0x58,0);
  iVar1 = (**(code **)(*piVar2 + 0x28))(piVar2,local_18);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(param_1 + 0x58) + 0x1c))(param_1 + 0x58,0xffffffff);
    *(undefined4 *)(param_1 + 0xc) = 5;
  }
  return;
}



void fn_0058a1d0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(*(int *)param_1[5] + 0x44))((int *)param_1[5],6,4,0);
  (**(code **)(*(int *)param_1[5] + 0x94))();
  iVar1 = (**(code **)(param_1[0x16] + 0x14))(param_1 + 0x16,param_1[5]);
  if (iVar1 == 0) {
    return;
  }
  uVar2 = (**(code **)(param_1[0x16] + 0xc))(param_1 + 0x16);
                    /* WARNING: Could not recover jumptable at 0x0058a248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,uVar2);
  return;
}



void fn_0058a090(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  
  iVar1 = (**(code **)(param_1[0x16] + 0xc))(param_1 + 0x16);
  (**(code **)(param_1[0x16] + 0x10))(param_1 + 0x16,iVar1 + -1);
  uVar2 = (**(code **)(param_1[0x16] + 0xc))(param_1 + 0x16);
  (**(code **)(param_1[0x16] + 0x10))(param_1 + 0x16,uVar2);
  iVar1 = (**(code **)(param_1[0x16] + 0xc))(param_1 + 0x16);
  (**(code **)(param_1[0x16] + 0x10))(param_1 + 0x16,iVar1 + 1);
  piVar3 = (int *)param_1[5];
  (**(code **)(*piVar3 + 0x94))();
  iVar1 = (**(code **)(*piVar3 + 0x1d4))(piVar3,local_30,local_24,local_18);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(param_1[0x16] + 0xc))(param_1 + 0x16);
    (**(code **)(*param_1 + 0x20))(param_1,iVar1 + 1);
    return;
  }
  iVar1 = (**(code **)(*(int *)param_1[5] + 0x154))();
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 3;
  }
  (**(code **)(*(int *)param_1[5] + 0x44))((int *)param_1[5],uVar2,4,0);
  return;
}


