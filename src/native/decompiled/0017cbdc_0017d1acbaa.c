#include "0017cbdc_0017d1acbaa.h"



/* WARNING: Removing unreachable block (ram,0x0017cf34) */

void fn_0017cee0(int param_1,int param_2)

{
  param_1 = param_1 + param_2 * 4;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  fn_00170704(&DAT_008f34f0);
  *(undefined4 *)(&DAT_008f34d0 + param_2 * 4) = 0;
  *(undefined4 *)(&DAT_008f34d8 + param_2 * 4) = 0;
  fn_0017d024(&DAT_008ef5bc,param_2,(int)*(char *)(param_2 + 0x8f34ec));
  fn_001707b4(&DAT_008f34f0);
  return;
}


