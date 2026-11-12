#include "0046ef10_0046f6a8bbb.h"



undefined4 fn_0046f6a8(undefined4 param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = fn_004b616c(param_3);
  if ((*(int *)(iVar2 + 0x9c) != 0) && (*(char *)(param_2 + 0x88) == '\0')) {
    if (param_3 == 10 || param_3 == 2) {
      uVar1 = *(ushort *)(param_2 + 0x3c);
      if (param_4 == 0) {
        if (((uVar1 & 0xf) == 3) && ((uVar1 & 0x10) != 0)) {
          return 9;
        }
      }
      else if ((uVar1 & 0xf) == 2 || (uVar1 & 0xf) == 3) {
        return 3;
      }
    }
    else {
      uVar1 = *(ushort *)(param_2 + 0x3c) & 0xf;
      if (uVar1 == 2 || uVar1 == 5) {
        return 2;
      }
    }
  }
  return 1;
}


