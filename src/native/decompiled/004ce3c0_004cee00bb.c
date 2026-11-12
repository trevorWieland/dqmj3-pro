#include "004ce3c0_004cee00bb.h"



void fn_004cee00(int param_1,int *param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_20;
  int iStack_1c;
  
  if (param_3 == 0) {
    iVar3 = fn_004c717c(param_1 + 0x84);
    if (((iVar3 == 0) || (*(int *)(iVar3 + 0x44) == -1)) &&
       (iVar3 = fn_004c7124(param_1 + 0x84,param_2), iVar3 == 0)) {
      return;
    }
  }
  else {
    iVar3 = fn_004c7124(param_1 + 0x84);
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + 0x44);
    }
    if (iVar3 == 0 || iVar4 == -1) {
      return;
    }
  }
  uVar2 = DAT_008c362c;
  puVar5 = (uint *)fn_004f0ce8();
  uVar6 = *puVar5;
  uVar7 = puVar5[1];
  lVar1 = (ulonglong)uVar2 * (ulonglong)uVar6;
  uVar8 = (uint)lVar1;
  local_20 = 0;
  iStack_1c = 0;
  fn_004f01f4(&local_20);
  *(uint *)(iVar3 + 0x38) = local_20 + uVar8;
  *(uint *)(iVar3 + 0x3c) =
       iStack_1c + uVar6 * ((int)uVar2 >> 0x1f) + uVar7 * uVar2 + (int)((ulonglong)lVar1 >> 0x20) +
       (uint)CARRY4(local_20,uVar8);
  *(undefined4 *)(iVar3 + 0x4c) = 0;
  *(undefined1 *)(iVar3 + 0x41) = 0;
                    /* WARNING: Could not recover jumptable at 0x004ceed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x14))(param_2,*(code **)(*param_2 + 0x14),0x20000,0);
  return;
}



void fn_004ced00(int param_1,int *param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auStack_ac [4];
  undefined1 auStack_a8 [128];
  undefined4 local_28;
  
  iVar1 = fn_006d6d58(param_2 + 2);
  if (iVar1 == 0) {
    (**(code **)(*param_2 + 0x14))(param_2,*(code **)(*param_2 + 0x14),0x200,0);
    return;
  }
  fn_004f07f0(auStack_ac,(char *)&DAT_004cedf4);
  uVar3 = 0;
  if (param_4 != 0) {
    do {
      local_28 = 0x4000003;
      uVar2 = fn_002febd0(auStack_ac);
      iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x18))
                        (*(int **)(param_1 + 0x10),&local_28,param_2 + 1,uVar2,1);
      if (iVar1 - 0x100000U < 0x3ff00000) {
        if (param_3 != 0) {
          *(char *)(iVar1 + 0xcc) = (char)param_3;
        }
        fn_001694d4(iVar1,auStack_a8);
        fn_0050a490(*(undefined4 *)(param_1 + 0x10));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_4);
  }
  return;
}


