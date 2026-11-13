#include "0017440c_00174900ab.h"



int fn_001746dc(int param_1)

{
  return (int)*(short *)(DAT_008994c4 + param_1 * 0x40 + 0x16);
}



undefined4 fn_001746c0(int param_1)

{
  return *(undefined4 *)(DAT_008994b0 + param_1 * 0x48 + 0x14);
}



void fn_00174670(int param_1,int param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  short *psVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  if (-1 < (int)((uint)*(byte *)(param_1 + 0x406) << 0x1b)) {
    *(short *)(param_1 + 0x2e) = (short)param_2;
    sVar1 = fn_00176e70(param_1);
    local_10 = CONCAT22(((unsigned int)(local_10) >> 16) & 0xffff,sVar1);
    param_3 = (int)*(short *)(param_1 + 0x1e);
    param_2 = (int)sVar1;
    psVar2 = (short *)(param_1 + 0x1e);
    if (param_2 < param_3) {
      psVar2 = (short *)&local_10;
    }
    *(short *)(param_1 + 0x1e) = *psVar2;
  }
  fn_00176e70(param_1,param_2,param_3,local_10);
  return;
}



void fn_00174630(int param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short *psVar2;
  undefined4 local_10;
  
  *(undefined2 *)(param_1 + 0x2c) = param_2;
  local_10 = param_4;
  sVar1 = fn_00176dc0();
  local_10 = CONCAT22(((unsigned int)(local_10) >> 16) & 0xffff,sVar1);
  psVar2 = (short *)(param_1 + 0x1c);
  if (sVar1 < *(short *)(param_1 + 0x1c)) {
    psVar2 = (short *)&local_10;
  }
  *(short *)(param_1 + 0x1c) = *psVar2;
  fn_00176dc0(param_1);
  return;
}


