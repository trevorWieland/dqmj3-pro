#include "002cfe10_002d088caa.h"



void fn_002cfe10(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  
  cVar1 = (char)param_1[0x2b];
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      *(undefined1 *)((int)param_1 + 0xae) = 2;
    }
    else if (cVar1 == '\x02') {
      if (param_1[0x22] != -1) {
        piVar2 = (int *)fn_0068c7e8(DAT_008977e8);
        (**(code **)(*piVar2 + 0xc))(piVar2,param_1[0x22]);
        param_1[0x22] = -1;
      }
      iVar3 = fn_00145b00(0xc,&DAT_00812c8c);
      piVar2 = (int *)0x0;
      if (iVar3 != 0) {
        piVar2 = (int *)fn_005e846c();
      }
      piVar6 = (int *)param_1[1];
      if (piVar6 != piVar2) {
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 4))(piVar6);
        }
        param_1[1] = (int)piVar2;
      }
      iVar3 = fn_0068eb30(DAT_008977e8);
      uVar4 = param_1[0x2e];
      if (((int)uVar4 < 0) || ((uint)((*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) / 0x34) <= uVar4))
      {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar3 + 4) + uVar4 * 0x34;
      }
      iVar3 = fn_0069ee40(param_1[1],iVar3,0);
      if (iVar3 != 0) {
        if (param_1[0x2f] != -1) {
          iVar3 = fn_0068eb30(DAT_008977e8);
          uVar4 = param_1[0x2f];
          if (((int)uVar4 < 0) ||
             ((uint)((*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) / 0x34) <= uVar4)) {
            iVar3 = 0;
          }
          else {
            iVar3 = *(int *)(iVar3 + 4) + uVar4 * 0x34;
          }
          fn_0069eb10(param_1[1],iVar3,0);
        }
        fn_0066173c((int)(short)param_1[0x15]);
        fn_002cd59c();
        (**(code **)(*param_1 + 0x28))(param_1);
        uVar5 = fn_0017fde4(param_1[1]);
        iVar3 = fn_0068c694(DAT_008977e8);
        fn_001969a4(*(undefined4 *)(iVar3 + 0x24),uVar5);
        iVar3 = fn_0068c694(DAT_008977e8);
        fn_00162d44(*(undefined4 *)(iVar3 + 0x24));
        uVar5 = fn_0017fde4(param_1[1]);
        fn_0017fc28(uVar5,1);
      }
      *(undefined1 *)((int)param_1 + 0xae) = 0;
    }
  }
  iVar3 = param_1[0x2b];
  param_1[0x2c] = param_1[0x2c] + 1;
  *(char *)((int)param_1 + 0xad) = (char)iVar3;
  *(char *)(param_1 + 0x2b) = *(char *)((int)param_1 + 0xae);
  if ((char)iVar3 == *(char *)((int)param_1 + 0xae)) {
    param_1[0x2d] = param_1[0x2d] + 1;
  }
  else {
    param_1[0x2d] = 0;
  }
  return;
}


