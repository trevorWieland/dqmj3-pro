#include "004f96d4_004fa260bba.h"



undefined4 fn_004fa100(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x70) == 0) {
    *(undefined1 *)(param_1 + 0x58) = 0;
    if (param_2 != 0) {
      *(int *)(param_1 + 0x70) = param_2;
      fn_004ed050(param_2);
    }
    uVar1 = 1;
  }
  return uVar1;
}


