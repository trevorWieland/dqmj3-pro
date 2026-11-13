#include "single_00459f8c_r.h"


extern undefined4 _local_34;

undefined4 fn_00459f8c(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;
  undefined *local_38;
  undefined2 local_34;
  ushort uStack_32;
  uint local_30;
  
  uVar1 = param_4[0x29];
  iVar3 = param_4[0x36];
  local_30 = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
             uVar1 >> 0x18;
  local_38 = &DAT_008528bc;
  _local_34 = CONCAT22(*(ushort *)(param_4 + 0x2b) << 8 | *(ushort *)(param_4 + 0x2b) >> 8,0x200);
  if ((*(ushort *)((int)param_4 + 0xa2) & 0xf) == 0) {
    fn_0045e504(param_1 + 0x10,&local_38,param_4 + 0x37,1);
    iVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x24))
                      (*(int **)(param_1 + 8),param_2,iVar3,&local_38);
    if (iVar3 == 0) {
      fn_0045e744(param_1 + 0x10,&local_38);
      return 0;
    }
  }
  else {
    if ((*(ushort *)((int)param_4 + 0xa2) & 0xf) != 1) {
      return 0;
    }
    if ((char)param_4[0x2f] != '\0') {
      return 0;
    }
    if (*(code **)(param_1 + 0x48) != (code *)0x0) {
      (**(code **)(param_1 + 0x48))
                (param_1 + 0x4c,param_4 + 0x37,param_2,param_4[0x2e],param_4 + 0x2f,iVar3);
    }
  }
  puVar2 = (uint *)(param_4 + 1);
  do {
    uVar1 = *puVar2 - 1;
    bVar4 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar4);
  *puVar2 = uVar1;
  bVar4 = uVar1 == 0;
  if (bVar4) {
    uVar1 = (uint)*(byte *)(param_4 + 2);
  }
  if (bVar4 && uVar1 == 0) {
    *(undefined1 *)(param_4 + 2) = 1;
    (**(code **)(*param_4 + 4))();
  }
  return 1;
}


