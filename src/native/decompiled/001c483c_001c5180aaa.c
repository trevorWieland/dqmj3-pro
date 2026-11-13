#include "001c483c_001c5180aaa.h"



undefined4 fn_001c483c(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fn_006f7a84(DAT_008977e0);
  iVar1 = fn_006aab38();
  if (iVar1 == 0) {
    iVar1 = fn_006f7a84(DAT_008977e0);
    fVar4 = *(float *)(iVar1 + 0x20) - *(float *)(param_1 + 0x20);
    fVar3 = *(float *)(iVar1 + 0x28) - *(float *)(param_1 + 0x28);
    iVar1 = fn_006f7a84(DAT_008977e0);
    fVar2 = *(float *)(iVar1 + 0x24) - *(float *)(param_1 + 0x24);
    if ((((int)(fVar4 * fVar4 + 0.0 + fVar3 * fVar3) < 0x43610000) && ((uint)fVar2 < 0xc1200001)) &&
       ((int)fVar2 < 0x42480000)) {
      return 1;
    }
  }
  return 0;
}


