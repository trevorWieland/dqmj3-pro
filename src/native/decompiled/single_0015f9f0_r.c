#include "single_0015f9f0_r.h"


extern undefined4 _local_40;

void fn_0015f9f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5,
                 uint param_6,int param_7,undefined4 param_8)

{
  int iVar1;
  undefined1 local_40;
  undefined1 auStack_3f [3];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  uStack_30 = param_4 | param_5 << 0x10;
  uStack_2c = param_6 | param_7 << 0x10;
  local_24 = DAT_008c0774[7];
  _local_40 = CONCAT31(SUB43((uint)*DAT_008c0774 >> 8,0),4);
  _local_40 = CONCAT13(DAT_008c0770,_local_40);
  uStack_28 = param_8;
  local_3c = param_1;
  uStack_38 = param_2;
  uStack_34 = param_3;
  iVar1 = fn_0015ff34();
  fn_00171708(iVar1 + 0x58,&local_40);
  return;
}


