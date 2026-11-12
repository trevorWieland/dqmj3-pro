#include "0063e3b4_0063ead0.h"



int fn_0063ead0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  local_1c = unaff_r8 & 0xffffff00 | 0x30;
  local_20 = param_1;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_0064d5e4(&local_20,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_0063ea38(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  local_1c = unaff_r8 & 0xffffff00 | 0x2f;
  local_20 = param_1;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_0064d5e4(&local_20,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_0063e9a0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  local_1c = unaff_r8 & 0xffffff00 | 0x14;
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



int fn_0063e908(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  local_1c = unaff_r8 & 0xffffff00 | 0x14;
  local_20 = param_1;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_0064d5e4(&local_20,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_0063e8cc(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  iVar4 = fn_006f1664(param_1,uVar3,uVar2);
  if (iVar4 == 0) {
    cVar1 = *(char *)(param_3 + 2);
  }
  else {
    cVar1 = *(char *)(param_3 + 3);
  }
  return (int)cVar1;
}



int fn_0063e7c4(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  local_1c = unaff_r8 & 0xffffff00 | 7;
  local_20 = param_1;
  for (; iVar1 < iVar2; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_0064d5e4(&local_20,iVar3,iVar1), iVar3 != 0))
    goto LAB_0063e8a4;
  }
  iVar1 = fn_006f0aa4(param_1);
  iVar2 = fn_006f2df8(param_1);
  local_1c = unaff_r8 & 0xffffff00 | 8;
  local_20 = param_1;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 2);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_0064d5e4(&local_20,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
LAB_0063e8a4:
  return (int)*(char *)(param_3 + 3);
}



int fn_0063e72c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  local_1c = unaff_r8 & 0xffffff00 | 0xb;
  local_20 = param_1;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 2);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_0064d5e4(&local_20,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_0063e694(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  local_1c = unaff_r8 & 0xffffff00 | 10;
  local_20 = param_1;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 2);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_0064d5e4(&local_20,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_0063e5fc(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  local_1c = unaff_r8 & 0xffffff00 | 8;
  local_20 = param_1;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 2);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_0064d5e4(&local_20,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_0063e564(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  local_1c = unaff_r8 & 0xffffff00 | 7;
  local_20 = param_1;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 2);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_0064d5e4(&local_20,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_0063e4cc(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  local_1c = unaff_r8 & 0xffffff00 | 6;
  local_20 = param_1;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 2);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_0064d5e4(&local_20,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_0063e44c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  
  local_18 = param_4;
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  local_18 = param_1;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_00651194(&local_18,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_0063e3b4(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  local_1c = unaff_r8 & 0xffffff00 | 0x12;
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


