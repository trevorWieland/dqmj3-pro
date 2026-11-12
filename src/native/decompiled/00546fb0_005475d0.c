#include "00546fb0_005475d0.h"



void fn_005472e0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[7];
  for (piVar1 = (int *)param_1[6]; piVar1 != piVar2; piVar1 = piVar1 + 1) {
    if (*piVar1 != 0) {
      *(undefined4 *)(*piVar1 + 0xc) = 0;
      fn_005472e0(*piVar1);
      *piVar1 = 0;
    }
  }
  (**(code **)*param_1)(param_1);
                    /* WARNING: Could not recover jumptable at 0x00547348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)param_1[1] + 0xc))((int *)param_1[1],param_1);
  return;
}



int fn_00547174(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  if ((*(int *)(param_1 + 0xc) != 0) &&
     ((*(int *)(param_1 + 0xc) == param_2 || (iVar1 = fn_0019bb90(), iVar1 != 0)))) {
    return 0;
  }
  if (*(int *)(param_2 + 0xc) != 0) {
    return 0;
  }
  uVar7 = *(uint *)(param_1 + 0x20);
  uVar5 = uVar7 & 0x3fffffff;
  if ((int)uVar5 <= *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2) {
    if (uVar5 == 0) {
      uVar5 = 1;
    }
    else {
      uVar5 = uVar5 << 1;
    }
    if ((uVar7 & 0x3fffffff) < uVar5) {
      piVar2 = *(int **)(param_1 + 0x14);
      if ((piVar2 == (int *)0x0) || ((uVar7 & 0xc0000000) != 0x40000000)) {
        iVar1 = 0;
        goto LAB_00547218;
      }
      puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2,uVar5 << 2,0x20);
      if (puVar3 == (undefined4 *)0x0) {
        return 0;
      }
      puVar6 = *(undefined4 **)(param_1 + 0x1c);
      puVar8 = *(undefined4 **)(param_1 + 0x18);
      iVar1 = 0;
      puVar4 = puVar3;
      if (puVar8 != puVar6) {
        do {
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = *puVar8;
          }
          puVar8 = puVar8 + 1;
          puVar4 = puVar4 + 1;
        } while (puVar8 != puVar6);
        iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2;
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x18);
        (**(code **)(**(int **)(param_1 + 0x14) + 0xc))();
      }
      *(undefined4 **)(param_1 + 0x1c) = puVar3 + iVar1;
      *(undefined4 **)(param_1 + 0x18) = puVar3;
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xc0000000 | uVar5;
    }
  }
  iVar1 = 1;
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    **(int **)(param_1 + 0x1c) = param_2;
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 4;
LAB_00547218:
  if (iVar1 != 0) {
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x10);
  }
  return iVar1;
}



uint fn_0054711c(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = fn_0054734c();
  if ((uVar1 & 0x80000000) == 0) {
    *(int *)(param_1 + 0x10) = param_1;
    uVar2 = fn_005475d0(param_1,param_2);
    uVar1 = uVar2 | uVar1;
    if ((uVar1 & 0x80000000) == 0) {
      uVar2 = fn_00547724(param_1,param_2);
      uVar1 = uVar2 | uVar1;
    }
  }
  return uVar1;
}



undefined4 fn_005475d0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (*(char *)(param_1 + 0x3c) == '\0') {
    puVar1 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,0x14,4);
    if (puVar1 == (undefined4 *)0x0) {
LAB_00547718:
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = param_2;
      puVar1[2] = 0;
      puVar1[1] = param_2;
      puVar1[3] = 0;
      puVar1[4] = 0x40000000;
    }
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x40);
    if (uVar3 != 0) {
      puVar1 = (undefined4 *)(**(code **)(*param_2 + 8))();
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        iVar2 = (**(code **)(*param_2 + 8))(param_2,uVar3 << 2,4);
        if (iVar2 == 0) {
          (**(code **)(*param_2 + 0xc))(param_2,puVar1);
          puVar1 = (undefined4 *)0x0;
        }
        else {
          *puVar1 = param_2;
          puVar1[2] = iVar2;
          puVar1[1] = param_2;
          puVar1[3] = iVar2;
          puVar1[4] = uVar3;
          puVar1[4] = uVar3 & 0x3fffffff;
        }
      }
      *(undefined4 **)(param_1 + 0x34) = puVar1;
      goto LAB_005476c0;
    }
    puVar1 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,0x14,4);
    if (puVar1 == (undefined4 *)0x0) goto LAB_00547718;
    *puVar1 = param_2;
    puVar1[2] = 0;
    puVar1[1] = param_2;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[4] = 0;
  }
  *(undefined4 **)(param_1 + 0x34) = puVar1;
LAB_005476c0:
  if (puVar1 == (undefined4 *)0x0) {
    uVar4 = 0x80000000;
  }
  return uVar4;
}



int fn_0054734c(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *local_40;
  int local_3c;
  int local_38;
  uint local_34;
  undefined4 local_30;
  int *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  iVar4 = 0;
  local_40 = param_2;
  local_2c = param_2;
  if (*(char *)(param_1 + 0x3c) == '\0') {
    local_30 = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    puVar3 = (undefined4 *)(param_1 + 0x14);
    local_3c = 0;
    local_28 = 0;
    local_24 = 0;
    local_34 = 0x40000000;
    local_20 = 0x40000000;
    if ((int **)puVar3 != &local_40) {
      local_3c = *(int *)(param_1 + 0x18);
      local_34 = *(uint *)(param_1 + 0x20);
      local_40 = (int *)*puVar3;
      *puVar3 = param_2;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0x40000000;
    }
    local_38 = local_3c;
    iVar4 = 0;
    if (local_40 != (int *)0x0) {
      iVar4 = local_3c;
    }
    if (local_40 == (int *)0x0 || iVar4 == 0) goto LAB_00547510;
  }
  else if (*(int *)(param_1 + 0x44) == 0) {
    local_30 = 0;
    local_2c = (int *)0x0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    puVar3 = (undefined4 *)(param_1 + 0x14);
    local_40 = (int *)0x0;
    local_3c = 0;
    local_28 = 0;
    local_24 = 0;
    local_34 = 0;
    local_20 = 0;
    if ((int **)puVar3 != &local_40) {
      local_3c = *(int *)(param_1 + 0x18);
      local_34 = *(uint *)(param_1 + 0x20);
      local_40 = (int *)*puVar3;
      *puVar3 = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    local_38 = local_3c;
    iVar4 = 0;
    if (local_40 != (int *)0x0) {
      iVar4 = local_3c;
    }
    if (local_40 == (int *)0x0 || iVar4 == 0) goto LAB_00547510;
  }
  else {
    iVar1 = (**(code **)(*param_2 + 8))(param_2,*(int *)(param_1 + 0x44) << 2,0x20);
    if (iVar1 == 0) {
      iVar4 = -0x80000000;
    }
    if (iVar4 != 0) {
      return iVar4;
    }
    uVar2 = *(uint *)(param_1 + 0x44) & 0x3fffffff;
    local_30 = 0;
    puVar3 = (undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x10) = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_3c = iVar1;
    local_34 = uVar2;
    if ((int **)puVar3 != &local_40) {
      local_3c = *(int *)(param_1 + 0x18);
      local_34 = *(uint *)(param_1 + 0x20);
      local_40 = (int *)*puVar3;
      *puVar3 = param_2;
      *(int *)(param_1 + 0x18) = iVar1;
      *(int *)(param_1 + 0x1c) = iVar1;
      *(uint *)(param_1 + 0x20) = uVar2;
    }
    local_38 = local_3c;
    iVar4 = 0;
    if (local_40 != (int *)0x0) {
      iVar4 = local_3c;
    }
    if (local_40 == (int *)0x0 || iVar4 == 0) goto LAB_00547510;
  }
  local_24 = 0;
  local_28 = 0;
  local_30 = 0;
  local_3c = local_38;
  (**(code **)(*local_40 + 0xc))(local_40,local_38);
LAB_00547510:
  fn_0075644c(&local_30);
  return 0;
}



void fn_00546fb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[1] = param_4;
  param_1[2] = param_2;
  param_1[3] = 0;
  *param_1 = &DAT_00857910;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = param_3;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  return;
}


