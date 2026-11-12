#include "001ccea8_001cd614b.h"



uint * fn_001cd614(uint *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = 0;
  if ((int)(param_1[4] - param_1[3]) >> 2 != 0) {
    do {
      piVar4 = (int *)(param_1[3] + uVar3 * 4);
      piVar1 = (int *)*piVar4;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      *piVar4 = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)((int)(param_1[4] - param_1[3]) >> 2));
  }
  uVar2 = param_1[3];
  uVar3 = uVar2;
  if (param_1[4] < uVar2) {
    do {
      uVar3 = uVar3 + 4;
    } while (uVar3 != param_1[4]);
  }
  fn_001008c4(uVar2,(int)(param_1[5] - uVar2) >> 2,0);
  uVar2 = *param_1;
  uVar3 = uVar2;
  if (param_1[1] < uVar2) {
    do {
      uVar3 = uVar3 + 0xc;
    } while (uVar3 != param_1[1]);
  }
  fn_001008c4(uVar2,(int)(param_1[2] - uVar2) / 0xc,0);
  return param_1;
}


