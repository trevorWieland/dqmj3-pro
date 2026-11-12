#include "006407ac_00640dfc.h"



int fn_00640dfc(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  
  local_18 = param_4;
  iVar1 = fn_006f0ae4();
  iVar2 = fn_006f0a30(param_1);
  local_18 = param_1;
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_0064d544(&local_18,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_00640d78(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_1c [8];
  
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_006f3e88(auStack_1c,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_00640cf4(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  
  local_18 = param_4;
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  local_18 = CONCAT22(((unsigned int)(local_18) >> 16) & 0xffff,0x86);
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_006f44ec(&local_18,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_00640c70(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_1c [8];
  
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  while( true ) {
    if (iVar2 <= iVar1) {
      return (int)*(char *)(param_3 + 3);
    }
    iVar3 = fn_006f14a4(param_1,iVar1);
    if ((iVar3 != 0) && (iVar3 = fn_006f3e1c(auStack_1c,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_00640bf4(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  if (iVar1 < iVar2) {
    do {
      iVar2 = fn_006f14a4(param_1,iVar1);
      if (iVar2 != 0) {
        iVar2 = fn_006f37a0();
        iVar3 = iVar3 + iVar2;
        if (3 < iVar3) {
          return (int)*(char *)(param_3 + 2);
        }
      }
      iVar1 = (int)(char)((char)iVar1 + '\x01');
      iVar2 = fn_006f2df8(param_1);
    } while (iVar1 < iVar2);
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_00640b7c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
  if (iVar1 < iVar2) {
    do {
      iVar2 = fn_006f14a4(param_1,iVar1);
      if ((iVar2 != 0) && (iVar2 = fn_006f37a0(), 0 < iVar2)) {
        return (int)*(char *)(param_3 + 3);
      }
      iVar1 = (int)(char)((char)iVar1 + '\x01');
      iVar2 = fn_006f2df8(param_1);
    } while (iVar1 < iVar2);
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_00640afc(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

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
    if ((iVar3 != 0) && (iVar3 = fn_00650334(&local_18,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_00640a7c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

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
    if ((iVar3 != 0) && (iVar3 = fn_00650268(&local_18,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_006409fc(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

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
    if ((iVar3 != 0) && (iVar3 = fn_0064f530(&local_18,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_006409bc(int param_1,short *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = fn_00145ad0();
  if ((iVar2 == 0) &&
     (iVar2 = fn_0064d578(param_1,*(undefined4 *)(param_1 + 0xc)), *param_2 == iVar2)) {
    cVar1 = *(char *)(param_3 + 2);
  }
  else {
    cVar1 = *(char *)(param_3 + 3);
  }
  return (int)cVar1;
}



int fn_0064097c(int param_1,short *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = fn_00145ad0();
  if ((iVar2 == 0) ||
     (iVar2 = fn_0064d578(param_1,*(undefined4 *)(param_1 + 0xc)), *param_2 != iVar2)) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_00640908(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  uVar4 = fn_006f0a30(param_1);
  uVar5 = fn_006f0ae4(param_1);
  iVar6 = fn_00654794(param_1,uVar5,uVar4,uVar3,uVar2,5,2);
  if (iVar6 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_00640894(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  uVar4 = fn_006f0a30(param_1);
  uVar5 = fn_006f0ae4(param_1);
  iVar6 = fn_00654794(param_1,uVar5,uVar4,uVar3,uVar2,5,1);
  if (iVar6 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_00640820(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  uVar4 = fn_006f0a30(param_1);
  uVar5 = fn_006f0ae4(param_1);
  iVar6 = fn_00654794(param_1,uVar5,uVar4,uVar3,uVar2,4,2);
  if (iVar6 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_006407ac(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  uVar4 = fn_006f0a30(param_1);
  uVar5 = fn_006f0ae4(param_1);
  iVar6 = fn_00654794(param_1,uVar5,uVar4,uVar3,uVar2,4,1);
  if (iVar6 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}


