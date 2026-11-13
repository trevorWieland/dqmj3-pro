#include "00154ba4_00154ff8.h"



void fn_00154ff8(undefined4 param_1,undefined4 param_2,short param_3,undefined4 param_4)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)fn_0016a7c4((int)param_3);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = &DAT_00872764;
  }
  fn_00164f84(param_1,param_2,puVar1,param_4,0x3c);
  return;
}



undefined4 fn_00154f50(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = fn_001657d0(*(undefined4 *)(param_1 + 0x84),(int)(char)param_2);
  iVar2 = fn_00165020(param_1,param_2);
  if (((iVar1 - 0x10U < 8) && (iVar2 - 1U < 699)) &&
     (iVar3 = fn_00174828(DAT_008977e4), *(char *)(iVar3 + iVar1 * 0x418 + -0x4027) == '\x04')) {
    iVar1 = fn_00163cbc(iVar2);
    iVar2 = fn_00163cd8(iVar2,4);
    if (iVar1 != iVar2) {
      return 1;
    }
  }
  return 0;
}



void fn_00154f28(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  if (iVar1 == 0) {
    return;
  }
  fn_001667e0(iVar1 + 10,0x800);
  return;
}



undefined4 fn_00154ecc(int param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = fn_001657d0(*(undefined4 *)(param_1 + 0x84),(int)(char)param_2);
  iVar2 = fn_001659c8(*(undefined4 *)(param_1 + 0x84),(int)(char)param_2,(int)param_3);
  iVar3 = fn_001648dc(param_1,param_2);
  if ((iVar1 == iVar2) && (iVar3 != 0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



int fn_00154e8c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00174834(DAT_008977e4);
  if (param_2 == 0) {
    iVar2 = 0x21;
  }
  else {
    iVar2 = 0x20;
  }
  return (int)*(char *)(iVar1 + iVar2 * 8 + 0x18450b);
}



void fn_00154e64(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  if (iVar1 == 0) {
    return;
  }
  fn_001667e0(iVar1 + 10,0x80);
  return;
}



void fn_00154e38(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  if (iVar1 == 0) {
    return;
  }
  fn_001667b8(iVar1 + 0x58,param_4);
  return;
}



int fn_00154e20(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = (int)*(short *)(iVar1 + 0x1c);
  }
  return iVar2;
}



int fn_00154e04(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = (int)*(short *)(iVar1 + 0x1c);
  }
  return iVar2;
}



int fn_00154dd8(undefined4 param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = (int)(char)(param_2 + '\x10');
  uVar2 = iVar1 - 0x10;
  bVar3 = 3 < uVar2;
  if (bVar3) {
    uVar2 = iVar1 - 0x18;
  }
  if ((bVar3 && 3 < uVar2) && (iVar1 != 0x20 && iVar1 != 0x22)) {
    iVar1 = 0;
  }
  return iVar1;
}



void fn_00154d9c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = fn_0016ba34(DAT_00897800,DAT_00898224,param_2,0);
  uVar2 = fn_00159d14();
  fn_0016ac54(uVar2,uVar1);
  return;
}



void fn_00154d74(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = param_2;
  uStack_8 = param_3;
  iVar1 = fn_00164a34(param_1,param_2,param_3,param_4,param_1);
  if (iVar1 != 0) {
    fn_00159668(&local_c,param_3);
  }
  return;
}



void fn_00154d0c(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_14 [4];
  
  uVar1 = fn_001657d0(*(undefined4 *)(param_1 + 0x84),(int)(char)param_2);
  if (uVar1 != 0) {
    uVar2 = fn_001643e0(param_1,param_2,local_14);
    uVar3 = fn_001754ac(param_1,uVar1 & 0xff);
    fn_00164f84(param_1,uVar3,uVar2,local_14[0],0);
  }
  return;
}



void fn_00154cd0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = fn_0016ba34(DAT_00897800,DAT_0089820c,param_2,0);
  uVar2 = fn_00159d14();
  fn_0016ac04(uVar2,uVar1);
  return;
}



void fn_00154ca8(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  if (iVar1 == 0) {
    return;
  }
  fn_001667e0(iVar1 + 10,0x20);
  return;
}



void fn_00154c7c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  if (iVar1 == 0) {
    return;
  }
  fn_001667b8(iVar1 + 0xd,param_4);
  return;
}



void fn_00154ba4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 auStack_40 [52];
  
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  iVar1 = fn_00164a34();
  if (iVar1 != 0) {
    local_44 = param_2;
    iVar1 = fn_00164a34(param_1,param_2);
    if ((iVar1 == 0) || (iVar1 = fn_0017484c(DAT_008977e4), iVar1 == 0)) {
      iVar1 = 0;
    }
    else {
      iVar1 = fn_00165bb4(iVar1,&local_44);
    }
    uVar2 = fn_0017fde4(*(undefined4 *)(iVar1 + 4));
    iVar1 = fn_00191238(uVar2,param_3);
    if (-1 < iVar1) {
      uVar2 = fn_0016676c(uVar2);
      fn_001781f0(auStack_40,uVar2);
      fn_0016947c(&local_50,auStack_40);
      return;
    }
  }
  return;
}


