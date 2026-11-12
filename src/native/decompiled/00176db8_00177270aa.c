#include "00176db8_00177270aa.h"



int fn_00176dc0(int param_1)

{
  short *psVar1;
  short local_c [6];
  
  local_c[0] = *(short *)(param_1 + 0x38) + *(short *)(param_1 + 0x2c);
  psVar1 = local_c + 2;
  if (0 < local_c[0]) {
    psVar1 = local_c;
  }
  local_c[2] = 1;
  local_c[4] = 9999;
  if (9999 < *psVar1) {
    psVar1 = local_c + 4;
  }
  return (int)*psVar1;
}



int fn_00176db8(undefined4 param_1,int param_2)

{
  short *psVar1;
  short asStack_c [6];
  
  asStack_c[0] = *(short *)(param_2 + 0x38) + *(short *)(param_2 + 0x2c);
  psVar1 = asStack_c + 2;
  if (0 < asStack_c[0]) {
    psVar1 = asStack_c;
  }
  asStack_c[2] = 1;
  asStack_c[4] = 9999;
  if (9999 < *psVar1) {
    psVar1 = asStack_c + 4;
  }
  return (int)*psVar1;
}


