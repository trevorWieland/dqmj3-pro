#include "0012e254_004ad318aa.h"



undefined4 fn_0012e254(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined1 auStack_14 [12];
  
  iVar1 = fn_00157fb0(param_1,0xfffffffe,&local_18);
  if (iVar1 < 0) {
    uVar2 = fn_001581d0(param_1,&DAT_00148920);
    return uVar2;
  }
  fn_00148924(auStack_14,param_1,0xffffffff);
  uVar2 = (**(code **)(*DAT_00898898 + 0x4c))(DAT_00898898,local_18,auStack_14);
  fn_001580cc(param_1,uVar2);
  return 1;
}


