#include "004cac58_004cb840bbab.h"



int fn_004cb5d8(int param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_78 [88];
  undefined1 auStack_20 [8];
  
  iVar1 = 0;
  if (*(char *)(param_1 + 0x558) != '\0') {
    fn_004ed440(auStack_20,param_2 + 0x5c8);
    iVar1 = fn_006d6d58(auStack_20);
    if (iVar1 == 0) {
      iVar1 = fn_004cb4e0(param_1,auStack_78,*(undefined4 *)(param_2 + 0x5c0));
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = fn_004cb3a4(param_1,param_2,*(undefined4 *)(param_2 + 0x5b8),auStack_78,iVar1);
    }
    else {
      iVar1 = fn_004cb750(param_1,param_2,*(undefined4 *)(param_2 + 0x5b8),auStack_20,
                           *(undefined1 *)(param_2 + 0x5d4));
    }
    if (-1 < iVar1) {
      return 0;
    }
  }
  return iVar1;
}


