#include "004ed180_004ed730bb.h"



uint fn_004ed730(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar7 = fn_006d6d3c(param_1 + 4);
  iVar3 = (int)((ulonglong)uVar7 >> 0x20);
  uVar8 = fn_006d6d3c(param_2 + 4);
  iVar4 = (int)((ulonglong)uVar8 >> 0x20);
  bVar6 = (uint)uVar7 < (uint)uVar8;
  if ((int)(iVar3 - (iVar4 + (uint)bVar6)) < 0 ==
      (SBORROW4(iVar3,iVar4) != SBORROW4(iVar3 - iVar4,(uint)bVar6))) {
    uVar7 = fn_006d6d3c(param_2 + 4);
    iVar3 = (int)((ulonglong)uVar7 >> 0x20);
    uVar8 = fn_006d6d3c(param_1 + 4);
    iVar4 = (int)((ulonglong)uVar8 >> 0x20);
    bVar6 = (uint)uVar7 < (uint)uVar8;
    if ((int)(iVar3 - (iVar4 + (uint)bVar6)) < 0 !=
        (SBORROW4(iVar3,iVar4) != SBORROW4(iVar3 - iVar4,(uint)bVar6))) {
      return 1;
    }
    uVar1 = (uint)*(ushort *)(param_1 + 0xc);
    uVar5 = (uint)*(ushort *)(param_2 + 0xc);
    uVar2 = uVar1;
    if (uVar5 == uVar1) {
      uVar2 = 0;
    }
    if (uVar5 <= uVar1) {
      if (uVar5 < uVar1) {
        return 1;
      }
      return uVar2;
    }
  }
  return 0xffffffff;
}



undefined4 fn_004ed700(int param_1)

{
  fn_004ed464(param_1 + 4);
  return 0;
}



longlong fn_004ed5c0(int param_1,int param_2)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_r1;
  
  uVar3 = 0x3ff00000;
  if (param_2 - 0x100000U < 0x3ff00000) {
    uVar2 = fn_004ed3f4(param_1 + 4,param_2);
    uVar3 = uVar2 & 0x80000000;
    if (-1 < (int)uVar3) {
      uVar1 = fn_004edb8c(param_2 + 6);
      *(undefined2 *)(param_1 + 0xc) = uVar1;
      return (ulonglong)extraout_r1 << 0x20;
    }
  }
  else {
    if (DAT_008c0630 != 0) {
      uVar3 = 8;
    }
    uVar2 = 0xe0e14826;
  }
  return CONCAT44(uVar3,uVar2);
}



int fn_004ed5a0(void)

{
  return (int)DAT_008bf489;
}



void fn_004ed534(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[1] = (char)((uint)param_4 >> 0x10);
  param_1[2] = (char)((uint)param_4 >> 8);
  param_1[4] = (char)((uint)param_3 >> 0x18);
  param_1[5] = (char)((uint)param_3 >> 0x10);
  param_1[6] = (char)((uint)param_3 >> 8);
  *param_1 = (char)((uint)param_4 >> 0x18);
  param_1[3] = (char)param_4;
  param_1[7] = (char)param_3;
  return;
}


