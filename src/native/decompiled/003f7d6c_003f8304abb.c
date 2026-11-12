#include "003f7d6c_003f8304abb.h"



void fn_003f805c(undefined4 *param_1)

{
  *param_1 = &DAT_0083590c;
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 4))();
  }
  fn_00395750(param_1);
  fn_002feef8();
  return;
}



void fn_003f800c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0039571c();
  puVar1[3] = 0;
  *puVar1 = &DAT_0083590c;
  *(undefined1 *)(puVar1 + 4) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x11) = 0;
  puVar1[5] = 0;
  *(undefined1 *)(puVar1 + 6) = 1;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined1 *)(puVar1 + 9) = 1;
  *(undefined1 *)((int)puVar1 + 0x2a) = 0;
  return;
}


