#include "006e9a20_006e9facbbb.h"



int fn_006e9fac(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)*param_1;
  iVar1 = fn_00153d6c();
  return (int)*(char *)(iVar2 + iVar1 * 0x10 + 0xc);
}



int fn_006e9f64(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 4);
  iVar2 = 0;
  uVar3 = 0;
  if (*(int *)(iVar4 + 8) - *(int *)(iVar4 + 4) >> 3 != 0) {
    do {
      iVar1 = uVar3 * 8;
      uVar3 = uVar3 + 1;
      if (*(char *)(*(int *)(iVar4 + 4) + iVar1) != '\0') {
        iVar2 = iVar2 + 1;
      }
    } while (uVar3 < (uint)(*(int *)(iVar4 + 8) - *(int *)(iVar4 + 4) >> 3));
  }
  return iVar2;
}


