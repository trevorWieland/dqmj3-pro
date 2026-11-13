#include "0015f850_0015fdc4ba.h"



int fn_0015fa8c(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = fn_0019e94c(param_1,1);
  if (iVar1 == 0) {
    if ((param_1 + 0xe1000000 < 0x600000) || (param_1 == 0x1f600000)) {
      iVar1 = param_1 + 0xf9000000;
    }
    else {
      iVar1 = fn_00170868();
      if ((iVar1 == 0) || (iVar1 = fn_00170880(param_1,1), iVar1 == 0)) {
        uVar2 = fn_001708e4();
        iVar1 = fn_001708cc();
        if ((uVar2 == 0) || ((param_1 < uVar2 || (iVar1 + uVar2 <= param_1)))) {
          return 0;
        }
        if (uVar2 < 0x30000000) {
          iVar1 = param_1 + 0xc000000;
        }
        else {
          iVar1 = param_1 + 0xf0000000;
        }
        return iVar1;
      }
    }
  }
  return iVar1;
}



int fn_0015fa88(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = fn_0019e94c(param_1,1);
  if (iVar1 == 0) {
    if ((param_1 + 0xe1000000 < 0x600000) || (param_1 == 0x1f600000)) {
      iVar1 = param_1 + 0xf9000000;
    }
    else {
      iVar1 = fn_00170868();
      if ((iVar1 == 0) || (iVar1 = fn_00170880(param_1,1), iVar1 == 0)) {
        uVar2 = fn_001708e4();
        iVar1 = fn_001708cc();
        if ((uVar2 == 0) || ((param_1 < uVar2 || (iVar1 + uVar2 <= param_1)))) {
          return 0;
        }
        if (uVar2 < 0x30000000) {
          iVar1 = param_1 + 0xc000000;
        }
        else {
          iVar1 = param_1 + 0xf0000000;
        }
        return iVar1;
      }
    }
  }
  return iVar1;
}


