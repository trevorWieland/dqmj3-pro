#include "001a3740_001a3c8caaa.h"



undefined4 fn_001a3740(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(param_1 + 0x30);
  uVar2 = *puVar4;
  iVar3 = 1;
  if (1 < *(int *)(param_1 + 0x2c)) {
    do {
      if ((param_2 - param_1) + -0x60 >> 3 <= (int)puVar4[iVar3 * 2 + 1]) {
        return uVar2;
      }
      iVar1 = iVar3 * 2;
      iVar3 = iVar3 + 1;
      uVar2 = puVar4[iVar1];
    } while (iVar3 < *(int *)(param_1 + 0x2c));
  }
  return uVar2;
}


