#include "0056a220_0056a784bbb.h"



void fn_0056a784(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  *(undefined1 *)(param_1 + 0x14) = 0;
  iVar1 = fn_006b38f4(param_2 + 0x90);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      piVar2 = (int *)fn_006b3e50(param_2,iVar4);
      iVar3 = *(int *)(param_1 + 8) + *piVar2 * 0x88;
      *(bool *)iVar3 = (char)piVar2[2] == '\x01';
      *(short *)(iVar3 + 2) = (short)piVar2[4];
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)((int)piVar2 + 0x12);
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)((int)piVar2 + 0x16);
      *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)((int)piVar2 + 0x1a);
      *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)((int)piVar2 + 0x1e);
      *(undefined2 *)(iVar3 + 0x14) = *(undefined2 *)((int)piVar2 + 0x22);
      fn_007854f8(iVar3 + 0x18,piVar2 + 1);
      *(int *)(iVar3 + 0x1c) = piVar2[9];
      fn_0017821c(iVar3 + 0x20,piVar2 + 10,100);
      iVar4 = iVar4 + 1;
      *(short *)(iVar3 + 0x84) = (short)piVar2[0x23];
    } while (iVar4 < iVar1);
  }
  return;
}



void fn_0056a750(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = &DAT_00840670;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined1 *)((int)puVar1 + 9) = 0;
  return;
}


