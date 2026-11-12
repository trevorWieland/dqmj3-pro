#include "0042874c_0042874c.h"



void fn_0042874c(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint local_30;
  uint local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  fn_0078f8ec(param_2,*param_2,param_2[1]);
  iVar1 = fn_006f7a0c(DAT_008977e0);
  piVar2 = (int *)(**(code **)(**(int **)(iVar1 + 0x50) + 0x44))();
  iVar1 = piVar2[1] - *piVar2 >> 0x1f;
  if ((piVar2[1] - *piVar2) / 0x2c + iVar1 != iVar1) {
    fn_003908bc(param_1,param_2);
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    fn_006c9184(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4),&local_30);
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    fn_00390f28(param_1,&local_24,param_2,&local_30);
    fn_00390d6c(param_1,param_2,&local_24);
    fn_0078fd10(&local_24);
    uVar3 = local_30;
    if (local_2c < local_30) {
      do {
        uVar3 = uVar3 + 2;
      } while (uVar3 != local_2c);
    }
    fn_001008c4(local_30,(int)(local_28 - local_30) >> 1,0);
  }
  return;
}


