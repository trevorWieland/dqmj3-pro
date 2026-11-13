#include "0036c140_0036c924ba.h"



void fn_0036c648(int param_1,int param_2)

{
  if (param_2 < 3) {
    param_2 = 3;
  }
  *(int *)(param_1 + 0x2c) = param_2;
  return;
}



void fn_0036c5f4(int param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                 undefined1 param_9)

{
  fn_0036c140();
  *(undefined1 *)(param_1 + 10) = param_3;
  *(undefined1 *)(param_1 + 8) = param_4;
  *(undefined1 *)(param_1 + 9) = param_5;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x49) = param_6;
  *(undefined1 *)(param_1 + 0x50) = param_7;
  *(undefined1 *)(param_1 + 0x51) = param_8;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0x30) = param_9;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  return;
}



void fn_0036c5c4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x6c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0036c678(iVar1,param_1);
  return;
}


