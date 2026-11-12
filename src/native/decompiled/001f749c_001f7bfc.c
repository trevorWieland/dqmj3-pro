#include "001f749c_001f7bfc.h"



void fn_001f7bfc(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 auStack_20 [8];
  
  uVar2 = *param_2;
  puVar1 = (undefined4 *)fn_001603f8(auStack_20,0xff);
  if ((param_4 != 0) && (*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc))) {
    local_24 = *puVar1;
    local_28 = uVar2;
    fn_0068869c(DAT_00897808,&local_28,&local_24,param_3);
  }
  if ((param_5 != 0) && (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc))) {
    local_24 = *puVar1;
    local_28 = uVar2;
    fn_0068869c(DAT_0089780c,&local_28,&local_24,param_3);
  }
  return;
}



void fn_001f7a98(int *param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  fn_001c93c8(*(undefined4 *)(param_1[1] + 8));
  if (*(int *)(param_1[1] + 0xc) != 0) {
    fn_001c93c8();
  }
  if (param_1[2] != 0) {
    fn_0028c2fc();
  }
  fn_003b7fec(param_1[0xc]);
  fn_002b183c(param_1[0xb]);
  switch((char)param_1[8]) {
  case '\0':
    *(undefined1 *)((int)param_1 + 0x22) = 1;
    param_1[9] = param_1[9] + 1;
    *(char *)((int)param_1 + 0x21) = (char)param_1[8];
    *(undefined1 *)(param_1 + 8) = 1;
    param_1[10] = 0;
    break;
  case '\x01':
    break;
  case '\x02':
    if ((*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc)) &&
       (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc))) {
      (**(code **)(*param_1 + 0x20))(param_1);
      uVar2 = 3;
LAB_001f7bc8:
      *(undefined1 *)((int)param_1 + 0x22) = uVar2;
    }
    break;
  case '\x03':
    iVar1 = (**(code **)(*param_1 + 0x24))(param_1);
    if (iVar1 != 0) {
      uVar2 = 1;
      goto LAB_001f7bc8;
    }
    break;
  default:
    goto switchD_001f7ae4_default;
  }
  fn_002b1908(param_1);
switchD_001f7ae4_default:
  fn_0069e878(param_1[0xe]);
  if ((int *)param_1[0xf] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xf] + 0xc))();
  }
  iVar1 = param_1[8];
  param_1[9] = param_1[9] + 1;
  *(char *)((int)param_1 + 0x21) = (char)iVar1;
  *(char *)(param_1 + 8) = *(char *)((int)param_1 + 0x22);
  if ((char)iVar1 == *(char *)((int)param_1 + 0x22)) {
    param_1[10] = param_1[10] + 1;
  }
  else {
    param_1[10] = 0;
  }
  return;
}



undefined4 fn_001f78b8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_0028e340(*(undefined4 *)(param_1 + 0xc));
  if ((((iVar1 != 0) || (iVar1 = fn_0028e340(*(undefined4 *)(param_1 + 0x10)), iVar1 != 0)) ||
      (iVar1 = fn_0028e340(*(undefined4 *)(param_1 + 0x14)), iVar1 != 0)) ||
     ((iVar1 = fn_0028e340(*(undefined4 *)(param_1 + 0x18)), iVar1 != 0 ||
      (uVar2 = 0, *(int *)(*(int *)(param_1 + 0x2c) + 0x1c) != 0)))) {
    uVar2 = 1;
  }
  return uVar2;
}



void fn_001f7810(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined1 auStack_20 [4];
  undefined4 local_1c [2];
  
  puVar1 = (undefined4 *)fn_001603f8(auStack_20,0);
  if ((param_3 != 0) && (*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc))) {
    local_1c[0] = *puVar1;
    fn_00163988(DAT_00897808,local_1c,param_2);
  }
  if ((param_4 != 0) && (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc))) {
    local_1c[0] = *puVar1;
    fn_00163988(DAT_0089780c,local_1c,param_2);
  }
  return;
}



void fn_001f7768(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_20 [4];
  undefined4 local_1c [2];
  
  puVar1 = (undefined4 *)fn_001603f8(auStack_20,0);
  if ((param_2 != 0) && (*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc))) {
    local_1c[0] = *puVar1;
    fn_00163988(DAT_00897808,local_1c,10);
  }
  if ((param_3 != 0) && (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc))) {
    local_1c[0] = *puVar1;
    fn_00163988(DAT_0089780c,local_1c,10);
  }
  return;
}



void fn_001f76b8(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 auStack_20 [8];
  
  uVar2 = *param_2;
  puVar1 = (undefined4 *)fn_001603f8(auStack_20,0);
  if ((param_4 != 0) && (*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc))) {
    local_24 = *puVar1;
    local_28 = uVar2;
    fn_0068869c(DAT_00897808,&local_28,&local_24,param_3);
  }
  if ((param_5 != 0) && (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc))) {
    local_24 = *puVar1;
    local_28 = uVar2;
    fn_0068869c(DAT_0089780c,&local_28,&local_24,param_3);
  }
  return;
}



void fn_001f7624(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  uVar1 = fn_003b8054(*(undefined4 *)(param_1 + 0x30),1,0);
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  iVar2 = fn_00145b00(8,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)fn_00348e70();
  }
  piVar4 = *(int **)(param_1 + 0x3c);
  if (piVar4 != piVar3) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *(int **)(param_1 + 0x3c) = piVar3;
  }
  if (*(int *)(param_1 + 0x3c) == 0) {
    return;
  }
  uVar1 = fn_003b7324(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x40));
  fn_00348dbc(*(undefined4 *)(param_1 + 0x3c),uVar1,*(undefined4 *)(*(int *)(param_1 + 0x34) + 8));
  return;
}



void fn_001f757c(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 local_18;
  
  if ((param_4 != 0) && (*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc))) {
    local_18 = *param_2;
    fn_00163988(DAT_00897808,&local_18,param_3);
  }
  if ((param_5 != 0) && (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc))) {
    local_18 = *param_2;
    fn_00163988(DAT_0089780c,&local_18,param_3);
  }
  return;
}



void fn_001f7540(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    return;
  }
  uVar1 = fn_003b7324(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x40));
  fn_00348dbc(*(undefined4 *)(param_1 + 0x3c),uVar1,*(undefined4 *)(*(int *)(param_1 + 0x34) + 8));
  return;
}



void fn_001f7524(int param_1)

{
  if (*(int **)(param_1 + 0x3c) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001f7538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x3c) + 8))();
  return;
}



void fn_001f751c(int param_1)

{
  fn_0028e658(*(undefined4 *)(param_1 + 0xc));
  return;
}



void fn_001f7510(int param_1)

{
  fn_0028e658(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x18) + 0xc));
  return;
}



void fn_001f7500(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001f750c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x14) + 0x34))();
  return;
}



void fn_001f74f8(int param_1)

{
  fn_0028e658(*(undefined4 *)(param_1 + 0x10));
  return;
}



void fn_001f74ec(int param_1)

{
  fn_0028e658(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x18) + 0x10));
  return;
}



void fn_001f74e4(int param_1)

{
  fn_0028e658(*(undefined4 *)(param_1 + 0x14));
  return;
}



void fn_001f74d8(int param_1)

{
  fn_0028e658(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x18) + 0x14));
  return;
}



void fn_001f749c(int param_1,int param_2)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 0x24))(*(int **)(param_1 + 0xc),param_2);
  if (param_2 == 0) {
    return;
  }
  fn_0069d394(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x34));
  return;
}


