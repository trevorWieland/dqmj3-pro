#include "005ef524_005ef668a.h"



void fn_005ef524(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_s0;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x40);
  iVar3 = iVar2;
  iVar1 = *(int *)(iVar2 + 4);
  while (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x10) < param_2) {
      iVar1 = *(int *)(iVar1 + 0xc);
    }
    else {
      iVar3 = iVar1;
      iVar1 = *(int *)(iVar1 + 8);
    }
  }
  iVar1 = 0;
  if ((iVar3 == iVar2) || (iVar1 = *(int *)(iVar3 + 0x10), param_2 < iVar1)) {
    iVar3 = iVar2;
  }
  if (iVar3 != iVar2) {
    iVar1 = *(int *)(iVar3 + 0x14);
  }
  if (iVar3 != iVar2) {
    *(undefined4 *)(iVar1 + 8) = in_s0;
  }
  return;
}


