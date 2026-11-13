#include "006c2968_006c2a50.h"



int fn_006c2a50(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = (*(int **)(param_1 + 4))[1];
  for (iVar3 = **(int **)(param_1 + 4); iVar3 != iVar4; iVar3 = iVar3 + 0x428) {
    sVar1 = *(short *)(iVar3 + 0x24);
    iVar2 = fn_00176dc0(iVar3 + 8);
    if (sVar1 < iVar2) {
      iVar5 = iVar5 + 1;
    }
  }
  return iVar5;
}



int fn_006c2a2c(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 < 0x40) && (iVar1 = *(int *)(param_1 + param_2 * 4 + 4), iVar1 != 0)) {
    iVar1 = (int)*(char *)(iVar1 + 0xb);
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}



int fn_006c2a08(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 < 0x40) && (iVar1 = *(int *)(param_1 + param_2 * 4 + 4), iVar1 != 0)) {
    iVar1 = (int)*(char *)(iVar1 + 10);
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}



undefined4 fn_006c2968(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  uVar2 = param_2;
  do {
    if (uVar3 < 0x40) {
      iVar1 = *(int *)(param_1 + uVar3 * 4 + 4);
      if (iVar1 != 0) {
        uVar2 = (uint)*(byte *)(iVar1 + 0xe);
      }
      if ((iVar1 != 0 && uVar2 != 0) &&
         (uVar4 = fn_0065fd34(*(undefined4 *)(iVar1 + 4),param_2,0),
         uVar2 = (uint)((ulonglong)uVar4 >> 0x20), (int)uVar4 != 0)) {
        return 1;
      }
    }
    uVar3 = uVar3 + 1;
    if (0x3f < (int)uVar3) {
      return 0;
    }
  } while( true );
}


