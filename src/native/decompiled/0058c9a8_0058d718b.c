#include "0058c9a8_0058d718b.h"



void fn_0058d718(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xf0) == '\0') {
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xec) + 0x3c);
  if (iVar1 < 2) {
    fn_0068ab44(param_1,0x100094d);
  }
  else {
    iVar1 = iVar1 + -10;
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    *(int *)(*(int *)(param_1 + 0xec) + 0x3c) = iVar1;
    fn_0068ab44(param_1,0x1000957);
  }
  *(undefined1 *)(*(int *)(param_1 + 0xd0) + 0xb) = *(undefined1 *)(*(int *)(param_1 + 0xec) + 0x3c)
  ;
  fn_0058ce98(param_1,0xffffffff);
  return;
}



void fn_0058d6a4(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xf0) == '\0') {
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xec) + 0x3c);
  if (iVar1 < 2) {
    fn_0068ab44(param_1,0x100094d);
  }
  else {
    *(int *)(*(int *)(param_1 + 0xec) + 0x3c) = iVar1 + -1;
    fn_0068ab44(param_1,0x1000957);
  }
  *(undefined1 *)(*(int *)(param_1 + 0xd0) + 0xb) = *(undefined1 *)(*(int *)(param_1 + 0xec) + 0x3c)
  ;
  fn_0058ce98(param_1,0xffffffff);
  return;
}



void fn_0058d630(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xf0) == '\0') {
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xec) + 0x3c);
  if (iVar1 < 100) {
    *(int *)(*(int *)(param_1 + 0xec) + 0x3c) = iVar1 + 1;
    fn_0068ab44(param_1,0x1000957);
  }
  else {
    fn_0068ab44(param_1,0x100094d);
  }
  *(undefined1 *)(*(int *)(param_1 + 0xd0) + 0xb) = *(undefined1 *)(*(int *)(param_1 + 0xec) + 0x3c)
  ;
  fn_0058ce98(param_1,0xffffffff);
  return;
}



void fn_0058d524(int param_1)

{
  if (*(char *)(param_1 + 0xf0) == '\0') {
    return;
  }
  *(undefined1 *)(*(int *)(param_1 + 0xd0) + 0xb) = *(undefined1 *)(param_1 + 0xf1);
  fn_0058ce98(param_1,0xffffffff);
  fn_00689828(param_1,1);
  fn_00327a7c(*(undefined4 *)(param_1 + 0xec));
  *(undefined1 *)(param_1 + 0xf0) = 0;
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_0058d44c(int *param_1)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((char)param_1[0x3c] == '\0') {
    return;
  }
  *(undefined1 *)((int)param_1 + 0xf1) = *(undefined1 *)(param_1[0x34] + 0xb);
  (**(code **)(*param_1 + 0x124))(param_1);
  if (*(char *)(param_1[0x34] + 0xb) != '\0') {
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    fn_00101a50(&local_30,0x10,&LAB_0058d5f0);
    fn_0031b78c(param_1,3,4,&local_30);
  }
  fn_0058ce98(param_1,0xffffffff);
  fn_00689828(param_1,1);
  fn_00327a7c(param_1[0x3b]);
  *(undefined1 *)(param_1 + 0x3c) = 0;
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_0058cf24(int param_1)

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
  fn_0018a618(&local_20,0x18,0x17,&DAT_0058cf84,*(undefined4 *)(param_1 + 0xe8));
  fn_005d27ac(param_1 + 0xc0,1,1,&local_20);
  return;
}


