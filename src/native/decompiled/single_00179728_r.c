#include "single_00179728_r.h"


extern undefined4 _local_18;

void fn_00179728(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  undefined1 local_18;
  undefined3 uStack_17;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar2 = (int)*(char *)(param_1 + 0x35);
    uVar4 = iVar2 - 0x10;
    bVar5 = uVar4 < 4;
    if (!bVar5) {
      uVar4 = iVar2 - 0x18;
    }
    if ((bVar5 || uVar4 < 4) || (iVar2 == 0x20 || iVar2 == 0x22)) {
      uVar1 = 0x20;
    }
    else {
      uVar1 = 0x21;
    }
    _local_18 = CONCAT31((int3)((uint)param_4 >> 8),uVar1);
    uVar3 = fn_0017484c(DAT_008977e4);
    iVar2 = fn_00175dcc(uVar3,&local_18);
    if (*(char *)(param_1 + 0x86) == '\0') {
      iVar2 = *(int *)(param_1 + 0x50);
    }
    fn_0018911c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(iVar2 + 4));
    fn_001880a4(*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  *(undefined1 *)(param_1 + 0x86) = 0;
  return;
}


