#include "002364c0_00236b7cbba.h"



bool fn_00236b10(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  switch(param_1) {
  case 0:
  case 1:
    iVar2 = 100;
    break;
  case 2:
    iVar2 = 0x14;
    break;
  case 3:
    iVar2 = 10;
    break;
  case 4:
    iVar2 = 2;
  }
  iVar1 = fn_00163868(100);
  return iVar1 < iVar2;
}


