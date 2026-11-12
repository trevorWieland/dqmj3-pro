#include "004b569c_004b5ebcba.h"



undefined4 fn_004b59d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;
  undefined *local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  local_38 = &DAT_008528bc;
  local_30 = 0;
  local_34 = 0x200;
  fn_006d1068(*(int *)(param_1 + 0xc) + 0x78,param_3,&local_38);
  piVar1 = (int *)fn_00469dc8(param_2,6,param_3);
  if (piVar1 != (int *)0x0) {
    if (((*(ushort *)(piVar1 + 0xf) & 0x40) == 0) || (piVar1[0x46] != 0)) {
      piVar1[0x38] = local_34;
      piVar1[0x39] = local_30;
      piVar1[0x3a] = iStack_2c;
      piVar1[0x3b] = iStack_28;
      piVar1[0x3c] = iStack_24;
      piVar1[0x3d] = iStack_20;
      piVar1[0x3e] = iStack_1c;
      piVar2 = *(int **)(*(int *)(param_1 + 0xc) + 0xa8);
      uVar3 = (**(code **)(*piVar2 + 0x20))
                        (piVar2,param_4,*(undefined1 *)(*(int *)(param_1 + 0xc) + 4),1,1,piVar1,1);
      puVar5 = (uint *)(piVar1 + 1);
      do {
        uVar4 = *puVar5 - 1;
        bVar6 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar6);
      *puVar5 = uVar4;
      bVar6 = uVar4 == 0;
      if (bVar6) {
        uVar4 = (uint)*(byte *)(piVar1 + 2);
      }
      if (bVar6 && uVar4 == 0) {
        *(undefined1 *)(piVar1 + 2) = 1;
        (**(code **)(*piVar1 + 4))();
      }
      return uVar3;
    }
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return 0;
}



undefined4 fn_004b5930(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined *local_30;
  undefined4 local_2c;
  uint local_28;
  
  if (*(char *)(param_1 + 4) == '\0') {
    uVar1 = 0;
  }
  else {
    local_30 = &DAT_008528bc;
    local_28 = 0;
    local_2c = 0x200;
    iVar2 = fn_006d1068(*(int *)(param_1 + 0xc) + 0x78,param_2,&local_30);
    if ((iVar2 == 0) ||
       ((uVar3 = *(uint *)(param_2 + 8),
        (uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18)
        == (local_28 << 0x18 | (local_28 >> 8 & 0xff) << 0x10 | (local_28 >> 0x10 & 0xff) << 8 |
           local_28 >> 0x18) &&
        ((ushort)(*(ushort *)(param_2 + 6) << 8 | *(ushort *)(param_2 + 6) >> 8) ==
         (ushort)(((unsigned int)(local_2c) >> 16) & 0xffff << 8 | ((unsigned int)(local_2c) >> 16) & 0xffff >> 8))))) {
      return 0;
    }
    uVar1 = 1;
  }
  return uVar1;
}


