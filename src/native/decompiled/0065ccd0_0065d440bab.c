#include "0065ccd0_0065d440bab.h"



void fn_0065d344(int param_1)

{
  if (*(int *)(param_1 + 0xe8) != -1) {
    fn_001da39c(param_1);
    fn_0023d3f4(*(undefined4 *)(DAT_008977e0 + 0x2c),0x7577);
  }
  fn_001d9f9c(param_1);
  return;
}



int fn_0065d2f8(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_0058cc04();
  *puVar1 = &DAT_00850c50;
  *(undefined1 *)(puVar1 + 9) = 0;
  iVar2 = fn_00117074(puVar1 + 10);
  return iVar2 + -0x28;
}


