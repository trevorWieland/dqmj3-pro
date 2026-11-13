#include "0037e8dc_0037fbf0bab.h"



byte fn_0037f3a8(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  code *local_18;
  undefined4 uStack_14;
  
  iVar2 = fn_001854ac(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x7c));
  bVar1 = *(byte *)(iVar2 + 0x2c) & 1;
  if ((*(byte *)(iVar2 + 0x2c) & 1) != 0) {
    if (*(int *)(param_1 + 0x7c) != -1) {
      fn_00159f34(*(undefined4 *)(param_1 + 0x68));
    }
    uVar3 = fn_001853ec(*(undefined4 *)(param_1 + 0x68),(char *)&DAT_0037f4f4,
                         *(undefined4 *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x7c) = uVar3;
    piVar4 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 0x68),uVar3);
    (**(code **)(*piVar4 + 0x50))(piVar4,0);
    fn_002b1b54(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x80),1);
    fn_0069e2d0(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x80));
    (**(code **)(**(int **)(param_1 + 0x70) + 0xc))
              (*(int **)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x8c));
    (**(code **)(**(int **)(param_1 + 0x70) + 0xc))
              (*(int **)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x90));
    if (-1 < *(int *)(param_1 + 0x94)) {
      (**(code **)(**(int **)(param_1 + 0x70) + 0xc))();
    }
    if (-1 < *(int *)(param_1 + 0x98)) {
      (**(code **)(**(int **)(param_1 + 0x70) + 0xc))();
    }
    if (*(int *)(param_1 + 0x84) != -1) {
      fn_002b1b54(*(undefined4 *)(param_1 + 0x6c),*(int *)(param_1 + 0x84),0);
    }
    if (*(int *)(param_1 + 0x88) != -1) {
      fn_002b1b54(*(undefined4 *)(param_1 + 0x6c),*(int *)(param_1 + 0x88),0);
    }
    local_18 = fn_0037e8dc;
    uStack_14 = 0;
    fn_00789478(param_1 + 0xb0,&local_18);
    bVar1 = 1;
  }
  return bVar1;
}


