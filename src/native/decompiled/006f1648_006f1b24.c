#include "006f1648_006f1b24.h"



undefined4 fn_006f1b24(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (*(char *)(param_2 + 0x67) == '\0') {
    cVar1 = *(char *)(param_2 + 0x61);
    if (cVar1 < '\x01') {
      cVar1 = *(char *)(param_2 + 0x62);
    }
    if (cVar1 < '\x01') {
      cVar1 = *(char *)(param_2 + 99);
      if (cVar1 < '\x01') {
        cVar1 = *(char *)(param_2 + 100);
      }
      if ((cVar1 < '\x01') && (*(char *)(param_2 + 0x87) < '\x01')) {
        return 0;
      }
    }
  }
  return 1;
}



undefined4
fn_006f1a78(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,uint param_6)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint local_28;
  uint local_24;
  undefined2 local_20 [4];
  
  puVar4 = &local_28;
  local_28 = param_6;
  local_24 = 0;
  iVar2 = fn_006f1be0(param_1);
  iVar3 = fn_006f14a4(param_1,param_4);
  if (iVar3 != 0) {
    if (param_5 < 1) {
      sVar1 = *(short *)(iVar3 + 0x1c);
    }
    else {
      local_24 = local_24 & 0xffff0000;
      local_28 = CONCAT22(((unsigned int)(local_28) >> 16) & 0xffff,*(short *)(iVar3 + 0x1c) + (short)param_5);
      iVar3 = fn_00176dc0();
      local_20[0] = (short)iVar3;
      if (iVar3 < (short)local_24) {
                    /* WARNING: Subroutine does not return */
        fn_00146590();
      }
      if ((int)(short)local_28 < (int)(short)local_24) {
        puVar4 = &local_24;
      }
      if (iVar3 < (short)*puVar4) {
        puVar4 = (uint *)local_20;
      }
      sVar1 = (short)*puVar4;
    }
    if (sVar1 <= iVar2) {
      return 1;
    }
  }
  return 0;
}



void fn_006f1a00(undefined4 param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  
  *param_4 = 0;
  *param_5 = 0;
  for (; param_2 < param_3; param_2 = (int)(char)((char)param_2 + '\x01')) {
    iVar1 = fn_006f14a4(param_1,param_2);
    if (iVar1 != 0) {
      *param_4 = *param_4 + (int)*(short *)(iVar1 + 0x1e);
      iVar1 = fn_00176e70();
      *param_5 = iVar1 + *param_5;
    }
  }
  return;
}



void fn_006f1974(undefined4 param_1,int param_2,int param_3,int *param_4,int *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  *param_4 = 0;
  *param_5 = 0;
  for (; param_2 < param_3; param_2 = (int)(char)((char)param_2 + '\x01')) {
    uVar4 = fn_006f14a4(param_1,param_2);
    iVar2 = (int)uVar4;
    if (iVar2 != 0) {
      iVar3 = 0;
      iVar1 = (int)((ulonglong)uVar4 >> 0x20);
      if (param_6 != 0) {
        iVar3 = (int)*(char *)(iVar2 + 0x9d);
        iVar1 = iVar3;
      }
      if ((param_6 == 0 || iVar1 == 0) || iVar3 < 0) {
        *param_4 = *param_4 + (int)*(short *)(iVar2 + 0x1c);
        iVar2 = fn_00176dc0();
        *param_5 = iVar2 + *param_5;
      }
    }
  }
  return;
}



int fn_006f191c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (; param_2 < param_3; param_2 = (int)(char)((char)param_2 + '\x01')) {
    iVar1 = fn_006f14a4(param_1,param_2);
    if (iVar1 != 0) {
      iVar1 = fn_001cab7c((int)*(char *)(iVar1 + 0x59));
      iVar2 = iVar2 + iVar1;
    }
  }
  return iVar2;
}



int fn_006f18d4(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (; param_2 < param_3; param_2 = (int)(char)((char)param_2 + '\x01')) {
    iVar1 = fn_006f14a4(param_1,param_2);
    if (iVar1 != 0) {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}



undefined4 fn_006f1838(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = fn_00691d78(param_2);
  iVar2 = fn_001639e4(param_2);
  if (iVar2 == 0x18) {
    iVar1 = fn_00691af0(param_2,0);
  }
  if (0x2ba < iVar1 - 1U) {
    iVar1 = param_2;
  }
  iVar2 = fn_006f2e14(param_1,iVar1,param_3,param_4);
  if ((iVar2 == 0) && (uVar3 = fn_006f1710(param_1,iVar1,param_3,param_4), uVar3 < 5)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



undefined4 fn_006f181c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar1 == 0) {
    uVar2 = 0x1c;
  }
  else {
    uVar2 = 0x18;
  }
  return uVar2;
}



undefined4 fn_006f1800(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar1 == 0) {
    uVar2 = 0x23;
  }
  else {
    uVar2 = 0x22;
  }
  return uVar2;
}



int fn_006f17d0(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006f4830(*(int *)(param_1 + 8) + 0xe8);
  if (iVar1 == 0) {
    iVar1 = 0x62;
  }
  return (int)(char)((char)iVar1 - **(char **)(param_1 + 8));
}



undefined1 fn_006f1710(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char local_28 [4];
  char local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [8];
  
  local_28[0] = '\0';
  local_24[0] = '\0';
  fn_0062b994(param_2,*(int *)(param_1 + 0x10) + 0x20,local_28,local_24);
  fn_006f39e8(param_3,param_2,param_4,(int)local_28[0],(int)local_24[0],local_1c,local_20,0,0,0);
  iVar1 = fn_001639e4(param_2);
  if (iVar1 == 0x1a) {
    return local_20[0];
  }
  fn_00691860(param_2);
  iVar1 = fn_0069180c();
  if (iVar1 == 0) {
    fn_0069187c(param_2);
    iVar1 = fn_0069180c();
    if (iVar1 == 0) {
      return local_20[0];
    }
  }
  return local_1c[0];
}



int fn_006f16b4(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = 0;
  for (; param_2 < param_3; param_2 = (int)(char)((char)param_2 + '\x01')) {
    uVar4 = fn_006f14ec(param_1,param_2);
    uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
    iVar1 = (int)uVar4;
    if (iVar1 != 0) {
      uVar2 = (uint)*(byte *)(iVar1 + 0x67);
    }
    if (iVar1 != 0 && uVar2 != 0) {
      iVar1 = fn_001cab7c((int)*(char *)(iVar1 + 0x59));
      iVar3 = iVar3 + iVar1;
    }
  }
  return iVar3;
}



int fn_006f1664(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  for (; param_2 < param_3; param_2 = (int)(char)((char)param_2 + '\x01')) {
    iVar2 = fn_006f14ec(param_1,param_2);
    cVar1 = '\0';
    if (iVar2 != 0) {
      cVar1 = *(char *)(iVar2 + 0x67);
    }
    if (iVar2 != 0 && cVar1 != '\0') {
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}



undefined4 fn_006f1648(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar1 == 0) {
    uVar2 = 0x21;
  }
  else {
    uVar2 = 0x20;
  }
  return uVar2;
}


