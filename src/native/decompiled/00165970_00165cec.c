#include "00165970_00165cec.h"



int fn_00165cec(int param_1,int param_2,int param_3)

{
  return (int)*(short *)(*(int *)(param_1 + 0x10) + param_2 * 0x40 + param_3 * 8 + 0x20);
}



int fn_00165cb0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc) +
          *(int *)(*(int *)(param_1 + 0x10) + param_2 * 0x40 + param_3 * 8 + 0x1c) * 0x20;
  iVar1 = fn_003035b0(iVar3,&DAT_00165ce8);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = iVar3;
  }
  return iVar2;
}



int fn_00165c80(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  return (int)*(char *)(param_1[4] + iVar1 * 0x28 + 0x24);
}



undefined4 fn_00165bb4(int param_1,char *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)(char)(*param_2 + -0x10);
  if (((int)uVar2 < 0) || ((uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2) <= uVar2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + uVar2 * 4);
  }
  return uVar1;
}



char * fn_00165b84(int param_1)

{
  char *pcVar1;
  
  if (((*(char *)(param_1 + 4) == '\0') && (pcVar1 = *(char **)(param_1 + 8), pcVar1 != (char *)0x0)
      ) && (*pcVar1 == '\x01')) {
    pcVar1 = pcVar1 + 4;
  }
  else {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



int fn_00165b70(int param_1)

{
  if (*(char *)(param_1 + 4) == '\x12') {
    param_1 = param_1 + 8;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



int fn_00165b5c(int param_1)

{
  if (*(char *)(param_1 + 4) == '#') {
    param_1 = param_1 + 8;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



undefined4 fn_00165b48(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 4) == '\f') {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



int fn_00165b34(int param_1)

{
  if (*(char *)(param_1 + 4) == '\n') {
    param_1 = param_1 + 8;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



int fn_00165b20(int param_1)

{
  if (*(char *)(param_1 + 4) == '\x16') {
    param_1 = param_1 + 8;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



int fn_00165b0c(int param_1)

{
  if (*(char *)(param_1 + 4) == '\t') {
    param_1 = param_1 + 8;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



int fn_00165af8(int param_1)

{
  if (*(char *)(param_1 + 4) == '\x05') {
    param_1 = param_1 + 8;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



int fn_001659c8(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  cVar1 = *(char *)(param_1 + 4);
  switch(cVar1) {
  case '\0':
    pcVar3 = *(char **)(param_1 + 8);
    if (((pcVar3 != (char *)0x0) && (*pcVar3 == '\v')) && (pcVar3 != (char *)0xfffffffc)) {
      if (param_3 == 0) {
        return (int)pcVar3[5];
      }
      return (int)pcVar3[7];
    }
  case '\x01':
  case '\x02':
  case '\x03':
  case '\x04':
  case '\x05':
  case '\x06':
  case '\a':
  case '\b':
  case '\t':
  case '\n':
  case '\f':
  case '\x0e':
  case '\x11':
  case '\x15':
  case '\x16':
  case '\x17':
  case '\x18':
  case '\x19':
  case '#':
    iVar2 = fn_0016533c();
    if (iVar2 != 0) {
      return (int)*(char *)(iVar2 + 5);
    }
    break;
  case '\r':
    pcVar3 = (char *)(*(int *)(param_1 + 8) + 4);
    if (pcVar3 != (char *)0x0) {
      return (int)*pcVar3;
    }
  case '\x0f':
    if ((cVar1 == '\x0f') && (*(int *)(param_1 + 8) != -4)) {
      return (int)*(char *)(*(int *)(param_1 + 8) + 5);
    }
  case '\x10':
    if ((cVar1 == '\x10') && ((char *)(param_1 + 8) != (char *)0x0)) {
      return (int)*(char *)(param_1 + 8);
    }
  }
  return 0;
}



int fn_001659c0(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = *(int *)(param_1 + 0x84);
  cVar1 = *(char *)(iVar2 + 4);
  switch(cVar1) {
  case '\0':
    pcVar3 = *(char **)(iVar2 + 8);
    if (((pcVar3 != (char *)0x0) && (*pcVar3 == '\v')) && (pcVar3 != (char *)0xfffffffc)) {
      if (param_3 == 0) {
        return (int)pcVar3[5];
      }
      return (int)pcVar3[7];
    }
  case '\x01':
  case '\x02':
  case '\x03':
  case '\x04':
  case '\x05':
  case '\x06':
  case '\a':
  case '\b':
  case '\t':
  case '\n':
  case '\f':
  case '\x0e':
  case '\x11':
  case '\x15':
  case '\x16':
  case '\x17':
  case '\x18':
  case '\x19':
  case '#':
    iVar2 = fn_0016533c();
    if (iVar2 != 0) {
      return (int)*(char *)(iVar2 + 5);
    }
    break;
  case '\r':
    pcVar3 = (char *)(*(int *)(iVar2 + 8) + 4);
    if (pcVar3 != (char *)0x0) {
      return (int)*pcVar3;
    }
  case '\x0f':
    if ((cVar1 == '\x0f') && (*(int *)(iVar2 + 8) != -4)) {
      return (int)*(char *)(*(int *)(iVar2 + 8) + 5);
    }
  case '\x10':
    if ((cVar1 == '\x10') && ((char *)(iVar2 + 8) != (char *)0x0)) {
      return (int)*(char *)(iVar2 + 8);
    }
  }
  return 0;
}



int fn_001659ac(int param_1)

{
  if (*(char *)(param_1 + 4) == '\x0e') {
    param_1 = param_1 + 8;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



int fn_00165998(int param_1)

{
  if (*(char *)(param_1 + 4) == '\b') {
    param_1 = param_1 + 8;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



int fn_00165984(int param_1)

{
  if (*(char *)(param_1 + 4) == '\x04') {
    param_1 = param_1 + 8;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



int fn_00165970(int param_1)

{
  if (*(char *)(param_1 + 4) == '\x10') {
    param_1 = param_1 + 8;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}


