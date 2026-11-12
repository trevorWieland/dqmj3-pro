#include "single_00176e18_r.h"


extern undefined4 register0x00000054;
extern undefined4 _sStack_4;

int fn_00176e18(int param_1,short param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short *psVar2;
  undefined4 in_lr;
  undefined4 local_10;
  short sStack_4;
  short sStack_2;
  
  sStack_2 = (short)((uint)in_lr >> 0x10);
  local_10 = param_4;
  if (-1 < (int)((uint)*(byte *)(param_1 + 0x406) << 0x1b)) {
    *(short *)(param_1 + 0x3a) = *(short *)(param_1 + 0x3a) + param_2;
    sVar1 = fn_00176e70(param_1);
    local_10 = CONCAT22(((unsigned int)(local_10) >> 16) & 0xffff,sVar1);
    psVar2 = (short *)(param_1 + 0x1e);
    if (sVar1 < *(short *)(param_1 + 0x1e)) {
      psVar2 = (short *)&local_10;
    }
    *(short *)(param_1 + 0x1e) = *psVar2;
  }
  psVar2 = (short *)((int)register0x00000054 + -8);
  if (0 < (short)(*(short *)(param_1 + 0x3a) + *(short *)(param_1 + 0x2e))) {
    psVar2 = (short *)((int)register0x00000054 + -0xc);
  }
  _sStack_4 = CONCAT22(sStack_2,9999);
  if (9999 < *psVar2) {
    psVar2 = &sStack_4;
  }
  return (int)*psVar2;
}


