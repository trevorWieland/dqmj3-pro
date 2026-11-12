#include "005ed094_005ed6e8.h"



void fn_005ed6e8(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar1 = *(int *)(param_1 + 0x38);
  iVar2 = 0;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  *(undefined4 *)(iVar1 + 0x8c) = *param_2;
  *(undefined4 *)(iVar1 + 0x90) = uVar3;
  *(undefined4 *)(iVar1 + 0x94) = uVar4;
  *(undefined4 *)(iVar1 + 0x98) = uVar5;
  *(undefined4 *)(iVar1 + 0x9c) = uVar6;
  *(undefined4 *)(iVar1 + 0xa0) = uVar7;
  *(undefined4 *)(iVar1 + 0xa4) = uVar8;
  *(undefined4 *)(iVar1 + 0xa8) = uVar9;
  uVar3 = param_2[9];
  uVar4 = param_2[10];
  uVar5 = param_2[0xb];
  *(undefined4 *)(iVar1 + 0xac) = param_2[8];
  *(undefined4 *)(iVar1 + 0xb0) = uVar3;
  *(undefined4 *)(iVar1 + 0xb4) = uVar4;
  *(undefined4 *)(iVar1 + 0xb8) = uVar5;
  iVar1 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 2;
  if (0 < iVar1) {
    do {
      fn_005f03e4(*(undefined4 *)(*(int *)(param_1 + 0x20) + iVar2 * 4),param_2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}



void fn_005ed6a0(undefined4 *param_1)

{
  *param_1 = &DAT_00858d7c;
  if ((int *)param_1[0xf] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xf] + 4))();
    param_1[0xf] = 0;
  }
  fn_005f4254(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_005ed66c(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005f40b4(param_1,1);
  *puVar1 = &DAT_00858d7c;
  puVar1[0xf] = 0;
  fn_005ed5cc(puVar1);
  return puVar1;
}



void fn_005ed5cc(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  iVar1 = fn_00145b00(0x1c,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_005e8870();
  }
  piVar3 = *(int **)(param_1 + 0x3c);
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *(int **)(param_1 + 0x3c) = piVar2;
  }
  return;
}



void fn_005ed450(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_28;
  float local_24;
  float local_20;
  
  fn_00203fd8();
  fn_005ed094(*(undefined4 *)(param_1 + 4),param_1 + 0x38,1);
  fn_005ed100(*(undefined4 *)(param_1 + 4),param_1 + 0x44,1);
  *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x7c) + *(float *)(param_1 + 0x54);
  *(float *)(param_1 + 0x60) = *(float *)(param_1 + 0x7c) + *(float *)(param_1 + 0x60);
  fn_005e9778(*(undefined4 *)(param_1 + 4),param_1 + 0x50);
  fn_005ed440(*(undefined4 *)(param_1 + 4),param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 4);
  if (((*(char *)(iVar2 + 0x3a) != '\0') && (*(int *)(*(int *)(iVar2 + 0x3c) + 0x14) != 0)) &&
     (iVar3 = fn_005ed160(iVar2), iVar3 != 0)) {
    bVar5 = *(int *)(*(int *)(iVar2 + 0x3c) + 0x14) == 0;
    cVar1 = '\0';
    if (!bVar5) {
      cVar1 = *(char *)(iVar2 + 0x3a);
    }
    if ((bVar5 || cVar1 == '\0') ||
       (*(float *)(*(int *)(iVar2 + 0x3c) + 0xc) <= *(float *)(*(int *)(iVar2 + 0x3c) + 4))) {
      *(undefined1 *)(iVar2 + 0x3a) = 0;
    }
    else {
      fn_005e6d00();
    }
  }
  fVar6 = *(float *)(iVar2 + 8) + *(float *)(iVar2 + 0x20);
  fVar7 = *(float *)(iVar2 + 0xc) + *(float *)(iVar2 + 0x24);
  fVar8 = *(float *)(iVar2 + 0x10) + *(float *)(iVar2 + 0x28);
  local_28 = *(float *)(iVar2 + 0x14) + *(float *)(iVar2 + 0x2c);
  local_24 = *(float *)(iVar2 + 0x18) + *(float *)(iVar2 + 0x30);
  local_20 = *(float *)(iVar2 + 0x1c) + *(float *)(iVar2 + 0x34);
  iVar3 = fn_00176d68(iVar2);
  *(float *)(iVar3 + 0x58) = fVar6;
  *(float *)(iVar3 + 0x68) = fVar7;
  *(float *)(iVar3 + 0x78) = fVar8;
  *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 0x800;
  uVar4 = fn_00176d68(iVar2);
  fn_005456f4(uVar4,&local_28);
  return;
}



void fn_005ed440(int param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  puVar1 = (uint *)(param_1 + 0x2c);
  *puVar1 = *param_2;
  *(uint *)(param_1 + 0x30) = uVar2;
  *(uint *)(param_1 + 0x34) = uVar3;
  if (((int)(0x7f800000 - (*puVar1 & 0x7fffffff)) < 0) || (*puVar1 * -2 == 0x1000000)) {
    *puVar1 = 0;
  }
  if (((int)(0x7f800000 - (*(uint *)(param_1 + 0x30) & 0x7fffffff)) < 0) ||
     (*(uint *)(param_1 + 0x30) * -2 == 0x1000000)) {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (((int)(0x7f800000 - (*(uint *)(param_1 + 0x34) & 0x7fffffff)) < 0) ||
     (*(uint *)(param_1 + 0x34) * -2 == 0x1000000)) {
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return;
}



undefined4 fn_005ed160(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined1 *puVar5;
  undefined1 *local_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined1 local_44 [4];
  undefined1 auStack_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [20];
  
  uVar1 = fn_006ebdac(*(undefined4 *)(param_1 + 0x3c));
  puVar5 = *(undefined1 **)(*(int *)(param_1 + 0x3c) + 4);
  iVar2 = fn_006ebc48(uVar1);
  puVar4 = puVar5;
  if (iVar2 != 0) {
    fn_006ebb4c(uVar1);
    *(undefined1 **)(param_1 + 8) = puVar5;
    *(undefined4 *)(param_1 + 0xc) = in_s1;
    *(undefined4 *)(param_1 + 0x10) = in_s2;
  }
  iVar2 = fn_006ebcfc(uVar1);
  puVar5 = puVar4;
  if (iVar2 != 0) {
    fn_006ebc80(uVar1);
    *(undefined1 **)(param_1 + 0x14) = puVar4;
    *(undefined4 *)(param_1 + 0x18) = in_s1;
    *(undefined4 *)(param_1 + 0x1c) = in_s2;
  }
  iVar2 = fn_006ebb84(uVar1);
  if (iVar2 != 0) {
    fn_006ebd40(uVar1);
    fn_00176d68(param_1);
    fn_00545c9c();
  }
  iVar2 = fn_006ebce4(uVar1);
  if (iVar2 != 0) {
    puVar4 = puVar5;
    fn_006ebc14(uVar1);
    local_58 = puVar5;
    uVar3 = fn_00176d68(param_1);
    puVar5 = puVar4;
    fn_005455e4(uVar3,&local_58);
  }
  iVar2 = fn_006ebcb4(uVar1);
  if (iVar2 != 0) {
    fn_006ebb9c(uVar1);
    local_58 = puVar5;
    uVar3 = fn_00176d68(param_1);
    fn_00544c54(uVar3,&local_58);
  }
  iVar2 = fn_006ebc60(uVar1);
  if (iVar2 == 0) {
    uVar3 = fn_00176d68(param_1);
    local_58 = local_38;
    fn_006dcca4(uVar3,local_30,local_2c,local_34);
    iVar2 = fn_006ebb1c(uVar1);
    if (iVar2 != 0) {
      fn_006ebd14(uVar1);
    }
    iVar2 = fn_006ebccc(uVar1);
    if (iVar2 != 0) {
      fn_006ebbe8(uVar1);
    }
    iVar2 = fn_006ebb34(uVar1);
    if (iVar2 != 0) {
      fn_006ebaf0(uVar1);
    }
    iVar2 = fn_006ebad8(uVar1);
    if (iVar2 != 0) {
      fn_006ebaac(uVar1);
    }
    fn_00176d68(param_1);
    fn_00545310();
  }
  else {
    if (iVar2 != 1) {
      return 0;
    }
    uVar3 = fn_00176d68(param_1);
    puStack_50 = local_28;
    puStack_54 = local_24;
    local_58 = local_20;
    fn_006dcdb8(uVar3,local_44,auStack_40,local_3c);
    iVar2 = fn_006ebb34(uVar1);
    if (iVar2 != 0) {
      fn_006ebaf0(uVar1);
    }
    iVar2 = fn_006ebad8(uVar1);
    if (iVar2 != 0) {
      fn_006ebaac(uVar1);
    }
    iVar2 = fn_006ebbd0(uVar1);
    if (iVar2 != 0) {
      fn_006ebd6c(uVar1);
    }
    fn_00176d68(param_1);
    fn_00545c14();
  }
  return 1;
}



void fn_005ed100(int param_1,float *param_2,int param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float local_10;
  float local_c;
  float local_8;
  
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  *(float *)(param_1 + 0x14) = *param_2;
  *(float *)(param_1 + 0x18) = fVar2;
  *(float *)(param_1 + 0x1c) = fVar3;
  if (param_3 == 0) {
    return;
  }
  local_10 = *param_2 + *(float *)(param_1 + 0x2c);
  local_c = param_2[1] + *(float *)(param_1 + 0x30);
  local_8 = param_2[2] + *(float *)(param_1 + 0x34);
  uVar1 = fn_00176d68();
  fn_005456f4(uVar1,&local_10);
  return;
}



void fn_005ed094(int param_1,float *param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  *(float *)(param_1 + 8) = *param_2;
  *(float *)(param_1 + 0xc) = fVar2;
  *(float *)(param_1 + 0x10) = fVar3;
  if (param_3 != 0) {
    iVar1 = fn_00176d68(param_1);
    fVar3 = param_2[1];
    fVar2 = param_2[2];
    fVar4 = *(float *)(param_1 + 0x24);
    fVar5 = *(float *)(param_1 + 0x28);
    *(float *)(iVar1 + 0x58) = *param_2 + *(float *)(param_1 + 0x20);
    *(float *)(iVar1 + 0x68) = fVar3 + fVar4;
    *(float *)(iVar1 + 0x78) = fVar2 + fVar5;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x800;
  }
  return;
}


