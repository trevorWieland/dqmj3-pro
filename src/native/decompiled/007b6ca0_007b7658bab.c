#include "007b6ca0_007b7658bab.h"



void fn_007b72e0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar6 = ((param_2 - param_1) / 0x34 + 1) / 2;
  iVar7 = param_1 + iVar6 * 0x34;
  if (param_4 < iVar6) {
    fn_007b72e0(param_1,iVar7,param_3,param_4,0,param_6);
    fn_007b72e0(iVar7,param_2,param_3,param_4,0,param_6);
  }
  else {
    iVar6 = 7;
    iVar4 = iVar7 - param_1;
    iVar1 = iVar4 / 0x34;
    iVar2 = param_3 + iVar1 * 0x34;
    iVar9 = param_3;
    iVar3 = param_1;
    iVar8 = param_1;
    while (6 < iVar4 / 0x34) {
      iVar5 = iVar3 + 0x16c;
      fn_007a5540(iVar3,iVar5,param_6);
      iVar3 = iVar5;
      iVar4 = iVar7 - iVar5;
    }
    fn_007a5540(iVar3,iVar7,param_6);
    if (7 < iVar1) {
      do {
        fn_007b54c8(iVar8,iVar7,iVar9,iVar6,param_6);
        fn_007b54c8(iVar9,iVar2,iVar8,iVar6 << 1,param_6);
        iVar6 = iVar6 * 4;
      } while (iVar6 < iVar1);
    }
    iVar6 = 7;
    iVar1 = (param_2 - iVar7) / 0x34;
    iVar3 = param_3 + iVar1 * 0x34;
    iVar9 = iVar7;
    iVar8 = param_3;
    iVar4 = param_2;
    iVar2 = iVar1;
    while (6 < iVar2) {
      iVar5 = iVar9 + 0x16c;
      fn_007a5540(iVar9,iVar5,param_6);
      iVar9 = iVar5;
      iVar2 = (param_2 - iVar5) / 0x34;
    }
    fn_007a5540(iVar9,param_2,param_6);
    if (7 < iVar1) {
      do {
        fn_007b54c8(iVar7,iVar4,iVar8,iVar6,param_6);
        fn_007b54c8(iVar8,iVar3,iVar7,iVar6 << 1,param_6);
        iVar6 = iVar6 * 4;
      } while (iVar6 < iVar1);
    }
  }
  fn_007b4464(param_1,iVar7,param_2,(iVar7 - param_1) / 0x34,(param_2 - iVar7) / 0x34,param_3,
               param_4,0,param_6);
  return;
}


