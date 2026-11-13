#include "006ed264_006ed4ecba.h"



int fn_006ed3b8(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 local_28;
  
  iStack_34 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  uVar2 = fn_006edaac(param_1,param_4);
  uVar9 = fn_00300f74(uVar2,*(undefined4 *)(param_1 + 0x24));
  local_50 = (int)((ulonglong)uVar9 >> 0x20);
  local_4c = (int)uVar9;
  uVar2 = fn_006edaac(param_1,param_5);
  uVar9 = fn_00300f74(uVar2,*(undefined4 *)(param_1 + 0x24));
  local_48 = (int)((ulonglong)uVar9 >> 0x20);
  local_44 = (int)uVar9;
  if (local_48 < local_50) {
    piVar5 = &local_48;
  }
  else {
    piVar5 = &local_50;
  }
  iVar6 = *piVar5;
  if (local_44 < local_4c) {
    piVar5 = &local_44;
  }
  else {
    piVar5 = &local_4c;
  }
  local_3c = *piVar5;
  iVar7 = 0;
  if (local_50 < local_48) {
    piVar5 = &local_48;
  }
  else {
    piVar5 = &local_50;
  }
  local_40 = *piVar5;
  if (local_4c < local_44) {
    piVar3 = &local_44;
  }
  else {
    piVar3 = &local_4c;
  }
  iVar8 = *piVar3;
  iVar1 = local_3c;
  if (iVar6 <= *piVar5) {
    do {
      for (; iVar1 <= iVar8; iVar1 = iVar1 + 1) {
        iVar4 = *(int *)(param_1 + 0x24) * iVar1 + iVar6;
        if ((-1 < iVar4) && (piVar5 = (int *)(*(int *)(param_1 + 0x10) + iVar4 * 8), 0 < *piVar5)) {
          if (param_2 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = param_2 + iVar7 * 0x48;
          }
          iVar4 = fn_006ed8f8(param_1,iVar4,param_3 - iVar7,piVar5,local_28,param_5);
          iVar7 = iVar7 + iVar4;
          if (param_3 <= iVar7) {
            return iVar7;
          }
        }
      }
      iVar6 = iVar6 + 1;
      iVar1 = local_3c;
    } while (iVar6 <= local_40);
  }
  return iVar7;
}


