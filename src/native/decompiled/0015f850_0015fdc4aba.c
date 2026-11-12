#include "0015f850_0015fdc4aba.h"



void fn_0015f920(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  iVar1 = 0;
  if (param_3 != 0) {
    uStack_28 = DAT_008c0774[6];
    local_34 = DAT_008c0774[3];
    local_30 = DAT_008c0774[4];
    uStack_2c = DAT_008c0774[5];
    local_24 = DAT_008c0774[7];
    local_40 = (local_40 & ~((unsigned int)0xffffff << 8)) | (((unsigned int)((undefined3)((uint)*DAT_008c0774 >> 8)) & 0xffffff) << 8);
    local_40 = CONCAT31(((unsigned int)(local_40) >> 8) & 0xffffff,5);
    local_40 = local_40 & 0xffffff;
    local_3c = param_1;
    uStack_38 = param_2;
    iVar1 = fn_0015ff34();
    iVar1 = fn_00171708(iVar1 + 0x58,&local_40);
  }
  if (-1 < iVar1) {
    local_30 = DAT_008c0774[4];
    uStack_2c = DAT_008c0774[5];
    uStack_28 = DAT_008c0774[6];
    local_40 = (local_40 & ~((unsigned int)0xffffff << 8)) | (((unsigned int)((undefined3)((uint)*DAT_008c0774 >> 8)) & 0xffffff) << 8);
    local_40 = CONCAT31(((unsigned int)(local_40) >> 8) & 0xffffff,1);
    local_24 = 0;
    local_40 = CONCAT13(DAT_008c0770,(undefined3)local_40);
    local_3c = param_1;
    uStack_38 = param_2;
    local_34 = param_4;
    iVar1 = fn_0015ff34();
    fn_00171708(iVar1 + 0x58,&local_40);
  }
  return;
}


