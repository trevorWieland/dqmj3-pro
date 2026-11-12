#include "0053138c_00531ca8ba.h"



void fn_00531850(int param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  uint in_fpscr;
  float fVar3;
  
  iVar1 = *(int *)(param_1 + 0xdc);
  fVar3 = (float)VectorSignedToFloat(*(undefined4 *)(param_2 + 4),(byte)(in_fpscr >> 0x16) & 3);
  pfVar2 = (float *)(iVar1 + (uint)*(ushort *)(iVar1 + 0x558));
  fVar3 = 1.0 - *(float *)(DAT_008c3568 +
                          (*(int *)(param_2 + 0x15c) * (int)pfVar2[2] + (int)(fVar3 * pfVar2[1]) &
                          0x7fU) * 4) * *pfVar2;
  if ((*(ushort *)(iVar1 + 0x54e) & 2) != 0) {
    *(float *)(param_2 + 0xb4) = fVar3;
  }
  if ((*(ushort *)(iVar1 + 0x54e) & 4) != 0) {
    *(float *)(param_2 + 0xb8) = fVar3;
  }
  return;
}


