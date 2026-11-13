#include "001cd700_001cdcc4.h"



void fn_001cdcc4(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *unaff_r7;
  
  *param_1 = &DAT_0081bd48;
  if ((param_1[1] & 0x80000000) == 0) {
    fn_0024d73c(param_1[5] + 0x44,param_1);
  }
  iVar1 = param_1[7];
  if (iVar1 != 0) {
    uVar7 = *(uint *)(iVar1 + 0x24);
    iVar2 = *(int *)(iVar1 + 4) + -1;
    *(int *)(iVar1 + 4) = iVar2;
    if (iVar2 == 0) {
      (**(code **)(*(int *)param_1[7] + 8))();
    }
    if (uVar7 != 0) {
      unaff_r7 = &DAT_008c06e8;
    }
    uVar6 = 0;
    param_1[7] = 0;
    if (uVar7 != 0) {
      do {
        piVar3 = (int *)param_1[uVar6 * 2 + 0xc];
        uVar4 = param_1[uVar6 * 2 + 0xb];
        param_1[uVar6 * 2 + 0xc] = unaff_r7[1];
        uVar5 = *unaff_r7;
        param_1[uVar6 * 2 + 0xb] = uVar5;
        if ((uVar5 & 0x8000000) != 0) {
          *(int *)(param_1[uVar6 * 2 + 0xc] + 4) = *(int *)(param_1[uVar6 * 2 + 0xc] + 4) + 1;
        }
        if (((uVar4 & 0x8000000) != 0) &&
           (iVar1 = piVar3[1], piVar3[1] = iVar1 + -1, iVar1 + -1 == 0)) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar7);
    }
  }
  fn_00100414(param_1 + 0xb,fn_00202f7c,8,1);
  *param_1 = &DAT_0081d020;
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1[2] + 0xc) = 0x1000001;
    *(undefined4 *)(param_1[2] + 0x10) = 0;
  }
  return;
}



void fn_001cdc04(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *unaff_r7;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  uVar7 = *(uint *)(iVar1 + 0x24);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 4) + -1;
    *(int *)(iVar1 + 4) = iVar2;
    if (iVar2 == 0) {
      (**(code **)(**(int **)(param_1 + 0x1c) + 8))();
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (uVar7 != 0) {
    unaff_r7 = &DAT_008c06e8;
  }
  uVar6 = 0;
  if (uVar7 != 0) {
    do {
      iVar1 = param_1 + uVar6 * 8;
      piVar3 = *(int **)(iVar1 + 0x30);
      uVar5 = *(uint *)(iVar1 + 0x2c);
      *(uint *)(iVar1 + 0x30) = unaff_r7[1];
      uVar4 = *unaff_r7;
      *(uint *)(iVar1 + 0x2c) = uVar4;
      if ((uVar4 & 0x8000000) != 0) {
        *(int *)(*(int *)(iVar1 + 0x30) + 4) = *(int *)(*(int *)(iVar1 + 0x30) + 4) + 1;
      }
      if (((uVar5 & 0x8000000) != 0) && (iVar1 = piVar3[1], piVar3[1] = iVar1 + -1, iVar1 + -1 == 0)
         ) {
        (**(code **)(*piVar3 + 8))(piVar3);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar7);
  }
  return;
}



void fn_001cdba0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1[1] + 1;
  param_1[1] = iVar1;
  if ((code *)param_1[9] != (code *)0x0) {
    (*(code *)param_1[9])(param_1[8],0);
    iVar1 = param_1[1];
  }
  param_1[1] = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    uVar2 = param_1[10];
    (**(code **)*param_1)(param_1);
    fn_0019d680(param_1,uVar2);
    return;
  }
  return;
}



void fn_001cdb18(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((*(uint *)(param_1 + 4) & 0x80000000) != 0) {
    return;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80000000;
  (**(code **)(**(int **)(param_1 + 0x1c) + 0xc))(*(int **)(param_1 + 0x1c),param_2);
  uVar1 = 0;
  uVar2 = *(uint *)(*(int *)(param_1 + 0x1c) + 0x24);
  if (uVar2 != 0) {
    do {
      fn_0024d77c(param_1 + uVar1 * 8 + 0x2c,param_2);
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar2);
  }
  fn_0024d73c(*(int *)(param_1 + 0x14) + 0x44,param_1);
  fn_0019e8c4(param_2,param_1);
  return;
}



bool fn_001cdaec(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  
  bVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x38) + param_3 * 8) != 0x1000001;
  if (bVar1) {
    fn_0019e864(param_4);
  }
  return bVar1;
}



void fn_001cd9e4(int *param_1)

{
  int iVar1;
  
  fn_001a2d50();
  while (iVar1 = *param_1, (iVar1 == 0x25 || iVar1 == 0x2a) || iVar1 == 0x2f) {
    fn_001a6fac(param_1,0x11,fn_001a2d50,0,iVar1);
  }
  while (iVar1 = *param_1, iVar1 == 0x2b || iVar1 == 0x2d) {
    fn_001a6fac(param_1,0x11,fn_001cd91c,0,iVar1);
  }
  while( true ) {
    while( true ) {
      while (iVar1 = *param_1, iVar1 == 0x128) {
        fn_001a6fac(param_1,0x12,fn_001cd968,0,4);
      }
      if (iVar1 != 0x129) break;
      fn_001a6fac(param_1,0x12,fn_001cd968,0,5);
    }
    if (iVar1 != 0x132) break;
    fn_001a6fac(param_1,0x12,fn_001cd968,0,6);
  }
  return;
}



void fn_001cd968(int *param_1)

{
  int iVar1;
  
  fn_001a2d50();
  while (iVar1 = *param_1, (iVar1 == 0x25 || iVar1 == 0x2a) || iVar1 == 0x2f) {
    fn_001a6fac(param_1,0x11,fn_001a2d50,0,iVar1);
  }
  while (iVar1 = *param_1, iVar1 == 0x2b || iVar1 == 0x2d) {
    fn_001a6fac(param_1,0x11,fn_001cd91c,0,iVar1);
  }
  return;
}



void fn_001cd91c(int *param_1)

{
  int iVar1;
  
  fn_001a2d50();
  while (iVar1 = *param_1, (iVar1 == 0x25 || iVar1 == 0x2a) || iVar1 == 0x2f) {
    fn_001a6fac(param_1,0x11,fn_001a2d50,0,iVar1);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x001cd8a8) */
/* WARNING: Removing unreachable block (ram,0x001cd828) */

void fn_001cd7c0(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  fn_001a7040();
  while (*param_1 == 0x26) {
    iVar2 = fn_001a9c90(param_1 + 4);
    *param_1 = iVar2;
    fn_001a7040();
    uVar3 = fn_001a9704(param_1[1]);
    uVar1 = fn_001a9704(param_1[1]);
    iVar2 = param_1[1];
    local_2b = fn_001a72b0(iVar2,0xffffffff);
    local_2c = 0x12;
    local_29 = 0;
    local_30 = uVar3;
    local_2a = uVar1;
    fn_001a759c(iVar2,&local_30);
  }
  while (*param_1 == 0x5e) {
    iVar2 = fn_001a9c90(param_1 + 4);
    *param_1 = iVar2;
    fn_001cd700();
    uVar3 = fn_001a9704(param_1[1]);
    uVar1 = fn_001a9704(param_1[1]);
    iVar2 = param_1[1];
    local_33 = fn_001a72b0(iVar2,0xffffffff);
    local_34 = 0x12;
    local_31 = 3;
    local_38 = uVar3;
    local_32 = uVar1;
    fn_001a759c(iVar2,&local_38);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x001cd750) */

void fn_001cd700(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  fn_001a7040();
  while (*param_1 == 0x26) {
    iVar2 = fn_001a9c90(param_1 + 4);
    *param_1 = iVar2;
    fn_001a7040();
    uVar3 = fn_001a9704(param_1[1]);
    uVar1 = fn_001a9704(param_1[1]);
    iVar2 = param_1[1];
    local_2b = fn_001a72b0(iVar2,0xffffffff);
    local_2c = 0x12;
    local_29 = 0;
    local_30 = uVar3;
    local_2a = uVar1;
    fn_001a759c(iVar2,&local_30);
  }
  return;
}


