#include "001a4a80_001a7410b.h"



void fn_001a7410(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  uint local_38;
  int *local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  
  iVar5 = *(int *)(param_1 + 8);
  while (param_2 < iVar5) {
    iVar5 = iVar5 + -1;
    local_38 = 0x1000001;
    local_34 = (int *)0x0;
    iVar3 = *(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 0x14 + -0x14;
    fn_0019e864(&local_38,iVar3);
    local_30 = *(undefined4 *)(iVar3 + 8);
    local_2c = *(int *)(iVar3 + 0xc);
    local_28 = *(undefined4 *)(iVar3 + 0x10);
    if (local_38 != 0x1000001) {
      piVar4 = (int *)(param_1 + 0x6c);
      local_2c = *(int *)(param_1 + 100) + -1;
      if (*(uint *)(param_1 + 0x74) <= *(uint *)(param_1 + 0x70)) {
        iVar3 = *(uint *)(param_1 + 0x70) << 1;
        if (iVar3 == 0) {
          iVar3 = 4;
        }
        iVar1 = fn_0018388c(*piVar4,*(uint *)(param_1 + 0x74) * 0x14,iVar3 * 0x14);
        *piVar4 = iVar1;
        *(int *)(param_1 + 0x74) = iVar3;
      }
      puVar6 = (undefined4 *)(*piVar4 + *(int *)(param_1 + 0x70) * 0x14);
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = 0x1000001;
        puVar6[1] = 0;
        fn_0019e864(puVar6,&local_38);
        puVar6[2] = local_30;
        puVar6[3] = local_2c;
        puVar6[4] = local_28;
      }
    }
    iVar3 = *(int *)(param_1 + 8) + -1;
    *(int *)(param_1 + 8) = iVar3;
    puVar2 = (uint *)(*(int *)(param_1 + 4) + iVar3 * 0x14);
    if (((*puVar2 & 0x8000000) != 0) &&
       (iVar3 = *(int *)(puVar2[1] + 4) + -1, *(int *)(puVar2[1] + 4) = iVar3, iVar3 == 0)) {
      (**(code **)(*(int *)puVar2[1] + 8))();
    }
    if (((local_38 & 0x8000000) != 0) &&
       (iVar3 = local_34[1], local_34[1] = iVar3 + -1, iVar3 + -1 == 0)) {
      (**(code **)(*local_34 + 8))();
    }
  }
  return;
}


