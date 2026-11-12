#include "0020ae38_0020b2f4.h"



int fn_0020b2f4(int param_1)

{
  return (int)*(short *)(DAT_00892438 + param_1 * 0x78 + 0x42);
}



int fn_0020b2d8(int param_1)

{
  return (int)*(short *)(DAT_00892438 + param_1 * 0x78 + 0x26);
}



int fn_0020b2bc(int param_1)

{
  return (int)*(short *)(DAT_00892438 + param_1 * 0x78 + 0x24);
}



undefined4 fn_0020b264(int param_1)

{
  undefined4 uVar1;
  
  if (((param_1 < 1) || (DAT_0089243c <= param_1)) ||
     (*(short *)(DAT_00892438 + param_1 * 0x78 + 0x32) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



int fn_0020b248(int param_1)

{
  return (int)*(char *)(DAT_00892438 + param_1 * 0x78 + 0x30);
}



undefined1 fn_0020b22c(int param_1)

{
  return *(undefined1 *)(DAT_00892438 + param_1 * 0x78 + 0x22);
}



int fn_0020b20c(int param_1,int param_2)

{
  return (int)*(short *)(DAT_00892438 + param_1 * 0x78 + param_2 * 2 + 0x32);
}



int fn_0020b1fc(void)

{
  return (int)DAT_00892434;
}



undefined4 fn_0020b1b4(undefined4 param_1)

{
  switch(param_1) {
  case 0:
  case 1:
    return 2;
  case 2:
    return 3;
  case 3:
    return 4;
  case 4:
    return 5;
  default:
    return 1;
  }
}



int fn_0020b198(int param_1)

{
  return (int)*(char *)(DAT_00892438 + param_1 * 0x78 + 0x5e);
}



int fn_0020b178(void)

{
  return (int)DAT_00892432;
}



int fn_0020b14c(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 < (int)(&DAT_007c35bc)[uVar1]) break;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 3);
  return (int)(short)uVar1;
}



int fn_0020b124(int param_1,uint param_2)

{
  if (4 < param_2) {
    param_2 = 0;
  }
  return (int)*(short *)(DAT_00892438 + param_1 * 0x78 + param_2 * 2 + 0x32);
}



int fn_0020b108(int param_1)

{
  return (int)*(short *)(DAT_00892438 + param_1 * 0x78 + 0x2a);
}



int fn_0020b090(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  switch(param_1) {
  case 0:
  case 1:
    iVar1 = 2;
    break;
  case 2:
    iVar1 = 3;
    break;
  case 3:
    iVar1 = 4;
    break;
  case 4:
    iVar1 = 5;
    break;
  default:
    iVar1 = 1;
  }
  uVar2 = 0;
  do {
    if (param_2 < (int)(&DAT_007c35bc)[uVar2]) break;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
  return (int)(short)uVar2 + iVar1 + 1;
}



int fn_0020b074(int param_1)

{
  return (int)*(short *)(DAT_00892438 + param_1 * 0x78 + 0x20);
}



int fn_0020b058(int param_1)

{
  return (int)*(short *)(DAT_00892438 + param_1 * 0x78 + 0x28);
}



undefined4 fn_0020aff8(int param_1)

{
  switch(*(undefined1 *)(DAT_00892438 + param_1 * 0x78 + 0x30)) {
  default:
    return 0x46;
  case 1:
    return 0x47;
  case 2:
    return 0x48;
  case 3:
    return 0x49;
  case 4:
    return 0x4a;
  }
}



int fn_0020afdc(int param_1)

{
  return (int)*(short *)(DAT_00892438 + param_1 * 0x78 + 0x2c);
}



int fn_0020afb4(int param_1,uint param_2)

{
  if (2 < param_2) {
    param_2 = 0;
  }
  return (int)*(short *)(DAT_00892438 + param_1 * 0x78 + param_2 * 2 + 0x3c);
}



undefined4 fn_0020ae38(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar2 = fn_00147e6c(param_1,&DAT_0020afa8,4), iVar2 != 0)) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 4;
  }
  iVar2 = 0x78;
  iVar4 = 0;
  DAT_0089243c = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4));
  DAT_00892438 = 0;
  if (iVar2 == 0 && iVar4 == 0) {
    DAT_00892438 = param_1;
  }
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_0089243c = 0;
  }
  iVar2 = 1;
  if (1 < DAT_0089243c) {
    do {
      iVar3 = (int)(short)iVar2;
      bVar5 = iVar3 == 0;
      iVar4 = iVar3;
      if (0 < iVar3) {
        iVar4 = DAT_0089243c - iVar3;
        bVar5 = DAT_0089243c == iVar3;
      }
      if (!bVar5 && iVar4 < 0 == (0 < iVar3 && SBORROW4(DAT_0089243c,iVar3))) {
        iVar4 = DAT_00892438 + iVar3 * 0x78;
        bVar5 = *(short *)(iVar4 + 0x32) != 0;
        if (bVar5) {
          iVar4 = (int)*(short *)(iVar4 + 0x20);
        }
        if ((bVar5 && iVar4 != 0) && (DAT_00892436 < iVar4)) {
          DAT_00892436 = (short)iVar4;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_0089243c);
  }
  DAT_00892434 = DAT_00892436;
  DAT_00892432 = DAT_00892436;
  DAT_00892430 = DAT_00892436;
  iVar2 = 1;
  if (1 < DAT_0089243c) {
    do {
      iVar3 = (int)(short)iVar2;
      bVar5 = iVar3 == 0;
      iVar4 = iVar3;
      if (0 < iVar3) {
        iVar4 = DAT_0089243c - iVar3;
        bVar5 = DAT_0089243c == iVar3;
      }
      if (!bVar5 && iVar4 < 0 == (0 < iVar3 && SBORROW4(DAT_0089243c,iVar3))) {
        iVar4 = DAT_00892438 + iVar3 * 0x78;
        bVar5 = *(short *)(iVar4 + 0x32) != 0;
        sVar1 = 0;
        if (bVar5) {
          sVar1 = *(short *)(iVar4 + 0x20);
        }
        if (bVar5 && sVar1 != 0) {
          if ((sVar1 < DAT_00892430) && (*(char *)(iVar4 + 0x22) == '\x04')) {
            DAT_00892430 = sVar1;
          }
          if ((sVar1 < DAT_00892432) && (*(char *)(iVar4 + 0x22) == '\x06')) {
            DAT_00892432 = sVar1;
          }
          if ((sVar1 < DAT_00892434) && (*(char *)(iVar4 + 0x22) == '\b')) {
            DAT_00892434 = sVar1;
          }
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_0089243c);
  }
  return 1;
}


