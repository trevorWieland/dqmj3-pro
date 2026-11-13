#include "002cfe10_002d088cabb.h"



int fn_002d0410(int *param_1,uint param_2,uint param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_005e846c();
  }
  piVar5 = (int *)param_1[1];
  if (piVar5 != piVar2) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    param_1[1] = (int)piVar2;
  }
  iVar1 = fn_0068eb30(DAT_008977e8);
  if (((int)param_2 < 0) || ((uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x34) <= param_2))
  {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 4) + param_2 * 0x34;
  }
  iVar1 = fn_0069ee40(param_1[1],iVar1,0);
  if (iVar1 != 0) {
    if (param_3 != 0xffffffff) {
      iVar3 = fn_0068eb30(DAT_008977e8);
      if (((int)param_3 < 0) ||
         ((uint)((*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) / 0x34) <= param_3)) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar3 + 4) + param_3 * 0x34;
      }
      fn_0069eb10(param_1[1],iVar3,0);
    }
    fn_0066173c(param_4);
    fn_002cd59c();
    (**(code **)(*param_1 + 0x28))(param_1);
    uVar4 = fn_0017fde4(param_1[1]);
    iVar3 = fn_0068c694(DAT_008977e8);
    fn_001969a4(*(undefined4 *)(iVar3 + 0x24),uVar4);
    iVar3 = fn_0068c694(DAT_008977e8);
    fn_00162d44(*(undefined4 *)(iVar3 + 0x24));
    uVar4 = fn_0017fde4(param_1[1]);
    fn_0017fc28(uVar4,1);
  }
  param_1[0x12] = 0x40a00000;
  param_1[0xf] = 0;
  param_1[0x10] = 0x40a00000;
  param_1[0x11] = 0;
  param_1[0x29] = 0x41a00000;
  param_1[0x26] = 0;
  param_1[0x27] = 0x41a00000;
  param_1[0x28] = 0;
  *(short *)(param_1 + 0x15) = (short)param_4;
  param_1[0x24] = param_5;
  return iVar1;
}


