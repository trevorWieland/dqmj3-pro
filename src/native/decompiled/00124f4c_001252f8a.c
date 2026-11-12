#include "00124f4c_001252f8a.h"



void fn_00125150(int param_1)

{
  undefined4 unaff_r4;
  
  if (param_1 != 0) {
    unaff_r4 = 0;
  }
  DAT_0089a584 = 0;
  if (param_1 != 0) {
    fn_00125220(3);
    fn_00125818(unaff_r4);
    return;
  }
  return;
}



void fn_001250f0(void)

{
  if (DAT_008bfbdc == '\0') {
    return;
  }
  fn_0013e008(&DAT_008bfbf0,0);
  return;
}



void fn_001250c8(void)

{
  int iVar1;
  
  iVar1 = fn_0013ddc8();
  if (iVar1 == 0) {
    return;
  }
  fn_001502a4(iVar1);
  fn_0013dfe0();
  return;
}



int fn_00125074(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_0013ddc8();
  if (iVar1 == 0) {
    iVar1 = 0x202bf8;
  }
  else {
    fn_001502a4(iVar1);
    iVar1 = fn_0013dfb8();
    if ((-1 < iVar1) && (iVar2 = fn_0013e068(), iVar2 != 0)) {
      iVar2 = fn_0015ff34();
      fn_0013dec0(iVar2 + 0x30,1);
    }
  }
  return iVar1;
}



int fn_0012500c(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = fn_0013ddc8();
  if (iVar1 == 0) {
    iVar1 = 0x202bf8;
  }
  else {
    uVar2 = fn_001502a4();
    iVar1 = fn_0013df74(uVar2,0xffff8001,0);
    if ((-1 < iVar1) && (iVar3 = fn_0013e068(), iVar3 != 0)) {
      iVar3 = fn_0015ff34();
      fn_0013dec0(iVar3 + 0x30,0);
    }
  }
  return iVar1;
}



undefined4 fn_00124ffc(void)

{
  return DAT_0089a688;
}



void fn_00124f90(undefined4 param_1)

{
  fn_0013d6fc(&DAT_008ef56c,param_1);
  return;
}



void fn_00124f80(undefined4 param_1)

{
  fn_0013d6ec(&DAT_008ef56c,param_1);
  return;
}



void fn_00124f4c(char *param_1)

{
  if (*param_1 != '\0') {
    fn_0013d71c(&DAT_008f34bc);
    param_1[0x4c] = -1;
    param_1[0x4d] = -1;
    param_1[0x4e] = -1;
    param_1[0x4f] = -1;
    *param_1 = '\0';
  }
  return;
}


