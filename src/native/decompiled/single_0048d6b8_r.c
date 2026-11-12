#include "single_0048d6b8_r.h"


extern undefined4 _local_20;

undefined4 fn_0048d6b8(int *param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined2 local_20;
  ushort uStack_1e;
  undefined4 local_1c;
  int local_18;
  
  if (*param_2 == 0) {
    *param_2 = 0x2390;
    while (iVar2 = (**(code **)(*param_1 + 8))(param_1,param_2), iVar2 == 0) {
      uVar1 = *param_2;
      *param_2 = uVar1 + 1;
      if (0x23f0 < (ushort)(uVar1 + 1)) {
        *param_2 = 0;
        return 0;
      }
    }
  }
  else {
    local_1c = 0;
    _local_20 = CONCAT22(*param_2 << 8 | *param_2 >> 8,0x208);
    local_18 = 0;
    iVar2 = fn_0052a30c(&local_18,param_1[2],&local_20,8);
    if (iVar2 < 0) {
      local_18 = fn_00529b0c();
    }
    if (local_18 != 0) {
      return 0;
    }
    if (*param_2 == 0) {
      local_18 = 0;
      iVar2 = fn_0052853c(&local_18,param_1[2],&local_20,8);
      if (iVar2 < 0) {
        local_18 = fn_00529b0c();
      }
      if (local_18 < 0) {
        return 0;
      }
      *param_2 = uStack_1e << 8 | uStack_1e >> 8;
    }
  }
  return 1;
}


