#include "00264700_00264fd4bb.h"



int fn_00264fd4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = param_2 + 0x3e;
  iVar3 = iVar1;
  while (*(int *)(*(int *)(param_1 + 0x1c) + iVar3 * 4) != 0) {
    iVar3 = iVar3 + 1;
    if (param_2 + 0x3f <= iVar3) {
      return iVar1;
    }
  }
  if (iVar3 == -1) {
    return iVar1;
  }
  uVar2 = fn_001287b4();
  uVar2 = fn_0011c184(L"rom:/data/Mask/BreakL.bch",uVar2,0x80,5);
  iVar3 = fn_00145ac0();
  if (iVar3 == 0) {
    return -1;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1 * 4) = uVar2;
  return iVar1;
}



int fn_00264e94(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_90 [128];
  
  uVar1 = fn_00242bd4(param_2);
  fn_00101a50(auStack_90,0x80,L"patch:/data/Mask/%s.bch",uVar1);
  iVar2 = fn_00147fd4(auStack_90,5);
  if (iVar2 == 0) {
    param_3 = -1;
  }
  else {
    param_3 = param_3 + 0x4d;
    uVar1 = fn_001287b4(iVar2);
    uVar1 = fn_0011c184(auStack_90,uVar1,0x80,5);
    iVar2 = fn_00145ac0();
    if (iVar2 == 0) {
      param_3 = -1;
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + param_3 * 4) = uVar1;
    }
  }
  return param_3;
}



int fn_00264d74(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_128;
  int local_124;
  undefined2 local_120 [2];
  int local_11c;
  undefined1 auStack_118 [128];
  undefined1 auStack_98 [128];
  undefined1 auStack_18 [8];
  
  fn_00301f50(auStack_118,0x80);
  fn_001f8424(auStack_118,0x80,param_2,param_3);
  fn_00101a50(auStack_98,0x80,L"patch:/data/Motion/%s.bch",auStack_118);
  local_120[0] = fn_00242950(param_2);
  fn_00785f5c(&local_11c,param_1 + 0x60,local_120);
  if (local_11c == *(int *)(param_1 + 0x70)) {
    iVar1 = 0x5b;
    do {
      if (*(int *)(*(int *)(param_1 + 0x1c) + iVar1 * 4) == 0) goto LAB_00264e18;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x79);
    iVar1 = -1;
LAB_00264e18:
    local_128 = 1;
    iVar1 = fn_00264f50(param_1,iVar1,auStack_98,0);
    if (iVar1 != -1) {
      local_128 = CONCAT22(((unsigned int)(local_128) >> 16) & 0xffff,local_120[0]);
      local_124 = iVar1;
      fn_00785fc4(auStack_18,param_1 + 0x60,&local_128);
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



int fn_00264f50(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x80;
  if (param_4 == 1) {
    uVar3 = 0xffffff80;
  }
  uVar1 = fn_001287b0();
  uVar3 = fn_0011c184(param_3,uVar1,uVar3,5);
  iVar2 = fn_00145ac0();
  if (iVar2 == 0) {
    fn_0012d73c(uVar3);
  }
  else {
    uVar1 = fn_00145ac0();
    iVar2 = fn_00179fc4(param_1,param_2,uVar1);
    if (iVar2 != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + param_2 * 4) = uVar3;
      return param_2;
    }
  }
  return -1;
}


