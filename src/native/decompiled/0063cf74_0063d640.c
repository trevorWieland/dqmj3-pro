#include "0063cf74_0063d640.h"



int fn_0063d640(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = fn_00145ad0();
  if (iVar1 != 0) {
    iVar1 = fn_006f0aa4(param_1);
    iVar2 = fn_006f2df8(param_1);
    local_1c = unaff_r8 & 0xffffff00 | 1;
    local_20 = 2;
    local_24 = 1;
    local_28 = param_1;
    for (; iVar1 < iVar2; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
      iVar3 = fn_006f14a4(param_1,iVar1);
      if ((iVar3 != 0) && (iVar3 = fn_00650218(&local_28,iVar3,iVar1), iVar3 != 0)) {
        return (int)*(char *)(param_3 + 2);
      }
    }
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_0063d58c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint unaff_r8;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  
  iVar1 = fn_00145ad0();
  if (iVar1 != 0) {
    iVar1 = fn_006f0aa4(param_1);
    iVar2 = fn_006f2df8(param_1);
    local_1c = unaff_r8 & 0xffffff00 | 1;
    local_20 = 4;
    local_24 = 3;
    local_28 = param_1;
    for (; iVar1 < iVar2; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
      iVar3 = fn_006f14a4(param_1,iVar1);
      if ((iVar3 != 0) && (iVar3 = fn_00650218(&local_28,iVar3,iVar1), iVar3 != 0)) {
        return (int)*(char *)(param_3 + 2);
      }
    }
  }
  return (int)*(char *)(param_3 + 3);
}



int fn_0063d4f8(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
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



int fn_0063d464(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar1 = fn_006f0aa4();
  iVar2 = fn_006f2df8(param_1);
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



int fn_0063d3f8(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_1c;
  int local_18 [2];
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  fn_006f1a00(param_1,uVar3,uVar2,&local_1c,local_18);
  if (local_18[0] / 10 < local_1c) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_0063d398(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_1c;
  int local_18 [2];
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  fn_006f1a00(param_1,uVar3,uVar2,&local_1c,local_18);
  if ((int)(local_18[0] + ((uint)(local_18[0] >> 0x1f) >> 0x1e)) >> 2 < local_1c) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_0063d33c(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_1c;
  int local_18 [2];
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  fn_006f1a00(param_1,uVar3,uVar2,&local_1c,local_18);
  if (local_18[0] / 2 < local_1c) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_0063d264(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_1c;
  int local_18 [2];
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  fn_006f1a00(param_1,uVar3,uVar2,&local_1c,local_18);
  if (local_1c < (local_18[0] * 0x5f) / 100) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_0063d1e8(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_18;
  int local_14;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  fn_006f1974(param_1,uVar3,uVar2,&local_18,&local_14,1);
  if ((local_14 < 1) || (local_14 / 10 < local_18)) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_0063d178(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_18;
  int local_14;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  fn_006f1974(param_1,uVar3,uVar2,&local_18,&local_14,1);
  if ((local_14 < 1) || ((int)(local_14 + ((uint)(local_14 >> 0x1f) >> 0x1e)) >> 2 < local_18)) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_0063d10c(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_18;
  int local_14;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  fn_006f1974(param_1,uVar3,uVar2,&local_18,&local_14,1);
  if ((local_14 < 1) || (local_14 / 2 < local_18)) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_0063d098(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_18;
  int local_14;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  fn_006f1974(param_1,uVar3,uVar2,&local_18,&local_14,1);
  if ((local_14 < 1) ||
     (local_18 < (int)(local_14 * 3 + ((uint)(local_14 * 3 >> 0x1f) >> 0x1e)) >> 2)) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_0063d014(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_18;
  int local_14;
  
  uVar2 = fn_006f2df8();
  uVar3 = fn_006f0aa4(param_1);
  fn_006f1974(param_1,uVar3,uVar2,&local_18,&local_14,1);
  if ((local_14 < 1) || (local_18 < (local_14 * 0x5f) / 100)) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_0063cf94(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

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
    if ((iVar3 != 0) && (iVar3 = fn_0064d544(&local_18,iVar3,iVar1), iVar3 != 0)) break;
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  }
  return (int)*(char *)(param_3 + 2);
}



int fn_0063cf74(undefined4 param_1,short *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = fn_006522e8(param_1,(int)*param_2);
  if (iVar2 == 0) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}


