#include "single_003f085c_r.h"


extern undefined4 register0x00000054;

void fn_003f085c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  undefined4 local_18;
  
  iVar3 = *(int *)(param_1 + 0x88) + param_2 * 0x14;
  if (*(float *)(iVar3 + 0xc) <= 0.0) {
    if (*(char *)(iVar3 + 10) == '\0') {
      *(undefined1 *)(iVar3 + 8) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x88) + param_2 * 0x14 + 9) = 1;
      cVar1 = *(char *)(param_1 + 0x82);
      local_18 = param_4;
      if (cVar1 == '\0') {
        iVar3 = fn_0029180c(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0x78),0,
                             param_4);
        fn_003f06c4(param_1,param_2);
        if (iVar3 == 0) {
          piVar4 = *(int **)(*(int *)(param_1 + 0x94) + param_2 * 0x14);
          uVar2 = fn_00291888(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0x78),0);
          (**(code **)(*piVar4 + 0x68))(piVar4,uVar2,0);
          piVar4 = *(int **)(*(int *)(param_1 + 0x94) + param_2 * 0x14 + 4);
          uVar2 = fn_00291888(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0x78),2);
          (**(code **)(*piVar4 + 0x68))(piVar4,uVar2,0);
          piVar4 = *(int **)(*(int *)(param_1 + 0x88) + param_2 * 0x14);
          uVar2 = fn_00291888(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0x78),1);
          (**(code **)(*piVar4 + 0x68))(piVar4,uVar2,0);
          uVar2 = fn_001603f8(&local_18,0xffffffff);
          fn_00688d44(*(undefined4 *)(*(int *)(param_1 + 0x88) + param_2 * 0x14),uVar2);
        }
        else if (iVar3 == 1) {
          piVar4 = *(int **)(*(int *)(param_1 + 0x88) + param_2 * 0x14);
          uVar2 = fn_00291828(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0x78));
          (**(code **)(*piVar4 + 0x68))(piVar4,uVar2,0);
          uVar2 = fn_001603f8((int)register0x00000054 + -0x14,0xffffff);
          fn_00688d44(*(undefined4 *)(*(int *)(param_1 + 0x88) + param_2 * 0x14),uVar2);
        }
        iVar3 = *(int *)(param_1 + 0x78) + 1;
        *(int *)(param_1 + 0x78) = iVar3;
        if (**(int **)(param_1 + 0xa0) <= iVar3) {
          *(undefined1 *)(param_1 + 0x82) = 1;
        }
        return;
      }
      if (cVar1 == '\x01') {
        fn_003f06c4();
        if (*(int *)(param_1 + 0x84) == 6) {
          piVar4 = *(int **)(*(int *)(param_1 + 0x88) + param_2 * 0x14);
          uVar2 = fn_0022f584((char *)&DAT_003f0820,0);
          (**(code **)(*piVar4 + 0x68))(piVar4,uVar2,0);
        }
        else if (*(int *)(param_1 + 0x84) == 7) {
          fn_006b7f9c(*(undefined4 *)(DAT_00897804 + 0x24),1);
          fn_0015b0f8();
          piVar4 = *(int **)(*(int *)(param_1 + 0x88) + param_2 * 0x14);
          uVar2 = fn_0022f584((char *)&DAT_003f0840,0);
          (**(code **)(*piVar4 + 0x68))(piVar4,uVar2,0);
        }
        uVar2 = fn_001603f8(&local_18,0xffffffff);
        fn_00688d44(*(undefined4 *)(*(int *)(param_1 + 0x88) + param_2 * 0x14),uVar2);
        iVar3 = *(int *)(param_1 + 0x84) + 1;
        *(int *)(param_1 + 0x84) = iVar3;
        if (iVar3 == 0xe) {
          *(uint *)(param_1 + 0x7c) = param_2;
          *(undefined1 *)(param_1 + 0x82) = 2;
          return;
        }
      }
      else if (cVar1 == '\x02') {
        fn_003f06c4();
        return;
      }
    }
  }
  else if (*(char *)(iVar3 + 10) == '\0') {
    bVar5 = *(uint *)(param_1 + 0x7c) == param_2;
    if (bVar5) {
      param_2 = (uint)*(byte *)(param_1 + 0x82);
    }
    if (bVar5 && param_2 == 2) {
      *(undefined1 *)(param_1 + 0x80) = 1;
    }
  }
  else {
    *(undefined1 *)(iVar3 + 10) = 0;
  }
  return;
}


