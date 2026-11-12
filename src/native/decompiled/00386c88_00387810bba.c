#include "00386c88_00387810bba.h"



void fn_0038775c(int param_1)

{
  uint uVar1;
  
  fn_003979f0();
  if (*(char *)(param_1 + 0x108) == '\0') {
    uVar1 = fn_006f6a5c(param_1);
    if ((uVar1 & 0x100000) == 0) {
      if ((uVar1 & 0x200000) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0xe8) + 0x18) = 2;
        return;
      }
    }
    else {
      *(undefined1 *)(*(int *)(param_1 + 0xe8) + 0x18) = 1;
    }
  }
  else if (*(char *)(param_1 + 0x108) == '\x01') {
    fn_006899f4(param_1,0xa0,0);
    return;
  }
  return;
}



void fn_003876bc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003877d0(iVar1,param_1);
  return;
}


