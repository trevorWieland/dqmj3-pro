#include "00157c00_00158268.h"



undefined4 fn_00158268(undefined4 param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  undefined2 local_14 [2];
  
  local_18 = 0;
  iVar1 = fn_00159164(param_1,0xffffffff,0x8000100,&local_18);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  local_14[0] = 0xfafa;
  iVar1 = (*param_2)(param_3,local_14,2);
  if (iVar1 == 2) {
    iVar1 = fn_00163d88(*(undefined4 *)(local_18 + 4),param_1,param_3,param_2);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = fn_001581d0(param_1,(char *)&DAT_0015830c);
  }
  return uVar2;
}



void fn_00158128(int param_1,int param_2)

{
  int iVar1;
  uint local_18;
  int *local_14;
  
  if (param_2 == 0) {
    fn_00173d1c(param_1,&DAT_008c06e8);
    return;
  }
  local_14 = (int *)fn_0019ba68(*(undefined4 *)(param_1 + 0x8c));
  local_18 = 0x8000010;
  if (local_14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  local_14[1] = local_14[1] + 1;
  fn_00173d1c(param_1,&local_18);
  if (((local_18 & 0x8000000) != 0) &&
     (iVar1 = local_14[1], local_14[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*local_14 + 8))();
  }
  return;
}



void fn_001580cc(undefined4 param_1,int *param_2)

{
  int iVar1;
  uint local_10;
  int *local_c;
  
  local_10 = 0x5000002;
  local_c = param_2;
  fn_00173d1c(param_1,&local_10);
  if (((local_10 & 0x8000000) != 0) &&
     (iVar1 = local_c[1], local_c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*local_c + 8))();
  }
  return;
}



void fn_00158070(undefined4 param_1)

{
  int iVar1;
  int *in_s0;
  uint local_10;
  int *local_c;
  
  local_10 = 0x5000004;
  local_c = in_s0;
  fn_00173d1c(param_1,&local_10);
  if (((local_10 & 0x8000000) != 0) &&
     (iVar1 = local_c[1], local_c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*local_c + 8))();
  }
  return;
}



void fn_00158004(undefined4 param_1,int param_2)

{
  int iVar1;
  uint local_10;
  int *local_c;
  
  local_c = (int *)(uint)(param_2 != 0);
  local_10 = 0x1000008;
  fn_00173d1c(param_1,&local_10);
  if (((local_10 & 0x8000000) != 0) &&
     (iVar1 = local_c[1], local_c[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*local_c + 8))();
  }
  return;
}



undefined4 fn_00157fb0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_10;
  
  local_10 = 0;
  iVar1 = fn_00159164(param_1,param_2,0x8000010,&local_10);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    *param_3 = *(int *)(local_10 + 4) + 0x1c;
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 fn_00157f58(int param_1,int param_2,float *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  float fVar3;
  
  if (param_2 < 0) {
    puVar1 = (uint *)fn_00173d4c();
  }
  else {
    puVar1 = (uint *)fn_00173d40(param_1,param_2 + -1 + *(int *)(param_1 + 0x34));
  }
  if ((*puVar1 & 0x4000000) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    fVar3 = (float)puVar1[1];
    if (*puVar1 == 0x5000004) {
      fVar3 = (float)(int)fVar3;
    }
    uVar2 = 0;
    *param_3 = fVar3;
  }
  return uVar2;
}



undefined4 fn_00157f00(int param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  uint in_fpscr;
  uint uVar3;
  
  if (param_2 < 0) {
    puVar1 = (uint *)fn_00173d4c();
  }
  else {
    puVar1 = (uint *)fn_00173d40(param_1,param_2 + -1 + *(int *)(param_1 + 0x34));
  }
  if ((*puVar1 & 0x4000000) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar3 = puVar1[1];
    if (*puVar1 == 0x5000002) {
      uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
    }
    uVar2 = 0;
    *param_3 = uVar3;
  }
  return uVar2;
}



undefined4 fn_00157eb4(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_2 < 0) {
    piVar1 = (int *)fn_00173d4c();
  }
  else {
    piVar1 = (int *)fn_00173d40(param_1,param_2 + -1 + *(int *)(param_1 + 0x34));
  }
  if (*piVar1 == 0x1000008) {
    *param_3 = piVar1[1];
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



undefined4 fn_00157df4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_2 < 0) {
    uVar1 = fn_00173d4c();
  }
  else {
    uVar1 = fn_00173d40(param_1,param_2 + -1 + *(int *)(param_1 + 0x34));
  }
  uVar2 = fn_00173d4c(param_1,0xffffffff);
  uVar3 = fn_00173d4c(param_1,0xffffffff);
  iVar4 = fn_00198578(param_1,uVar1,uVar3,uVar2,0,0);
  if (iVar4 == 0) {
    fn_00173cd0(param_1,1);
    uVar1 = fn_001581d0(param_1,"the index doesn\'t exist");
    return uVar1;
  }
  return 0;
}



undefined4 fn_001581d0(int param_1,undefined4 param_2)

{
  int iVar1;
  uint local_18;
  int *local_14;
  
  local_14 = (int *)fn_0019ba68(*(undefined4 *)(param_1 + 0x8c),param_2,0xffffffff);
  local_18 = 0x8000010;
  if (local_14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  local_14[1] = local_14[1] + 1;
  fn_0019e864(param_1 + 0x40,&local_18);
  if (((local_18 & 0x8000000) != 0) &&
     (iVar1 = local_14[1], local_14[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*local_14 + 8))();
  }
  return 0xffffffff;
}



undefined4 fn_00157c74(int param_1,uint param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint local_20;
  int *local_1c;
  
  local_20 = 0x1000001;
  local_1c = (int *)0x0;
  uVar1 = fn_00173d4c(param_1,~param_2);
  iVar2 = fn_0017ffac(param_1,uVar1,param_2,*(int *)(param_1 + 0x30) - param_2,&local_20,
                       param_4 != 0);
  if (iVar2 == 0) {
    fn_00173cd0(param_1,param_2);
    if (((local_20 & 0x8000000) != 0) &&
       (iVar2 = local_1c[1], local_1c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
      (**(code **)(*local_1c + 8))();
    }
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0x94) == 0) {
    fn_00173cd0(param_1,param_2);
  }
  if (param_3 == 0) {
    if ((local_20 & 0x8000000) == 0) {
      return 0;
    }
    iVar2 = local_1c[1] + -1;
    local_1c[1] = iVar2;
  }
  else {
    fn_00173d1c(param_1,&local_20);
    if ((local_20 & 0x8000000) == 0) {
      return 0;
    }
    iVar2 = local_1c[1] + -1;
    local_1c[1] = iVar2;
  }
  if (iVar2 == 0) {
    (**(code **)(*local_1c + 8))();
  }
  return 0;
}



void fn_00157c54(void)

{
  fn_0015f9f0();
  return;
}



void fn_00157c34(void)

{
  fn_0015f8b0();
  return;
}



void fn_00157c14(void)

{
  fn_0015fdc4();
  return;
}



void fn_00157c00(void)

{
  fn_0015f7d0();
  return;
}


