#include "0043da48_0043e4ecb.h"



void fn_0043e4ec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006f6a6c();
  if (iVar1 == 3) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined1 *)(param_1 + 100) = 2;
    return;
  }
  iVar1 = fn_006f6a6c(param_1);
  if (iVar1 == 2) {
    iVar1 = fn_00292f20();
    if (*(char *)(iVar1 + 0xad1) == '\0') {
      uVar2 = fn_0022f584((char *)&DAT_0043e5b8,0);
      fn_0068974c(param_1,uVar2,0,1);
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined1 *)(param_1 + 100) = 4;
      return;
    }
    uVar2 = fn_0022f584((char *)&DAT_0043e594,0);
    fn_0068974c(param_1,uVar2,0,1);
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined1 *)(param_1 + 100) = 4;
  }
  return;
}



undefined4 fn_0043e4ac(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0022f584((char *)&DAT_0043e614,0);
  fn_0068974c(param_1,uVar1,0,1);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  return 1;
}



void fn_0043e404(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0043e434(iVar1,param_1);
  return;
}



void fn_0043e434(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  fn_00154ac8(0x342);
  fn_00154ac8(0x342);
  puVar1 = (undefined4 *)fn_0036e354(param_1,param_2);
  *puVar1 = &DAT_0083d36c;
  return;
}


