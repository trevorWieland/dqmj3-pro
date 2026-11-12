#include "00375630_00376314ba.h"



void fn_00376238(int param_1)

{
  if (*(int *)(param_1 + 0x74) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0x68));
    *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  }
  fn_0016a43c(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
                    /* WARNING: Subroutine does not return */
  fn_001482f4(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
}



void fn_00376208(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x14,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00376298(iVar1,param_1);
  return;
}



void fn_003761a8(int param_1)

{
  float *pfVar1;
  float in_s0;
  float local_10;
  float local_c;
  float local_8 [2];
  
  pfVar1 = &local_10;
  *(float *)(param_1 + 8) = in_s0;
  local_8[0] = *(float *)(param_1 + 0x10);
  local_c = *(float *)(param_1 + 0xc);
  if (local_c < local_8[0]) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  if (in_s0 < local_8[0]) {
    pfVar1 = local_8;
  }
  if (local_c < *pfVar1) {
    pfVar1 = &local_c;
  }
  *(float *)(param_1 + 8) = *pfVar1;
  return;
}



void fn_00375e3c(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 local_18 [2];
  
  iVar1 = param_1[0x36];
  if (iVar1 == 0) {
    if (*(char *)(param_1[0x35] + 8) == '\0') {
      return;
    }
  }
  else if (iVar1 == 3 || iVar1 == 2) {
    return;
  }
  if (param_2 == 4) {
    (**(code **)(*param_1 + 0x110))(param_1);
    return;
  }
  if (*(int *)(DAT_00897850 + 0x34) != 2) {
    fn_00689878(param_1,0x5e);
    return;
  }
  if (param_2 == 3) {
    iVar1 = fn_006739cc(param_1[0x37]);
    if (iVar1 == 0) {
      uVar2 = fn_0022f584((char *)&DAT_00375fa0,0);
      fn_00747f94(param_1,uVar2,0,1,1,0);
      param_1[0x36] = 1;
      return;
    }
    uVar3 = 3;
  }
  else if (param_2 == 0) {
    uVar3 = 2;
  }
  else if (param_2 == 1) {
    uVar3 = 1;
  }
  else {
    if (param_2 != 2) {
      return;
    }
    uVar3 = 4;
  }
  *(undefined1 *)(DAT_00897830 + 0x4c) = uVar3;
  fn_0074824c(param_1,param_2);
  (**(code **)(*(int *)param_1[0x27] + 0x30))((int *)param_1[0x27],0,local_18);
  *(undefined4 *)(param_1[0x34] + 8) = local_18[0];
  param_1[0x36] = 2;
  return;
}


