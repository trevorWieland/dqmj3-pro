#include "003c3c74_003c4a5cbb.h"



void fn_003c4a5c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x70,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003c4b98(iVar1,param_1);
  return;
}



undefined4 fn_003c49f0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xe3);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008969a8) goto LAB_003c4a38;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003c4a38:
  *(undefined4 **)(param_1 + 100) = puVar1;
  fn_00689930(param_1,0xe3,0);
  return 1;
}



void fn_003c49b0(undefined4 *param_1)

{
  *param_1 = &DAT_00830288;
  if (param_1[0x1b] != 0) {
    fn_002e3bbc();
    fn_002feef8();
  }
  fn_0068ad5c(param_1);
  fn_002feef8();
  return;
}


