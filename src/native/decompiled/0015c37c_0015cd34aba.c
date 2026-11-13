#include "0015c37c_0015cd34aba.h"



undefined4 *
fn_0015ca08(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
            undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0016a50c();
  *puVar1 = &DAT_008264f8;
  puVar1[2] = param_3;
  *(undefined1 *)(puVar1 + 3) = param_4;
  *(undefined1 *)((int)puVar1 + 0xd) = param_5;
  *(undefined1 *)((int)puVar1 + 0xe) = 0;
  *(undefined1 *)((int)puVar1 + 0xf) = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  *(undefined1 *)((int)puVar1 + 0x25) = 0;
  puVar1[1] = param_2;
  fn_0016c358(param_2,puVar1 + 6,puVar1 + 7,puVar1 + 8);
  return puVar1;
}


