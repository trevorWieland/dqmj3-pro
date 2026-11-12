#include "005a74bc_005a7abcba.h"



void fn_005a77fc(undefined4 param_1,undefined4 param_2,undefined1 *param_3,undefined4 *param_4)

{
  undefined4 *local_18;
  
  local_18 = param_4;
  local_18 = (undefined4 *)fn_00145b00(0x38,&DAT_00812c8c);
  if (local_18 != (undefined4 *)0x0) {
    local_18[10] = 0;
    *(undefined1 *)(local_18 + 0xb) = 0;
    local_18[0xc] = param_1;
    *(undefined1 *)(local_18 + 0xd) = 0xff;
    *(undefined1 *)((int)local_18 + 0x36) = 0;
    *(undefined1 *)((int)local_18 + 0x37) = 0;
    *local_18 = fn_005a74bc;
    local_18[1] = 0;
    local_18[2] = fn_005a76f4;
    local_18[3] = 0;
    local_18[4] = fn_005a777c;
    local_18[5] = 0;
    local_18[6] = fn_005a7750;
    local_18[7] = 0;
    local_18[8] = fn_005a77bc;
    local_18[9] = 0;
  }
  local_18[10] = param_2;
  *(undefined1 *)((int)local_18 + 0x36) = *param_3;
  fn_007998d8(param_1,&local_18);
  return;
}



void fn_005a77bc(int param_1)

{
  int iVar1;
  
  fn_00579764(*(undefined4 *)(param_1 + 0x28),
               (int)*(char *)(*(int *)(*(int *)(param_1 + 0x30) + 0x40) + 0xe0),
               (int)*(char *)(*(int *)(param_1 + 0x30) + 0x58));
  iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 100);
  if (*(char *)(iVar1 + 0x28) != '\0') {
    *(undefined1 *)(iVar1 + 0x29) = 1;
  }
  return;
}


