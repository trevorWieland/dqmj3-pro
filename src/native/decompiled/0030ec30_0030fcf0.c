#include "0030ec30_0030fcf0.h"



void fn_0030fcf0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x20) != -1) {
    piVar1 = (int *)fn_0068c7e8(DAT_008977e8);
    (**(code **)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  }
  return;
}



void fn_0030fce4(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(*param_1 + 0x30);
  if (*(int *)(iVar1 + 0x20) != -1) {
    piVar2 = (int *)fn_0068c7e8(DAT_008977e8);
    (**(code **)(*piVar2 + 0xc))(piVar2,*(undefined4 *)(iVar1 + 0x20));
    *(undefined4 *)(iVar1 + 0x20) = 0xffffffff;
  }
  return;
}



void fn_0030fb10(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  fn_00144810(DAT_008977e8);
  uVar1 = fn_006a8890();
  bVar9 = uVar1 == 0;
  if (bVar9) {
    uVar1 = (uint)*(byte *)(param_1 + 0x28);
  }
  if ((bVar9 && uVar1 == 0) &&
     (iVar2 = fn_006a8708(*(undefined4 *)(param_1 + 0x14)), *(int *)(param_1 + 0x1c) <= iVar2)) {
    *(undefined1 *)(param_1 + 0x28) = 1;
    uVar3 = fn_0014481c(DAT_008977e8);
    iVar2 = fn_006b6754(uVar3,0);
    iVar4 = fn_006a8890(*(undefined4 *)(param_1 + 0x14));
    if (iVar4 == 0) {
      iVar5 = fn_006a8858(*(undefined4 *)(param_1 + 0x14),0);
      iVar4 = fn_006a8858(*(undefined4 *)(param_1 + 0x14),0);
      uVar1 = 1;
      iVar7 = iVar4;
      iVar8 = iVar5;
      if (1 < iVar2) {
        do {
          iVar5 = fn_006a8858(*(undefined4 *)(param_1 + 0x14),uVar1 & 0xff,0);
          if (iVar8 <= iVar5) {
            iVar5 = iVar8;
          }
          iVar4 = fn_006a8858(*(undefined4 *)(param_1 + 0x14),uVar1 & 0xff,0);
          if (iVar4 <= iVar7) {
            iVar4 = iVar7;
          }
          uVar1 = uVar1 + 1;
          iVar7 = iVar4;
          iVar8 = iVar5;
        } while ((int)uVar1 < iVar2);
      }
      if (iVar4 - iVar5 < 5) {
        return;
      }
    }
    uVar3 = fn_0068c6b8(DAT_008977e8);
    uVar6 = fn_0014481c(DAT_008977e8);
    fn_0024baa4(uVar6,uVar3);
    fn_0068c700(DAT_008977e8);
    uVar3 = fn_001fe714();
    fn_002328c4(uVar3,0xb);
    uVar3 = fn_0068c7e8(DAT_008977e8);
    uVar3 = fn_0023e194(uVar3,0x9c65,0);
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    *(undefined4 *)(param_1 + 0x24) = 0x45070000;
    fn_0068e960(DAT_008977e8);
    fn_00664c58();
    fn_0068e960(DAT_008977e8);
    fn_0017fd40();
    *(undefined1 *)(param_1 + 10) = 1;
  }
  return;
}



void fn_0030f990(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_280 [4];
  undefined4 local_27c;
  undefined4 local_278;
  undefined2 local_274;
  undefined2 local_272;
  undefined2 local_270;
  undefined2 local_26e;
  undefined1 local_26c [72];
  undefined4 local_224;
  undefined4 local_220;
  undefined1 local_21c [380];
  undefined1 auStack_a0 [96];
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 auStack_3e [12];
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29 [4];
  undefined1 local_25;
  undefined1 local_24;
  
  local_30 = 0x5a;
  local_2f = 0xff;
  local_2e = 1;
  local_2d = 1;
  iVar1 = 0;
  do {
    fn_001003e0(auStack_a0 + iVar1 * 0x18,&DAT_008c7328);
    local_29[iVar1] = 0;
    *(undefined4 *)(local_21c + iVar1 * 0x60 + -4) = 0;
    local_21c[iVar1 * 0x60] = 0;
    iVar2 = iVar1 + 1;
    iVar1 = iVar1 * 0x12;
    local_26c[iVar1] = 0;
    local_26c[iVar1 + 6] = 0;
    local_26c[iVar1 + 0xc] = 0;
    iVar1 = iVar2;
  } while (iVar2 < 4);
  fn_0011a604(auStack_3e);
  local_2a = 0;
  local_25 = 0;
  local_2c = 1;
  local_2b = 0;
  local_30 = 0;
  local_40 = 0;
  local_32 = 1;
  local_2f = 0;
  local_27c = 0;
  local_3f = 1;
  local_31 = 3;
  local_224 = 0;
  if (*(char *)(param_1 + 4) == '\0') {
    local_274 = 0x17a;
    local_270 = 0;
    local_280[0] = 2;
    local_24 = 3;
    local_278 = 0;
    local_272 = 0;
    local_26e = 0;
    fn_001003e0(auStack_a0,*(undefined4 *)(*(int *)(DAT_00897804 + 8) + 4));
    local_30 = 0x5a;
    local_2f = 0;
    local_2c = 0;
    fn_00176fb0(&local_220,*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0xc4);
  }
  else if (*(char *)(param_1 + 4) == '\x01') {
    fn_006be218(param_1,local_280);
  }
  fn_0068c764(DAT_008977e8,local_280);
  return;
}



undefined4 fn_0030f7a0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  param_1[0x16] = param_2;
  fn_0026009c(param_1,param_2,1);
  iVar1 = fn_0068cafc(DAT_008977e8);
  param_1[0x12] = *(int *)(iVar1 + 0x2a0);
  local_28 = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  local_24 = *(undefined4 *)(param_2 + 0x24);
  local_20 = 0;
  (**(code **)(*param_1 + 0x24))(param_1,&local_28);
  fn_00260538(param_1,param_1[0x16]);
  iVar1 = (**(code **)(*(int *)param_1[0x16] + 0x98))();
  if (iVar1 == 0) {
    fn_00260664(param_1,0xa047,param_1 + 8);
  }
  else {
    fn_00260664(param_1,0xa03c,param_1 + 8);
  }
  return 1;
}



void fn_0030f690(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_20;
  int iStack_1c;
  int iStack_18;
  
  iVar1 = fn_0068cafc(DAT_008977e8);
  iVar2 = param_1[0x1e];
  param_1[0x1e] = iVar2 + 1;
  if (*(int *)(iVar1 + 0x290) <= iVar2 + 1) {
    *(undefined1 *)(param_1 + 0x1f) = 1;
    if ((char)param_1[0x19] != '\0') {
      *(undefined1 *)(param_1 + 0x19) = 0;
      param_1[0x18] = 0;
    }
    return;
  }
  iVar1 = fn_002603c0(param_1);
  if ((iVar1 != 0) && (iVar1 = fn_006a0b98(iVar1,param_1), iVar1 != 0)) {
    local_20 = param_1[2];
    iStack_1c = param_1[3];
    iStack_18 = param_1[4];
    fn_0014481c(DAT_008977e8);
    iVar1 = fn_00263814();
    fn_00660790(0x17,iVar1 + 8,&local_20);
    iVar1 = (**(code **)(*(int *)param_1[0x16] + 0x98))();
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 0x44))(param_1,0xa04a,1);
    }
    else {
      (**(code **)(*param_1 + 0x44))(param_1,0xa042);
    }
    *(undefined1 *)(param_1 + 0x1f) = 1;
  }
  return;
}



void fn_0030f5ec(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 4);
  while (cVar1 == '\0') {
    if (*(char *)(param_1 + 0xc) != '\0') {
      fn_0012d6a4(3000000,0);
      *(undefined1 *)(param_1 + 0xc) = 0;
      fn_0015dfc0(*(undefined4 *)(param_1 + 8));
    }
    if (*(char *)(param_1 + 0xd) != '\0') {
      fn_0012d6a4(1000000,0);
    }
    fn_005f437c();
    cVar1 = *(char *)(param_1 + 4);
  }
  return;
}



int fn_0030f4e8(int param_1)

{
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 4))();
  }
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x24) + 4))();
  }
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 4))();
  }
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
  }
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x18) + 4))();
  }
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 4))();
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 4))();
  }
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 8))();
  }
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 8) + 4))();
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 4))();
  }
  return param_1;
}



void fn_0030f4b0(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  return;
}



int fn_0030ec30(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  param_1[1] = param_2;
  *param_1 = &DAT_0082227c;
  iVar1 = fn_00101a1c(param_1 + 2,&LAB_0030ec08,0x2ec,5);
  iVar2 = fn_00145b00(0x18,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_00268794();
  }
  *(undefined4 *)(iVar1 + 0xe9c) = uVar3;
  iVar1 = fn_00388f90(iVar1 + 0xf4c);
  iVar1 = fn_001139cc(iVar1 + 0x48);
  uVar4 = 0;
  do {
    fn_00301f50(iVar1 + -0xf9c + uVar4 * 0x2ec + 8,0x2ec);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 5);
  *(undefined4 *)(iVar1 + -0x48) = 0;
  *(undefined4 *)(iVar1 + -0x44) = 0;
  *(undefined4 *)(iVar1 + -0x40) = 0;
  *(undefined4 *)(iVar1 + -0x3c) = 0;
  *(undefined4 *)(iVar1 + -0x38) = 0;
  *(undefined4 *)(iVar1 + -0x34) = 0;
  *(undefined4 *)(iVar1 + -0x30) = 0;
  *(undefined4 *)(iVar1 + -0x2c) = 0;
  *(undefined4 *)(iVar1 + -0x28) = 0;
  *(undefined4 *)(iVar1 + -0x24) = 0;
  *(undefined4 *)(iVar1 + -0x20) = 0;
  *(undefined4 *)(iVar1 + -0x1c) = 0;
  *(undefined4 *)(iVar1 + -0x18) = 0;
  *(undefined4 *)(iVar1 + -0x14) = 0;
  *(undefined4 *)(iVar1 + -0x10) = 0;
  fn_00301f50(iVar1 + -4,0x54);
  return iVar1 + -0xf9c;
}


