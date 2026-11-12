#include "single_0015fdc4_r.h"


extern undefined4 _local_40;

void fn_0015fdc4(undefined4 param_1,uint param_2,int param_3,undefined4 param_4,uint param_5,
                 int param_6,undefined4 param_7)

{
  int iVar1;
  undefined1 local_40;
  undefined1 auStack_3f [3];
  undefined4 local_3c;
  undefined4 uStack_38;
  uint local_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_34 = param_2 | param_3 << 0x10;
  uStack_30 = param_5 | param_6 << 0x10;
  local_28 = DAT_008c0774[6];
  uStack_24 = DAT_008c0774[7];
  _local_40 = CONCAT31(SUB43((uint)*DAT_008c0774 >> 8,0),3);
  _local_40 = CONCAT13(DAT_008c0770,_local_40);
  uStack_2c = param_7;
  local_3c = param_1;
  uStack_38 = param_4;
  iVar1 = fn_0015ff34();
  fn_00171708(iVar1 + 0x58,&local_40);
  return;
}


