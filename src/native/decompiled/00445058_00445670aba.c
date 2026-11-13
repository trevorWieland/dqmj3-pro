#include "00445058_00445670aba.h"



void fn_004451cc(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_0083e5a0;
  if (param_1[4] != 0) {
    fn_002feef8(param_1[4]);
  }
  fn_0056a678(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_00445184(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_0056a644();
  *puVar1 = &PTR_LAB_0083e5a0;
  iVar2 = fn_00145b00(0x16,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_00113c58();
  }
  puVar1[4] = uVar3;
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[0x15] = 0;
  return puVar1;
}


