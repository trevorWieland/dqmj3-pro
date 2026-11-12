#include "003db6fc_003dce7cab.h"



void fn_003dcc90(int param_1)

{
  fn_00301f50(param_1 + 0x10,0x8c);
  fn_00301f50(param_1 + 0x9c,0x460);
  return;
}



void fn_003dbc64(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined1 *)(param_1 + 8) = 0;
  *(char *)(param_1 + 10) = (char)param_3;
  *(undefined1 *)(param_1 + 9) = 0;
  fn_003db960(param_1,0xffffffff,param_3,param_4,param_4);
  fn_003dcb88(param_1,1,3,0,0);
  return;
}



void fn_003dcb88(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  fn_003db960();
  fn_003db9f0(param_1,param_2,param_3,param_4,param_5);
  if (param_2 < 0) {
    param_2 = *(int *)(param_1 + 0xcc);
  }
  else {
    *(int *)(param_1 + 0xcc) = param_2;
  }
  param_1 = param_1 + param_2 * 4;
  *(int *)(param_1 + 0xd0) = (*(int *)(param_1 + 0xd0) + 1) % 8;
  return;
}



void fn_003db9f0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + param_2 * 4;
  param_1 = param_1 + param_2 * 0x60;
  iVar1 = (*(int *)(iVar2 + 0xd8) + 1) % 8;
  *(int *)(iVar2 + 0xd8) = iVar1;
  *(undefined4 *)(param_1 + iVar1 * 0xc + 0xc) = param_3;
  *(undefined4 *)(param_1 + *(int *)(iVar2 + 0xd8) * 0xc + 0x10) = param_4;
  *(undefined4 *)(param_1 + *(int *)(iVar2 + 0xd8) * 0xc + 0x14) = param_5;
  return;
}


