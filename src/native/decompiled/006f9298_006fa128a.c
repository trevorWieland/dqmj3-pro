#include "006f9298_006fa128a.h"



void fn_006f94e0(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 6) = 0;
  return;
}



int * fn_006f941c(int *param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_18;
  
  iVar1 = param_2[1];
  iVar3 = *param_2;
  iVar2 = *param_1;
  if (iVar2 != 0 && iVar3 != 0) {
    local_18 = param_4;
    iVar2 = fn_0044ef7c(iVar2,(iVar2 - param_1[2] & 0xfffffffcU) + 0x18);
    *param_1 = iVar2;
    iVar1 = fn_0044efc8(iVar2,&local_18,iVar3,iVar1 << 2);
    *param_1 = iVar1;
    if ((uint *)param_1[3] != (uint *)0x0) {
      *(uint *)param_1[3] = (uint)(iVar1 - param_1[2]) >> 3;
    }
    param_1[2] = *param_1;
    param_1[3] = local_18;
    if (param_1[4] == 0) {
      param_1[4] = *param_1 - param_1[1] & 0xfffffffc;
    }
  }
  return param_1;
}



void fn_006f93a4(int param_1)

{
  fn_00751248(param_1 + -0x5c);
  return;
}



void fn_006f9354(int param_1)

{
  fn_007510a8(param_1 + -0x5c);
  return;
}



void fn_006f9298(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  
  piVar4 = (int *)(param_1 + -0x44);
  if (*(char *)(param_1 + -0x38) == '\0') {
    return;
  }
  iVar1 = 0;
  while (((piVar4[iVar1 + 0x24] == 0 ||
          (uVar3 = *(uint *)(piVar4[iVar1 + 0x24] + 0x1c), uVar3 < param_2)) || (param_3 < uVar3)))
  {
    do {
      iVar1 = iVar1 + 1;
      if (0xf < iVar1) goto LAB_006f9308;
    } while (0xf < iVar1);
  }
  (**(code **)(*piVar4 + 0xc))(piVar4);
LAB_006f9308:
  uVar3 = 0;
  do {
    uVar2 = piVar4[uVar3 * 3 + 0x4d];
    bVar6 = uVar2 <= param_2;
    bVar5 = param_2 == uVar2;
    if (!bVar6 || bVar5) {
      bVar6 = param_3 <= uVar2;
      bVar5 = uVar2 == param_3;
    }
    if (!bVar6 || bVar5) {
      fn_005591ac(piVar4 + uVar3 * 3 + 0x4d);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  return;
}


