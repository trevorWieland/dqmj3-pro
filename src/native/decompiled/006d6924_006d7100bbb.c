#include "006d6924_006d7100bbb.h"



undefined4 fn_006d7100(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = fn_006d6d3c(param_1 + 4);
  iVar1 = (int)((ulonglong)uVar4 >> 0x20);
  uVar5 = fn_006d6d3c(param_2 + 4);
  iVar2 = (int)((ulonglong)uVar5 >> 0x20);
  bVar3 = (uint)uVar4 < (uint)uVar5;
  if ((int)(iVar1 - (iVar2 + (uint)bVar3)) < 0 ==
      (SBORROW4(iVar1,iVar2) != SBORROW4(iVar1 - iVar2,(uint)bVar3))) {
    uVar4 = fn_006d6d3c(param_2 + 4);
    iVar1 = (int)((ulonglong)uVar4 >> 0x20);
    uVar5 = fn_006d6d3c(param_1 + 4);
    iVar2 = (int)((ulonglong)uVar5 >> 0x20);
    bVar3 = (uint)uVar4 < (uint)uVar5;
    if (((int)(iVar1 - (iVar2 + (uint)bVar3)) < 0 !=
         (SBORROW4(iVar1,iVar2) != SBORROW4(iVar1 - iVar2,(uint)bVar3))) ||
       (*(ushort *)(param_2 + 0xc) <= *(ushort *)(param_1 + 0xc))) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_006d70ac(int param_1,int param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = fn_006d6d3c(param_1 + 4);
  lVar3 = fn_006d6d3c(param_2 + 4);
  if ((lVar2 == lVar3) && (*(short *)(param_1 + 0xc) == *(short *)(param_2 + 0xc))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


