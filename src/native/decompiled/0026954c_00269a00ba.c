#include "0026954c_00269a00ba.h"



void fn_00269888(int *param_1)

{
  *(undefined1 *)(*param_1 + 0xb) = 1;
  fn_00269a00(*param_1);
  return;
}



void fn_0026984c(void)

{
  DAT_008bf658 = 0;
  DAT_008bf65c = 0;
  return;
}



int fn_002697b4(uint param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  uint local_8;
  undefined4 uStack_4;
  
  uVar4 = (uint)((param_3 & 0xff) == 1 || (param_3 & 0xff) == 2);
  local_8 = param_3;
  uStack_4 = param_4;
  uVar7 = fn_006f4868(&local_8,param_2,0x100,0);
  uVar3 = (uint)((ulonglong)uVar7 >> 0x20);
  if ((int)uVar7 == 0) {
    if ((uVar4 == 0xffffffff || SCARRY4(uVar4,1)) || (1 < uVar4)) {
      bVar6 = SCARRY4(param_1,1);
      iVar1 = param_1 + 1;
      bVar5 = param_1 == 0xffffffff;
      if (param_1 < 0x80000000) {
        uVar3 = DAT_008bf65c;
      }
      if (-1 < (int)param_1) {
        bVar6 = SBORROW4(uVar3,param_1);
        iVar1 = uVar3 - param_1;
        bVar5 = uVar3 == param_1;
      }
      iVar2 = DAT_008bf658;
      if (!bVar5 && iVar1 < 0 == bVar6) {
        iVar2 = DAT_008bf658 + param_1 * 8;
      }
      return (int)*(short *)(iVar2 + 4);
    }
  }
  else {
    uVar4 = 1;
  }
  bVar6 = SCARRY4(param_1,1);
  iVar1 = param_1 + 1;
  bVar5 = param_1 == 0xffffffff;
  if (param_1 < 0x80000000) {
    uVar3 = DAT_008bf65c;
  }
  if (-1 < (int)param_1) {
    bVar6 = SBORROW4(uVar3,param_1);
    iVar1 = uVar3 - param_1;
    bVar5 = uVar3 == param_1;
  }
  iVar2 = DAT_008bf658;
  if (!bVar5 && iVar1 < 0 == bVar6) {
    iVar2 = DAT_008bf658 + param_1 * 8;
  }
  return (int)*(short *)(iVar2 + uVar4 * 2 + 4);
}


