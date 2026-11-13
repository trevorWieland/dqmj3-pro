#include "single_001d19e4_r.h"


extern undefined4 _local_18;

void fn_001d19e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_18;
  undefined3 uStack_17;
  
  if (param_5 == 0) {
    uVar1 = 0x21;
  }
  else {
    uVar1 = 0x20;
  }
  _local_18 = CONCAT31((int3)((uint)param_4 >> 8),uVar1);
  uVar2 = fn_00182988(DAT_008977e4);
  iVar3 = fn_0026a558(uVar2,&local_18);
  fn_00101a50(iVar3 + 0x1e,0xc,&DAT_008c5f54,param_2);
  fn_0033819c(iVar3,param_3);
  if (param_4 != 0) {
    fn_0017821c(iVar3 + 0x38,param_4,0x60);
    *(undefined1 *)(iVar3 + 0x98) = 1;
  }
  return;
}


