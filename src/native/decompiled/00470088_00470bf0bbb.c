#include "00470088_00470bf0bbb.h"



undefined4 fn_00470bf0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  
  uVar4 = fn_004b616c(param_3);
  uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
  if (*(int *)((int)uVar4 + 0x9c) == 0) {
    return 0;
  }
  uVar1 = *(ushort *)(param_2 + 0x3c);
  bVar3 = (uVar1 & 0xf) != 0;
  if (bVar3) {
    uVar2 = uVar1 & 0xf;
  }
  if ((bVar3 && uVar2 != 1) && (param_3 == 10 || param_3 == 2)) {
    if (param_4 != 0) {
      return 6;
    }
    if ((uVar2 == 3) && ((uVar1 & 0x10) != 0)) {
      return 9;
    }
  }
  return 5;
}


