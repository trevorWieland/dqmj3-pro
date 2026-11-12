#include "00660ef0_0066133c.h"



int fn_0066133c(undefined4 param_1,int param_2)

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
    if (param_2 < (int)(&DAT_007c4510)[uVar2]) break;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
  return (int)(short)uVar2 + iVar1 + 1;
}



int fn_00661324(int param_1)

{
  return DAT_00892804 + param_1 * 0x78;
}



int fn_00661308(int param_1)

{
  return (int)*(short *)(DAT_00892804 + param_1 * 0x78 + 0x20);
}



int fn_006612ec(int param_1)

{
  return (int)*(short *)(DAT_00892804 + param_1 * 0x78 + 0x28);
}



undefined4 fn_0066128c(int param_1)

{
  switch(*(undefined1 *)(DAT_00892804 + param_1 * 0x78 + 0x30)) {
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



int fn_00661270(int param_1)

{
  return (int)*(short *)(DAT_00892804 + param_1 * 0x78 + 0x2c);
}



int fn_00661248(int param_1,uint param_2)

{
  if (2 < param_2) {
    param_2 = 0;
  }
  return (int)*(short *)(DAT_00892804 + param_1 * 0x78 + param_2 * 2 + 0x3c);
}



undefined4 fn_006610cc(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar2 = fn_00147e6c(param_1,&DAT_0066123c,4), iVar2 != 0)) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 4;
  }
  iVar2 = 0x78;
  iVar4 = 0;
  DAT_00892808 = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4));
  DAT_00892804 = 0;
  if (iVar2 == 0 && iVar4 == 0) {
    DAT_00892804 = param_1;
  }
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_00892808 = 0;
  }
  iVar2 = 1;
  if (1 < DAT_00892808) {
    do {
      iVar3 = (int)(short)iVar2;
      bVar5 = iVar3 == 0;
      iVar4 = iVar3;
      if (0 < iVar3) {
        iVar4 = DAT_00892808 - iVar3;
        bVar5 = DAT_00892808 == iVar3;
      }
      if (!bVar5 && iVar4 < 0 == (0 < iVar3 && SBORROW4(DAT_00892808,iVar3))) {
        iVar4 = DAT_00892804 + iVar3 * 0x78;
        bVar5 = *(short *)(iVar4 + 0x32) != 0;
        if (bVar5) {
          iVar4 = (int)*(short *)(iVar4 + 0x20);
        }
        if ((bVar5 && iVar4 != 0) && (DAT_00892802 < iVar4)) {
          DAT_00892802 = (short)iVar4;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_00892808);
  }
  DAT_00892800 = DAT_00892802;
  DAT_008927fe = DAT_00892802;
  DAT_008927fc = DAT_00892802;
  iVar2 = 1;
  if (1 < DAT_00892808) {
    do {
      iVar3 = (int)(short)iVar2;
      bVar5 = iVar3 == 0;
      iVar4 = iVar3;
      if (0 < iVar3) {
        iVar4 = DAT_00892808 - iVar3;
        bVar5 = DAT_00892808 == iVar3;
      }
      if (!bVar5 && iVar4 < 0 == (0 < iVar3 && SBORROW4(DAT_00892808,iVar3))) {
        iVar4 = DAT_00892804 + iVar3 * 0x78;
        bVar5 = *(short *)(iVar4 + 0x32) != 0;
        sVar1 = 0;
        if (bVar5) {
          sVar1 = *(short *)(iVar4 + 0x20);
        }
        if (bVar5 && sVar1 != 0) {
          if ((sVar1 < DAT_008927fc) && (*(char *)(iVar4 + 0x22) == '\x04')) {
            DAT_008927fc = sVar1;
          }
          if ((sVar1 < DAT_008927fe) && (*(char *)(iVar4 + 0x22) == '\x06')) {
            DAT_008927fe = sVar1;
          }
          if ((sVar1 < DAT_00892800) && (*(char *)(iVar4 + 0x22) == '\b')) {
            DAT_00892800 = sVar1;
          }
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_00892808);
  }
  return 1;
}



int fn_006610b0(int param_1)

{
  return (int)*(short *)(DAT_00892804 + param_1 * 0x78 + 0x2e);
}



undefined1 fn_00661094(int param_1)

{
  return *(undefined1 *)(DAT_00892804 + param_1 * 0x78 + 0x23);
}



undefined1 fn_00661088(int *param_1)

{
  return *(undefined1 *)(DAT_00892804 + *(short *)(*param_1 + 0x1c) * 0x78 + 0x23);
}



undefined1 fn_00661070(int param_1)

{
  return *(undefined1 *)(DAT_008994c4 + param_1 * 0x40 + 0x2a);
}



int fn_00661058(int param_1)

{
  return (int)*(short *)(DAT_008994c4 + param_1 * 0x40 + 0x3e);
}



undefined1 fn_00661040(int param_1)

{
  return *(undefined1 *)(DAT_008994c4 + param_1 * 0x40 + 0x2b);
}



void fn_00661028(void)

{
  DAT_008994c4 = 0;
  DAT_008994c8 = 0;
  return;
}



int fn_00661010(int param_1)

{
  return (int)*(char *)(DAT_008994c4 + param_1 * 0x40 + 0x29);
}



int fn_00660ff8(int param_1)

{
  return (int)*(short *)(DAT_008994c4 + param_1 * 0x40 + 0x3c);
}



int fn_00660fe0(int param_1)

{
  return (int)*(short *)(DAT_008994c4 + param_1 * 0x40 + 0x22);
}



int fn_00660f58(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if (param_1 - 1U < 699) {
    iVar1 = 0;
    if (0 < (short)DAT_008994c8) {
      do {
        iVar2 = (int)(short)iVar1;
        bVar4 = iVar2 == 0;
        iVar3 = iVar2;
        if (0 < iVar2) {
          iVar3 = DAT_008994c8 - iVar2;
          bVar4 = DAT_008994c8 == iVar2;
        }
        if (((!bVar4 && iVar3 < 0 == (0 < iVar2 && SBORROW4(DAT_008994c8,iVar2))) &&
            (iVar3 = DAT_008994c4 + iVar2 * 0x40, *(char *)(iVar3 + 0x10) != '\0')) &&
           (*(short *)(iVar3 + 0x16) == param_1)) {
          return (int)(short)iVar1;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < (short)DAT_008994c8);
    }
  }
  return 0;
}



int fn_00660f40(int param_1)

{
  return (int)*(short *)(DAT_008994c4 + param_1 * 0x40 + 0x2c);
}



int fn_00660f28(int param_1)

{
  return (int)*(short *)(DAT_008994c4 + param_1 * 0x40 + 0x2e);
}



undefined4 fn_00660f10(int param_1)

{
  return *(undefined4 *)(DAT_008994c4 + param_1 * 0x40 + 0x18);
}



bool fn_00660ef0(int param_1)

{
  return *(char *)(DAT_008994c4 + param_1 * 0x40 + 0x25) != '\0';
}


