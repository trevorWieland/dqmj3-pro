#include "00404058_0040451ca.h"



void fn_0040428c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x6c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_004042bc(iVar1,param_1);
  return;
}



void fn_00404274(int param_1)

{
  fn_0036bfcc();
  *(undefined1 *)(param_1 + 0x69) = 0;
  return;
}



void fn_00404164(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  fn_003d0b80(*(undefined4 *)(param_1 + 8),0);
  fn_003d0ae8(*(undefined4 *)(param_1 + 8),1,0);
  fn_003cfaac(param_1,2);
  fn_003d0478(*(undefined4 *)(param_1 + 8),2);
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x14);
  uVar3 = *(undefined4 *)(iVar2 + 0x20);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(iVar1 + 8) = uVar3;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  fn_0038dad0(*(undefined4 *)(param_1 + 4),0,6,0,1,&LAB_00404244,&LAB_00404244);
  fn_0038dad0(*(undefined4 *)(param_1 + 4),1,6,1,1,&LAB_00404244,&LAB_00404244);
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x22) = 1;
  return;
}



void fn_004040bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  fn_0038d4c4(*(undefined4 *)(param_1 + 4),0,(int)*(char *)(param_1 + 0x22),param_4,param_4);
  iVar3 = *(int *)(param_1 + 4);
  uVar2 = (uint)*(char *)(param_1 + 0x14);
  uVar1 = *(int *)(iVar3 + 0x1c) - *(int *)(iVar3 + 0x18) >> 2;
  if (uVar1 <= uVar2) {
    fn_002ff628(9,&DAT_008c765f,&DAT_008c765f,uVar2,uVar1);
  }
  fn_0025e7cc(*(undefined4 *)(param_1 + 0x34),**(int **)(*(int *)(iVar3 + 0x18) + uVar2 * 4) + 0x1c
              );
  fn_003cfa24(param_1,param_2,param_3,param_4);
  return;
}



void fn_00404058(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_008378c4;
  uVar1 = param_1[0x10];
  uVar2 = uVar1;
  if ((uint)param_1[0x11] < uVar1) {
    do {
      uVar2 = uVar2 + 2;
    } while (uVar2 != param_1[0x11]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x12] - uVar1) >> 1,0);
  fn_003d0048(param_1);
  fn_002feef8();
  return;
}


