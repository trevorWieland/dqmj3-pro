#include "006586bc_00658e84aa.h"



int fn_0065872c(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int local_38;
  uint local_34;
  uint uStack_30;
  uint local_2c;
  uint local_28;
  
  puVar6 = (undefined4 *)0x0;
  if (DAT_008c06d0 != 0) {
    puVar6 = *(undefined4 **)(DAT_008c06d0 + 4);
  }
  if (DAT_008c06d0 != 0 && puVar6 != (undefined4 *)0x0) {
    local_38 = param_1;
    local_34 = param_2;
    uStack_30 = param_3;
  }
  if (param_2 < 4) {
    param_2 = 4;
  }
  if ((*(uint *)(param_1 + 0x1c) <= param_2) ||
     (uVar1 = (param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f), (uVar1 & uVar1 - 1) != 0))
  {
    if (puVar6 != (undefined4 *)0x0) {
      local_2c = param_2;
      local_28 = param_3;
      (**(code **)*puVar6)(puVar6,&local_38);
    }
    return 0;
  }
  uVar1 = param_2 + 3 & 0xfffffffc;
  iVar7 = 0;
  if ((*(uint *)(param_1 + 0x6c) & 1) != 0) {
    fn_00656bb8();
    iVar7 = param_1 + 0x50;
  }
  if (puVar6 != (undefined4 *)0x0) {
    local_2c = uVar1;
  }
  iVar5 = (int)*(char *)(param_1 + 0x4c) * param_3;
  if (puVar6 != (undefined4 *)0x0) {
    local_28 = iVar5;
  }
  if (iVar5 < 0) {
    if (iVar5 == -4 || -iVar5 < 4) {
      iVar5 = fn_0065809c();
    }
    else {
      iVar5 = fn_00658204(param_1,uVar1);
    }
LAB_00658920:
    if (iVar5 != 0) {
      iVar5 = iVar5 + *(int *)(iVar5 + 0xc) + 0x10;
      goto LAB_00658958;
    }
  }
  else {
    if (4 < iVar5) {
      iVar5 = fn_00657f9c(param_1,uVar1);
      goto LAB_00658920;
    }
    iVar5 = fn_006f5134(param_1,uVar1,*(undefined1 *)(param_1 + 0x70));
    if (iVar5 != 0) {
      iVar2 = *(int *)(iVar5 + 0xc);
      iVar3 = *(int *)(iVar5 + 8);
      *(uint *)(iVar5 + 8) = uVar1;
      uVar8 = iVar3 - uVar1;
      fn_00658e3c(*(int *)(param_1 + 0x80) + iVar5);
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
      fn_00658e20(param_1 + 0x84,*(int *)(param_1 + 0x90) + iVar5);
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
      if (uVar8 < 0x11) {
        if (uVar8 != 0) {
          *(uint *)(iVar5 + 8) = uVar1 + uVar8;
        }
      }
      else {
        puVar4 = (undefined4 *)(iVar5 + iVar2 + 0x10 + uVar1);
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          puVar4[3] = 0;
        }
        puVar4[2] = uVar8 - 0x10;
        fn_0065830c(param_1);
      }
      goto LAB_00658920;
    }
  }
  iVar5 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    (**(code **)*puVar6)(puVar6,&local_38);
  }
LAB_00658958:
  if (iVar7 != 0) {
    fn_00656ca4(iVar7);
  }
  return iVar5;
}



void fn_006586bc(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  fn_00656bb8();
  piVar2 = (int *)param_1[8];
  uVar3 = param_1[6];
  (**(code **)*param_1)(param_1);
  if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 0x44))(piVar2), iVar1 != 0)) {
    (**(code **)(*piVar2 + 0x1c))(piVar2,uVar3);
  }
  fn_00656ca4(&DAT_008eef58);
  return;
}


