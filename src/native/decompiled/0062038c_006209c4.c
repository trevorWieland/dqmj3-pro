#include "0062038c_006209c4.h"



void fn_006209c4(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char local_18 [12];
  
  pcVar3 = local_18;
  pcVar2 = local_18;
  iVar1 = fn_006f4888(param_2 + 0xb,1);
  if (iVar1 != 0) {
    local_18[4] = 0;
    local_18[8] = 7;
    local_18[0] = *(char *)(param_1 + 0xd) + -3;
    if (local_18[0] < '\0') {
      pcVar2 = local_18 + 4;
    }
    if ('\a' < *pcVar2) {
      pcVar2 = local_18 + 8;
    }
    *(char *)(param_1 + 0xd) = *pcVar2;
  }
  if (*(byte *)(param_1 + 0xd) < 5) {
    local_18[4] = 0;
    local_18[8] = 7;
    local_18[0] = *(byte *)(param_1 + 0xd) - *(char *)(param_2 + 10);
    if (local_18[0] < '\0') {
      pcVar3 = local_18 + 4;
    }
    if ('\a' < *pcVar3) {
      pcVar3 = local_18 + 8;
    }
    *(char *)(param_1 + 0xd) = *pcVar3;
  }
  return;
}



void fn_00620924(int param_1,int param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  char acStack_29 [13];
  
  param_1 = param_1 + 0x20;
  if (param_2 != 0 || param_3 != 0) {
    acStack_29[1] = '\0';
    acStack_29[2] = '\0';
    acStack_29[3] = '\0';
    acStack_29[4] = '\0';
    acStack_29[5] = '\0';
    acStack_29[6] = '\0';
    acStack_29[7] = '\0';
    acStack_29[8] = '\0';
    acStack_29[9] = '\0';
    acStack_29[10] = '\0';
    acStack_29[0xb] = '\0';
    acStack_29[0xc] = '\0';
    iVar1 = fn_0069180c(param_2);
    if (iVar1 != 0) {
      acStack_29[param_2] = '\x01';
    }
    iVar1 = fn_0069180c(param_3);
    if (iVar1 != 0) {
      acStack_29[param_3] = '\x01';
    }
    iVar1 = 0;
    iVar3 = 10;
    pcVar2 = acStack_29 + 1;
    do {
      if (*pcVar2 == '\0') {
        *(undefined1 *)(param_1 + iVar1) = 0;
      }
      else {
        *(char *)(param_1 + iVar1) = *(char *)(param_1 + iVar1) + '\x01';
      }
      iVar3 = iVar3 + -1;
      iVar1 = iVar1 + 1;
      pcVar2 = pcVar2 + 1;
    } while (iVar3 != 0);
  }
  return;
}



void fn_006208d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined *local_1e8;
  undefined1 auStack_1e4 [468];
  
  local_1e8 = &DAT_00859598;
  iVar1 = fn_006562a0(auStack_1e4);
  *(undefined **)(iVar1 + -4) = &DAT_008595c8;
  fn_006372dc(&local_1e8,param_1,param_2);
  local_1e8 = &DAT_00859598;
  fn_006563c4(auStack_1e4);
  return;
}



uint fn_006207d0(undefined4 param_1,char param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 auStack_1a0 [98];
  
  fn_0017821c(auStack_1a0,&DAT_007f074c,0x184);
  uVar3 = 1;
  iVar4 = param_3 + param_2 * 0x418 + -0x4080;
  switch(param_1) {
  default:
    goto switchD_00620814_caseD_0;
  case 1:
    iVar2 = fn_006f44fc(iVar4,0xc6);
    break;
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
    iVar2 = fn_006f3458(iVar4);
  }
  if (iVar2 != 0) {
    return 0;
  }
switchD_00620814_caseD_0:
  iVar2 = 1;
  do {
    if (*(char *)(iVar4 + iVar2 + 0x5b) != '\0') {
      uVar1 = (*(code *)auStack_1a0[iVar2])((int)(short)param_1);
      uVar3 = uVar3 & uVar1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x61);
  return uVar3;
}



undefined4 fn_00620708(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  
  param_2 = param_2 + param_1 * 0x418;
  if (0 < *(short *)(param_2 + -0x4080)) {
    cVar1 = *(char *)(param_2 + -0x4019);
    bVar7 = cVar1 == '\0';
    if (bVar7) {
      cVar1 = *(char *)(param_2 + -0x400a);
    }
    bVar8 = bVar7 && cVar1 == '\0';
    if (bVar7 && cVar1 == '\0') {
      bVar8 = *(char *)(param_2 + -0x4018) == '\0';
    }
    if ((bVar8) && (0 < *(char *)(param_2 + -0x401b))) {
      uVar2 = 0;
      do {
        iVar6 = (&DAT_007f06c0)[uVar2 * 3];
        iVar5 = (&DAT_007f06c4)[uVar2 * 3];
        if ((&DAT_007f06bc)[uVar2 * 3] == (int)*(char *)(param_2 + -0x401b)) {
          iVar3 = fn_00176dc0((short *)(param_2 + -0x4080));
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            fn_00146590();
          }
          iVar6 = fn_00169f1c(iVar3 * iVar6 + iVar5 + -1,iVar5);
          uVar4 = fn_00300f74(iVar6 * iVar5,iVar5);
          return uVar4;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < 4);
    }
  }
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x006206bc) */

void fn_00620630(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_3 + param_2 * 0x418;
  iVar3 = fn_00145adc(param_3 + 0xe8);
  if (iVar3 == 0) {
    iVar3 = fn_00660ba0(param_1);
  }
  else {
    iVar3 = fn_0061be08(param_2);
    if (iVar3 == 0) {
      iVar3 = fn_00660be8(param_1);
    }
    else {
      iVar3 = fn_00660bbc();
    }
  }
  if (iVar3 != 100) {
    cVar1 = *(char *)(iVar2 + -0x3fe6);
    if (cVar1 < '\x01') {
      cVar1 = *(char *)(iVar2 + -0x3fe5);
    }
    if (cVar1 < '\x01') {
      if (*(char *)(iVar2 + -0x3fe4) < '\x01') {
        if ('\0' < *(char *)(iVar2 + -0x4011)) {
          iVar3 = (int)(short)(iVar3 << 1);
        }
        if (-1 < *(char *)(iVar2 + -0x4011)) goto LAB_006206f8;
      }
      iVar3 = 0;
    }
    else {
      iVar3 = 100;
    }
  }
LAB_006206f8:
  param_4[1] = 100;
  *param_4 = iVar3;
  return;
}



void fn_0062038c(undefined4 param_1,int param_2,char *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  bool bVar10;
  
  if (param_2 - 0x10U < 8) {
    pcVar9 = param_3 + param_2 * 0x418 + -0x4080;
  }
  else {
    pcVar9 = (char *)0x0;
  }
  uVar6 = 0;
  uVar8 = 100;
  iVar2 = fn_00691d94(param_1);
  if (pcVar9 == (char *)0x0) {
    if (iVar2 != 0) {
      return;
    }
    goto LAB_00620618;
  }
  iVar3 = fn_006f44fc(pcVar9,0x1b5);
  if (iVar3 != 0) {
    uVar6 = (uint)(iVar2 != 0);
    if (iVar2 != 0) {
      uVar8 = 1;
    }
    goto LAB_00620618;
  }
  if (iVar2 == 0) goto LAB_00620618;
  iVar2 = fn_001639e4(param_1);
  if (iVar2 == 7) {
    uVar6 = fn_00691af0(param_1,2);
    uVar5 = fn_00691af0(param_1,3);
    uVar8 = uVar5;
    goto LAB_006205c4;
  }
  iVar2 = fn_001639e4(param_1);
  if (iVar2 == 0xd) {
    uVar6 = 1;
    uVar8 = 1;
LAB_006205cc:
    uVar5 = (uint)pcVar9[0x9a];
    if ((int)uVar5 < 1) {
      uVar5 = (uint)pcVar9[0x9b];
    }
    if ((int)uVar5 < 1) goto LAB_006205ec;
    uVar6 = 1;
  }
  else {
    iVar2 = fn_006f4044(pcVar9);
    iVar3 = 0;
    do {
      if ((int)(&DAT_007f0434)[iVar3 * 3] <= iVar2) {
        iVar7 = (&DAT_007f0438)[iVar3 * 3];
        uVar8 = (&DAT_007f043c)[iVar3 * 3];
        break;
      }
      iVar3 = iVar3 + 1;
      iVar7 = 0;
    } while (iVar3 < 0x14);
    iVar7 = iVar7 * 100;
    uVar8 = uVar8 * 100;
    iVar2 = fn_0061be08(param_2);
    if ((iVar2 == 0) && (iVar2 = fn_00145adc(param_3 + 0xe8), iVar2 != 0)) {
      iVar7 = iVar7 / 2;
    }
    iVar2 = fn_006f33f0(pcVar9,0x18a);
    iVar3 = fn_006f33f0(pcVar9,0x18b);
    iVar4 = fn_006f33f0(pcVar9,0x18c);
    uVar6 = iVar7 + iVar2 * 100 + iVar3 * 200 + iVar4 * 400;
    iVar2 = fn_006f44fc(pcVar9,0x8c);
    if (iVar2 != 0) {
      uVar6 = uVar6 * 2;
    }
    iVar2 = fn_006f44fc(pcVar9,0x8d);
    if (iVar2 != 0) {
      iVar2 = fn_00176dc0(pcVar9);
      if ((int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x1d)) >> 3 < (int)*(short *)(pcVar9 + 0x1c)) {
        iVar2 = fn_00176dc0(pcVar9);
        if ((int)*(short *)(pcVar9 + 0x1c) <= (int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x1e)) >> 2) {
          uVar6 = uVar6 << 3;
        }
      }
      else {
        uVar6 = uVar6 << 4;
      }
    }
    uVar5 = fn_006f4850(param_3 + 0xe8);
    if (uVar5 == 0) {
      uVar5 = (uint)*param_3;
      if ((int)uVar5 < 0x13) {
        if (8 < (int)uVar5) goto LAB_006205a4;
      }
      else {
        uVar6 = uVar6 << 2;
      }
    }
    else {
LAB_006205a4:
      uVar6 = uVar6 << 1;
    }
LAB_006205c4:
    if (0 < (int)uVar6) goto LAB_006205cc;
LAB_006205ec:
    bVar10 = uVar8 == uVar6;
    if ((int)uVar6 < (int)uVar8) {
      uVar5 = (uint)pcVar9[0x9c];
    }
    uVar1 = uVar8 - uVar6;
    if ((int)uVar8 > (int)uVar6) {
      bVar10 = uVar5 == 0;
      uVar1 = uVar5;
    }
    if (bVar10 || (int)uVar1 < 0 != ((int)uVar8 <= (int)uVar6 && SBORROW4(uVar8,uVar6)))
    goto LAB_00620618;
    uVar6 = 0;
  }
  uVar8 = 1;
LAB_00620618:
  *param_4 = uVar6;
  param_4[1] = uVar8;
  return;
}


