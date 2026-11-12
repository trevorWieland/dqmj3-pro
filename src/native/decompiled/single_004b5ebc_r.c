#include "single_004b5ebc_r.h"


extern undefined4 _local_10;

undefined4 fn_004b5ebc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ushort local_10;
  undefined2 uStack_e;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    _local_10 = CONCAT22((short)((uint)param_4 >> 0x10),
                         *(ushort *)(param_2 + 6) << 8 | *(ushort *)(param_2 + 6) >> 8);
    iVar2 = (**(code **)(*piVar1 + 8))(piVar1,&local_10);
    if (iVar2 != 0) {
      *(ushort *)(param_2 + 6) = local_10 << 8 | local_10 >> 8;
      (**(code **)(**(int **)(param_1 + 0x3c) + 0x28))(*(int **)(param_1 + 0x3c),0x40);
      *(undefined1 *)(param_1 + 4) = 1;
      uVar3 = *(undefined4 *)(param_2 + 8);
      uVar4 = *(undefined4 *)(param_2 + 0xc);
      uVar5 = *(undefined4 *)(param_2 + 0x10);
      uVar6 = *(undefined4 *)(param_2 + 0x14);
      uVar7 = *(undefined4 *)(param_2 + 0x18);
      uVar8 = *(undefined4 *)(param_2 + 0x1c);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(param_1 + 0x10) = uVar3;
      *(undefined4 *)(param_1 + 0x14) = uVar4;
      *(undefined4 *)(param_1 + 0x18) = uVar5;
      *(undefined4 *)(param_1 + 0x1c) = uVar6;
      *(undefined4 *)(param_1 + 0x20) = uVar7;
      *(undefined4 *)(param_1 + 0x24) = uVar8;
      return 1;
    }
  }
  return 0;
}


