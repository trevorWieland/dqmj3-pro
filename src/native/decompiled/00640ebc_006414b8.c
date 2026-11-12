#include "00640ebc_006414b8.h"



int fn_006414b8(int param_1,short *param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  
  iVar2 = fn_006f0ae4();
  iVar3 = fn_006f0a30(param_1);
  cVar4 = SBORROW4(iVar3,iVar2);
  if (iVar2 < iVar3) {
    do {
      iVar3 = fn_006f14a4(param_1,iVar2);
      sVar1 = 0;
      if (iVar3 != 0) {
        sVar1 = *(short *)(iVar3 + 0x1e);
        cVar4 = '\0';
      }
      if (((iVar3 != 0 && sVar1 != 0) && sVar1 < 0 == (bool)cVar4) &&
         (iVar3 = fn_006f1838(param_1,(int)*param_2,*(undefined4 *)(param_1 + 0xc)), iVar3 == 0)) {
        return (int)*(char *)(param_3 + 3);
      }
      iVar2 = (int)(char)((char)iVar2 + '\x01');
      iVar3 = fn_006f0a30(param_1);
      cVar4 = SBORROW4(iVar3,iVar2);
    } while (iVar2 < iVar3);
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_0064144c(undefined4 param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = fn_006f0ae4();
  iVar3 = fn_006f0a30(param_1);
  if (iVar2 < iVar3) {
    do {
      iVar3 = fn_006f14a4(param_1,iVar2);
      sVar1 = 0;
      if (iVar3 != 0) {
        sVar1 = *(short *)(iVar3 + 0x1e);
      }
      if ((iVar3 != 0 && sVar1 != 0) && -1 < sVar1) {
        return (int)*(char *)(param_3 + 3);
      }
      iVar2 = (int)(char)((char)iVar2 + '\x01');
      iVar3 = fn_006f0a30(param_1);
    } while (iVar2 < iVar3);
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_006413b8(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  local_20 = 1;
  uStack_1c = 8;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 2);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_0064e774(&local_20,iVar3,iVar1), iVar3 == 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_00641324(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  local_20 = 1;
  uStack_1c = 8;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_0064e774(&local_20,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_00641290(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  local_20 = 1;
  uStack_1c = 8;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 2);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_0064e774(&local_20,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_00641224(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_1c;
  int local_18 [2];
  
  uVar2 = fn_006f0a30();
  uVar3 = fn_006f0ae4(param_1);
  fn_006f1a00(param_1,uVar3,uVar2,&local_1c,local_18);
  if (local_18[0] / 10 < local_1c) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_006411c4(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_1c;
  int local_18 [2];
  
  uVar2 = fn_006f0a30();
  uVar3 = fn_006f0ae4(param_1);
  fn_006f1a00(param_1,uVar3,uVar2,&local_1c,local_18);
  if ((int)(local_18[0] + ((uint)(local_18[0] >> 0x1f) >> 0x1e)) >> 2 < local_1c) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_00641168(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_1c;
  int local_18 [2];
  
  uVar2 = fn_006f0a30();
  uVar3 = fn_006f0ae4(param_1);
  fn_006f1a00(param_1,uVar3,uVar2,&local_1c,local_18);
  if (local_18[0] / 2 < local_1c) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_00641104(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_1c;
  int local_18 [2];
  
  uVar2 = fn_006f0a30();
  uVar3 = fn_006f0ae4(param_1);
  fn_006f1a00(param_1,uVar3,uVar2,&local_1c,local_18);
  if (local_1c < (int)(local_18[0] * 3 + ((uint)(local_18[0] * 3 >> 0x1f) >> 0x1e)) >> 2) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_006410b0(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_1c;
  int aiStack_18 [2];
  
  uVar2 = fn_006f0a30();
  uVar3 = fn_006f0ae4(param_1);
  fn_006f1a00(param_1,uVar3,uVar2,&local_1c,aiStack_18);
  if (local_1c == aiStack_18[0]) {
    cVar1 = *(char *)(param_3 + 2);
  }
  else {
    cVar1 = *(char *)(param_3 + 3);
  }
  return (int)cVar1;
}



int fn_00641040(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_18;
  int local_14;
  
  uVar2 = fn_006f0a30();
  uVar3 = fn_006f0ae4(param_1);
  fn_006f1974(param_1,uVar3,uVar2,&local_18,&local_14,0);
  if (local_14 / 10 < local_18) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_00640fdc(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_18;
  int local_14;
  
  uVar2 = fn_006f0a30();
  uVar3 = fn_006f0ae4(param_1);
  fn_006f1974(param_1,uVar3,uVar2,&local_18,&local_14,0);
  if ((int)(local_14 + ((uint)(local_14 >> 0x1f) >> 0x1e)) >> 2 < local_18) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_00640f7c(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_18;
  int local_14;
  
  uVar2 = fn_006f0a30();
  uVar3 = fn_006f0ae4(param_1);
  fn_006f1974(param_1,uVar3,uVar2,&local_18,&local_14,0);
  if (local_14 / 2 < local_18) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_00640f14(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_18;
  int local_14;
  
  uVar2 = fn_006f0a30();
  uVar3 = fn_006f0ae4(param_1);
  fn_006f1974(param_1,uVar3,uVar2,&local_18,&local_14,0);
  if (local_18 < (int)(local_14 * 3 + ((uint)(local_14 * 3 >> 0x1f) >> 0x1e)) >> 2) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_00640ebc(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_18;
  int iStack_14;
  
  uVar2 = fn_006f0a30();
  uVar3 = fn_006f0ae4(param_1);
  fn_006f1974(param_1,uVar3,uVar2,&local_18,&iStack_14,0);
  if (local_18 == iStack_14) {
    cVar1 = *(char *)(param_3 + 2);
  }
  else {
    cVar1 = *(char *)(param_3 + 3);
  }
  return (int)cVar1;
}


