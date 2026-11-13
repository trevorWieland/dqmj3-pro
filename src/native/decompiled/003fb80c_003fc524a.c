#include "003fb80c_003fc524a.h"



void fn_003fbe2c(int *param_1)

{
  fn_0022cf0c();
  if (*(char *)(param_1[0x27] + 0x8f4) == '\0') {
    return;
  }
  fn_0042f1c0();
                    /* WARNING: Could not recover jumptable at 0x003fbe5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))(param_1);
  return;
}



void fn_003fbcbc(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined1 auStack_50 [68];
  
  (**(code **)(*param_1 + 0x11c))(param_1);
  iVar1 = param_1[0x27];
  if (*(char *)(iVar1 + 0x7c) == '\0') {
    puVar2 = &DAT_003fbdf8;
  }
  else {
    puVar2 = (undefined *)fn_0022f584((char *)&DAT_003fbdfc,0);
  }
  fn_00101a50(auStack_50,0x40,L"%ls%ls",puVar2,iVar1 + 0x1c);
  fn_00385b60(param_1,auStack_50);
  fn_0031c7d0(param_1[0x25],(int)*(char *)(param_1[0x27] + 0x8f5));
  fn_0031ca5c(param_1[0x25],(int)*(char *)(param_1[0x27] + 0x8f6));
  fn_0031c040(param_1[0x25],(int)*(char *)(param_1[0x27] + 0x8f7));
  fn_00290aa4(param_1[0x28]);
  fn_00290ae4(param_1[0x28],*(undefined1 *)(param_1[0x27] + 0x76));
  return;
}



void fn_003fbc8c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xa4,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003fbe64(iVar1,param_1);
  return;
}



int fn_003fbb6c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_58 [68];
  
  puVar5 = *(undefined4 **)(param_1 + 0x98);
  if (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar1 == &DAT_00894d28) goto LAB_003fbbb4;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_003fbbb4:
  *(undefined4 **)(param_1 + 0x9c) = puVar5;
  iVar2 = fn_003e2778(param_1);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0x9c);
    if (*(char *)(iVar3 + 0x7c) == '\0') {
      puVar4 = &DAT_003fbdf8;
    }
    else {
      puVar4 = (undefined *)fn_0022f584((char *)&DAT_003fbdfc,0);
    }
    fn_00101a50(auStack_58,0x40,L"%ls%ls",puVar4,iVar3 + 0x1c);
    fn_00385b60(param_1,auStack_58);
    fn_0031c7d0(*(undefined4 *)(param_1 + 0x94),(int)*(char *)(*(int *)(param_1 + 0x9c) + 0x8f5));
    fn_0031ca5c(*(undefined4 *)(param_1 + 0x94),(int)*(char *)(*(int *)(param_1 + 0x9c) + 0x8f6));
    fn_0031c040(*(undefined4 *)(param_1 + 0x94),(int)*(char *)(*(int *)(param_1 + 0x9c) + 0x8f7));
  }
  fn_00290ae4(*(undefined4 *)(param_1 + 0xa0),*(undefined1 *)(*(int *)(param_1 + 0x9c) + 0x76));
  return iVar2;
}



int fn_003fb9bc(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 local_28 [2];
  undefined2 local_24 [2];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  puVar1 = (undefined4 *)fn_003bc118();
  *puVar1 = &DAT_00835ed4;
  local_28[0] = 0;
  iVar2 = fn_0079e7a0(puVar1 + 0x2a,0x14,local_28,auStack_20);
  local_24[0] = 0;
  iVar2 = fn_0079e7a0(iVar2 + 0xc,0x14,local_24,auStack_1c);
  *(undefined2 *)(iVar2 + 0xc) = 0;
  *(undefined1 *)(iVar2 + 0xe) = 0;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  puVar1 = (undefined4 *)fn_00100fc6(0x100,0);
  iVar3 = 10;
  *(int *)(iVar2 + 0x10) = (int)puVar1;
  do {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
    }
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + 2;
  } while (iVar3 != 0);
  iVar3 = *(int *)(iVar2 + 0x10);
  *(int *)(iVar2 + 0x14) = iVar3 + 0x50;
  *(int *)(iVar2 + 0x18) = iVar3 + 0x100;
  return iVar2 + -0xb4;
}



void fn_003fb80c(int param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint local_30 [6];
  
  uVar1 = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4) >> 3;
  if (param_4 == 0) {
    if (uVar1 <= param_3) {
      local_30[0] = uVar1;
      fn_002ff628(9,&DAT_008c762f,&DAT_008c762f,param_3);
    }
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0xc4) + param_3 * 8 + 4);
  }
  else {
    if (uVar1 <= param_3) {
      local_30[0] = uVar1;
      fn_002ff628(9,&DAT_008c762f,&DAT_008c762f,param_3);
    }
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0xc4) + param_3 * 8);
  }
  if (param_2 == 0) {
    fn_00190d50(uVar3,&DAT_003fb9b4);
  }
  else if (*(char *)(*(int *)(param_1 + 0x98) + 0x338) == '\0') {
    uVar2 = fn_0016a7c4(param_2);
    fn_00190d50(uVar3,uVar2);
  }
  else {
    local_30[0] = 0;
    local_30[1] = 0;
    local_30[2] = 0;
    local_30[3] = 0;
    local_30[4] = 0;
    fn_0022ef60(local_30,9);
    fn_00190d50(uVar3,local_30);
  }
  param_3 = param_3 + *(int *)(param_1 + 0x84) * 10;
  if (param_4 == 0) {
    local_30[0] = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4) >> 1;
    if (local_30[0] <= param_3) {
      fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,param_3);
    }
    *(short *)(*(int *)(param_1 + 0xb4) + param_3 * 2) = (short)param_2;
    return;
  }
  local_30[0] = *(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 1;
  if (local_30[0] <= param_3) {
    fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,param_3);
  }
  *(short *)(*(int *)(param_1 + 0xa8) + param_3 * 2) = (short)param_2;
  return;
}


