#include "0060481c_00604df8ba.h"



void fn_00604d64(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x554,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00604d98(iVar1,param_1);
  return;
}



void fn_00604b90(int param_1)

{
  int iVar1;
  int *piVar2;
  float in_s0;
  float in_s1;
  float in_s2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_38;
  float fStack_34;
  float fStack_30;
  
  iVar1 = fn_006b0d10(*(undefined4 *)(param_1 + 0x14),0);
  if (iVar1 == 0) {
    fn_0021718c(param_1,1,0x3c);
    return;
  }
  fn_006a9878(iVar1,(char *)&DAT_00604d1c);
  fVar3 = in_s1;
  fVar4 = in_s0;
  fVar5 = in_s2;
  fn_006a9878(*(undefined4 *)(param_1 + 0x14),(char *)&DAT_00604d1c);
  iVar1 = *(int *)(param_1 + 0x14);
  local_38 = fVar4 - (in_s0 - *(float *)(iVar1 + 0x20));
  fStack_30 = fVar5 - (in_s2 - *(float *)(iVar1 + 0x28));
  fStack_34 = fVar3 - (in_s1 - *(float *)(iVar1 + 0x24));
  (**(code **)(**(int **)(param_1 + 0x14) + 0x10))(*(int **)(param_1 + 0x14),&local_38);
  if (fVar3 < *(float *)(param_1 + 0x5c)) {
    piVar2 = (int *)fn_006f7508(DAT_008977e0,0x7d0a);
    (**(code **)(*piVar2 + 100))
              (piVar2,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + 0x170) + 0xfc),2,0);
    fn_0023ddec(*(undefined4 *)(DAT_008977e0 + 0x2c),0x7d0a);
    (**(code **)(**(int **)(param_1 + 0x14) + 0xe4))(*(int **)(param_1 + 0x14),0x10009df,0);
    (**(code **)(**(int **)(param_1 + 0x14) + 0x1c4))(*(int **)(param_1 + 0x14),1);
    (**(code **)(**(int **)(param_1 + 0x14) + 0x54))(*(int **)(param_1 + 0x14),0);
    *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 0;
  }
  *(float *)(param_1 + 0x58) = fVar4;
  *(float *)(param_1 + 0x5c) = fVar3;
  *(float *)(param_1 + 0x60) = fVar5;
  return;
}



undefined4 fn_00604b24(int param_1)

{
  int iVar1;
  undefined4 in_s0;
  undefined4 in_s1;
  undefined4 in_s2;
  
  *(uint *)(*(int *)(param_1 + 0x14) + 0x134) = *(uint *)(*(int *)(param_1 + 0x14) + 0x134) | 4;
  *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  (**(code **)(**(int **)(param_1 + 0x14) + 0x15c))(*(int **)(param_1 + 0x14),1);
  iVar1 = fn_006b0d10(*(undefined4 *)(param_1 + 0x14),0);
  if (iVar1 != 0) {
    fn_006a9878(iVar1,(char *)&DAT_00604b88);
    *(undefined4 *)(param_1 + 0x58) = in_s0;
    *(undefined4 *)(param_1 + 0x5c) = in_s1;
    *(undefined4 *)(param_1 + 0x60) = in_s2;
  }
  return 1;
}


