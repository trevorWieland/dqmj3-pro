#include "00445058_00445670bbb.h"



void fn_00445670(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x1c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_004456a0(iVar1,param_1);
  return;
}



void fn_00445654(int param_1)

{
  fn_0056a4bc();
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



undefined4 * fn_004455f0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = &DAT_0083e5e0;
  fn_00301f50(puVar1 + 2,0xe08);
  *(undefined1 *)(puVar1 + 900) = 0;
  *(undefined1 *)((int)puVar1 + 0xe11) = 0;
  *(undefined1 *)((int)puVar1 + 0xe12) = 0;
  *(undefined1 *)((int)puVar1 + 0xe13) = 1;
  *(undefined1 *)(puVar1 + 0x385) = 1;
  *(undefined1 *)((int)puVar1 + 0xe15) = 0;
  puVar1[0x386] = 0;
  return puVar1;
}


