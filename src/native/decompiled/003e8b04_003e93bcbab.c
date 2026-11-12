#include "003e8b04_003e93bcbab.h"



void fn_003e91ec(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_4 < 1) {
    return;
  }
  do {
    iVar1 = iVar3 * 0xf0;
    iVar2 = *param_1 + param_2 * 0x14 + iVar3;
    iVar3 = iVar3 + 1;
    *(undefined1 *)(iVar2 + -4) = *(undefined1 *)(param_3 + iVar1 + 0x2f);
  } while (iVar3 < param_4);
  return;
}


