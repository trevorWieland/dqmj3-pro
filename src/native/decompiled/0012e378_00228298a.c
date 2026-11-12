#include "0012e378_00228298a.h"



undefined4 fn_0012e378(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  int local_c;
  
  iVar1 = fn_00157f58(param_1,0xfffffffe,&local_10);
  if ((iVar1 < 0) || (iVar1 = fn_00157eb4(param_1,0xffffffff,&local_c), iVar1 < 0)) {
    uVar2 = fn_001581d0(param_1,&DAT_00148920);
    return uVar2;
  }
  (**(code **)(*DAT_00898898 + 0x68))(DAT_00898898,local_10);
  return 0;
}


