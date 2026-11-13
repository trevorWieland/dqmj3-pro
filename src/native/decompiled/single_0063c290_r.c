#include "single_0063c290_r.h"


extern undefined4 _local_18;

int fn_0063c290(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  undefined1 local_18;
  undefined3 uStack_17;
  
  iVar3 = 0;
  _local_18 = CONCAT31((int3)((uint)param_4 >> 8),4);
  pbVar2 = (byte *)(*(int *)(param_1 + 0xc) + 0x120);
  if (*pbVar2 != 0) {
    do {
      iVar1 = fn_0064f50c(&local_18,(int)*(short *)(pbVar2 + iVar3 * 2 + 4));
      if (iVar1 != 0) {
        return (int)*(char *)(param_3 + 3);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*pbVar2);
  }
  return (int)*(char *)(param_3 + 2);
}


