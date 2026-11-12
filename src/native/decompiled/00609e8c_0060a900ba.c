#include "00609e8c_0060a900ba.h"



void fn_0060a5c0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xf0,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0060a8c4(iVar1,param_1);
  return;
}



void fn_0060a2c4(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0xec) = 1;
  uVar1 = fn_0022f584((char *)&DAT_0060a338,0);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar1,1,1,1,1,0,0,1);
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
  fn_00689bd0(param_1,0x48,0);
  return;
}



void fn_0060a288(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005ab93c();
  puVar1[0x41] = 0;
  *puVar1 = &DAT_0084fab8;
  *(undefined1 *)(puVar1 + 0x42) = 0xff;
  return;
}



void fn_0060a244(int param_1)

{
  char cVar1;
  
  fn_005ab938();
  cVar1 = *(char *)(param_1 + 0x100);
  if (((cVar1 == '\f' || cVar1 == '\r') || cVar1 == '\x0e') || (cVar1 != '\x0f')) {
    return;
  }
  fn_006899f4(param_1,0xde,0);
  return;
}


