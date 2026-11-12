#include "00413bf4_0041434c.h"



void fn_0041434c(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint local_28 [3];
  
  uVar11 = 0;
  iVar2 = fn_002c11d0(param_1,1,0);
  piVar8 = (int *)(iVar2 + 4);
  local_28[0] = *(int *)(iVar2 + 8) - *piVar8 >> 2;
  local_28[1] = 0x20;
  puVar5 = local_28;
  if (local_28[0] < 0x20) {
    puVar5 = local_28 + 1;
  }
  uVar9 = *puVar5;
  puVar3 = (undefined4 *)fn_00100fc6(uVar9 << 2,0);
  puVar6 = *(undefined4 **)(iVar2 + 8);
  puVar4 = puVar3;
  for (puVar7 = (undefined4 *)*piVar8; puVar7 != puVar6; puVar7 = puVar7 + 1) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *puVar7;
    }
    puVar4 = puVar4 + 1;
  }
  uVar10 = 0;
  puVar7 = puVar3 + (*(int *)(iVar2 + 8) - *piVar8 >> 2);
  if ((int)puVar7 - (int)puVar3 >> 2 != 0) {
    do {
      uVar1 = (int)puVar7 - (int)puVar3 >> 2;
      if (uVar1 <= uVar10) {
        local_28[0] = uVar1;
        fn_002ff628(9,&DAT_008c7672,&DAT_008c7672,uVar10);
      }
      if (puVar3[uVar10] != 0) {
        uVar11 = 1;
        break;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < (uint)((int)puVar7 - (int)puVar3 >> 2));
  }
  fn_002b1f48(*(undefined4 *)(param_1 + 0x114),uVar11);
  fn_002b1f0c(*(undefined4 *)(param_1 + 0x114),uVar11 ^ 1);
  puVar4 = puVar3;
  if (puVar7 < puVar3) {
    do {
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar7);
  }
  fn_002feef8(puVar3,(int)(uVar9 * 4) >> 2,0);
  return;
}



void fn_00414034(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_28;
  int local_24 [2];
  int local_1c;
  
  fn_0042fb68();
  if ((char)param_1[0x1f] == '\0') {
    iVar1 = (**(code **)(*(int *)param_1[0x47] + 0x90))();
    if (-1 < iVar1) {
      fn_002c07c0(local_24);
      local_24[0] = 7;
      local_1c = iVar1;
      iVar1 = (**(code **)(*(int *)param_1[0x47] + 0xa0))();
      if (iVar1 < 0) {
        (**(code **)(*param_1 + 0x154))(param_1,local_24[0],local_1c);
        if (param_1[0x19] != local_24[0]) {
          local_28 = 1;
          (**(code **)(*param_1 + 0x110))(param_1,local_24[0],local_1c,0);
        }
      }
      else {
        (**(code **)(*param_1 + 0x130))(param_1,local_24);
      }
    }
    iVar1 = (**(code **)(*(int *)param_1[0x47] + 0x6c))();
    if (-1 < iVar1) {
      if (param_1[0x19] == 7) {
        fn_00414d6c(param_1,iVar1,0);
      }
      else {
        local_28 = 1;
        (**(code **)(*param_1 + 0x110))(param_1,7,0);
      }
    }
    iVar1 = (**(code **)(*(int *)param_1[0x47] + 100))();
    if (-1 < iVar1) {
      if (param_1[0x19] == 7) {
        fn_00414d6c(param_1,iVar1,1);
      }
      else {
        local_28 = 1;
        (**(code **)(*param_1 + 0x110))(param_1,7,iVar1,0);
      }
    }
  }
  if (param_1[0x19] == 7) {
    iVar1 = (**(code **)(*(int *)param_1[0x47] + 0xa8))();
    if (-1 < iVar1) {
                    /* WARNING: Could not recover jumptable at 0x004141b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x158))(param_1);
      return;
    }
    iVar1 = (**(code **)(*(int *)param_1[0x47] + 0xb8))();
    if (iVar1 < 0) {
      iVar1 = (**(code **)(*(int *)param_1[0x47] + 0xc0))();
      if (-1 < iVar1) {
        fn_002c07c0(&local_28);
        (**(code **)(*param_1 + 0x140))(param_1,&local_28);
        return;
      }
      iVar1 = (**(code **)(*(int *)param_1[0x47] + 0x6c))();
      if (-1 < iVar1) {
        fn_00414d6c(param_1,iVar1,0);
      }
      iVar1 = (**(code **)(*(int *)param_1[0x47] + 100))();
      if (-1 < iVar1) {
        fn_00414d6c(param_1,iVar1,1);
      }
      iVar1 = (**(code **)(*(int *)param_1[0x47] + 0x34))();
      if (iVar1 != 0) {
        uVar2 = (**(code **)(*(int *)param_1[0x47] + 0x5c))();
        (**(code **)(*param_1 + 0x144))(param_1,param_1[0x19],uVar2);
      }
      iVar1 = (**(code **)(*(int *)param_1[0x47] + 0x38))();
      if (iVar1 != 0) {
        uVar2 = (**(code **)(*(int *)param_1[0x47] + 0x5c))();
                    /* WARNING: Could not recover jumptable at 0x0041433c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x148))(param_1,param_1[0x19],uVar2);
        return;
      }
    }
    else {
      fn_002c07c0(&local_28);
      (**(code **)(*param_1 + 0x13c))(param_1,&local_28);
    }
  }
  return;
}



void fn_00413d68(int param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  fn_00231700(&local_20,0xc,(int)*(short *)(*(int *)(param_1 + 0x100) + 0x1c),0);
  fn_0015b0dc(&local_20);
  fn_00413b2c(param_1,(char *)&DAT_00413dd0,1);
  *(undefined1 *)(param_1 + 0x104) = 3;
  return;
}



void fn_00413bf4(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  cVar1 = *(char *)(param_1 + 0x104);
  if (cVar1 == '\x01') {
    fn_00413b2c(param_1,(char *)&DAT_00413d48,1);
    *(undefined1 *)(param_1 + 0x104) = 2;
    return;
  }
  if (cVar1 == '\x02') {
    uVar2 = fn_002e3e9c(*(undefined4 *)(param_1 + 0xb4),
                         *(undefined4 *)(*(int *)(param_1 + 0x100) + 0x10),
                         *(undefined4 *)(*(int *)(param_1 + 0x100) + 0xc));
    iVar3 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),uVar2);
    fn_0015b0dc(iVar3 + 4);
    fn_00413b2c(param_1,(char *)&DAT_00413d2c,0);
    *(undefined1 *)(param_1 + 0x104) = 4;
    *(undefined1 *)(*(int *)(param_1 + 0x100) + 0x1f) = 1;
    uVar2 = fn_002e3e9c(*(undefined4 *)(param_1 + 0xb4),
                         *(undefined4 *)(*(int *)(param_1 + 0x100) + 0x10),
                         *(undefined4 *)(*(int *)(param_1 + 0x100) + 0xc));
    fn_0028a68c(*(undefined4 *)(DAT_00897804 + 0xc),uVar2,1);
    return;
  }
  if (cVar1 == '\x03') {
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    fn_00231700(&local_28,0xc,(int)*(short *)(*(int *)(param_1 + 0x100) + 0x1c),0);
    fn_0015b0dc(&local_28);
    fn_00413b2c(param_1,(char *)&DAT_00413d2c,0);
    *(undefined1 *)(param_1 + 0x104) = 4;
    *(undefined1 *)(*(int *)(param_1 + 0x100) + 0x1f) = 2;
  }
  return;
}


