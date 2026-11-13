#include "0044f70c_0044fc80bba.h"



int fn_0044fc38(int param_1)

{
  int iVar1;
  
  if (param_1 < 0x20) {
    if (param_1 < 0x18) {
      iVar1 = 0x6c8da500;
    }
    else {
      iVar1 = 0x5109d500;
      param_1 = param_1 + -0x18;
    }
    param_1 = param_1 + iVar1;
  }
  else {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}



uint fn_0044fbfc(uint param_1)

{
  if (param_1 < 0x21) {
    param_1 = param_1 + 0x20;
  }
  else if (param_1 + 0xaef62b00 < 0x28) {
    param_1 = param_1 + 0xaef62b18;
  }
  else {
    param_1 = param_1 + 0x93725b00;
    if (0x40 < param_1) {
      param_1 = 0xffffffff;
    }
  }
  return param_1;
}


