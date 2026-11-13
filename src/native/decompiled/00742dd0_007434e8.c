#include "00742dd0_007434e8.h"



void fn_007434e8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_10;
  int *local_c;
  
  if (param_2 < 0) {
    uVar1 = fn_00173d4c();
  }
  else {
    uVar1 = fn_00173d40(param_1,param_2 + -1 + *(int *)(param_1 + 0x34));
  }
  local_10 = 0x1000001;
  local_c = (int *)0x0;
  fn_001a83dc(param_1,uVar1,&local_10);
  fn_00173d1c(param_1,&local_10);
  if (((local_10 & 0x8000000) != 0) &&
     (iVar2 = local_c[1], local_c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*local_c + 8))();
  }
  return;
}



undefined4 fn_007433f0(int param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 100);
  if (iVar2 <= param_2) {
    return 0xffffffff;
  }
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  puVar1 = (undefined4 *)((iVar2 - param_2) * 0x30 + -0x30 + *(int *)(param_1 + 0x60));
  if (puVar1[2] == 0x8000100) {
    iVar2 = *(int *)(puVar1[3] + 0x24);
    if (*(int *)(iVar2 + 0x14) == 0x8000010) {
      *param_3 = *(int *)(iVar2 + 0x18) + 0x1c;
    }
    if (*(int *)(iVar2 + 0xc) == 0x8000010) {
      param_3[1] = *(int *)(iVar2 + 0x10) + 0x1c;
    }
    iVar2 = fn_001a3740(iVar2,*puVar1);
  }
  else {
    if (puVar1[2] != 0x8000200) {
      return 0;
    }
    *param_3 = (int)"unknown";
    param_3[1] = (int)"NATIVE";
    if (*(int *)(puVar1[3] + 0x40) == 0x8000010) {
      *param_3 = *(int *)(puVar1[3] + 0x44) + 0x1c;
    }
    iVar2 = -1;
  }
  param_3[2] = iVar2;
  return 0;
}



void fn_00743388(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x34);
  if (iVar1 <= param_2) {
    for (; iVar1 < param_2; iVar1 = iVar1 + 1) {
      fn_00173d1c(param_1,&DAT_008c06e8);
    }
    return;
  }
  if (*(int *)(param_1 + 0x30) < iVar1 - param_2) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  fn_00173cd0(param_1);
  return;
}



undefined4 fn_007432e4(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  
  puVar1 = (uint *)fn_00173d4c(param_1,0xffffffff);
  uVar4 = *puVar1;
  uVar6 = puVar1[1];
  if (uVar4 != 0xa000020) {
    puVar1 = (uint *)(uVar4 - 0x1000000);
  }
  if (uVar4 != 0xa000020 && puVar1 != (uint *)&DAT_00000001) {
    uVar3 = fn_001581d0(param_1,(char *)&DAT_0074337c);
    return uVar3;
  }
  uVar7 = *(uint *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = uVar4;
  piVar5 = *(int **)(param_1 + 0x3c);
  *(uint *)(param_1 + 0x3c) = uVar6;
  if ((uVar4 & 0x8000000) != 0) {
    *(int *)(uVar6 + 4) = *(int *)(uVar6 + 4) + 1;
  }
  if (((uVar7 & 0x8000000) != 0) && (iVar2 = piVar5[1], piVar5[1] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*piVar5 + 8))(piVar5);
  }
  fn_0017ff68(param_1);
  return 0;
}



void fn_00743258(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  puVar1 = (uint *)fn_00173d4c(param_1,0xffffffff);
  uVar2 = *puVar1;
  uVar6 = puVar1[1];
  bVar7 = uVar2 == 0x8000100 || uVar2 == 0x8000200;
  if (uVar2 != 0x8000100 && uVar2 != 0x8000200) {
    bVar7 = uVar2 == 0x1000001;
  }
  if (!bVar7) {
    return;
  }
  uVar5 = *(uint *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = uVar2;
  piVar3 = *(int **)(param_1 + 0x4c);
  *(uint *)(param_1 + 0x4c) = uVar6;
  if ((uVar2 & 0x8000000) != 0) {
    *(int *)(uVar6 + 4) = *(int *)(uVar6 + 4) + 1;
  }
  if (((uVar5 & 0x8000000) != 0) && (iVar4 = piVar3[1], piVar3[1] = iVar4 + -1, iVar4 + -1 == 0)) {
    (**(code **)(*piVar3 + 8))();
  }
  fn_0017ff68(param_1);
  return;
}



void fn_007431cc(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  puVar1 = (uint *)fn_00173d4c(param_1,0xffffffff);
  uVar2 = *puVar1;
  uVar6 = puVar1[1];
  bVar7 = uVar2 == 0x8000100 || uVar2 == 0x8000200;
  if (uVar2 != 0x8000100 && uVar2 != 0x8000200) {
    bVar7 = uVar2 == 0x1000001;
  }
  if (!bVar7) {
    return;
  }
  uVar5 = *(uint *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = uVar2;
  piVar3 = *(int **)(param_1 + 0x54);
  *(uint *)(param_1 + 0x54) = uVar6;
  if ((uVar2 & 0x8000000) != 0) {
    *(int *)(uVar6 + 4) = *(int *)(uVar6 + 4) + 1;
  }
  if (((uVar5 & 0x8000000) != 0) && (iVar4 = piVar3[1], piVar3[1] = iVar4 + -1, iVar4 + -1 == 0)) {
    (**(code **)(*piVar3 + 8))();
  }
  fn_0017ff68(param_1);
  return;
}



undefined4 fn_00743124(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = (int *)fn_00173d4c(param_1,0xffffffff);
  iVar4 = piVar1[1];
  if (*piVar1 != 0xa000020) {
    uVar3 = fn_001581d0(param_1,(char *)&DAT_007431b0);
    return uVar3;
  }
  iVar2 = *(int *)(param_1 + 0x8c);
  uVar5 = *(uint *)(iVar2 + 0x34);
  piVar1 = *(int **)(iVar2 + 0x38);
  *(uint *)(iVar2 + 0x34) = 0xa000020;
  *(int *)(iVar2 + 0x38) = iVar4;
  *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
  if (((uVar5 & 0x8000000) != 0) && (iVar4 = piVar1[1], piVar1[1] = iVar4 + -1, iVar4 + -1 == 0)) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  fn_0017ff68(param_1);
  return 0;
}



undefined4 fn_00742f70(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int local_28 [2];
  uint local_20;
  int *local_1c;
  
  local_28[0] = 0;
  iVar1 = fn_00159164(param_1,param_2,0x8004000,local_28);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  piVar2 = (int *)fn_00173d4c(param_1,0xfffffffe);
  uVar3 = fn_00173d4c(param_1,0xffffffff);
  local_20 = 0x1000001;
  local_1c = (int *)0x0;
  if (*piVar2 == 0x1000001) {
    fn_0019e864(&local_20,*(int *)(local_28[0] + 4) + 0x44);
    fn_0019e864(*(int *)(local_28[0] + 4) + 0x44,uVar3);
    fn_00173cd0(param_1,2);
    fn_00173d1c(param_1,&local_20);
    if ((local_20 & 0x8000000) == 0) {
      return 0;
    }
    iVar1 = local_1c[1] + -1;
    local_1c[1] = iVar1;
  }
  else {
    iVar1 = fn_00665ccc(*(int *)(local_28[0] + 4),piVar2,&local_20);
    if (iVar1 == 0) {
      uVar3 = fn_001581d0(param_1,(char *)&DAT_00743118);
      if (((local_20 & 0x8000000) != 0) &&
         (iVar1 = local_1c[1], local_1c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
        (**(code **)(*local_1c + 8))();
      }
      return uVar3;
    }
    fn_0019a208(*(undefined4 *)(local_28[0] + 4),piVar2,uVar3);
    fn_00173cd0(param_1,2);
    fn_00173d1c(param_1,&local_20);
    if ((local_20 & 0x8000000) == 0) {
      return 0;
    }
    iVar1 = local_1c[1] + -1;
    local_1c[1] = iVar1;
  }
  if (iVar1 == 0) {
    (**(code **)(*local_1c + 8))();
  }
  return 0;
}



undefined4 fn_00742dd0(undefined4 param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint local_20;
  int *local_1c;
  short local_18 [4];
  
  local_20 = 0x1000001;
  local_1c = (int *)0x0;
  iVar1 = (*param_2)(param_3,local_18,2);
  if (iVar1 == 2) {
    if (local_18[0] == -0x506) {
      iVar1 = fn_006a72d0(param_1,param_3,param_2,&local_20);
      if (iVar1 == 0) {
        if (((local_20 & 0x8000000) != 0) &&
           (iVar1 = local_1c[1], local_1c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
          (**(code **)(*local_1c + 8))();
        }
        return 0xffffffff;
      }
      fn_00173d1c(param_1,&local_20);
      if (((local_20 & 0x8000000) != 0) &&
         (iVar1 = local_1c[1], local_1c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
        (**(code **)(*local_1c + 8))();
      }
      return 0;
    }
    uVar2 = fn_001581d0(param_1,(char *)&DAT_00742f60);
    if ((local_20 & 0x8000000) == 0) {
      return uVar2;
    }
    iVar1 = local_1c[1] + -1;
    local_1c[1] = iVar1;
  }
  else {
    uVar2 = fn_001581d0(param_1,(char *)&DAT_00742f54);
    if ((local_20 & 0x8000000) == 0) {
      return uVar2;
    }
    iVar1 = local_1c[1] + -1;
    local_1c[1] = iVar1;
  }
  if (iVar1 == 0) {
    (**(code **)(*local_1c + 8))();
  }
  return uVar2;
}


