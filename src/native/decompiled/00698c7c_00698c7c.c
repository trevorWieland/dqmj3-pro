#include "00698c7c_00698c7c.h"



void fn_00698c7c(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  if (*(char *)(param_1 + 0x170) != '\0') {
    fn_00300620(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x60) * 4)
                );
  }
  pcVar2 = *(code **)(param_1 + 0x178);
  if ((pcVar2 != (code *)0x0) ||
     ((*(uint *)(param_1 + 0x17c) & 1) != 0 && *(uint *)(param_1 + 0x17c) != 0)) {
    if ((*(uint *)(param_1 + 0x17c) & 1) != 0) {
      pcVar2 = *(code **)(pcVar2 + *(int *)(param_1 + ((int)*(uint *)(param_1 + 0x17c) >> 1)));
    }
    iVar1 = (*pcVar2)();
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x174) = 0;
      *(undefined4 *)(param_1 + 0x178) = 0;
      *(undefined4 *)(param_1 + 0x17c) = 0;
    }
  }
  (**(code **)(**(int **)(param_1 + 0x30) + 8))();
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x80) * 4) + 0x18
              ))();
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x70) * 4) + 0x18
              ))();
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x74) * 4) + 0x18
              ))();
  (**(code **)(**(int **)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                         *(int *)(DAT_008977e0 + 0x90) * 4) + 0x18))();
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 100) * 4) + 0x18)
  )();
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x60) * 4) + 0x18
              ))();
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0xa0) * 4) + 0x18
              ))();
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x78) * 4) + 0x18
              ))();
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x88) * 4) + 0x18
              ))();
  fn_00693484(*(undefined4 *)(param_1 + 0x40));
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x9c) * 4) + 0x18
              ))();
  if (*(char *)(param_1 + 0x170) != '\0') {
    fn_0030080c(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x60) * 4)
                );
  }
  fn_0023d448(*(undefined4 *)(param_1 + 0x2c));
  fn_00226fe4(*(undefined4 *)(param_1 + 0x38));
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x8c) * 4) + 0x18
              ))();
  fn_003b68c8(*(undefined4 *)(param_1 + 0x54));
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x18))();
    iVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0x2c))();
    if (iVar1 != 0) goto LAB_00698ef4;
  }
  if (*(int *)(param_1 + 200) == 0) {
    (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x84) * 4) +
                0x18))();
  }
LAB_00698ef4:
  (**(code **)(**(int **)(param_1 + 0xc) + 0x10))();
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x98) * 4) + 0x18
              ))();
  fn_002fe864(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x60) * 4));
  (**(code **)(**(int **)(param_1 + 8) + 0x10))();
  fn_0023d964(*(undefined4 *)(param_1 + 0x2c),1);
  (**(code **)(*DAT_00897808 + 8))(DAT_00897808,1);
  (**(code **)(*DAT_0089780c + 8))(DAT_0089780c,1);
  (**(code **)(*DAT_00897810 + 8))(DAT_00897810,1);
  fn_0015a4c4(*(undefined4 *)(param_1 + 0x3c));
  return;
}


