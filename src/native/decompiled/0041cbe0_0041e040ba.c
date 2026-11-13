#include "0041cbe0_0041e040ba.h"



void fn_0041db2c(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  fn_002c3e78();
  iVar2 = 0;
  do {
    uVar1 = fn_0022f584((&DAT_00896868)[iVar2],0);
    fn_0031b78c(param_1,iVar2,0,uVar1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  return;
}



void fn_0041d75c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x104,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0041ddb0(iVar1,param_1);
  return;
}


