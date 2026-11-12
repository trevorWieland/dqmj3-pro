#include "003e93d0_003ebc7cba.h"



void fn_003e9fec(undefined4 *param_1)

{
  *param_1 = &DAT_008339f8;
  if (param_1[0x1c] != 0) {
    fn_00289ca8();
    fn_002feef8();
  }
  fn_0068ad5c(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_003e9fa4(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_008339f8;
  puVar1[0x19] = *(undefined4 *)(param_2 + 8);
  iVar2 = fn_00145b00(4,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_00289c84();
  }
  puVar1[0x1c] = uVar3;
  return puVar1;
}


