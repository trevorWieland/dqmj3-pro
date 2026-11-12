#include "single_00296ae0_r.h"


extern undefined4 _local_10;

undefined4 fn_00296ae0(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_10;
  undefined3 uStack_f;
  
  _local_10 = CONCAT31((int3)((uint)param_4 >> 8),0x22);
  uVar1 = fn_0017484c(DAT_008977e4);
  iVar2 = fn_00175d88(uVar1,&local_10);
  uVar1 = 0;
  if (iVar2 != 0) {
    iVar2 = fn_001748ec();
    if (((iVar2 - 0x10U < 8) || ((int)param_1 - 0x10U < 8)) &&
       ((7 < iVar2 - 0x10U || ((7 < (int)param_1 - 0x10U || (param_1 != iVar2)))))) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


