#include "00400f54_00401b70aba.h"



void fn_00400fe0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x18,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00401010(iVar1,param_1);
  return;
}



void fn_00400fc0(int param_1)

{
  fn_0039536c();
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}


