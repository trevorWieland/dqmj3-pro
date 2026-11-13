#include "004ed180_004ed730aa.h"



void fn_004ed284(void)

{
  int iVar1;
  
  iVar1 = fn_004ed304();
  if ((*(int **)(&DAT_008ed884 + iVar1 * 4))[0x23] != 0) {
    (**(code **)(**(int **)(&DAT_008ed884 + iVar1 * 4) + 0x50))();
  }
  (**(code **)(**(int **)(&DAT_008ed884 + iVar1 * 4) + 0x10))();
  *(undefined4 *)(&DAT_008ed884 + iVar1 * 4) = 0;
  return;
}



void fn_004ed230(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = fn_004ed304(param_1,param_3,param_3,param_4,param_4);
  if (DAT_008eef3c == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *DAT_008eef44;
  }
  uVar1 = fn_00658a04(param_2,(int)((ulonglong)uVar2 >> 0x20),uVar1,1,0);
  *(undefined4 *)(&DAT_008ed884 + (int)uVar2 * 4) = uVar1;
  return;
}



void fn_004ed21c(void)

{
  DAT_008c062d = 0xd;
  return;
}



void fn_004ed204(void)

{
  DAT_008c062d = fn_004ed304();
  return;
}



undefined4 fn_004ed180(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (DAT_008c062c == '\0') {
    DAT_008ed8c0 = 1;
    DAT_008ed8b8 = param_1;
    DAT_008ed8bc = param_2;
    fn_00658bdc(&DAT_008ed8b8);
    if (DAT_008eef3c == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *DAT_008eef44;
    }
    fn_006590e4(uVar1);
    fn_006591d0(DAT_008c06e0,uVar1);
    DAT_008c062d = 0xd;
    uVar1 = 1;
    DAT_008c062c = '\x01';
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


