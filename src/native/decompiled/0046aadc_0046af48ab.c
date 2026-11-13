#include "0046aadc_0046af48ab.h"



void fn_0046ad20(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint local_18;
  int iStack_14;
  
  if (DAT_008b6450 != 0) {
    fn_0013d0fc(&local_18);
    uVar3 = local_18 - *(uint *)(param_1 + 0x40);
    iVar2 = iStack_14 - (*(int *)(param_1 + 0x44) + (uint)(local_18 < *(uint *)(param_1 + 0x40)));
    iVar4 = DAT_008b6450 - uVar3;
    iVar1 = -(iVar2 + (uint)(DAT_008b6450 < uVar3));
    if (iVar1 < 0 != (SBORROW4(0,iVar2) != SBORROW4(-iVar2,(uint)(DAT_008b6450 < uVar3)))) {
      *(uint *)(param_1 + 0x40) = local_18;
      *(int *)(param_1 + 0x44) = iStack_14;
      fn_0046aadc(param_1,iStack_14,iVar1,iVar4);
    }
  }
  return;
}


