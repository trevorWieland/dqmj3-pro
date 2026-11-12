#include "single_002965a8_r.h"


extern undefined4 _local_20;

undefined4 fn_002965a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_20;
  undefined3 uStack_1f;
  
  uStack_1f = (undefined3)((uint)param_4 >> 8);
  local_20 = 0x20;
  uVar1 = fn_0017484c(DAT_008977e4);
  uVar1 = fn_00175dcc(uVar1,&local_20);
  iVar2 = fn_002969c0(uVar1,param_1,param_2);
  if (iVar2 != 0) {
    _local_20 = CONCAT31(uStack_1f,0x22);
    uVar1 = fn_0017484c(DAT_008977e4);
    uVar1 = fn_00175d88(uVar1,&local_20);
    iVar2 = fn_002969c0(uVar1,param_1,param_3);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}


