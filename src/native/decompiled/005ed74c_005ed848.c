#include "005ed74c_005ed848.h"



void fn_005ed848(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x38);
  fn_001781f0(iVar1 + 0x4c);
  *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x800;
  return;
}



void fn_005ed79c(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar2 = *(int *)(param_1 + 0x14);
  iVar6 = 0;
  iVar1 = *(int *)(iVar2 + 0x24) - *(int *)(iVar2 + 0x20) >> 2;
  if (0 < iVar1) {
    do {
      puVar5 = *(undefined4 **)(*(int *)(iVar2 + 0x20) + iVar6 * 4);
      if (puVar5 != (undefined4 *)0x0) {
        piVar4 = (int *)puVar5[7];
        for (piVar3 = (int *)puVar5[6]; piVar3 != piVar4; piVar3 = piVar3 + 1) {
          if (*piVar3 != 0) {
            *(undefined4 *)(*piVar3 + 0xc) = 0;
            fn_005472e0(*piVar3);
            *piVar3 = 0;
          }
        }
        (**(code **)*puVar5)(puVar5);
        (**(code **)(*(int *)puVar5[1] + 0xc))((int *)puVar5[1],puVar5);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  return;
}



void fn_005ed74c(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2;
  if (0 < iVar1) {
    do {
      (**(code **)*param_2)(param_2,*(undefined4 *)(*(int *)(param_1 + 0x14) + iVar2 * 4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}


