#include "00264700_00264fd4ba.h"



int fn_00264c80(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_ac;
  undefined1 auStack_a8 [128];
  undefined2 local_28 [2];
  int local_24;
  undefined1 auStack_20 [12];
  int iStack_14;
  undefined4 local_10;
  
  local_10 = (local_10 & ~((unsigned int)0xffff << 0)) | ((unsigned int)((short)param_2) & 0xffff);
  iVar1 = (int)(short)local_10;
  iStack_14 = param_1;
  local_10 = param_2;
  uVar2 = fn_00242bd4(iVar1);
  fn_00101a50(auStack_a8,0x80,L"patch:/data/Model/%sr.bch",uVar2);
  fn_00785f5c(&local_ac,param_1 + 0x44,&local_10);
  if (local_ac == *(int *)(param_1 + 0x54)) {
    iVar1 = 0x51;
    do {
      if (*(int *)(*(int *)(param_1 + 0x1c) + iVar1 * 4) == 0) goto LAB_00264cf8;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x5b);
    iVar1 = -1;
LAB_00264cf8:
    iVar1 = fn_00264f50(param_1,iVar1,auStack_a8,0,0);
    if (iVar1 != -1) {
      local_28[0] = (short)local_10;
      local_24 = iVar1;
      fn_00785fc4(auStack_20,param_1 + 0x44,local_28);
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



void fn_00264c20(undefined4 param_1)

{
  fn_00264f50(param_1,0x44,L"rom:/data/Race/Obj/o_rac_21.bch",0,0);
  return;
}



int fn_00264b5c(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_90 [128];
  
  uVar1 = fn_00242bd4(param_2);
  fn_00101a50(auStack_90,0x80,L"patch:/data/Model/%s.bch",uVar1);
  param_3 = param_3 + 0x49;
  uVar1 = fn_001287b4();
  uVar1 = fn_0011c184(auStack_90,uVar1,0x80,5);
  iVar2 = fn_00145ac0();
  if (iVar2 == 0) {
    param_3 = -1;
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + param_3 * 4) = uVar1;
  }
  uVar1 = fn_00145ac0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + param_3 * 4));
  fn_00179dc0(param_1,param_3,uVar1);
  return param_3;
}


