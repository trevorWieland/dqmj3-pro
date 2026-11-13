#include "single_002a26d8_r.h"


extern undefined4 _local_10;

void fn_002a26d8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined1 local_10;
  undefined3 uStack_f;
  
  if (param_2 == 0) {
    uVar1 = 0x21;
  }
  else {
    uVar1 = 0x20;
  }
  _local_10 = CONCAT31((int3)((uint)param_4 >> 8),uVar1);
  uVar2 = fn_0017484c(DAT_008977e4);
  piVar3 = (int *)fn_00175dcc(uVar2,&local_10);
  if (piVar3 != (int *)0x0) {
    if (piVar3[0x14] != 0) {
      fn_001794f4(piVar3);
    }
    (**(code **)(*piVar3 + 0x10))(piVar3,0xb,4);
    if (param_2 == 0) {
      piVar4 = &DAT_008c7ee0;
    }
    else {
      piVar4 = &DAT_008c7ed4;
    }
    iVar5 = piVar4[1];
    iVar6 = piVar4[2];
    piVar3[3] = *piVar4;
    piVar3[4] = iVar5;
    piVar3[5] = iVar6;
    (**(code **)(*piVar3 + 0x14))(piVar3,1);
    fn_00179928(piVar3);
    if (param_2 == 0) {
      iVar5 = -0x3c700000;
    }
    else {
      iVar5 = -0x3c800000;
    }
    fn_0017fe34();
    piVar3[7] = iVar5;
  }
  return;
}


