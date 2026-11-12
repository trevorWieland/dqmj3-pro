#include "00614e1c_00614e1c.h"



void fn_00614e1c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x14);
  if (*piVar3 == -1) {
    fn_00693168(*(undefined4 *)(DAT_008977e0 + 0x40));
    fn_00697d48(DAT_008977e0);
    uVar2 = fn_00615ee4();
    fn_0010706c(uVar2,&LAB_001b5788,2);
  }
  else {
    iVar1 = fn_006f6e40();
    if (iVar1 != 1) {
      if (iVar1 == 2) {
                    /* WARNING: Subroutine does not return */
        fn_0011dda8();
      }
      if (iVar1 != 3) goto LAB_0061540c;
      if (*(char *)(*(int *)(*(int *)(DAT_008977e0 + 0x40) + 4) + 0x20) != '\x01') {
                    /* WARNING: Subroutine does not return */
        fn_0011dda8();
      }
    }
    *piVar3 = -1;
  }
LAB_0061540c:
  (**(code **)(*DAT_00897808 + 8))(DAT_00897808,1);
                    /* WARNING: Could not recover jumptable at 0x00615440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_0089780c + 8))(DAT_0089780c,1);
  return;
}


