#include "004cdc50_004ce334b.h"



bool fn_004ce334(int param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint local_18;
  int iStack_14;
  
  bVar7 = *(int *)(param_1 + 0x6c) == 0;
  if (bVar7) {
    *(int **)(param_1 + 0x6c) = param_2;
    (**(code **)(*param_2 + 0x1c))(param_2,param_1);
    local_18 = 0;
    iStack_14 = 0;
    fn_004f01f4(&local_18);
    uVar2 = DAT_008c06c0;
    puVar3 = (uint *)fn_004f0ce8();
    uVar5 = *puVar3;
    uVar6 = puVar3[1];
    lVar1 = (ulonglong)uVar2 * (ulonglong)uVar5;
    uVar4 = (uint)lVar1;
    *(uint *)(param_1 + 0x4b0) = local_18 + uVar4;
    *(uint *)(param_1 + 0x4b4) =
         iStack_14 + uVar5 * ((int)uVar2 >> 0x1f) + uVar6 * uVar2 + (int)((ulonglong)lVar1 >> 0x20)
         + (uint)CARRY4(local_18,uVar4);
  }
  return bVar7;
}



bool fn_004ce2f4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_004c6fb8(param_1 + 0x84,param_2,0x20000,0);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x44);
  }
  return iVar1 != 0 && iVar2 != -1;
}



undefined4 fn_004ce228(int param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_20;
  int local_1c;
  
  iVar3 = fn_004c7124(param_1 + 0x84,param_2,0x20000,0);
  uVar2 = DAT_008c362c;
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + 0x44);
  }
  if (iVar3 != 0 && iVar4 != -1) {
    if (*(char *)(iVar3 + 0x41) != '\0') {
      puVar6 = (uint *)fn_004f0ce8();
      uVar7 = *puVar6;
      uVar8 = puVar6[1];
      lVar1 = (ulonglong)uVar2 * (ulonglong)uVar7;
      uVar9 = (uint)lVar1;
      local_20 = 0;
      local_1c = 0;
      fn_004f01f4(&local_20);
      *(uint *)(iVar3 + 0x3c) =
           local_1c + uVar7 * ((int)uVar2 >> 0x1f) + uVar8 * uVar2 + (int)((ulonglong)lVar1 >> 0x20)
           + (uint)CARRY4(local_20,uVar9);
      *(undefined4 *)(iVar3 + 0x4c) = 0;
      *(uint *)(iVar3 + 0x38) = local_20 + uVar9;
      *(undefined1 *)(iVar3 + 0x41) = 0;
      (**(code **)(*param_2 + 0x14))(param_2,*(code **)(*param_2 + 0x14),0x20000,0);
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}


