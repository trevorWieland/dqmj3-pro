#include "00161958_00162118a.h"



void fn_00161be0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x2c;
  fn_00170704(iVar2);
  piVar1 = (int *)fn_00172edc(param_1,2,1);
  if (((piVar1 == (int *)0x0) && (piVar1 = (int *)fn_00172edc(param_1,1), piVar1 == (int *)0x0)) &&
     (piVar1 = (int *)fn_00172edc(param_1,0,1), piVar1 == (int *)0x0)) {
    fn_001707b4(iVar2);
    return;
  }
  fn_001707b4(iVar2);
  *(int **)(param_1 + 0x24) = piVar1;
  (**(code **)(*piVar1 + 8))(piVar1);
  *(undefined1 *)(piVar1 + 5) = 3;
  fn_0015dfc0(piVar1 + 3);
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



bool fn_00161b80(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_3 + param_2;
  uVar1 = param_2 + 0x1fU & 0xffffffe0;
  if (uVar1 <= uVar2) {
    *(uint *)(param_1 + 0xc) = uVar1;
    *(uint *)(param_1 + 0x10) = uVar2;
    *(uint *)(param_1 + 0x14) = uVar1;
  }
  return uVar1 <= uVar2;
}



void fn_00161b34(int param_1,undefined4 param_2)

{
  float in_s0;
  float fVar1;
  
  if (in_s0 < 0.0) {
    in_s0 = 0.0;
  }
  fVar1 = in_s0;
  fn_00168948((float *)(param_1 + 0xb8));
  *(float *)(param_1 + 0xb8) = in_s0;
  *(float *)(param_1 + 0xbc) = fVar1;
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  return;
}



void fn_00161b2c(int param_1)

{
  undefined4 in_s0;
  
  *(undefined4 *)(param_1 + 0xd0) = in_s0;
  return;
}



void fn_00161b24(int param_1)

{
  undefined4 in_s0;
  
  *(undefined4 *)(param_1 + 0xcc) = in_s0;
  return;
}



undefined4
fn_00161958(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5,int param_6,undefined4 param_7)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int local_3c;
  int local_38;
  int local_34;
  
  local_3c = -1;
  local_38 = -1;
  local_34 = 0;
  iVar1 = fn_00166518(param_1[1],param_2,&local_3c,0);
  uVar3 = 0;
  if (iVar1 != 0) {
    piVar2 = (int *)param_1[2];
    if ((piVar2 != (int *)0x0) && ((char)piVar2[1] != '\0')) {
      (**(code **)(*piVar2 + 0x30))(piVar2,param_2,&local_3c,0);
    }
    if (local_34 == 0) {
      if ((local_3c == -1) || (local_38 == -1)) {
        return 0;
      }
      uVar3 = (**(code **)(*param_1 + 0x10))
                        (param_1,param_3,param_4,local_38 + param_1[0x43],local_3c);
      return uVar3;
    }
    uVar3 = (undefined4)((ulonglong)param_5 >> 0x20);
    if (param_6 == 0) {
      uVar3 = fn_0017697c(param_1,param_3,param_4,local_34,(int)param_5,uVar3,param_7);
      return uVar3;
    }
    uVar3 = fn_0017697c(param_1,param_3,param_4,param_6,(int)param_5,uVar3,param_7);
  }
  return uVar3;
}


