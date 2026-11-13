#include "003e808c_003e8a3cb.h"



undefined4 fn_003e8a3c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar2 = *(undefined4 *)(iVar1 + 8);
  iVar1 = fn_001481c8(uVar2,L"rom:/data/Layout/menu/information.arc",&DAT_003e8ab4,1,1);
  param_1[0x19] = iVar1;
  iVar1 = fn_001480d0(uVar2,iVar1,(char *)&DAT_003e8ac0,&DAT_003e8abc,0,1,0);
  param_1[0x1a] = iVar1;
  fn_003e8b04(param_1);
  return 1;
}



void fn_003e89e8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar2 = *(undefined4 *)(iVar1 + 8);
  if (param_1[0x1a] != -1) {
    fn_0016a43c(uVar2);
    param_1[0x1a] = -1;
  }
  if (param_1[0x19] != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(uVar2);
  }
  return;
}



undefined4 * fn_003e8990(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = &DAT_008338c4;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = &DAT_00859310;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0xffffffff;
  return param_1;
}



void fn_003e8960(int param_1)

{
  if (*(int *)(param_1 + 0x20) == -1) {
    return;
  }
  (**(code **)(**(int **)(param_1 + 4) + 0xc))();
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  return;
}



void fn_003e8904(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint in_fpscr;
  
  cVar1 = *(char *)(param_1 + 0x10);
  cVar2 = *(char *)(param_1 + 0x12);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  *(char *)(param_1 + 0x11) = cVar1;
  *(char *)(param_1 + 0x10) = cVar2;
  if (cVar1 == cVar2) {
    iVar3 = *(int *)(param_1 + 0x18) + 1;
  }
  else {
    iVar3 = 0;
  }
  *(int *)(param_1 + 0x18) = iVar3;
  if ((cVar2 == '\x01') &&
     (iVar3 = VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3), 0x412fffff < iVar3)) {
    *(undefined1 *)(param_1 + 0x12) = 2;
  }
  return;
}



void fn_003e88a8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_006c4cd8(*(undefined4 *)(param_1 + 8));
  uVar1 = fn_0023e194(*(undefined4 *)(param_1 + 4),uVar1,0);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined1 *)(param_1 + 0x12) = 1;
  return;
}


