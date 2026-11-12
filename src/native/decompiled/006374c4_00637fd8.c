#include "006374c4_00637fd8.h"



int fn_00637fd8(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int local_28 [3];
  
  piVar6 = local_28;
  piVar5 = local_28;
  iVar7 = param_3 + param_2 * 0x418 + -0x4080;
  sVar1 = fn_00691af0(param_1,0);
  sVar2 = 0;
  uVar3 = fn_00691af0(param_1,1);
  iVar4 = fn_00691d5c(param_1);
  if (iVar4 == 3) {
    sVar2 = fn_00176dc0(iVar7);
  }
  else if (iVar4 == 4) {
    sVar2 = fn_00176e70(iVar7);
  }
  iVar4 = fn_0063a510(0x5a,100,param_4);
  iVar4 = fn_00300f74((iVar4 * (int)sVar2 * (int)sVar1) / 10000,uVar3);
  iVar7 = fn_00691af0(param_1,2);
  local_28[2] = fn_00691af0(param_1,3);
  local_28[1] = iVar7;
  local_28[0] = iVar4;
  if (local_28[2] < iVar7) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  if (iVar4 < iVar7) {
    piVar6 = local_28 + 1;
  }
  if (local_28[2] < *piVar6) {
    piVar5 = local_28 + 2;
  }
  else if (iVar4 < iVar7) {
    piVar5 = local_28 + 1;
  }
  return *piVar5;
}



int fn_00637eb0(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_24;
  int local_20 [3];
  
  iVar1 = fn_00163c80(param_2);
  if (iVar1 == 1) {
    iVar3 = param_4 + param_3 * 0x418 + -0x4080;
    iVar1 = fn_006f44fc(iVar3,0x4b);
    if (iVar1 == 0) {
      iVar1 = fn_006f44fc(iVar3,0x4c);
      if (iVar1 == 0) {
        iVar1 = fn_006f44fc(iVar3,0x4d);
        if (iVar1 == 0) {
          iVar1 = fn_006f44fc(iVar3,0x4e);
          if (iVar1 == 0) {
            return param_1;
          }
          iVar1 = 5;
        }
        else {
          iVar1 = 4;
        }
      }
      else {
        iVar1 = 3;
      }
    }
    else {
      iVar1 = 2;
    }
    if (param_5 != 0) {
      local_20[0] = iVar1 + -1;
      local_24 = 5;
      if (local_20[0] < 1) {
        piVar2 = local_20 + 1;
      }
      else {
        piVar2 = local_20;
      }
      local_20[1] = 1;
      if (*piVar2 < 6) {
        if (local_20[0] < 1) {
          piVar2 = local_20 + 1;
        }
        else {
          piVar2 = local_20;
        }
      }
      else {
        piVar2 = &local_24;
      }
      iVar1 = *piVar2;
    }
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      fn_00146590();
    }
    iVar3 = fn_00169f1c(param_1 + iVar1 + -1,iVar1);
    param_1 = fn_00300f74(iVar3 * iVar1,iVar1);
  }
  return param_1;
}



int fn_00637df0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  uVar1 = param_5 + param_4 * 0x418;
  bVar5 = 7 < param_4 - 0x10U;
  uVar2 = uVar1;
  if (bVar5) {
    uVar2 = param_4 - 0x18;
  }
  iVar4 = uVar1 - 0x4080;
  if (bVar5 && 7 < uVar2) {
    iVar4 = 0;
  }
  iVar3 = fn_00691efc(param_2);
  if (iVar3 != 0) {
    uVar2 = 0;
    do {
      if ((&DAT_007f020c)[uVar2 * 3] == (int)*(char *)(iVar4 + 0x75)) {
        iVar4 = (&DAT_007f0214)[uVar2 * 3];
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          fn_00146590();
        }
        iVar3 = fn_00169f1c((&DAT_007f0210)[uVar2 * 3] * param_1 + iVar4 + -1,iVar4);
        iVar4 = fn_00300f74(iVar3 * iVar4,iVar4);
        return iVar4;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 2);
  }
  return param_1;
}



void fn_006374c4(int param_1,undefined4 param_2,int param_3,int param_4,char *param_5,
                 undefined4 param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  
  uVar8 = param_4 - 0x10;
  uVar7 = param_4 - 0x18;
  pcVar9 = param_5 + param_4 * 0x418 + -0x4080;
  pcVar3 = pcVar9;
  if (7 < uVar8 && 7 < uVar7) {
    pcVar3 = (char *)0x0;
  }
  if (((param_7 == 0) && (iVar1 = fn_00163a00(param_2), iVar1 == 1)) &&
     (iVar1 = fn_006f44fc(pcVar3,0x4f), iVar1 != 0)) {
    param_1 = (param_1 * 0x78) / 100;
  }
  pcVar3 = pcVar9;
  if (7 < uVar8 && 7 < uVar7) {
    pcVar3 = (char *)0x0;
  }
  iVar1 = fn_00163a00(param_2);
  if ((iVar1 == 1) && (iVar1 = fn_006f44fc(pcVar3,0x50), iVar1 != 0)) {
    iVar1 = fn_00169f1c(param_1 * 0x4b + 99,100);
    param_1 = (iVar1 * 100) / 100;
  }
  pcVar3 = pcVar9;
  if (7 < uVar8 && 7 < uVar7) {
    pcVar3 = (char *)0x0;
  }
  pcVar6 = param_5 + param_3 * 0x418 + -0x4080;
  iVar1 = fn_00163c80(param_2);
  if (((iVar1 == 1) && (iVar1 = fn_006f44fc(pcVar6,0xd7), iVar1 != 0)) &&
     (iVar1 = fn_00183704(pcVar3 + 0x406,3), iVar1 != 0)) {
    param_1 = (param_1 * 0x6e) / 100;
  }
  pcVar3 = pcVar9;
  if (7 < uVar8 && 7 < uVar7) {
    pcVar3 = (char *)0x0;
  }
  iVar1 = fn_006f44fc(pcVar6,0xd8);
  if ((iVar1 != 0) && ((byte)param_5[param_3 * 0x418 + -0x4028] < (byte)pcVar3[0x58])) {
    param_1 = (param_1 * 0x6e) / 100;
  }
  iVar1 = fn_006f44fc(pcVar6,0xd9);
  if (iVar1 != 0) {
    iVar1 = 0x5a;
    if (*param_5 < '\x03') {
      iVar1 = 0x78;
    }
    param_1 = (param_1 * iVar1) / 100;
  }
  pcVar3 = pcVar9;
  if (7 < uVar8 && 7 < uVar7) {
    pcVar3 = (char *)0x0;
  }
  iVar1 = fn_006f44fc(pcVar3,0xe8);
  if (iVar1 != 0) {
    param_1 = (param_1 * 0x6e) / 100;
  }
  pcVar3 = pcVar9;
  if (7 < uVar8 && 7 < uVar7) {
    pcVar3 = (char *)0x0;
  }
  iVar1 = fn_006f44fc(pcVar3,0x1c1);
  if ((iVar1 != 0) && (iVar1 = fn_00163c80(param_2), iVar1 == 1)) {
    param_1 = (param_1 * 0x5a) / 100;
  }
  if ((param_3 - 0x10U < 8) && (iVar1 = fn_006f44fc(pcVar6,0x1a6), iVar1 != 0)) {
    param_1 = (param_1 * 0x96) / 100;
  }
  if (uVar8 < 8 || uVar7 < 8) {
    if (uVar8 < 8 || uVar7 < 8) {
      pcVar3 = pcVar9;
    }
    else {
      pcVar3 = (char *)0x0;
    }
    iVar1 = fn_006f44fc(pcVar3,0x1a6);
    if (iVar1 != 0) {
      param_1 = (param_1 * 0x96) / 100;
    }
  }
  iVar1 = fn_006f44fc(pcVar6,0x1a5);
  if (iVar1 != 0) {
    param_1 = (param_1 * 0x69) / 100;
  }
  uVar10 = 0;
  iVar1 = fn_006f4114(pcVar6,param_2);
  if (0 < iVar1) {
    iVar1 = fn_006924c4(param_2);
    if ((1 < iVar1 - 10000U) && (iVar1 - 10000U != 2)) {
      uVar10 = 1;
    }
  }
  uVar2 = fn_006f44fc(pcVar6,0x1a7);
  if ((uVar2 & uVar10) != 0) {
    param_1 = (param_1 * 0x96) / 100;
  }
  pcVar3 = pcVar9;
  if (7 < uVar8 && 7 < uVar7) {
    pcVar3 = (char *)0x0;
  }
  iVar1 = fn_006f44fc(pcVar3,0x1de);
  if ((((iVar1 != 0) && (iVar1 = fn_00163c9c(param_2), iVar1 != 0)) &&
      (iVar1 = fn_00163a00(param_2), iVar1 == 1)) && (iVar1 = fn_00163c80(param_2), iVar1 == 1)) {
    param_1 = (param_1 * 0x5a) / 100;
  }
  pcVar3 = pcVar9;
  if (7 < uVar8 && 7 < uVar7) {
    pcVar3 = (char *)0x0;
  }
  iVar1 = fn_006f44fc(pcVar3,0x1c3);
  if (((iVar1 != 0) && (iVar1 = fn_00163c9c(param_2), iVar1 != 0)) &&
     ((iVar1 = fn_00163a00(param_2), iVar1 == 1 && (iVar1 = fn_00163c80(param_2), iVar1 == 1)))) {
    param_1 = (param_1 * 0x50) / 100;
  }
  pcVar3 = pcVar9;
  if (7 < uVar8 && 7 < uVar7) {
    pcVar3 = (char *)0x0;
  }
  iVar1 = fn_006f44fc(pcVar3,0x1dd);
  if (((iVar1 != 0) && (iVar1 = fn_00163c9c(param_2), iVar1 != 0)) &&
     ((iVar1 = fn_00163a00(param_2), iVar1 == 2 && (iVar1 = fn_00163c80(param_2), iVar1 == 1)))) {
    param_1 = (param_1 * 0x5a) / 100;
  }
  pcVar3 = pcVar9;
  if (7 < uVar8 && 7 < uVar7) {
    pcVar3 = (char *)0x0;
  }
  iVar1 = fn_006f44fc(pcVar3,0x1c2);
  if ((((iVar1 != 0) && (iVar1 = fn_00163c9c(param_2), iVar1 != 0)) &&
      (iVar1 = fn_00163a00(param_2), iVar1 == 2)) && (iVar1 = fn_00163c80(param_2), iVar1 == 1)) {
    param_1 = (param_1 * 0x50) / 100;
  }
  pcVar3 = pcVar9;
  if (7 < uVar8 && 7 < uVar7) {
    pcVar3 = (char *)0x0;
  }
  switch(pcVar3[2]) {
  default:
    goto switchD_00637a58_caseD_0;
  case '\x01':
    uVar5 = 0x1aa;
    break;
  case '\x02':
    uVar5 = 0x1ab;
    break;
  case '\x03':
    uVar5 = 0x1ac;
    break;
  case '\x04':
    uVar5 = 0x1ad;
    break;
  case '\x05':
    uVar5 = 0x1ae;
    break;
  case '\x06':
    uVar5 = 0x1af;
    break;
  case '\a':
    uVar5 = 0x1b0;
    break;
  case '\b':
    uVar5 = 0x1b1;
    break;
  case '\t':
    uVar5 = 0x1b2;
  }
  iVar1 = fn_006f44fc(pcVar6,uVar5);
  if ((iVar1 != 0) && (iVar1 = fn_00163c80(param_2), iVar1 == 1)) {
    param_1 = (param_1 * 200) / 100;
  }
switchD_00637a58_caseD_0:
  pcVar3 = pcVar9;
  if (7 < uVar8 && 7 < uVar7) {
    pcVar3 = (char *)0x0;
  }
  iVar1 = fn_00691860(param_2);
  iVar4 = fn_0069187c(param_2);
  if (((iVar1 == 6 || iVar4 == 6) && (iVar1 = fn_006f44fc(pcVar3,0x1da), iVar1 != 0)) &&
     (iVar1 = fn_00163c80(param_2), iVar1 == 1)) {
    param_1 = (param_1 * 0x32) / 100;
  }
  iVar1 = fn_006f44fc(pcVar6,0x1a8);
  if (iVar1 != 0) {
    uVar5 = fn_00176dc0(pcVar6);
    iVar1 = fn_00300f74(*(short *)(param_5 + param_3 * 0x418 + -0x4064) * 100,uVar5);
    param_1 = (param_1 * (200 - iVar1)) / 100;
  }
  if (7 < uVar8 && 7 < uVar7) {
    pcVar9 = (char *)0x0;
  }
  iVar1 = fn_006f44fc(pcVar9,0x1d6);
  if ((iVar1 != 0) && (iVar1 = fn_00163c80(param_2), iVar1 == 1)) {
    param_1 = (param_1 * 0x4b) / 100;
  }
  iVar1 = fn_006f44fc(pcVar6,0x1df);
  if (iVar1 != 0) {
    iVar1 = fn_0063a510(10,200,param_7);
    param_1 = (param_1 * iVar1) / 100;
  }
  fn_00639ac0(param_1,param_2,param_3,param_4,param_5);
  return;
}


