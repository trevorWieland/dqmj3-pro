#include "001f3af4_001f406c.h"



undefined4 fn_001f406c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00145b00(0x20,&DAT_00812c8c);
  if (iVar1 != 0) {
    fn_0017fe34();
    fn_0017fe34();
    iVar1 = fn_003cd3a8(iVar1,param_2,param_3,param_4);
    if (iVar1 != 0) {
      uVar2 = fn_0015a130(param_1);
      return uVar2;
    }
  }
  return 0xffffffff;
}



undefined4 fn_001f3f8c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  fn_00163edc(param_1,*(undefined4 *)(param_1 + 0x78),param_3,&local_24);
  iVar1 = local_20 - local_24 >> 0x1f;
  if (((local_20 - local_24) / 0xc + iVar1 != iVar1) &&
     (iVar1 = fn_00145b00(0x28,&DAT_00812c8c), iVar1 != 0)) {
    iVar1 = fn_003a1e54(iVar1,param_2,&local_24,0,1);
    if (iVar1 != 0) {
      fn_001f25d4(param_1,param_2,local_24,1);
      uVar2 = fn_0015a130(param_1,iVar1);
      fn_00168b28(&local_24);
      return uVar2;
    }
  }
  fn_00168b28(&local_24);
  return 0xffffffff;
}



void fn_001f3f54(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (((-1 < (int)param_2) && (param_2 < 0x50)) &&
     (iVar1 = *(int *)(param_1 + param_2 * 0x2c + 0x8c), iVar1 != 0)) {
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    *(undefined4 *)(iVar1 + 0x19c) = *param_3;
    *(undefined4 *)(iVar1 + 0x1a0) = uVar2;
    *(undefined4 *)(iVar1 + 0x1a4) = uVar3;
  }
  return;
}



undefined4 fn_001f3e88(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (1 < param_3) {
    return 0xffffffff;
  }
  fn_006f7a84(DAT_008977e0);
  iVar1 = fn_006aba74();
  if (iVar1 == 0 && param_3 == 1) {
    uVar2 = 0xffffffff;
  }
  else {
    if (param_3 == 0) {
      iVar1 = fn_006f7a84(DAT_008977e0);
      unaff_r4 = fn_0017fde4(*(undefined4 *)(iVar1 + 0x18c));
    }
    else if (param_3 == 1) {
      iVar1 = fn_006f7a84(DAT_008977e0);
      unaff_r4 = fn_0017fde4(*(undefined4 *)(iVar1 + 0xe4));
    }
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    uVar2 = fn_001ceba8(param_1,param_2,unaff_r4,param_4,&local_2c);
  }
  return uVar2;
}



void fn_001f3e58(undefined4 param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  iVar1 = *(int *)(iVar1 + 0x3c);
  iVar3 = 0;
  if (0 < (*(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8)) / 0x150) {
    do {
      iVar4 = *(int *)(iVar1 + 8) + iVar3 * 0x150;
      if ((iVar4 != 0) && (iVar2 = fn_003035b0(iVar4 + 0x12e,param_2), iVar2 == 0)) {
        *(undefined1 *)(iVar4 + 0x12d) = param_3;
        return;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (*(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8)) / 0x150);
  }
  return;
}



void fn_001f3e34(int param_1)

{
  fn_00698a78(DAT_008977e0);
  *(undefined1 *)(param_1 + 0xf94) = 0;
  return;
}



void fn_001f3e10(int param_1)

{
  fn_0069895c(DAT_008977e0);
  *(undefined1 *)(param_1 + 0xf94) = 0;
  return;
}



void fn_001f3dc8(int param_1,uint param_2)

{
  short *psVar1;
  int iVar2;
  
  if ((int)param_2 < 0) {
    return;
  }
  if (0x4f < param_2) {
    return;
  }
  iVar2 = *(int *)(param_1 + param_2 * 0x2c + 0x8c);
  if (iVar2 != 0) {
    psVar1 = (short *)fn_002283d0();
    fn_00237c60(iVar2,(int)*psVar1);
    *(undefined1 *)(iVar2 + 0x18b) = 1;
  }
  return;
}



void fn_001f3d68(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0xf7c) + 0x14))();
  (**(code **)(**(int **)(param_1 + 0xf7c) + 0x1c))(*(int **)(param_1 + 0xf7c),param_2);
  if ((iVar1 == 7) && (*(int **)(param_1 + 0xf7c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0xf7c) + 4))();
    *(undefined4 *)(param_1 + 0xf7c) = 0;
  }
  return;
}



int fn_001f3cf4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = fn_00227398();
  if (iVar1 != 0) {
    iVar1 = fn_00227ca8(DAT_00897894,2,0xffffffff,0);
    iVar2 = fn_00228c14(*(undefined4 *)(DAT_00897804 + 0x34));
    if ((iVar2 != iVar1 && iVar1 != 0) && (iVar2 = fn_002281b4(iVar1), iVar2 != 0)) {
      iVar3 = iVar1;
    }
    fn_00682a8c();
  }
  return iVar3;
}



void fn_001f3ccc(void)

{
  int iVar1;
  
  iVar1 = fn_002283d0();
  if (iVar1 == 0) {
    return;
  }
  fn_002cd59c(4);
  return;
}



void fn_001f3cb8(void)

{
  fn_001f3688();
  return;
}



undefined4 fn_001f3cb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  iStack_24 = 0;
  iStack_20 = 0;
  uStack_1c = 0;
  fn_00163edc(param_1,*(undefined4 *)(param_1 + 0x78),param_3,&iStack_24);
  iVar1 = iStack_20 - iStack_24 >> 0x1f;
  if (((iStack_20 - iStack_24) / 0xc + iVar1 != iVar1) &&
     (iVar1 = fn_00145b00(0x28,&DAT_00812c8c), iVar1 != 0)) {
    iVar1 = fn_003a1e54(iVar1,param_2,&iStack_24,0,0);
    if (iVar1 != 0) {
      fn_001f25d4(param_1,param_2,iStack_24,0);
      uVar2 = fn_0015a130(param_1,iVar1);
      fn_00168b28(&iStack_24);
      return uVar2;
    }
  }
  fn_00168b28(&iStack_24);
  return 0xffffffff;
}



void fn_001f3c74(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (((-1 < (int)param_2) && (param_2 < 0x50)) &&
     (iVar1 = *(int *)(param_1 + param_2 * 0x2c + 0x8c), iVar1 != 0)) {
    *(uint *)(iVar1 + 0x138) = *(uint *)(iVar1 + 0x138) & 0xfffffeff | param_3 << 8;
  }
  return;
}



uint fn_001f3b6c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int in_s0;
  
  iVar1 = fn_006abd58();
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  uVar4 = 0;
  while (((-1 < (int)uVar4 && (uVar4 < 0x50)) && (*(int *)(param_1 + uVar4 * 0x2c + 0x8c) != 0))) {
    uVar4 = uVar4 + 1;
    if (0x4f < (int)uVar4) {
      return 0xffffffff;
    }
  }
  if (uVar4 == 0xffffffff) {
    return 0xffffffff;
  }
  fn_006f74f4(DAT_008977e0);
  piVar2 = (int *)fn_006c2e50();
  if (piVar2 == (int *)0x0) {
    return 0xffffffff;
  }
  uVar3 = fn_006f7a70(DAT_008977e0);
  uVar3 = fn_002fe310(uVar3,piVar2,0xffffffff);
  (**(code **)(*piVar2 + 0x10))(piVar2,iVar1 + 0x20);
  piVar2[99] = in_s0;
  param_1 = param_1 + uVar4 * 0x2c;
  *(int **)(param_1 + 0x8c) = piVar2;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x9c) = 2;
  *(undefined4 *)(param_1 + 0x98) = uVar3;
  return uVar4;
}



void fn_001f3b4c(void)

{
  fn_001f46d0();
  return;
}



int fn_001f3af4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xe4c);
  if (((iVar2 == 0) || (iVar1 = fn_006abd58(), iVar1 == 0)) ||
     (iVar2 = fn_0035b974(iVar2,iVar1 + 0x20,param_3,1,0), iVar2 == -1)) {
    return -1;
  }
  return iVar2;
}


