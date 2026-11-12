#include "001e849c_001e8bc8aa.h"



void fn_001e849c(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_1[0xd0] != 0) {
    fn_002feef8(param_1[0xd0]);
    param_1[0xd0] = 0;
  }
  if (param_1[0xee] != -1) {
    fn_001c5388(param_1,param_1[99]);
    param_1[0xee] = -1;
  }
  if ((char)param_1[0x82] != -1) {
    fn_001e2804(param_1,0);
  }
  fn_001e99c8(param_1);
  fn_001ea42c(param_1);
  if ((int *)param_1[0xde] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xde] + 4))();
    param_1[0xde] = 0;
  }
  (**(code **)(*param_1 + 0x54))(param_1,0);
  fn_0023f034(param_1[100]);
  fn_001dc9d8(param_1);
  iVar6 = 3;
  do {
    iVar1 = fn_006a7f8c(param_1 + iVar6 * 3 + 0x8c);
    if (iVar1 != 0) {
      fn_001e11b0(param_1,(int)(char)iVar6);
    }
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  if ((int *)param_1[99] != (int *)0x0) {
    (**(code **)(*(int *)param_1[99] + 4))();
    param_1[99] = 0;
  }
  param_1[0x38] = -1;
  iVar6 = param_1[0x65];
  piVar2 = *(int **)(iVar6 + 0x18);
  piVar3 = *(int **)(iVar6 + 0x1c);
  if (piVar2 < piVar3) {
    iVar1 = 1;
    if (1 < ((int)piVar3 - (int)piVar2 >> 2) + 1) {
      iVar4 = (int)piVar3 - (int)piVar2;
      do {
        iVar5 = *piVar2;
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 1;
        if (iVar5 != 0) {
          *(undefined4 *)(iVar5 + 0xc) = 0;
        }
      } while (iVar1 < (iVar4 >> 2) + 1);
    }
  }
  else {
    while (piVar2 != piVar3) {
      iVar1 = *piVar2;
      piVar2 = piVar2 + 1;
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0xc) = 0;
      }
    }
  }
  *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(iVar6 + 0x18);
  param_1[0xef] = 0;
  fn_00162d54(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24),param_1[0x67]);
  fn_00162d54(*(undefined4 *)(*(int *)(DAT_008977e0 + 8) + 0x24),param_1[0x65]);
  return;
}


