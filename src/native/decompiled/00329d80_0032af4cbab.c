#include "00329d80_0032af4cbab.h"



undefined4 fn_0032ac8c(void)

{
  int iVar1;
  
  iVar1 = fn_00154ac8(0x2a);
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = fn_00154ac8(0x2a);
  if ((iVar1 == 0) || (iVar1 = fn_00154ac8(0x2c), iVar1 != 0)) {
    iVar1 = fn_00154ac8(0x2c);
    if ((iVar1 == 0) || (iVar1 = fn_00154ac8(0x2d), iVar1 != 0)) {
      iVar1 = fn_00154ac8(0x2d);
      if ((iVar1 == 0) || (iVar1 = fn_00154ac8(0x2e), iVar1 != 0)) {
        iVar1 = fn_00154ac8(0x2e);
        if ((iVar1 != 0) && (iVar1 = fn_00154ac8(0x2f), iVar1 == 0)) {
          iVar1 = fn_00163868(100);
          if (iVar1 < 0x28) {
            return 3;
          }
          if (iVar1 < 0x5f) {
            return 4;
          }
          return 5;
        }
        iVar1 = fn_00154ac8(0x2f);
        if ((iVar1 == 0) || (iVar1 = fn_00154ac8(0x30), iVar1 != 0)) {
          iVar1 = fn_00154ac8(0x30);
          if (iVar1 == 0) {
            return 0;
          }
          iVar1 = fn_00163868(100);
          if (iVar1 < 0x19) {
            return 3;
          }
          if (iVar1 < 0x4b) {
            return 4;
          }
          return 5;
        }
        iVar1 = fn_00163868(100);
        if (iVar1 < 0x1e) {
          return 3;
        }
        if (iVar1 < 0x5a) {
          return 4;
        }
        return 5;
      }
      iVar1 = fn_00163868(100);
      if (iVar1 < 0x32) {
        return 3;
      }
    }
    else {
      iVar1 = fn_00163868(100);
      if (iVar1 < 0x3c) {
        return 3;
      }
    }
  }
  else {
    iVar1 = fn_00163868(100);
    if (iVar1 < 0x46) {
      return 3;
    }
  }
  if (iVar1 < 100) {
    return 4;
  }
  return 5;
}


