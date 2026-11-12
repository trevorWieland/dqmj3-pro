#include "00620a74_00621250.h"



short fn_00621250(char *param_1)

{
  return *param_1 * 0x14 + 100;
}



void fn_006211c8(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  bool bVar2;
  
  *param_4 = 0;
  param_4[1] = 100;
  iVar1 = fn_006f44fc(param_3 + param_2 * 0x418 + -0x4080,0x1c0);
  if ((iVar1 != 0) && (iVar1 = fn_00163c80(param_1), iVar1 == 1)) {
    iVar1 = fn_00163a00(param_1);
    bVar2 = iVar1 != 7;
    if (bVar2) {
      iVar1 = -0x175;
    }
    if (bVar2 && param_1 + iVar1 != 0) {
      fn_00620630(0x1c0,param_2,param_3,param_4);
      return;
    }
  }
  return;
}



void fn_00621140(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  bool bVar2;
  
  *param_4 = 0;
  param_4[1] = 100;
  iVar1 = fn_006f44fc(param_3 + param_2 * 0x418 + -0x4080,0x46);
  if ((iVar1 != 0) && (iVar1 = fn_00163c80(param_1), iVar1 == 1)) {
    iVar1 = fn_00163a00(param_1);
    bVar2 = iVar1 != 7;
    if (bVar2) {
      iVar1 = -0x175;
    }
    if (bVar2 && param_1 + iVar1 != 0) {
      fn_00620630(0x46,param_2,param_3,param_4);
      return;
    }
  }
  return;
}



void fn_006210b4(undefined4 param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  
  iVar1 = fn_001639e4();
  if (iVar1 == 0xd) {
    switch(*(undefined1 *)(param_3 + param_2 * 0x418 + -0x4027)) {
    case 0:
    case 1:
      unaff_r4 = 0;
      break;
    case 2:
      unaff_r4 = 1;
      break;
    case 3:
      unaff_r4 = 2;
      break;
    case 4:
      unaff_r4 = 3;
    }
    uVar2 = fn_00691af0(param_1,unaff_r4);
    *param_4 = uVar2;
    param_4[1] = 8;
  }
  return;
}



int fn_00620f7c(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  bool bVar7;
  bool bVar8;
  
  iVar5 = param_2 + param_1 * 0x418;
  psVar6 = (short *)(iVar5 + -0x4080);
  if (0 < *psVar6) {
    cVar1 = *(char *)(iVar5 + -0x4019);
    bVar7 = cVar1 == '\0';
    if (bVar7) {
      cVar1 = *(char *)(iVar5 + -0x400a);
    }
    bVar8 = bVar7 && cVar1 == '\0';
    if (bVar7 && cVar1 == '\0') {
      bVar8 = *(char *)(iVar5 + -0x4018) == '\0';
    }
    if (bVar8) {
      iVar4 = 0;
      iVar3 = fn_006f44fc(psVar6,0x93);
      if (iVar3 != 0) {
        sVar2 = fn_001746c0(0x93);
        iVar4 = fn_00637fd8((int)sVar2,param_1,param_2,param_3);
      }
      iVar3 = fn_006f44fc(psVar6,0x19d);
      if (iVar3 != 0) {
        sVar2 = fn_001746c0(0x19d);
        iVar3 = fn_00637fd8((int)sVar2,param_1,param_2,param_3);
        iVar4 = iVar4 + iVar3;
      }
      iVar3 = fn_006f44fc(psVar6,0x1d0);
      if (iVar3 != 0) {
        sVar2 = fn_001746c0(0x1d0);
        iVar3 = fn_00637fd8((int)sVar2,param_1,param_2,param_3);
        iVar4 = iVar4 + iVar3;
      }
      if ((*(char *)(param_2 + 1) != '\a') &&
         ((7 < param_1 - 0x10U || (*(char *)(iVar5 + -0x3fd3) < '\x01')))) {
        iVar4 = -iVar4;
      }
      return iVar4;
    }
  }
  return 0;
}



int fn_00620dec(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  bool bVar11;
  bool bVar12;
  
  iVar6 = param_2 + param_1 * 0x418;
  psVar7 = (short *)(iVar6 + -0x4080);
  if (0 < *psVar7) {
    cVar1 = *(char *)(iVar6 + -0x4019);
    bVar11 = cVar1 == '\0';
    if (bVar11) {
      cVar1 = *(char *)(iVar6 + -0x400a);
    }
    bVar12 = bVar11 && cVar1 == '\0';
    if (bVar11 && cVar1 == '\0') {
      bVar12 = *(char *)(iVar6 + -0x4018) == '\0';
    }
    if (bVar12) {
      puVar4 = param_4;
      if (param_3 != 0) {
        puVar4 = &DAT_007f071c;
      }
      iVar5 = 0;
      if (param_3 != 0) {
        uVar3 = 0;
        do {
          piVar10 = puVar4 + uVar3 * 3;
          iVar9 = piVar10[1];
          iVar8 = piVar10[2];
          if (*piVar10 == param_3) {
            iVar5 = fn_00176dc0(psVar7);
            iVar5 = fn_00300f74(iVar5 * iVar9,iVar8);
            break;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < 4);
      }
      iVar8 = fn_006f44fc(psVar7,0x92);
      if (iVar8 != 0) {
        sVar2 = fn_001746c0(0x92);
        iVar8 = fn_00637fd8((int)sVar2,param_1,param_2,param_4);
        iVar5 = iVar5 + iVar8;
      }
      iVar8 = fn_006f44fc(psVar7,0x19c);
      if (iVar8 != 0) {
        sVar2 = fn_001746c0(0x19c);
        iVar8 = fn_00637fd8((int)sVar2,param_1,param_2,param_4);
        iVar5 = iVar5 + iVar8;
      }
      iVar8 = fn_006f44fc(psVar7,0x1cf);
      if (iVar8 != 0) {
        sVar2 = fn_001746c0(0x1cf);
        iVar8 = fn_00637fd8((int)sVar2,param_1,param_2,param_4);
        iVar5 = iVar5 + iVar8;
      }
      if ((*(char *)(param_2 + 1) != '\a') &&
         ((7 < param_1 - 0x10U || (*(char *)(iVar6 + -0x3fd3) < '\x01')))) {
        iVar5 = -iVar5;
      }
      return iVar5;
    }
  }
  return 0;
}



int fn_00620d3c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_18;
  int local_14;
  
  piVar3 = &local_18;
  iVar1 = fn_006f4520(param_3 + param_2 * 0x418 + -0x4080);
  iVar2 = fn_0063a510(0x5f,0x69,param_4);
  local_14 = (iVar2 * iVar1) / 100;
  local_18 = (param_1 * 6) / 5;
  if ((local_14 < 0) || (local_18 < 0)) {
    if (local_18 < local_14) goto LAB_00620dc0;
  }
  else if (local_14 < local_18) goto LAB_00620dc0;
  piVar3 = &local_14;
LAB_00620dc0:
  return *piVar3;
}



int fn_00620b48(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = -10000;
  iVar1 = param_2 + param_1 * 0x418;
  iVar6 = iVar1 + -0x4080;
  if ((*(char *)(param_2 + 1) == '\x02') && (iVar2 = fn_006f44fc(iVar6,0x1b4), iVar2 == 0)) {
    iVar1 = fn_0063a54c(0xffffd8f0,29999);
    return iVar1;
  }
  sVar5 = 0;
  iVar2 = fn_00145adc(param_2 + 0xe8);
  if (iVar2 == 0) {
    iVar3 = fn_006f4044(iVar6);
    iVar2 = fn_0063a510(0x4b,100,param_3);
    iVar3 = iVar3 * iVar2;
  }
  else {
    iVar3 = fn_006f4044(iVar6);
    iVar2 = fn_0063a510(0x32,100,param_3);
    iVar3 = iVar3 * iVar2;
  }
  iVar2 = fn_006f44fc(iVar6,0x1b4);
  if (iVar2 != 0) {
    sVar5 = 0x1b4;
    goto LAB_00620cd4;
  }
  iVar2 = fn_006f44fc(iVar6,0x88);
  if (iVar2 == 0) {
    iVar2 = fn_006f44fc(iVar6,0x87);
    if (iVar2 != 0) {
LAB_00620ca8:
      sVar5 = 0x87;
      goto LAB_00620cd4;
    }
    iVar2 = fn_006f44fc(iVar6,0x86);
    if (iVar2 == 0) {
      iVar2 = fn_006f44fc(iVar6,0x89);
      if (iVar2 == 0) {
        iVar1 = fn_006f44fc(iVar6,0x46);
        if (iVar1 != 0) {
          sVar5 = 0x46;
        }
        goto LAB_00620cd4;
      }
      uVar4 = (uint)*(char *)(iVar1 + -0x4024);
      if (2 < (int)uVar4) goto LAB_00620c98;
      if (0 < (int)uVar4) goto LAB_00620ca8;
      if (uVar4 < 0x80000000) goto LAB_00620cd4;
    }
    sVar5 = 0x86;
  }
  else {
LAB_00620c98:
    sVar5 = 0x88;
  }
LAB_00620cd4:
  uVar4 = 0;
  if (*(char *)(param_2 + 1) != '\x01') {
    iVar7 = 0;
  }
  do {
    if ((&DAT_007f0614)[uVar4 * 6] == sVar5) {
      if (*(char *)(param_2 + 1) == '\x01') {
        sVar5 = (short)(&DAT_007f061c)[uVar4 * 3];
      }
      else {
        sVar5 = (short)(&DAT_007f0618)[uVar4 * 3];
      }
      iVar7 = (int)sVar5;
      break;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 5);
  return iVar3 / 100 + iVar7;
}



undefined4 fn_00620ae4(uint param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    return 100;
  }
  uVar3 = 0;
  do {
    puVar1 = &DAT_007f0904 + uVar3 * 3;
    if ((ushort)(&DAT_007f08fc)[uVar3 * 6] <= param_1) {
      iVar2 = fn_006f4850(param_2 + 0xe8);
      if (iVar2 == 0) {
        puVar1 = &DAT_007f0900 + uVar3 * 3;
      }
      return *puVar1;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  return 100;
}



int fn_00620a74(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  param_2 = param_2 + param_1 * 0x418;
  switch(*(undefined1 *)(param_2 + -0x4027)) {
  default:
    return 100;
  case 2:
    uVar1 = fn_00176dc0(param_2 + -0x4080);
    iVar2 = fn_00300f74(*(short *)(param_2 + -0x4064) * 100,uVar1);
    return 200 - iVar2;
  case 3:
  case 4:
    return 0x7d;
  }
}


