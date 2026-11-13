#include "00373764_003740acba.h"



void fn_00373e40(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(200,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00374048(iVar1,param_1);
  return;
}



undefined2 fn_00373bbc(uint param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  if (param_1 < 0x12) {
    iVar2 = fn_00145ac0(DAT_00896ca0);
    uVar1 = *(undefined2 *)(iVar2 + param_1 * 4 + 0xe);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



bool fn_00373b68(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_00118290();
  DAT_00896ca0 = fn_0011c184(L"rom:/data/Parameter/RaceAIAction.tp",uVar1,4,5);
  uVar1 = fn_00145ac0();
  iVar2 = fn_00147e6c(uVar1,&DAT_00373bb4,4);
  return iVar2 == 0;
}


