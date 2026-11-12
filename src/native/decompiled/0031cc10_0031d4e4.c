#include "0031cc10_0031d4e4.h"



void fn_0031d4e4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_14 [12];
  
  iVar2 = (int)*(short *)(param_1 + 0x44);
  iVar1 = param_1;
  if (param_2 == 0) {
    iVar1 = (int)*(short *)(param_1 + 0x42);
  }
  if (param_2 != 0 || iVar1 != iVar2) {
    if (iVar2 < 0) {
      fn_00190d50(*(undefined4 *)(param_1 + 0x24),&DAT_0031d550);
      return;
    }
    fn_0018a618(auStack_14,3,2,&DAT_0031d54c,iVar2);
    fn_00190d50(*(undefined4 *)(param_1 + 0x24),auStack_14);
  }
  return;
}



void fn_0031d268(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_18 [12];
  
  piVar1 = *(int **)(param_1 + 0x30);
  if (param_2 == 0) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))();
      if (*(int **)(param_1 + 0x30) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x30) + 4))();
        *(undefined4 *)(param_1 + 0x30) = 0;
        return;
      }
    }
  }
  else if (piVar1 == (int *)0x0) {
    iVar2 = fn_00145b00(0x38,&DAT_00812c8c);
    piVar1 = (int *)0x0;
    if (iVar2 != 0) {
      piVar1 = (int *)fn_0028fec0(iVar2,*(undefined4 *)(param_1 + 4),
                                   *(undefined4 *)(param_1 + 0x2c));
    }
    piVar3 = *(int **)(param_1 + 0x30);
    if (piVar3 != piVar1) {
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 4))(piVar3);
      }
      *(int **)(param_1 + 0x30) = piVar1;
    }
    (**(code **)(**(int **)(param_1 + 0x30) + 0x10))
              (*(int **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x10));
    fn_00688ff8(*(undefined4 *)(param_1 + 0x28));
    fn_0028fe14(*(undefined4 *)(param_1 + 0x30),local_18);
  }
  return;
}



void fn_0031d09c(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined1 auStack_24 [8];
  
  uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x2c))(*(int **)(param_1 + 8),DAT_008934b8,1);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x2c))(*(int **)(param_1 + 8),DAT_008934bc,1);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x2c))(*(int **)(param_1 + 8),DAT_008934c0,1);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 8) + 0x2c))
                            (*(int **)(param_1 + 8),DAT_008934c4,1);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar3 == &DAT_0089a930) goto LAB_0031d154;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_0031d154:
  *(int **)(param_1 + 0x20) = piVar2;
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 8) + 0x2c))
                            (*(int **)(param_1 + 8),DAT_008934c8,1);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar3 == &DAT_0089a930) goto LAB_0031d1a0;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_0031d1a0:
  *(int **)(param_1 + 0x24) = piVar2;
  uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x2c))(*(int **)(param_1 + 8),DAT_008934cc,1);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  fn_0069e710(param_1);
  if (*(char *)(param_1 + 0x46) == '\0') {
    fn_0031d724(param_1,1);
    *(byte *)(*(int *)(param_1 + 0x1c) + 0x44) =
         *(byte *)(param_1 + 0x37) | *(byte *)(*(int *)(param_1 + 0x1c) + 0x44) & 0xfe;
  }
  fn_0031d348(param_1,1);
  fn_0031d554(param_1,1);
  if (*(short *)(param_1 + 0x44) < 0) {
    puVar4 = &DAT_0031d550;
    uVar1 = *(undefined4 *)(param_1 + 0x24);
  }
  else {
    fn_0018a618(auStack_24,3,2,&DAT_0031d54c,(int)*(short *)(param_1 + 0x44));
    uVar1 = *(undefined4 *)(param_1 + 0x24);
    puVar4 = auStack_24;
  }
  fn_00190d50(uVar1,puVar4);
  fn_0031d41c(param_1);
  return;
}



void fn_0031d41c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint local_18;
  uint local_14;
  
  if (*(char *)(param_1 + 0x34) != *(char *)(param_1 + 0x35)) {
    *(char *)(param_1 + 0x34) = *(char *)(param_1 + 0x35);
  }
  if (*(char *)(param_1 + 0x36) != *(char *)(param_1 + 0x37)) {
    *(char *)(param_1 + 0x36) = *(char *)(param_1 + 0x37);
  }
  uVar2 = *(uint *)(*(int *)(param_1 + 0x38) + -4);
  if (uVar2 == *(uint *)(*(int *)(param_1 + 0x3c) + -4)) {
    local_18 = uVar2;
    local_14 = *(uint *)(*(int *)(param_1 + 0x3c) + -4);
    puVar3 = &local_18;
    if (local_14 < uVar2) {
      puVar3 = &local_14;
    }
    iVar1 = fn_001006de(*(int *)(param_1 + 0x38),*(int *)(param_1 + 0x3c),*puVar3);
    if ((iVar1 == 0) &&
       (*(int *)(*(int *)(param_1 + 0x38) + -4) == *(int *)(*(int *)(param_1 + 0x3c) + -4)))
    goto LAB_0031d4bc;
  }
  fn_007854f8((int *)(param_1 + 0x38),param_1 + 0x3c);
LAB_0031d4bc:
  if (*(char *)(param_1 + 0x40) != *(char *)(param_1 + 0x41)) {
    *(char *)(param_1 + 0x40) = *(char *)(param_1 + 0x41);
  }
  if (*(short *)(param_1 + 0x42) != *(short *)(param_1 + 0x44)) {
    *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x44);
  }
  return;
}



void fn_0031d348(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  if (param_2 == 0) {
    if (((*(int *)(*(int *)(param_1 + 0x38) + -4) == *(int *)(*(int *)(param_1 + 0x3c) + -4)) &&
        (iVar2 = fn_001006de(), iVar2 == 0)) &&
       (*(int *)(*(int *)(param_1 + 0x38) + -4) == *(int *)(*(int *)(param_1 + 0x3c) + -4))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return;
    }
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x3c) + -4);
  *(byte *)(*(int *)(param_1 + 0x20) + 0x44) =
       0 < iVar2 | *(byte *)(*(int *)(param_1 + 0x20) + 0x44) & 0xfe;
  if (iVar2 < 1) {
    return;
  }
  fn_00190d50(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x3c));
  return;
}



void fn_0031d050(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028c898();
  puVar1[5] = 0;
  *puVar1 = &DAT_00823038;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  return;
}



void fn_0031cf9c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_00100b58(param_2);
  *(byte *)(*(int *)(param_1 + 0x20) + 0x44) =
       *(byte *)(*(int *)(param_1 + 0x20) + 0x44) & 0xfe | 0 < iVar1;
  if (iVar1 < 1) {
    return;
  }
  fn_00190d50(*(undefined4 *)(param_1 + 0x20),param_2);
  return;
}



void fn_0031cf50(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_002305a4(param_2,0);
  *(byte *)(*(int *)(param_1 + 0x28) + 0x44) =
       iVar1 != 0 | *(byte *)(*(int *)(param_1 + 0x28) + 0x44) & 0xfe;
  if (iVar1 != 0) {
    fn_00190d50(*(undefined4 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_0031ce7c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar5 = _DAT_008938c4;
  uVar4 = _DAT_008938b8;
  uVar3 = _DAT_008938b4;
  uVar2 = _DAT_008938b0;
  uVar1 = _DAT_008938a8;
  switch(param_2) {
  case 0:
    iVar6 = *(int *)(param_1 + 0x20);
    *(undefined4 *)(iVar6 + 0xac) = _DAT_008938a8;
    *(undefined4 *)(iVar6 + 0xb0) = uVar1;
    return;
  case 1:
    iVar6 = *(int *)(param_1 + 0x20);
    *(undefined4 *)(iVar6 + 0xac) = _DAT_008938b0;
    *(undefined4 *)(iVar6 + 0xb0) = uVar2;
    return;
  case 2:
    iVar6 = *(int *)(param_1 + 0x20);
    *(undefined4 *)(iVar6 + 0xac) = _DAT_008938b8;
    *(undefined4 *)(iVar6 + 0xb0) = uVar4;
    return;
  case 3:
    iVar6 = *(int *)(param_1 + 0x20);
    *(undefined4 *)(iVar6 + 0xac) = _DAT_008938b4;
    *(undefined4 *)(iVar6 + 0xb0) = uVar3;
    return;
  case 4:
    iVar6 = *(int *)(param_1 + 0x20);
    *(undefined4 *)(iVar6 + 0xac) = _DAT_008938c4;
    *(undefined4 *)(iVar6 + 0xb0) = uVar5;
    return;
  default:
    return;
  }
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_0031cc10(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  iVar2 = (**(code **)(*(int *)param_1[2] + 0x2c))((int *)param_1[2],DAT_00893894,1);
  param_1[5] = iVar2;
  iVar2 = (**(code **)(*(int *)param_1[2] + 0x2c))((int *)param_1[2],DAT_00893898,1);
  param_1[6] = iVar2;
  iVar2 = (**(code **)(*(int *)param_1[2] + 0x2c))((int *)param_1[2],DAT_0089389c,1);
  param_1[7] = iVar2;
  piVar3 = (int *)(**(code **)(*(int *)param_1[2] + 0x2c))((int *)param_1[2],DAT_008938a0,1);
  if (piVar3 != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
    do {
      if (puVar4 == &DAT_0089a930) goto LAB_0031ccc4;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_0031ccc4:
  param_1[8] = (int)piVar3;
  piVar3 = (int *)(**(code **)(*(int *)param_1[2] + 0x2c))((int *)param_1[2],(char *)&DAT_0031ce54,1);
  if (piVar3 != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
    do {
      if (puVar4 == &DAT_0089a930) goto LAB_0031cd14;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_0031cd14:
  param_1[9] = (int)piVar3;
  piVar3 = (int *)(**(code **)(*(int *)param_1[2] + 0x2c))((int *)param_1[2],&DAT_0031ce64,1);
  if (piVar3 != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
    do {
      if (puVar4 == &DAT_0089a930) goto LAB_0031cd60;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_0031cd60:
  param_1[10] = (int)piVar3;
  (**(code **)(*param_1 + 0x30))(param_1,1);
  (**(code **)(*param_1 + 0x2c))(param_1,0);
  iVar2 = fn_00100b58(&LAB_0031ce70);
  *(byte *)(param_1[8] + 0x44) = 0 < iVar2 | *(byte *)(param_1[8] + 0x44) & 0xfe;
  if (0 < iVar2) {
    fn_00190d50(param_1[8],&LAB_0031ce70);
  }
  uVar1 = _DAT_008938a8;
  iVar2 = param_1[8];
  *(undefined4 *)(iVar2 + 0xac) = _DAT_008938a8;
  *(undefined4 *)(iVar2 + 0xb0) = uVar1;
  iVar2 = fn_00230a84(0xffffffff,0);
  *(byte *)(param_1[9] + 0x44) = *(byte *)(param_1[9] + 0x44) & 0xfe | iVar2 != 0;
  if (iVar2 != 0) {
    fn_00190d50(param_1[9]);
  }
  iVar2 = fn_002305a4(0xffffffff,0);
  *(byte *)(param_1[10] + 0x44) = iVar2 != 0 | *(byte *)(param_1[10] + 0x44) & 0xfe;
  if (iVar2 != 0) {
    fn_00190d50(param_1[10]);
    return;
  }
  return;
}


