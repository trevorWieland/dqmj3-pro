#include "0029612c_002969c0bbbb.h"



undefined4 fn_002969c0(int param_1,char param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = fn_001748ec();
  iVar2 = (int)param_2;
  if (iVar2 - 0x10U < 8) {
    uVar5 = iVar1 - 0x10;
    iVar3 = (int)param_3;
    uVar4 = iVar3 - 0x10;
    if ((((7 < uVar5 || 7 < uVar4) || (iVar2 != iVar1 || iVar3 != iVar1)) &&
        ((7 < uVar5 || 7 < uVar4 || ((iVar2 != iVar1 || (iVar1 == iVar3)))))) &&
       (((uVar5 < 8 && (iVar1 == iVar2)) || ((uVar4 < 8 && (iVar3 == iVar2)))))) {
      return 1;
    }
  }
  return 0;
}


