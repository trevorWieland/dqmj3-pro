#include "0014a348_0014a614.h"



bool fn_0014a614(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  if (((int)param_2 < 0) ||
     ((uint)((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x34) <= param_2)) {
    return false;
  }
  iVar1 = fn_00173a34(*(int *)(param_1 + 4) + param_2 * 0x34,param_3);
  return iVar1 != 0;
}



void fn_0014a5dc(void)

{
  undefined4 uVar1;
  
  uVar1 = fn_00163e44(DAT_008977e4);
  fn_00163d24(uVar1,0,0,0);
  fn_00163e44(DAT_008977e4);
  fn_0016e2b8();
  return;
}



void fn_0014a584(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  
  fn_00163e44(DAT_008977e4);
  fn_0016e278();
  uVar1 = fn_00163e44(DAT_008977e4);
  fn_00163d24(uVar1,param_2,param_3,param_4,param_5);
  return;
}



void fn_0014a4a8(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_0015b1c0();
  }
  (**(code **)(*piVar2 + 0x10))(piVar2);
  fn_0015a130(param_1,piVar2);
  return;
}



void fn_0014a45c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00145b00(0x18,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_0015c90c(iVar1,param_2,param_3,param_4);
  }
  fn_0015a130(param_1,uVar2);
  return;
}



void fn_0014a3f8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00145b00(0x30,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00162814(iVar1,param_2,param_3,param_4,param_5);
  }
  fn_0015a130(param_1,uVar2);
  return;
}



void fn_0014a394(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00145b00(0x30,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_001627b0(iVar1,param_2,param_3,param_4,param_5);
  }
  fn_0015a130(param_1,uVar2);
  return;
}



void fn_0014a35c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00145b00(0x18,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_0015cec8(iVar1,param_2);
  }
  fn_0015a130(param_1,uVar2);
  return;
}



void fn_0014a348(int param_1)

{
  fn_0016db28(*(undefined4 *)(param_1 + 0xfc),5);
  return;
}


