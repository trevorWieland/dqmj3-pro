#include "0026954c_00269a00a.h"



undefined4 fn_00269720(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_002697a8), iVar1 != 0)) {
    DAT_008bf658 = 0;
  }
  else {
    DAT_008bf658 = param_1 + 4;
  }
  if ((param_3 - 4 & 7) != 0) {
    DAT_008bf658 = 0;
  }
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_008bf65c = 0;
  }
  else {
    DAT_008bf65c = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4),8,0);
  }
  return 1;
}



void fn_00269668(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_003758f4(iVar1,*(undefined4 *)(param_1 + 0x28));
  }
  piVar3 = *(int **)(param_1 + 0x2c);
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *(int **)(param_1 + 0x2c) = piVar2;
  }
  return;
}



void fn_00269614(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  fn_00370414();
  iVar1 = fn_00145b00(0x27c0,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_002a37d8();
  }
  piVar3 = *(int **)(param_1 + 0x94c);
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *(int **)(param_1 + 0x94c) = piVar2;
  }
  return;
}



void fn_002695c8(int param_1)

{
  fn_00301f50(param_1 + 0x74,0x8d8);
  *(undefined1 *)(param_1 + 0x70) = 0;
  if (*(int **)(param_1 + 0x94c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x94c) + 4))();
    *(undefined4 *)(param_1 + 0x94c) = 0;
  }
  fn_00370384(param_1);
  return;
}



void fn_0026954c(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  fn_0036ffb8();
  fn_003c1f64(*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x34) = 2;
  iVar1 = fn_00145b00(0x10,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_0028bf74(iVar1,*(undefined4 *)(param_1 + 0x20));
  }
  piVar3 = *(int **)(param_1 + 0x950);
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *(int **)(param_1 + 0x950) = piVar2;
  }
  fn_0028bf3c(*(undefined4 *)(param_1 + 0x950));
  fn_0028bed4(*(undefined4 *)(param_1 + 0x950));
  return;
}


