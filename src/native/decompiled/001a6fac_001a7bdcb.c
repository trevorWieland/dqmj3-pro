#include "001a6fac_001a7bdcb.h"



void fn_001a7bdc(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int local_38 [5];
  
  if (*(char *)(param_1 + 0x56) == '\0') {
    return;
  }
  uVar7 = 0;
  local_38[0] = *param_2;
  local_38[1] = param_2[1];
  local_38[2] = param_2[2];
  local_38[3] = param_2[3];
  iVar1 = *(int *)(param_1 + 0x40);
  if (*(char *)(param_1 + 0x55) != '\0') {
    do {
      iVar8 = param_1 + uVar7 * 4;
      uVar5 = 0;
      iVar2 = *(int *)(iVar8 + 0x2c);
      piVar3 = (int *)local_38[uVar7];
      piVar4 = (int *)(*(int *)(iVar8 + 0x1c) + iVar1 * 0x280);
      do {
        iVar9 = *piVar4;
        if (-1 < iVar9) {
          iVar6 = iVar9;
        }
        else {
          iVar6 = -iVar9;
        }
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 * *(int *)(param_1 + 0x44) >> 7;
        if (-1 >= iVar9) {
          iVar6 = -iVar6;
        }
        iVar2 = *(int *)(param_1 + 0x4c) * iVar2 + *(int *)(param_1 + 0x48) * (*piVar3 - iVar6) >> 7
        ;
        *piVar4 = iVar2;
        *piVar3 = iVar9;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar5 < 0xa0);
      *(int *)(iVar8 + 0x2c) = iVar2;
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(byte *)(param_1 + 0x55));
  }
  uVar7 = *(int *)(param_1 + 0x40) + 1;
  *(uint *)(param_1 + 0x40) = uVar7;
  if (*(uint *)(param_1 + 0x3c) <= uVar7) {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}



uint fn_001a7b8c(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  fn_00193374();
  iVar2 = fn_00189e18();
  if (iVar2 == 0) {
    fn_00193380();
    return 0xffffffff;
  }
  uVar1 = *(ushort *)(*(int *)(param_1 + (uint)*(ushort *)(param_1 + 0x1320) * 4 + 0x10ac) + 2);
  fn_00193380();
  return (uint)uVar1;
}



int fn_001a7b7c(void)

{
  return (int)DAT_008c0350;
}



undefined4 fn_001a7968(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_2 < *(uint *)(param_1 + 8)) &&
     (*(int *)(*(int *)(param_1 + 4) + param_2 * 0x14) != 0x1000001)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void fn_001a7908(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)param_4;
  switch(param_3) {
  case 0:
    *(undefined1 *)(*(int *)(param_1 + 0x60) + param_2 * 8 + 5) = uVar1;
    return;
  case 1:
  case 4:
    *(undefined4 *)(*(int *)(param_1 + 0x60) + param_2 * 8) = param_4;
    return;
  case 2:
    *(undefined1 *)(*(int *)(param_1 + 0x60) + param_2 * 8 + 6) = uVar1;
    return;
  case 3:
    *(undefined1 *)(*(int *)(param_1 + 0x60) + param_2 * 8 + 7) = uVar1;
    return;
  default:
    return;
  }
}


