#include "0019e378_0019eb38ab.h"



bool fn_0019e9a0(int param_1,int param_2,int param_3)

{
  bool bVar1;
  
  param_1 = param_1 + param_2 * 2;
  bVar1 = *(char *)(param_1 + param_3) == '\0';
  if (bVar1) {
    *(undefined1 *)(param_1 + param_3) = 1;
  }
  return bVar1;
}



int fn_0019e94c(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  uVar4 = param_1 + param_2;
  uVar1 = fn_0015e284();
  iVar2 = fn_0015e218();
  bVar6 = param_1 <= uVar1;
  bVar5 = uVar1 == param_1;
  uVar3 = iVar2 + uVar1;
  if (!bVar6 || bVar5) {
    bVar6 = uVar3 <= param_1;
    bVar5 = param_1 == uVar3;
  }
  if (!bVar6 || bVar5) {
    bVar6 = uVar4 <= uVar1;
    bVar5 = uVar1 == uVar4;
    if (!bVar6 || bVar5) {
      bVar6 = uVar3 <= uVar4;
      bVar5 = uVar4 == uVar3;
    }
    if (!bVar6 || bVar5) {
      bVar6 = uVar4 <= param_1;
    }
    if (!bVar6) {
      return DAT_008c33a4 + param_1;
    }
  }
  return 0;
}


