#include "single_0015f8b0_r.h"


extern undefined4 _local_24;
extern undefined4 _local_40;

void fn_0015f8b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined2 param_8)

{
  int iVar1;
  undefined1 local_40;
  undefined1 auStack_3f [3];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined2 uStack_22;
  
  _local_40 = CONCAT31(SUB43((uint)*DAT_008c0774 >> 8,0),2);
  local_28 = param_6;
  _local_40 = CONCAT13(DAT_008c0770,_local_40);
  uStack_30 = param_5;
  uStack_2c = param_7;
  _local_24 = CONCAT22(param_8,param_4);
  local_3c = param_1;
  uStack_38 = param_3;
  local_34 = param_2;
  iVar1 = fn_0015ff34();
  fn_00171708(iVar1 + 0x58,&local_40);
  return;
}


