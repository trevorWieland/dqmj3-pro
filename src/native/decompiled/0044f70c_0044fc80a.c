#include "0044f70c_0044fc80a.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}

static void svc_0x24(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x24 }
#endif
}


undefined4 fn_0044fa38(void)

{
  int iVar1;
  undefined4 uVar2;
  uint in_r3;
  uint local_8 [2];
  
  local_8[0] = in_r3;
  iVar1 = fn_00125198();
  if (iVar1 == 0) {
    fn_00146594();
  }
  iVar1 = fn_005266fc(local_8,0x40001f3);
  if ((iVar1 < 0) || ((local_8[0] & 0xff) != 2 && (local_8[0] & 0xff) != 4)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 * fn_0044f9dc(undefined4 *param_1)

{
  *param_1 = &DAT_007e4184;
  if (*(char *)(param_1 + 2) != '\0') {
    if (param_1[1] != 0) {
      svc_0x23();
      param_1[1] = 0;
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  if (param_1[1] != 0) {
    svc_0x23();
    param_1[1] = 0;
  }
  return param_1;
}



int fn_0044f938(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_38 [2];
  undefined1 auStack_30 [32];
  
  if (*(char *)(param_1 + 8) == '\0') {
    local_38[0] = 0;
    if (*(int *)(param_1 + 4) == 0) {
      iVar1 = fn_0010fe88(local_38);
      if (-1 < iVar1) {
        iVar1 = 0;
        *(undefined4 *)(param_1 + 4) = local_38[0];
      }
    }
    else {
      iVar1 = -0x1f5fe7c5;
    }
    if (iVar1 < 0) {
      fn_0015e294();
    }
    *(undefined1 *)(param_1 + 8) = 1;
  }
  fn_0073557c(auStack_30,param_2);
  iVar1 = fn_0073560c(auStack_30);
  iVar1 = iVar1 + -0x18;
  fn_0073561c(iVar1);
  fn_0044fc80(iVar1,auStack_30);
  return iVar1;
}



void fn_0044f8e0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 in_lr;
  
  if ((param_3 == 0) &&
     (svc_0x24(), param_3 = param_2, param_4 = in_lr, *(int *)(param_1 + 4) < 0)) {
    fn_0015e294();
  }
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  fn_0015e1b0(&DAT_008e36c0,param_2,param_3,param_4);
  return;
}



int fn_0044f8b4(int param_1)

{
  fn_0015e228();
  if (*(int *)(param_1 + 0x14) != 0) {
    svc_0x23();
    *(int *)(param_1 + 0x14) = 0;
  }
  return param_1;
}



void fn_0044f810(int param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 local_14;
  
  if (((*(int *)(param_1 + 8) == 0) && ((param_2 & 0xfff) == 0)) && ((param_3 & 0xfff) == 0)) {
    local_14 = 0;
    iVar1 = fn_0012d624(&local_14,param_2,param_3,param_4,param_5);
    if (-1 < iVar1) {
      *(undefined4 *)(param_1 + 0x14) = local_14;
      *(uint *)(param_1 + 8) = param_2;
      *(uint *)(param_1 + 0xc) = param_3;
    }
  }
  return;
}



void fn_0044f70c(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  
  fn_00170704(param_1 + 0xc);
  iVar1 = param_3[3];
  param_2[2] = param_3[2];
  param_2[3] = iVar1;
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 == param_3) {
    if (piVar2 == (int *)0x0) {
      param_2[1] = (int)param_2;
      *param_2 = (int)param_2;
    }
    else {
      param_2[1] = (int)piVar2;
      *(int **)(*piVar2 + 4) = param_2;
      *param_2 = *piVar2;
      *piVar2 = (int)param_2;
    }
    *(int **)(param_1 + 8) = param_2;
  }
  else if (param_3 == (int *)0x0) {
    if (piVar2 == (int *)0x0) {
      param_2[1] = (int)param_2;
      *param_2 = (int)param_2;
      *(int **)(param_1 + 8) = param_2;
    }
    else {
      param_2[1] = (int)piVar2;
      *(int **)(*piVar2 + 4) = param_2;
      *param_2 = *piVar2;
      *piVar2 = (int)param_2;
    }
  }
  else {
    param_2[1] = (int)param_3;
    *(int **)(*param_3 + 4) = param_2;
    *param_2 = *param_3;
    *param_3 = (int)param_2;
  }
  param_3[2] = 0;
  param_3[3] = 0;
  if ((int *)*param_3 == param_3) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    if (*(int **)(param_1 + 8) == param_3) {
      *(int *)(param_1 + 8) = (*(int **)(param_1 + 8))[1];
    }
    *(int *)param_3[1] = *param_3;
    *(int *)(*param_3 + 4) = param_3[1];
  }
  param_3[1] = 0;
  *param_3 = 0;
  fn_001707b4(param_1 + 0xc);
  return;
}


