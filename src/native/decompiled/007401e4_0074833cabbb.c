#include "007401e4_0074833cabbb.h"



undefined4 fn_0074279c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  
  if (param_2 < 0) {
    piVar1 = (int *)fn_00173d4c();
  }
  else {
    piVar1 = (int *)fn_00173d40(param_1,param_2 + -1 + *(int *)(param_1 + 0x34));
  }
  iVar2 = *piVar1;
  if (iVar2 == 0x8000040) {
    uVar3 = fn_00173d4c(param_1,0xffffffff);
    uVar4 = fn_00173d4c(param_1,0xffffffff);
    iVar2 = fn_00198578(param_1,piVar1,uVar4,uVar3,0,0);
  }
  else {
    if (iVar2 == 0x8004000) {
      iVar9 = piVar1[1];
      uVar3 = fn_00173d4c(param_1,0xffffffff);
      puVar5 = (uint *)fn_00173d4c(param_1,0xffffffff);
      iVar2 = fn_001a1dc8(*(undefined4 *)(iVar9 + 0x18),uVar3,puVar5);
      if (iVar2 != 0) {
        piVar1 = (int *)puVar5[1];
        if (((uint)piVar1 & 0x2000000) == 0) {
          fn_0019e864(puVar5,*(int *)(iVar9 + 0x2c) + ((uint)piVar1 & 0xffffff) * 0x10);
          return 0;
        }
        puVar7 = (uint *)(*(int *)(iVar9 + 0x20) + ((uint)piVar1 & 0xffffff) * 0x10);
        uVar6 = *puVar7;
        uVar8 = puVar7[1];
        if (uVar6 == 0x8010000) {
          uVar6 = *(uint *)(uVar8 + 0xc);
          uVar8 = *(uint *)(uVar8 + 0x10);
        }
        puVar5[1] = uVar8;
        uVar8 = *puVar5;
        *puVar5 = uVar6;
        if ((uVar6 & 0x8000000) != 0) {
          *(int *)(puVar5[1] + 4) = *(int *)(puVar5[1] + 4) + 1;
        }
        if ((uVar8 & 0x8000000) == 0) {
          return 0;
        }
        iVar2 = piVar1[1];
        piVar1[1] = iVar2 + -1;
        if (iVar2 + -1 == 0) {
          (**(code **)(*piVar1 + 8))();
          return 0;
        }
        return 0;
      }
      goto LAB_00742a74;
    }
    if (iVar2 != 0xa000020) {
      if (iVar2 != 0xa008000) {
        fn_00173cd0(param_1,1);
        uVar3 = fn_001581d0(param_1,"rawget works only on array/table/instance and class");
        return uVar3;
      }
      iVar9 = piVar1[1];
      uVar3 = fn_00173d4c(param_1,0xffffffff);
      puVar5 = (uint *)fn_00173d4c(param_1,0xffffffff);
      iVar2 = fn_001a1dc8(*(undefined4 *)(*(int *)(iVar9 + 0x1c) + 0x18),uVar3,puVar5);
      if (iVar2 != 0) {
        piVar1 = (int *)puVar5[1];
        if (((uint)piVar1 & 0x2000000) == 0) {
          fn_0019e864(puVar5,*(int *)(*(int *)(iVar9 + 0x1c) + 0x2c) +
                              ((uint)piVar1 & 0xffffff) * 0x10);
          return 0;
        }
        iVar9 = iVar9 + ((uint)piVar1 & 0xffffff) * 8;
        uVar6 = *(uint *)(iVar9 + 0x2c);
        uVar8 = *(uint *)(iVar9 + 0x30);
        if (uVar6 == 0x8010000) {
          uVar6 = *(uint *)(uVar8 + 0xc);
          uVar8 = *(uint *)(uVar8 + 0x10);
        }
        puVar5[1] = uVar8;
        uVar8 = *puVar5;
        *puVar5 = uVar6;
        if ((uVar6 & 0x8000000) != 0) {
          *(int *)(puVar5[1] + 4) = *(int *)(puVar5[1] + 4) + 1;
        }
        if ((uVar8 & 0x8000000) == 0) {
          return 0;
        }
        iVar2 = piVar1[1];
        piVar1[1] = iVar2 + -1;
        if (iVar2 + -1 == 0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          return 0;
        }
        return 0;
      }
      goto LAB_00742a74;
    }
    uVar3 = fn_00173d4c(param_1,0xffffffff);
    uVar4 = fn_00173d4c(param_1,0xffffffff);
    iVar2 = fn_001a1dc8(piVar1[1],uVar4,uVar3);
  }
  if (iVar2 != 0) {
    return 0;
  }
LAB_00742a74:
  fn_00173cd0(param_1,1);
  uVar3 = fn_001581d0(param_1,"the index doesn\'t exist");
  return uVar3;
}


