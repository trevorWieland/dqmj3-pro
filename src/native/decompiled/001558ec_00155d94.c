#include "001558ec_00155d94.h"



void fn_00155d94(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_s0;
  undefined4 local_10 [4];
  
  iVar1 = fn_00164a34(param_1,param_2,param_1);
  if (iVar1 != 0) {
    local_10[0] = param_2;
    iVar1 = fn_00164a34(param_1,param_2);
    if (((iVar1 != 0) && (iVar1 = fn_0017484c(DAT_008977e4), iVar1 != 0)) &&
       (iVar1 = fn_00165bb4(iVar1,local_10), iVar1 != 0)) {
      *(undefined4 *)(iVar1 + 0x24) = in_s0;
      *(undefined4 *)(iVar1 + 0x28) = in_s0;
      *(undefined4 *)(iVar1 + 0x2c) = in_s0;
    }
  }
  return;
}



void fn_00155d14(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_s0;
  undefined4 local_18 [4];
  
  iVar1 = fn_00164a34(param_1,param_2,param_1);
  if (iVar1 != 0) {
    local_18[0] = param_2;
    iVar1 = fn_00164a34(param_1,param_2);
    if (((iVar1 != 0) && (iVar1 = fn_0017484c(DAT_008977e4), iVar1 != 0)) &&
       (iVar1 = fn_00165bb4(iVar1,local_18), iVar1 != 0)) {
      fn_0017fe34();
      *(undefined4 *)(iVar1 + 0x18) = in_s0;
    }
  }
  return;
}



void fn_00155cec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = param_2;
  uStack_8 = param_3;
  iVar1 = fn_00164a34(param_1,param_2,param_3,param_4,param_1);
  if (iVar1 != 0) {
    fn_00159ec8(&local_c,param_3);
  }
  return;
}



void fn_00155cc4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = param_2;
  uStack_8 = param_3;
  iVar1 = fn_00164a34(param_1,param_2,param_3,param_4,param_1);
  if (iVar1 != 0) {
    fn_00159e5c(&local_c,param_3);
  }
  return;
}



undefined4 fn_00155c98(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00164a34();
  uVar2 = 0;
  if ((iVar1 != 0) && (uVar2 = 0, (int)param_2 - 0x20U < 2)) {
    uVar2 = 1;
  }
  return uVar2;
}



void fn_00155c70(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  if (iVar1 == 0) {
    return;
  }
  fn_001667e0(iVar1 + 10,8);
  return;
}



int fn_00155bc0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int aiStack_50 [17];
  
  iVar2 = fn_001759f8(*(undefined4 *)(param_1 + 0x84));
  if (iVar2 != 0) {
    iVar2 = fn_001759f8();
    return (int)*(short *)(iVar2 + param_2 * 2 + 2);
  }
  iVar2 = fn_00175a90(*(undefined4 *)(param_1 + 0x84));
  if (iVar2 != 0) {
    iVar2 = fn_00175a90();
    return (int)*(short *)(iVar2 + param_2 * 2 + 2);
  }
  iVar2 = fn_00175ab8(*(undefined4 *)(param_1 + 0x84),aiStack_50,0x10);
  if (0 < iVar2) {
    iVar1 = iVar2 - param_2;
    if (iVar2 >= param_2) {
      iVar1 = param_2;
    }
    if (iVar1 < 0 == (iVar2 < param_2 && SBORROW4(iVar2,param_2))) {
      if (aiStack_50[param_2] == 0) {
        return 0;
      }
      return (int)(short)*(undefined4 *)(aiStack_50[param_2] + 0x2660);
    }
  }
  return 0;
}



int fn_00155ba4(void)

{
  char *pcVar1;
  
  pcVar1 = (char *)fn_00174828(DAT_008977e4);
  return (int)*pcVar1;
}



void fn_00155b18(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_10 [4];
  
  iVar1 = fn_00164a34(param_1,param_2,param_1);
  if (iVar1 != 0) {
    local_10[0] = param_2;
    iVar1 = fn_00164a34(param_1,param_2);
    if (((iVar1 != 0) && (iVar1 = fn_0017484c(DAT_008977e4), iVar1 != 0)) &&
       (iVar1 = fn_00165bb4(iVar1,local_10), iVar1 != 0)) {
      fn_00163890();
      return;
    }
  }
  return;
}



undefined4 fn_00155af0(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x84) == 0) || (4 < (int)*(char *)(*(int *)(param_1 + 0x84) + 4) - 0xdU))
  {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



void fn_00155ac8(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  if (iVar1 == 0) {
    return;
  }
  fn_001667e0(iVar1 + 10,1);
  return;
}



void fn_00155aa0(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  if (iVar1 == 0) {
    return;
  }
  fn_001667e0(iVar1 + 10,0x40);
  return;
}



void fn_00155a74(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  if (iVar1 == 0) {
    return;
  }
  fn_001667b8(iVar1 + 0xc,param_4);
  return;
}



int fn_00155a58(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00175be4(*(undefined4 *)(param_1 + 0x84));
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = (int)*(char *)(iVar1 + 0x2660);
  }
  return iVar2;
}



void fn_00155a3c(void)

{
  fn_00154ae0(DAT_008977e4);
  fn_00164198();
  return;
}



void fn_001559b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 local_38 [9];
  
  fn_001028d4(local_38,(char *)&DAT_00164f64);
  if ((DAT_00897800 == 0) ||
     (puVar1 = (undefined *)fn_0016ba34(DAT_00897800,DAT_0089820c,local_38,0),
     puVar1 == (undefined *)0x0)) {
    puVar1 = &DAT_00872764;
  }
  local_38[0] = 0;
  fn_00164f84(param_1,param_2,puVar1,param_4);
  return;
}



int fn_00155998(int param_1)

{
  short *psVar1;
  int iVar2;
  
  psVar1 = (short *)fn_00175bd0(*(undefined4 *)(param_1 + 0x84));
  iVar2 = 0;
  if (psVar1 != (short *)0x0) {
    iVar2 = (int)*psVar1;
  }
  return iVar2;
}



void fn_00155914(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 local_30 [8];
  
  fn_001028d4(local_30,(char *)&DAT_00164f64);
  if ((DAT_00897800 == 0) ||
     (puVar1 = (undefined *)fn_0016ba34(DAT_00897800,DAT_0089820c,local_30,0),
     puVar1 == (undefined *)0x0)) {
    puVar1 = &DAT_00872764;
  }
  local_30[0] = 0x3c;
  fn_00164f84(param_1,param_2,puVar1,param_4);
  return;
}



int fn_001558ec(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  if (*(char *)(*(int *)(param_1 + 0x84) + 4) == '\x11') {
    pcVar2 = (char *)fn_0016595c(*(int *)(param_1 + 0x84));
    iVar1 = 0;
    if (pcVar2 != (char *)0x0) {
      iVar1 = (int)*pcVar2;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


