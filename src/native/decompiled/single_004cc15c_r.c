#include "single_004cc15c_r.h"


extern undefined4 SupervisorCall;

void fn_004cc15c(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = fn_004cc270();
  if (iVar1 != 0) goto LAB_004cc22c;
  if (*(int *)(param_1 + 0x20) == 0) {
    return;
  }
  iVar1 = fn_004f0a20(param_1 + 0x14);
  if (iVar1 == 0) {
    iVar1 = 0;
    puVar2 = (undefined4 *)&SupervisorCall;
LAB_004cc1b0:
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    iVar3 = fn_0013d5c4();
    *(undefined4 *)(iVar3 + 0x28) = 0;
    *(undefined4 *)(iVar3 + 0x2c) = 0;
    *(undefined4 *)(iVar3 + 0x30) = 0;
    *(undefined4 *)(iVar3 + 0x34) = 0;
  }
  else {
    iVar1 = iVar1 - *(int *)(param_1 + 0x24);
    puVar2 = (undefined4 *)(iVar1 + 8);
    if (puVar2 != (undefined4 *)0x0) goto LAB_004cc1b0;
  }
  fn_004f0b78(param_1 + 4,param_1 + 8,iVar1);
  iVar1 = iVar1 + 8;
  if (iVar1 == 0) {
    return;
  }
LAB_004cc22c:
  fn_0050d1a0(iVar1,param_2,0x8000,0);
  uVar4 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(iVar1 + 0x2c) = uVar4;
  uVar4 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(iVar1 + 0x34) = uVar4;
  *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined2 *)(iVar1 + 0x3c) = *(undefined2 *)(param_2 + 0x3c);
  return;
}


