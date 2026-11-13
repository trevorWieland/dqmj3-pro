#include "00400f54_00401b70bba.h"



void fn_0040174c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc0,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00401b70(iVar1,param_1);
  return;
}



void fn_00401534(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xbc) == 0) {
    iVar1 = fn_006f6a6c(param_1);
    if (iVar1 != 0) {
      if (iVar1 == 2) {
        *(undefined4 *)(param_1 + 0xbc) = 0;
        *(undefined1 *)(param_1 + 0xb8) = 1;
        return;
      }
      if (iVar1 == 3) {
                    /* WARNING: Subroutine does not return */
        fn_006ba250(param_1);
      }
    }
  }
  else if ((*(int *)(param_1 + 0xbc) == 1) && (iVar1 = fn_006f6a6c(param_1), iVar1 == 1)) {
                    /* WARNING: Subroutine does not return */
    fn_006ba250(param_1);
  }
  return;
}


