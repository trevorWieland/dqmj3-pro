#include "003b1e5c_003b237cbb.h"



int fn_003b237c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  iVar3 = (int)((longlong)(int)uVar2 * -0x4de9bd37 + ((ulonglong)uVar2 << 0x20) >> 0x20);
  iVar3 = (iVar3 >> 6) - (iVar3 >> 0x1f);
  if (0 < iVar3) {
    param_1 = *(int *)(param_1 + 0x10);
  }
  iVar1 = 0;
  if (0 < iVar3) {
    do {
      if (*(short *)(param_1 + iVar1 * 0x5c) == param_2) {
        return param_1 + iVar1 * 0x5c;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar3);
  }
  return 0;
}



int fn_003b22f8(int param_1,short param_2,short param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = (int)param_2;
  iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  iVar1 = iVar3 >> 0x1f;
  iVar3 = iVar3 / 0x28 + iVar1;
  iVar5 = iVar3;
  while( true ) {
    if (iVar3 != iVar1) {
      iVar5 = *(int *)(param_1 + 4);
    }
    uVar4 = 0;
    if (iVar3 == iVar1) break;
    while (*(short *)(iVar5 + uVar4 * 0x28) != iVar2) {
      uVar4 = uVar4 + 1;
      if ((uint)(iVar3 - iVar1) <= uVar4) goto LAB_003b2364;
    }
    iVar2 = (int)(short)((short)iVar2 + param_3);
    if (iVar2 < 1) {
      return 0;
    }
  }
LAB_003b2364:
  if (iVar2 < 1) {
    return 0;
  }
  return iVar2;
}


