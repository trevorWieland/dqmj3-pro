#include "00624d78_00625f70.h"



void fn_00625f70(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  
  iVar2 = fn_00145adc(param_2 + 0xe8);
  if (iVar2 == 0) {
    uVar3 = 0x10;
    goto LAB_0062603c;
  }
  bVar4 = true;
  switch(param_4) {
  case 3:
  case 4:
  case 5:
  case 6:
  case 0xc:
  case 0xd:
  case 0xe:
    cVar1 = *(char *)(param_1 + 0x1d4);
    if (((cVar1 == '\0') || (bVar4 = cVar1 != '\x01', !bVar4)) || (cVar1 != '\x02'))
    goto switchD_00625fa4_caseD_7;
    break;
  default:
switchD_00625fa4_caseD_7:
    fn_0062b2ec(param_1,0x10,0x14,param_2,param_3,param_4);
    if (!bVar4) {
      return;
    }
  }
  uVar3 = 0x14;
LAB_0062603c:
  fn_0062b2ec(param_1,uVar3,0x18,param_2,param_3,param_4);
  return;
}



void fn_00625ef8(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = fn_0062a40c();
  iVar2 = fn_00163a00();
  if ((('\0' < *(char *)(param_3 + *(char *)(param_2 + 5) * 0x418 + 0x17c3c2)) &&
      (iVar3 = fn_00163c9c(uVar1), iVar3 != 0)) && (iVar2 == 2)) {
    *(undefined1 *)(param_4 + 0x5160) = 8;
  }
  return;
}



longlong fn_00625df4(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  
  bVar4 = param_4 != 0x104;
  iVar2 = param_1;
  if (bVar4) {
    iVar2 = -0x105;
  }
  bVar5 = param_4 + iVar2 != 0;
  if (bVar4 && bVar5) {
    iVar2 = param_4 + -0x100;
  }
  if ((bVar4 && bVar5) && iVar2 != 6) {
    return (ulonglong)param_2 << 0x20;
  }
  iVar2 = 0;
  uVar6 = fn_00624edc(param_1,param_4,param_3,param_2 + 0x180388,0);
  uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if ((int)uVar6 == 0) {
    uVar3 = 0x20;
  }
  else {
    if (param_4 == 0x104) {
      sVar1 = fn_0063a54c(1,10);
      iVar2 = (int)sVar1;
      uVar3 = extraout_r1;
    }
    else if (param_4 == 0x105) {
      sVar1 = fn_0063a54c(1,0x14);
      iVar2 = (int)sVar1;
      uVar3 = extraout_r1_00;
    }
    else if (param_4 == 0x106) {
      sVar1 = fn_0063a54c(1,5);
      iVar2 = (int)sVar1;
      uVar3 = extraout_r1_01;
    }
    iVar2 = (int)(short)((short)iVar2 * 10);
  }
  return CONCAT44(uVar3,iVar2);
}



undefined4 fn_00625cfc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = param_2 + 0x180470;
  iVar1 = fn_006f4850(iVar2);
  if (iVar1 == 0) {
    iVar1 = fn_006f4ab4(param_1 + 4,1);
    if (iVar1 != 0) goto LAB_00625d70;
    iVar1 = fn_006f4ab4(param_1 + 4,0);
    if (iVar1 != 0) {
      *(undefined1 *)(param_2 + 0x180384) = 1;
      uVar3 = fn_006f4850(iVar2);
      if (((int)uVar3 == 0) &&
         (iVar1 = fn_006f4868(iVar2,(int)((ulonglong)uVar3 >> 0x20),0x400,0), iVar1 == 0)) {
        fn_006259d8(param_1,param_2);
      }
      fn_00622534(param_1,param_2);
      return 1;
    }
  }
  else {
    if (*(char *)(param_1 + 0x2e) == '\x01') {
LAB_00625d70:
      *(undefined1 *)(param_2 + 0x180384) = 2;
      return 1;
    }
    if (*(char *)(param_1 + 0x2e) == '\x02') {
      *(undefined1 *)(param_2 + 0x180384) = 1;
      return 1;
    }
  }
  return 0;
}



void fn_00625c54(int param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_3 * 0x78) / 100;
  if (*param_2 == 0) {
    iVar2 = fn_0061be08((int)param_2[1]);
    if (*(char *)(param_1 + 0x18) != '\0') {
      param_3 = iVar1;
    }
    if (iVar2 == 1) goto LAB_00625ce4;
  }
  else {
    iVar2 = fn_0061be08((int)*param_2);
    if (*(char *)(param_1 + 0x18) != '\0') {
      param_3 = iVar1;
    }
    if (iVar2 == 0) {
LAB_00625ce4:
      *(int *)(param_2 + 0x198) = *(int *)(param_2 + 0x198) + param_3;
      return;
    }
  }
  *(int *)(param_2 + 0x194) = *(int *)(param_2 + 0x194) + param_3;
  return;
}



void fn_006259d8(undefined4 param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  
  iVar5 = 100;
  bVar2 = false;
  iVar8 = 0x10;
  do {
    iVar6 = param_2 + 0x180388 + iVar8 * 0x418;
    psVar7 = (short *)(iVar6 + -0x4080);
    if (0 < *psVar7) {
      cVar1 = *(char *)(iVar6 + -0x4019);
      bVar9 = cVar1 == '\0';
      if (bVar9) {
        cVar1 = *(char *)(iVar6 + -0x400a);
      }
      bVar10 = bVar9 && cVar1 == '\0';
      if (bVar9 && cVar1 == '\0') {
        bVar10 = *(char *)(iVar6 + -0x4018) == '\0';
      }
      if (bVar10) {
        uVar3 = fn_006f33f0(psVar7,0x199);
        if (0 < (int)uVar3) {
          if ((uVar3 & 1) != 0) {
            iVar5 = (iVar5 * 0x6e) / 100;
          }
          for (iVar6 = (int)uVar3 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
            iVar5 = (((iVar5 * 0x6e) / 100) * 0x6e) / 100;
          }
        }
        uVar3 = fn_006f33f0(psVar7,0x19a);
        if (0 < (int)uVar3) {
          if ((uVar3 & 1) != 0) {
            iVar5 = (iVar5 * 0x82) / 100;
          }
          for (iVar6 = (int)uVar3 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
            iVar5 = (((iVar5 * 0x82) / 100) * 0x82) / 100;
          }
        }
        uVar3 = fn_006f33f0(psVar7,0x19b);
        if (0 < (int)uVar3) {
          if ((uVar3 & 1) != 0) {
            iVar5 = (iVar5 * 0x96) / 100;
          }
          for (iVar6 = (int)uVar3 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
            iVar5 = (((iVar5 * 0x96) / 100) * 0x96) / 100;
          }
        }
        iVar6 = fn_006f44fc(psVar7,0x1d5);
        if ((iVar6 != 0) || (iVar6 = fn_006f44fc(psVar7,499), iVar6 != 0)) {
          bVar2 = true;
        }
      }
    }
    iVar8 = (int)(char)((char)iVar8 + '\x01');
  } while (iVar8 < 0x14);
  if (bVar2) {
    iVar5 = iVar5 << 4;
  }
  iVar8 = fn_006f0a18(param_2 + 0x180388,5);
  if (iVar8 != 0) {
    iVar5 = iVar5 * 10;
  }
  iVar8 = fn_0069ccf8((int)*(short *)(param_2 + 0x184618));
  if ((iVar8 != 0) && (iVar8 = fn_0069ccac((int)*(short *)(param_2 + 0x184618)), iVar8 != 0)) {
    iVar5 = iVar5 << 2;
  }
  uVar4 = fn_0063a26c(0,iVar5,0x14,0x18,param_2);
  fn_0063a26c(uVar4,iVar5,0x1c,0x20,param_2);
  return;
}



void fn_006259a4(undefined4 param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [12];
  
  cVar1 = *(char *)(param_2 + 5);
  uVar2 = fn_0062a40c();
  fn_0062038c(uVar2,(int)cVar1,param_3,auStack_18);
  fn_00655430(auStack_18);
  return;
}



void fn_00624d78(undefined4 param_1,char *param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar2 = 0;
  if (param_3 < param_4) {
    do {
      uVar6 = (uint)*(short *)(param_2 + param_3 * 0x1a0 + 0x18);
      if (0 < (int)(uVar6 - 1)) {
        piVar4 = (int *)(param_2 + param_3 * 0x1a0 + 0x14);
        if ((uVar6 & 1) == 0) {
          piVar4 = (int *)(param_2 + param_3 * 0x1a0 + 0x1c);
          iVar2 = iVar2 + *piVar4;
        }
        iVar3 = piVar4[2];
        iVar5 = 0;
        for (iVar7 = (int)(uVar6 - 1) >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
          iVar2 = iVar2 + iVar3;
          iVar3 = piVar4[6];
          iVar5 = iVar5 + piVar4[4];
          piVar4 = piVar4 + 4;
        }
        iVar2 = iVar2 + iVar5;
      }
      if (-1 < (int)(uVar6 - 1)) {
        iVar2 = iVar2 + *(int *)(param_2 + (uVar6 - 1) * 8 + param_3 * 0x1a0 + 0x1c);
      }
      param_3 = param_3 + 1;
    } while (param_3 < param_4);
    if (iVar2 != 0) {
      iVar7 = param_6 + *(int *)(param_6 + 4) * 0x1a0;
      *(undefined2 *)(iVar7 + 0x20a0) = 1;
      *(undefined4 *)(iVar7 + 0x20a4) = 0;
      *(char *)(iVar7 + 0x20e1) = (char)iVar2;
      param_5 = param_5 + 0x180388;
      uVar1 = fn_006207d0(1,(int)*param_2,param_5,param_4,param_4);
      *(undefined1 *)(iVar7 + 0x2142) = uVar1;
      *(undefined1 *)(iVar7 + 0x208a) = 4;
      *(undefined2 *)(iVar7 + 0x208c) = 10;
      *(char *)(iVar7 + 0x2088) = *param_2;
      *(char *)(iVar7 + 0x2089) = *param_2;
      *(undefined1 *)(iVar7 + 0x208e) = 9;
      *(undefined1 *)(iVar7 + 0x208f) = 8;
      *(int *)(param_6 + 4) = *(int *)(param_6 + 4) + 1;
      fn_0062454c(param_1,(char *)(iVar7 + 0x2088),param_5,0);
      fn_00654bf4(param_5,*(undefined4 *)(iVar7 + 0x221c));
      fn_00654c30(param_5,*(undefined4 *)(iVar7 + 0x2220));
      return;
    }
  }
  return;
}


