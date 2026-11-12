#include "single_001f3494_r.h"


extern undefined4 register0x00000054;

void fn_001f3494(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int local_14;
  
  piVar1 = &local_14;
  if (*(int *)(DAT_00891220 + 4) == 0) {
    if (param_2 == 1) {
      uVar5 = *(undefined4 *)(DAT_00897804 + 0x14);
      if (*(int *)(DAT_00891220 + 8) != 0) {
        fn_00229a50(uVar5,(int)*(short *)(DAT_00891220 + 0xb0),(int)*(short *)(DAT_00891220 + 0xb4)
                    );
        return;
      }
      iVar4 = 0;
      do {
        fn_00229a50(uVar5,(int)(short)(&DAT_007bd95c)[iVar4 * 2],
                     (int)(short)(&DAT_007bd95e)[iVar4 * 2]);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
    }
  }
  else if (*(int *)(DAT_00891220 + 4) == 1) {
    if (param_2 != 1) {
      fn_0025bdc4();
      return;
    }
    iVar2 = *(int *)(*(int *)(DAT_00897804 + 8) + 4);
    local_14 = 9999999;
    iVar4 = *(int *)(iVar2 + 0xcc) << 1;
    if (iVar4 < 0) {
      piVar3 = (int *)((int)register0x00000054 + -8);
    }
    else {
      piVar3 = (int *)((int)register0x00000054 + -0xc);
    }
    if (*piVar3 < 10000000) {
      if (iVar4 < 0) {
        piVar1 = (int *)((int)register0x00000054 + -8);
      }
      else {
        piVar1 = (int *)((int)register0x00000054 + -0xc);
      }
    }
    *(int *)(iVar2 + 0xcc) = *piVar1;
    return;
  }
  return;
}


