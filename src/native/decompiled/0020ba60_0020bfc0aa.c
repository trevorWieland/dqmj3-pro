#include "0020ba60_0020bfc0aa.h"



void fn_0020ba60(int param_1)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  short local_b8 [76];
  
  uVar3 = fn_006c0028(param_1 + 4);
  *(undefined2 *)(*(int *)(param_1 + 4) + 0x22) = uVar3;
  sVar1 = *(short *)(*(int *)(param_1 + 4) + 0x20);
  sVar2 = *(short *)(*(int *)(param_1 + 4) + 0x86);
  fn_00301f50(local_b8,0x98);
  iVar5 = fn_006bf5ec((int *)(param_1 + 4),local_b8,0x4c,1,1,1,1,1);
  sVar7 = 0;
  iVar8 = 0;
  if (0 < iVar5) {
    do {
      iVar6 = 0;
      do {
        if (((&DAT_007c41a6)[iVar6] & 0xffff) == (int)local_b8[iVar8]) {
          sVar7 = sVar7 + (short)((uint)(&DAT_007c41a6)[iVar6] >> 0x10);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 10);
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar5);
  }
  if (*(int *)(*(int *)(param_1 + 4) + 0xe0) == 0) {
    sVar4 = 0;
  }
  else {
    sVar4 = fn_00203f60();
  }
  *(short *)(*(int *)(param_1 + 4) + 0x24) = sVar4 + sVar7 + sVar2 + sVar1;
  return;
}


