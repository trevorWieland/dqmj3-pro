#include "single_0048dd0c_r.h"


extern undefined4 stack0xffffffd0;

undefined4
fn_0048dd0c(int *param_1,undefined4 param_2,uint param_3,uint *param_4,int *param_5,uint param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int local_34;
  undefined4 local_30;
  ushort uStack_2e;
  uint local_2c;
  
  local_2c = 0;
  local_30 = 0x208;
  DAT_008e6a90 = DAT_008e6a90 + 1;
  uVar1 = 0;
  if ((param_6 & 1) != 0) {
    uVar1 = 4;
  }
  uVar3 = 0;
  if (param_3 < 0x2001) {
    iVar2 = fn_0052906c();
  }
  else {
    iVar2 = fn_0052b914(&local_34,param_1[2],param_2,param_3,uVar1,&stack0xffffffd0,8);
  }
  if (iVar2 < 0) {
    local_34 = fn_00529b0c();
  }
  if (local_34 < 0) {
    if (local_34 == -0x26) {
      (**(code **)(*param_1 + 0x14))(param_1);
      (**(code **)(*param_1 + 4))(param_1);
      uVar3 = 4;
    }
    else if (local_34 == -8) {
      uVar3 = 4;
    }
    else if (local_34 == -6) {
      uVar3 = 2;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    DAT_008e6a8c = DAT_008e6a8c + 1;
    if (param_4 != (uint *)0x0) {
      *param_4 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8
                 | local_2c >> 0x18;
      *(ushort *)(param_4 + 1) = uStack_2e << 8 | uStack_2e >> 8;
    }
    if (param_5 != (int *)0x0) {
      *param_5 = local_34;
    }
  }
  (*DAT_008b64b0)(uVar3,param_2,param_3,param_4,param_5);
  return uVar3;
}


