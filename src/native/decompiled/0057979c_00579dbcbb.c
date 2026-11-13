#include "0057979c_00579dbcbb.h"



void fn_00579dbc(undefined4 *param_1)

{
  *param_1 = &DAT_008416a4;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[6] = 0;
  return;
}



void fn_00579d74(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 local_c;
  
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  if (puVar1 == *(undefined4 **)(param_1 + 0x14)) {
    local_c = param_2;
    fn_0079df24(param_1 + 0xc,puVar1,&local_c,*(undefined4 **)(param_1 + 0x14),param_1);
    return;
  }
  *(undefined4 **)(param_1 + 0x10) = puVar1 + 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
  }
  return;
}



void fn_00579d5c(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(short *)(param_1 + 6) = (short)param_2;
  }
  return;
}



void fn_00579d50(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(short *)(param_1 + 4) = (short)param_2;
  }
  return;
}



void fn_00579d1c(undefined4 *param_1)

{
  *param_1 = &DAT_00841690;
  fn_002feca8(param_1[2]);
  param_1[2] = 0;
  fn_002feef8(param_1);
  return;
}


