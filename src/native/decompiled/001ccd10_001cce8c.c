#include "001ccd10_001cce8c.h"



void fn_001cce8c(void)

{
                    /* WARNING: Subroutine does not return */
  fn_0011dda8();
}



void fn_001ccd10(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  fn_0066173c(param_4);
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 1;
  uVar11 = 1;
  uVar12 = 1;
  iVar2 = param_5;
  fn_0030551c(param_1,param_3,param_4);
  iVar7 = *(int *)(param_1 + 0xc);
  bVar1 = *(byte *)(iVar7 + 0x47);
  bVar3 = *(byte *)(param_2 + 0x47) & 3;
  *(byte *)(iVar7 + 0x47) = bVar3 | bVar1 & 0xfc;
  *(byte *)(iVar7 + 0x47) = bVar3 | bVar1 & 0xf0 | *(byte *)(param_2 + 0x47) & 0xc;
  fn_0018a69c(*(undefined4 *)(param_2 + 0xc),iVar7);
  uVar4 = *(undefined4 *)(param_2 + 0x20);
  uVar5 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(iVar7 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(iVar7 + 0x20) = uVar4;
  *(undefined4 *)(iVar7 + 0x24) = uVar5;
  *(byte *)(iVar7 + 0x44) = *(byte *)(iVar7 + 0x44) & 0xef | 0x10;
  uVar4 = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(iVar7 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(iVar7 + 0x40) = uVar4;
  *(byte *)(iVar7 + 0x44) = *(byte *)(iVar7 + 0x44) & 0xef | 0x10;
  if (param_5 != 0) {
    pcVar6 = *(code **)(**(int **)(param_1 + 0xc) + 0x2c);
    iVar2 = (*pcVar6)(*(int **)(param_1 + 0xc),(char *)&DAT_001cce78,1,pcVar6,uVar8,uVar9,uVar10,uVar11,
                      uVar12,iVar2);
    uVar5 = 0;
    uVar4 = uVar5;
    if ((*(byte *)(param_2 + 0x47) & 3) != 1) {
      uVar4 = *(undefined4 *)(iVar2 + 0x1c);
    }
    if ((*(byte *)(param_2 + 0x47) & 0xf) >> 2 != 1) {
      uVar5 = *(undefined4 *)(iVar2 + 0x20);
    }
    *(undefined4 *)(iVar2 + 0x1c) = uVar4;
    *(undefined4 *)(iVar2 + 0x20) = uVar5;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
  }
  return;
}


