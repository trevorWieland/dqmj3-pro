#include "006f0908_006f0d1c.h"



bool fn_006f0d1c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = fn_00182944(param_3);
  return *(char *)(param_2 + param_3 + 0x5b) <= iVar1;
}



bool fn_006f0cf0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = fn_00182924(param_3);
  return iVar1 <= *(char *)(param_2 + param_3 + 0x5b);
}



undefined4 fn_006f0c9c(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  while( true ) {
    if (param_3 <= param_2) {
      return 0;
    }
    iVar2 = fn_006f14a4(param_1,param_2);
    cVar1 = '\0';
    if (iVar2 != 0) {
      cVar1 = *(char *)(iVar2 + 0x414);
    }
    if (iVar2 != 0 && cVar1 != '\0') break;
    param_2 = (int)(char)((char)param_2 + '\x01');
  }
  return 1;
}



bool fn_006f0c84(undefined4 param_1,int param_2,int param_3)

{
  return '\0' < *(char *)(param_2 + param_3 + 0x5b);
}



int fn_006f0b54(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *local_20;
  char *local_1c;
  char *local_18;
  char local_14 [8];
  
  local_20 = (char *)0x0;
  local_1c = (char *)0x0;
  local_18 = (char *)0x0;
  local_14[0] = *(char *)(param_2 + 6);
  if (local_14[0] < *(char *)(param_2 + 7)) {
    do {
      pcVar3 = local_1c;
      if (((uint)*(ushort *)(param_2 + 4) &
          1 << ((int)local_14[0] - (uint)*(byte *)(param_2 + 6) & 0xff)) != 0) {
        if (local_1c == local_18) {
          fn_0079aa0c(&local_20,local_1c,local_14);
          pcVar3 = local_1c;
        }
        else {
          pcVar3 = local_1c + 1;
          if (local_1c != (char *)0x0) {
            *local_1c = local_14[0];
          }
        }
      }
      local_1c = pcVar3;
      local_14[0] = local_14[0] + '\x01';
    } while (local_14[0] < *(char *)(param_2 + 7));
  }
  if ((int)local_1c - (int)local_20 == 0) {
    pcVar3 = local_20;
    if (local_1c < local_20) {
      do {
        pcVar3 = pcVar3 + 1;
      } while (pcVar3 != local_1c);
    }
    fn_001008c4(local_20,(int)local_18 - (int)local_20,0);
    return 0;
  }
  iVar2 = fn_0063a54c(0,((int)local_1c - (int)local_20) + -1);
  cVar1 = local_20[iVar2];
  pcVar3 = local_20;
  if (local_1c < local_20) {
    do {
      pcVar3 = pcVar3 + 1;
    } while (pcVar3 != local_1c);
  }
  fn_001008c4(local_20,(int)local_18 - (int)local_20,0);
  return (int)cVar1;
}



bool fn_006f0b40(undefined4 param_1,int param_2)

{
  return param_2 == 3 || param_2 == 4;
}



undefined4 fn_006f0b00(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_2 + 0x120);
  uVar1 = 0;
  if (uVar2 != 0) {
    do {
      if (*(short *)((byte *)(param_2 + 0x120) + uVar1 * 2 + 4) == param_3) {
        return 1;
      }
      uVar1 = uVar1 + 1 & 0xff;
    } while (uVar1 < uVar2);
  }
  return 0;
}



undefined4 fn_006f0ae4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar1 == 0) {
    uVar2 = 0x10;
  }
  else {
    uVar2 = 0x14;
  }
  return uVar2;
}



bool fn_006f0ac0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = fn_006f4114(param_3);
  return *(short *)(param_3 + 0x1e) < iVar1;
}



undefined4 fn_006f0aa4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar1 == 0) {
    uVar2 = 0x14;
  }
  else {
    uVar2 = 0x10;
  }
  return uVar2;
}



bool fn_006f0a88(int param_1,int param_2)

{
  return ((uint)*(ushort *)(param_1 + 4) & 1 << (param_2 - (uint)*(byte *)(param_1 + 6) & 0xff)) !=
         0;
}



int fn_006f0a4c(int param_1)

{
  int iVar1;
  
  if ((*(short *)(param_1 + 0x1a) == *(short *)(param_1 + 0x1c)) ||
     (iVar1 = fn_00655488(), iVar1 == 0)) {
    return (int)*(char *)(param_1 + 0x18);
  }
  return (int)(char)(*(char *)(param_1 + 0x18) + '\x01');
}



undefined4 fn_006f0a30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_0061be08((int)*(char *)(param_1 + 4));
  if (iVar1 == 0) {
    uVar2 = 0x14;
  }
  else {
    uVar2 = 0x18;
  }
  return uVar2;
}



bool fn_006f0a18(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0x5b30) & 1 << (param_2 & 0xff)) != 0;
}



int fn_006f09a0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  uVar1 = param_2 - 0x10;
  bVar4 = 3 < uVar1;
  if (bVar4) {
    uVar1 = param_2 - 0x18;
  }
  if ((bVar4 && 3 < uVar1) && (param_2 != 0x20 && param_2 != 0x22)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  iVar2 = fn_001667f0(param_1 + param_2 * 0x418 + -0x4080);
  iVar3 = 0;
  if (iVar2 != 0) {
    if (bVar4) {
      iVar3 = 0x22;
    }
    else {
      iVar3 = 0x23;
    }
    iVar3 = (int)*(short *)(param_1 + iVar3 * 8 + 0x4180);
  }
  return iVar3;
}



undefined4 fn_006f0934(char *param_1,int param_2)

{
  if (*param_1 == '\0') {
    if (param_1[0xc] == '\x01') {
      if ((3 < param_2 - 0x10U && 3 < param_2 - 0x18U) && (param_2 != 0x20 && param_2 != 0x22)) {
        return 1;
      }
    }
    else if ((param_1[0xc] == '\x02') &&
            ((param_2 - 0x10U < 4 || param_2 - 0x18U < 4 || (param_2 == 0x20 || param_2 == 0x22))))
    {
      return 1;
    }
  }
  return 0;
}



bool fn_006f0908(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 8);
  iVar2 = *(int *)(param_3 + 8);
  if (*(char *)(*param_1 + 1) == '\x01') {
    iVar1 = -iVar1;
    iVar2 = -iVar2;
  }
  return iVar2 < iVar1;
}


