#include "0017440c_00174900b.h"



void fn_00174900(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_38 [5];
  undefined4 local_24;
  undefined4 local_20;
  
  uVar4 = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  iVar1 = fn_00164a34();
  if (iVar1 != 0) {
    iVar1 = fn_00174828(DAT_008977e4);
    iVar1 = iVar1 + (char)param_2 * 0x418;
    if (0 < *(short *)(iVar1 + -0x4080)) {
      local_38[0] = param_2;
      iVar2 = fn_00164a34(param_1,param_2);
      if (((iVar2 != 0) && (iVar2 = fn_0017484c(DAT_008977e4), iVar2 != 0)) &&
         (iVar2 = fn_00165bb4(iVar2,local_38), iVar2 != 0)) {
        uVar3 = fn_00166780(*(undefined4 *)(iVar2 + 4));
        local_24 = *(undefined4 *)(iVar2 + 0x1c);
        local_38[0] = iVar2 + 0x24;
        local_38[4] = uVar4;
        local_20 = uVar4;
        fn_0017ab7c(local_38 + 1,uVar3,(int)*(char *)(iVar1 + -0x4027),local_38 + 4);
      }
    }
  }
  return;
}



int fn_001748ec(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar1 = (int)*(char *)(*(int *)(param_1 + 0x50) + 0x35);
  }
  return iVar1;
}



int fn_00174870(int param_1)

{
  switch(*(undefined1 *)(param_1 + 4)) {
  case 2:
  case 3:
  case 4:
    return param_1 + 0x148;
  case 5:
    return param_1 + 0x998;
  case 6:
    return param_1 + 0x1aa0;
  case 7:
    return param_1 + 0x1ad8;
  case 8:
    return param_1 + 0x23b0;
  default:
    return param_1 + 8;
  }
}



void fn_001747e8(undefined4 param_1)

{
  fn_0017fdbc();
  fn_0017fd4c(param_1);
  fn_0017fdcc(param_1);
  return;
}



void fn_001747e0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  fn_0017fdbc();
  fn_0017fd4c(uVar1);
  fn_0017fdcc(uVar1);
  return;
}



int fn_001747a8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00101c78(param_1 + 2,0,10);
  iVar2 = fn_00101c78(param_1 + 6,0,10);
  return iVar2 + iVar1 * 100;
}



void fn_00174708(float *param_1,undefined4 param_2,int param_3)

{
  float local_a0;
  float local_9c;
  undefined1 auStack_90 [48];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 auStack_50 [64];
  
  fn_001694c0(auStack_50,param_3 + 0x1a8);
  fn_001781f0(auStack_90,param_3 + 0x148);
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  local_54 = 0x3f800000;
  fn_0017fdf0(&local_a0,param_2,auStack_50,auStack_90);
  *param_1 = local_a0 - 200.0;
  param_1[1] = -(local_9c - 120.0);
  return;
}



int fn_001746f4(void)

{
  return (int)(short)DAT_008994c8;
}


