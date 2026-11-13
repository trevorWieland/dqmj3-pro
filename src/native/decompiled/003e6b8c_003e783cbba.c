#include "003e6b8c_003e783cbba.h"



void fn_003e7588(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xec,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003e783c(iVar1,param_1);
  return;
}



void fn_003e753c(int param_1)

{
  if (*(char *)(param_1 + 0xe8) == '\0') {
    fn_002c3d68(param_1);
    (**(code **)(**(int **)(param_1 + 0xe4) + 0xc))();
    fn_006899f4(param_1,0xef,0);
    *(undefined1 *)(param_1 + 0xe8) = 2;
  }
  return;
}


