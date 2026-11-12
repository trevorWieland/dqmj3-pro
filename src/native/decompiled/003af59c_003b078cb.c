#include "003af59c_003b078cb.h"



void fn_003b078c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xb8,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003b0f3c(iVar1,param_1);
  return;
}



void fn_003afd80(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0xa8) + 0x14))();
                    /* WARNING: Could not recover jumptable at 0x003afda8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0xac) + 0x14))();
  return;
}



void fn_003afcc8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  
  uVar1 = fn_0022eb34(param_2);
  fVar4 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  iVar2 = *(int *)(param_1 + 0x88);
  fVar4 = (float)VectorSignedToFloat((int)(fVar4 * (*(float *)(*(int *)(param_1 + 0x8c) + 0xbc) +
                                                   *(float *)(*(int *)(param_1 + 0x8c) + 0xc0)) +
                                          24.0) + 1U & 0xfffffffe,(byte)(in_fpscr >> 0x16) & 3);
  *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(iVar2 + 0x3c);
  *(float *)(iVar2 + 0x40) = fVar4;
  *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
  iVar2 = 0;
  do {
    iVar3 = *(int *)(*(int *)(param_1 + 0x90) + iVar2 * 4);
    iVar2 = iVar2 + 1;
    *(float *)(iVar3 + 0x20) = -10.0 - fVar4 * 0.5;
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xef | 0x10;
  } while (iVar2 < 2);
  return;
}



void fn_003afc8c(int param_1)

{
  fn_0016a43c(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x74));
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  fn_0016a43c(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  fn_001482f4(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
}



void fn_003afc4c(undefined4 *param_1)

{
  *param_1 = &DAT_0082e77c;
  fn_001218d4(DAT_00897800,DAT_00898788);
  fn_002c471c(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_003afc00(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  puVar1[0x2c] = 0;
  *puVar1 = &DAT_0082e77c;
  puVar1[0x2d] = 0;
  fn_00121838(DAT_00897800,DAT_00898788,1);
  return puVar1;
}


