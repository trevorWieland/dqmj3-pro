#include "00423218_00423c94ab.h"



void fn_004237c8(int param_1)

{
  if (*(int *)(param_1 + 0x20) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x1c) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x18) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 0x14));
  }
  return;
}



void fn_00423400(int param_1)

{
  if (*(int *)(param_1 + 0x74) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0x68));
    *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  }
  fn_0016a43c(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
                    /* WARNING: Subroutine does not return */
  fn_001482f4(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
}


