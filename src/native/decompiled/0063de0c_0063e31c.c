#include "0063de0c_0063e31c.h"



int fn_0063e31c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  local_1c = unaff_r8 & 0xffffff00 | 5;
  local_20 = param_1;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_0064e7c0(&local_20,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_0063e284(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  local_1c = unaff_r8 & 0xffffff00 | 4;
  local_20 = param_1;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_0064e7c0(&local_20,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_0063e1ec(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  local_1c = unaff_r8 & 0xffffff00 | 3;
  local_20 = param_1;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_0064e7c0(&local_20,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_0063e154(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  local_1c = unaff_r8 & 0xffffff00 | 2;
  local_20 = param_1;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_0064e7c0(&local_20,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_0063e118(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  iVar4 = fn_006f18d4(param_1,uVar3,uVar2);
  if (iVar4 == 2) {
    cVar1 = *(char *)(param_3 + 2);
  }
  else {
    cVar1 = *(char *)(param_3 + 3);
  }
  return (int)cVar1;
}



int fn_0063e0ac(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  iVar4 = fn_006f18d4(param_1,uVar3,uVar2);
  if (iVar4 == 1) {
    uVar2 = fn_006f0a30(param_1);
    uVar3 = fn_006f0ae4(param_1);
    iVar4 = fn_006f18d4(param_1,uVar3,uVar2);
    if (1 < iVar4) {
      cVar1 = *(char *)(param_3 + 2);
      goto LAB_0063e114;
    }
  }
  cVar1 = *(char *)(param_3 + 3);
LAB_0063e114:
  return (int)cVar1;
}



int fn_0063e070(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  iVar4 = fn_006f18d4(param_1,uVar3,uVar2);
  if (iVar4 == 1) {
    cVar1 = *(char *)(param_3 + 2);
  }
  else {
    cVar1 = *(char *)(param_3 + 3);
  }
  return (int)cVar1;
}



int fn_0063e008(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  iVar4 = fn_006f1664(param_1,uVar3,uVar2);
  uVar2 = fn_006f162c(param_1);
  uVar3 = fn_006f181c(param_1);
  iVar5 = fn_006f1664(param_1,uVar3,uVar2);
  if (iVar5 + iVar4 < 4) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_0063dfa0(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  iVar4 = fn_006f1664(param_1,uVar3,uVar2);
  uVar2 = fn_006f162c(param_1);
  uVar3 = fn_006f181c(param_1);
  iVar5 = fn_006f1664(param_1,uVar3,uVar2);
  if (iVar5 + iVar4 < 3) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_0063df38(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  iVar4 = fn_006f1664(param_1,uVar3,uVar2);
  uVar2 = fn_006f162c(param_1);
  uVar3 = fn_006f181c(param_1);
  iVar5 = fn_006f1664(param_1,uVar3,uVar2);
  if (iVar5 + iVar4 < 2) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_0063defc(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  iVar4 = fn_006f16b4(param_1,uVar3,uVar2);
  if (iVar4 < 3) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_0063dec0(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  iVar4 = fn_006f16b4(param_1,uVar3,uVar2);
  if (iVar4 < 2) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_0063de84(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  iVar4 = fn_006f16b4(param_1,uVar3,uVar2);
  if (iVar4 < 1) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_0063de48(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  iVar4 = fn_006f18d4(param_1,uVar3,uVar2);
  if (iVar4 < 4) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_0063de0c(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  iVar4 = fn_006f18d4(param_1,uVar3,uVar2);
  if (iVar4 < 3) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}


