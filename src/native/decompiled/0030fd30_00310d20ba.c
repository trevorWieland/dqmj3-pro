#include "0030fd30_00310d20ba.h"



void fn_003108b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_18;
  
  iVar1 = *(int *)(param_1 + 0xb4);
  local_18 = param_4;
  if (iVar1 == 0) {
    fn_002c4304(param_1);
                    /* WARNING: Subroutine does not return */
    fn_006ba250(param_1);
  }
  if (iVar1 == 1) {
    if (*(int *)(param_1 + 0xc4) == 0) {
      local_18 = 0xff000000;
      fn_00163988(DAT_00897808,&local_18,10);
      local_18 = 0xff000000;
      fn_00163988(DAT_0089780c,&local_18,10);
    }
    else if ((*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc)) &&
            (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc))) {
      *(undefined4 *)(param_1 + 0xbc) = 2;
    }
  }
  else if (iVar1 == 2) {
    fn_00295ee0(DAT_0089783c);
  }
  iVar1 = *(int *)(param_1 + 0xb4);
  *(int *)(param_1 + 0xb8) = iVar1;
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xbc);
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
  if (iVar1 == *(int *)(param_1 + 0xbc)) {
    *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
  }
  else {
    *(undefined4 *)(param_1 + 0xc4) = 0;
  }
  return;
}



void fn_0031084c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(200,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00310a10(iVar1,param_1);
  return;
}



void fn_00310754(int param_1)

{
  if (*(int *)(param_1 + 0xb4) == 0) {
    fn_002c3d68(param_1);
    *(undefined4 *)(param_1 + 0xbc) = 1;
  }
  return;
}



undefined4 * fn_003104ac(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)fn_00145b00(0x20,&DAT_00812c8c);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 8) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x14) = 0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
  }
  *param_1 = puVar1;
  return param_1;
}


