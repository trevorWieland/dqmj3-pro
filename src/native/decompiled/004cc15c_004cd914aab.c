#include "004cc15c_004cd914aab.h"



int fn_004cc270(int param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  while( true ) {
    if (iVar1 == param_1 + 8) {
      return 0;
    }
    if (*(int *)(iVar1 + 0x24) == *(int *)(param_2 + 0x1c)) break;
    lVar2 = fn_006d6d3c(iVar1 + 0x10);
    lVar3 = fn_006d6d3c(param_2 + 8);
    if (lVar2 == lVar3) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return iVar1 + 8;
}


