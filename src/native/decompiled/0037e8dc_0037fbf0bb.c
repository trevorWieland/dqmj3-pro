#include "0037e8dc_0037fbf0bb.h"



undefined4 fn_0037fbf0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x98) != -1) {
    piVar1 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 0x8c));
    (**(code **)(*piVar1 + 0xc))(piVar1);
    (**(code **)(*piVar1 + 0x14))(piVar1);
    if ((float)piVar1[9] != 0.0) {
      return 0;
    }
  }
  return 1;
}



void fn_0037fb14(int param_1)

{
  if (*(int **)(param_1 + 0xb8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xb8) + 0x18))();
    if (*(int **)(param_1 + 0xb8) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xb8) + 4))();
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
  }
  if (*(int *)(param_1 + 0x98) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0x8c));
    *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x94) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 0x8c));
    *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x90) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 0x8c));
  }
  return;
}


