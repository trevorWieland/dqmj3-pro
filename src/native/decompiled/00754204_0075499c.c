#include "00754204_0075499c.h"



int * fn_0075499c(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [12];
  
  iVar1 = fn_0013d40c(auStack_38);
  iVar1 = fn_0013d40c(iVar1 + 8);
  *(undefined **)(iVar1 + -0x10) = &DAT_00853860;
  uVar5 = 0x20;
  if (0x1f < param_2) {
    uVar5 = param_2;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar2 = (undefined4 *)fn_0015ece0(uVar5 * 0x18);
  *param_1 = (int)puVar2;
  for (uVar4 = param_2; uVar4 != 0; uVar4 = uVar4 - 1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &DAT_00854534;
      *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(iVar1 + -0xc);
      iVar3 = fn_004b637c(puVar2 + 2,iVar1 + -8);
      iVar3 = fn_004b637c(iVar3 + 8,iVar1);
      *(undefined **)(iVar3 + -0x10) = &DAT_00853860;
    }
    puVar2 = puVar2 + 6;
  }
  param_1[2] = *param_1 + uVar5 * 0x18;
  param_1[1] = *param_1 + param_2 * 0x18;
  iVar1 = fn_00170f54(auStack_30);
  fn_00170f54(iVar1 + -8);
  return param_1;
}



int * fn_007548e0(int *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *local_70 [9];
  undefined4 local_4c;
  undefined4 local_38;
  
  uVar1 = fn_004772f0(local_70);
  uVar4 = 0x20;
  if (0x1f < param_2) {
    uVar4 = param_2;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar2 = fn_0015ece0(uVar4 * 0x50);
  *param_1 = iVar2;
  for (uVar3 = param_2; uVar3 != 0; uVar3 = uVar3 - 1) {
    if (iVar2 != 0) {
      fn_0047717c(iVar2,uVar1);
    }
    iVar2 = iVar2 + 0x50;
  }
  param_1[2] = *param_1 + uVar4 * 0x50;
  param_1[1] = *param_1 + param_2 * 0x50;
  local_70[0] = &DAT_008540c0;
  fn_0014f1bc(local_38);
  fn_0014f1bc(local_4c);
  return param_1;
}



void fn_00754868(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *param_1 = &DAT_00855b24;
  iVar1 = param_1[1];
  iVar4 = param_1[3];
  if (iVar1 == iVar4) {
    return;
  }
  do {
    iVar2 = *(int *)(iVar1 + 0x1c);
    iVar3 = *(int *)(iVar1 + 0x20);
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x1c) = iVar2;
    }
    *(undefined4 *)(iVar1 + 0x20) = 0;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x20) = iVar3;
    }
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    if (param_1[1] == iVar1) {
      param_1[1] = iVar2;
    }
    if (param_1[2] == iVar1) {
      param_1[2] = iVar3;
    }
    param_1[4] = param_1[4] + -1;
    iVar1 = iVar2;
  } while (iVar2 != iVar4);
  return;
}



void fn_007547f0(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*param_3 + 0x20);
  iVar2 = *(int *)(*param_3 + 0x1c);
  *param_1 = iVar2;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x1c) = iVar2;
  }
  *(undefined4 *)(*param_3 + 0x20) = 0;
  if (*param_1 != 0) {
    *(int *)(*param_1 + 0x20) = iVar1;
  }
  *(undefined4 *)(*param_3 + 0x1c) = 0;
  if (*(int *)(param_2 + 4) == *param_3) {
    *(int *)(param_2 + 4) = *param_1;
  }
  if (*(int *)(param_2 + 8) == *param_3) {
    *(int *)(param_2 + 8) = iVar1;
  }
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
  return;
}



void fn_00754700(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *param_1 = &DAT_00855b04;
  iVar1 = param_1[1];
  iVar4 = param_1[3];
  if (iVar1 == iVar4) {
    return;
  }
  do {
    iVar2 = *(int *)(iVar1 + 0x14);
    iVar3 = *(int *)(iVar1 + 0x18);
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x14) = iVar2;
    }
    *(undefined4 *)(iVar1 + 0x18) = 0;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x18) = iVar3;
    }
    *(undefined4 *)(iVar1 + 0x14) = 0;
    if (param_1[1] == iVar1) {
      param_1[1] = iVar2;
    }
    if (param_1[2] == iVar1) {
      param_1[2] = iVar3;
    }
    param_1[4] = param_1[4] + -1;
    iVar1 = iVar2;
  } while (iVar2 != iVar4);
  return;
}



void fn_00754688(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*param_3 + 0x10);
  iVar2 = *(int *)(*param_3 + 0xc);
  *param_1 = iVar2;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xc) = iVar2;
  }
  *(undefined4 *)(*param_3 + 0x10) = 0;
  if (*param_1 != 0) {
    *(int *)(*param_1 + 0x10) = iVar1;
  }
  *(undefined4 *)(*param_3 + 0xc) = 0;
  if (*(int *)(param_2 + 4) == *param_3) {
    *(int *)(param_2 + 4) = *param_1;
  }
  if (*(int *)(param_2 + 8) == *param_3) {
    *(int *)(param_2 + 8) = iVar1;
  }
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
  return;
}



void fn_00754488(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0xc))();
  return;
}



void fn_00754400(int param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint in_stack_00000000;
  uint in_stack_00000008;
  int in_stack_0000000c;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  bVar2 = uVar1 == in_stack_00000000;
  if (bVar2) {
    uVar1 = (uint)*(ushort *)(param_1 + 0x28);
  }
  bVar3 = bVar2 && uVar1 == in_stack_00000008;
  if (bVar2 && uVar1 == in_stack_00000008) {
    bVar3 = *(int *)(param_1 + 0x2c) == in_stack_0000000c;
  }
  if (bVar3) {
    (**(code **)(**(int **)(param_1 + 4) + 8))();
    return;
  }
  fn_00456510(*(undefined4 *)(param_1 + 8),4);
  return;
}



void fn_00754378(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5,
                 uint param_6)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  
  uVar1 = *(uint *)(param_1 + 0x1c);
  bVar2 = uVar1 == param_3;
  if (bVar2) {
    uVar1 = (uint)*(ushort *)(param_1 + 0x20);
  }
  bVar3 = bVar2 && uVar1 == param_5;
  if (bVar2 && uVar1 == param_5) {
    bVar3 = *(ushort *)(param_1 + 0x22) == param_6;
  }
  if (bVar3) {
    (**(code **)(**(int **)(param_1 + 4) + 8))();
    return;
  }
  fn_00456510(*(undefined4 *)(param_1 + 8),4);
  return;
}



void fn_00754204(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined *local_38;
  code *local_34;
  undefined4 uStack_30;
  undefined *local_2c;
  undefined1 auStack_28 [12];
  undefined4 local_1c;
  int local_18;
  undefined4 local_14 [2];
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    local_3c = 0x80010004;
    uVar2 = fn_004b8d4c(&local_48,&local_3c);
    fn_00752f28(param_1,uVar2);
    return;
  }
  if (*(char *)(param_1 + 0x90) != '\x02') {
    local_48 = *(int *)(param_1 + 0xb8);
    uStack_44 = *(undefined4 *)(param_1 + 0xbc);
    uStack_40 = *(undefined4 *)(param_1 + 0xc0);
    fn_00752f28(param_1,&local_48);
    return;
  }
  for (iVar1 = *(int *)(param_1 + 0x110); *(int *)(param_1 + 0x114) != iVar1; iVar1 = iVar1 + 0x18)
  {
  }
  if (*(int *)(param_1 + 0x110) == *(int *)(param_1 + 0x114)) {
    *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(param_1 + 0xf8);
    *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(param_1 + 0xfc);
    fn_0014ecf0(&local_48);
    local_14[0] = 0x158;
    local_18 = param_1 + 0x280;
    uVar2 = (**(code **)(local_48 + 0x18))(&local_48,&local_18,local_14,1);
    *(undefined4 *)(param_1 + 0x3d8) = uVar2;
    local_48 = *(int *)(param_1 + 0x290);
    uStack_44 = *(undefined4 *)(param_1 + 0x294);
    (**(code **)(**(int **)(param_1 + 0x3ec) + 0xc))(*(int **)(param_1 + 0x3ec),param_1 + 0x280,0);
    local_1c = 0x10001;
    uVar2 = fn_004b8d4c(auStack_28,&local_1c);
    fn_00752f28(param_1,uVar2);
  }
  local_34 = fn_00753528;
  uStack_30 = 0;
  local_2c = &DAT_00754370;
  local_38 = &DAT_00853500;
  fn_00479c98(param_1,&local_38);
  return;
}


