#include "00422178_00422880ba.h"



void fn_00422640(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x68,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_004226c4(iVar1,param_1);
  return;
}



void fn_00422638(int param_1)

{
  fn_00245790(*(undefined4 *)(param_1 + 100));
  return;
}



void fn_0042253c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  fn_003d0b80(*(undefined4 *)(param_1 + 8),0);
  fn_003d0ae8(*(undefined4 *)(param_1 + 8),1,0);
  fn_003cfaac(param_1,6);
  fn_003d0478(*(undefined4 *)(param_1 + 8),6);
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x14);
  uVar4 = 0;
  uVar3 = *(undefined4 *)(iVar2 + 0x20);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(iVar1 + 8) = uVar3;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  do {
    fn_0038dad0(*(undefined4 *)(param_1 + 4),uVar4,1,(int)(short)uVar4,1,(&DAT_007bad4c)[uVar4],
                 &DAT_00422608);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 6);
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x22) = 1;
  return;
}



/* WARNING: Removing unreachable block (ram,0x0038d7f8) */

undefined4 fn_00422530(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x18);
  while( true ) {
    if (*(int **)(*(int *)(param_1 + 4) + 0x1c) == piVar1) {
      return 0;
    }
    if (*(short *)(*piVar1 + 0x24) == param_2) break;
    piVar1 = piVar1 + 1;
  }
  return *(undefined4 *)(*(int *)(*piVar1 + 0x1c) + 0xa4);
}


