#include "0060167c_00601bc4bba.h"



void fn_00601b2c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 8);
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  if (puVar2 < puVar1) {
    iVar3 = (int)puVar1 - (int)puVar2;
    if (0 < iVar3) {
      puVar1 = puVar2 + -1;
      if (iVar3 * 0x20000000 < 0) {
        *puVar2 = 0;
        puVar1 = puVar2;
      }
      iVar3 = iVar3 >> 3;
      if (iVar3 != 0) {
        do {
          puVar1[1] = 0;
          iVar3 = iVar3 + -1;
          puVar1 = puVar1 + 2;
          *puVar1 = 0;
        } while (iVar3 != 0);
        return;
      }
    }
  }
  else {
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      *puVar2 = 0;
    }
  }
  return;
}



void fn_00601b1c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x18) * 4) = param_2;
  return;
}


