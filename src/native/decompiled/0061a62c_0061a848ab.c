#include "0061a62c_0061a848ab.h"



int fn_0061a7a4(short param_1,short param_2)

{
  short *psVar1;
  short local_10 [2];
  short local_c [4];
  short local_4 [2];
  
  psVar1 = local_10;
  local_4[0] = param_1 + (((short)((param_2 * 0x32) / 100) + (param_2 >> 0xf)) -
                         (short)((longlong)(param_2 * 0x32) * 0x51eb851f >> 0x3f)) + 0x32;
  if (0 < local_4[0]) {
    psVar1 = local_4;
  }
  local_10[0] = 1;
  local_c[0] = 9999;
  if (9999 < *psVar1) {
    psVar1 = local_c;
  }
  return (int)*psVar1;
}


