#include "single_0046d5f8_r.h"


extern undefined4 _local_10;

void fn_0046d5f8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short local_10;
  undefined2 uStack_e;
  
  if (*(int *)(param_2 + 0x14) == *(int *)(param_2 + 0x10)) {
    sVar1 = 0;
  }
  else {
    sVar1 = (short)*(int *)(param_2 + 0x14) - (short)*(int *)(param_2 + 0x10);
  }
  _local_10 = CONCAT22((short)((uint)param_4 >> 0x10),sVar1);
  fn_0015ef4c(param_1,&local_10,2);
  if (*(int *)(param_2 + 0x14) != *(int *)(param_2 + 0x10)) {
    fn_0015ef4c(param_1);
  }
  return;
}


