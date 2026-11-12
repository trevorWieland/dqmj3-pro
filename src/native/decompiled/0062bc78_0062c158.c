#include "0062bc78_0062c158.h"



void fn_0062c158(undefined4 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  *param_2 = 0;
  *param_3 = 0;
  iVar2 = fn_00691860(param_1);
  uVar3 = fn_0069187c(param_1);
  iVar4 = fn_0069180c(iVar2);
  uVar1 = (undefined1)uVar3;
  if (iVar4 == 0) {
    *param_3 = (char)iVar2;
    iVar4 = fn_0069180c(uVar3);
    if (iVar4 == 0) {
      if (iVar2 == 0) {
        *param_3 = uVar1;
      }
    }
    else {
      *param_2 = uVar1;
    }
  }
  else {
    *param_2 = (char)iVar2;
    *param_3 = uVar1;
  }
  return;
}



undefined4
fn_0062bf78(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int param_5,int *param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  int local_48 [6];
  int local_30 [3];
  
  piVar9 = local_48;
  piVar8 = local_48;
  piVar10 = local_48;
  iVar2 = fn_001639e4();
  if (iVar2 != 0x3d) {
    return 0;
  }
  iVar2 = param_4 + param_2 * 0x418;
  iVar11 = iVar2 + -0x4080;
  uVar3 = fn_00691af0(param_1,1);
  uVar4 = fn_00691af0(param_1,0);
  iVar5 = fn_0063a510(uVar4,uVar3);
  iVar5 = iVar5 + (uint)*(byte *)(iVar2 + -0x4028);
  if (iVar5 == 0) {
    return 0;
  }
  iVar5 = *param_6 + iVar5;
  local_48[2] = fn_0069259c(param_1);
  if ((iVar11 != 0) && (iVar6 = fn_006f44fc(iVar11,0x1a5), iVar6 != 0)) {
    local_48[1] = local_48[2] << 1;
    local_30[0] = -9999;
    local_30[1] = 9999;
    if (local_48[1] < -9999) {
      piVar7 = local_30;
    }
    else {
      piVar7 = local_48 + 1;
    }
    if (*piVar7 < 10000) {
      if (local_48[1] < -9999) {
        piVar7 = local_30;
      }
      else {
        piVar7 = local_48 + 1;
      }
    }
    else {
      piVar7 = local_30 + 1;
    }
    local_48[2] = *piVar7;
  }
  cVar1 = *(char *)(param_5 + 0xd);
  bVar12 = cVar1 == '\x06';
  if (!bVar12) {
    cVar1 = *(char *)(param_4 + 1);
  }
  if ((bVar12 || cVar1 == '\b') ||
     (((iVar11 != 0 && (*(char *)(iVar2 + -0x4027) == '\x04')) || (local_48[2] == 0)))) {
    local_48[2] = 9999;
    local_48[0] = iVar5;
    local_48[1] = 0xffffd8f1;
    if (iVar5 < -9999) {
      piVar9 = local_48 + 1;
    }
    if (9999 < *piVar9) goto LAB_0062c0f0;
    if (-10000 < iVar5) goto LAB_0062c10c;
  }
  else {
    local_48[0] = -local_48[2];
    local_48[1] = iVar5;
    if (local_48[2] * -2 != 0 && local_48[2] * -2 < 0 == SBORROW4(local_48[0],local_48[2])) {
                    /* WARNING: Subroutine does not return */
      fn_00146590();
    }
    if (-iVar5 == local_48[2] || local_48[0] < iVar5) {
      piVar10 = local_48 + 1;
    }
    if (local_48[2] < *piVar10) {
LAB_0062c0f0:
      piVar8 = local_48 + 2;
      goto LAB_0062c10c;
    }
    if (-iVar5 != local_48[2] && iVar5 <= local_48[0]) goto LAB_0062c10c;
  }
  piVar8 = local_48 + 1;
LAB_0062c10c:
  *param_6 = *piVar8;
  return 1;
}



int fn_0062bc94(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  
  uVar8 = 0;
  while( true ) {
    cVar1 = (&DAT_007f0650)[uVar8 * 0xc];
    piVar2 = &DAT_007f0658 + uVar8 * 3;
    iVar3 = fn_00691994(param_1);
    if (iVar3 == cVar1) break;
    uVar8 = uVar8 + 1;
    if (8 < uVar8) {
      return 0;
    }
  }
  iVar3 = fn_00691994(param_1);
  iVar4 = param_3 + param_2 * 0x418;
  iVar9 = iVar4 + -0x4080;
  if (iVar3 != 0) {
    iVar3 = fn_00145adc(param_3 + 0xe8);
    if (iVar3 == 0) {
      iVar4 = fn_006f4044(iVar9);
      iVar3 = fn_0063a510(0x4b,100,param_4);
      iVar4 = iVar4 * iVar3;
    }
    else {
      iVar4 = fn_006f4044(iVar9);
      iVar3 = fn_0063a510(0x32,100,param_4);
      iVar4 = iVar4 * iVar3;
    }
    if (*(char *)(param_3 + 1) != '\x01') {
      piVar2 = &DAT_007f0654 + uVar8 * 3;
    }
    return iVar4 / 100 + *piVar2;
  }
  iVar3 = -10000;
  if ((*(char *)(param_3 + 1) == '\x02') && (iVar5 = fn_006f44fc(iVar9,0x1b4), iVar5 == 0)) {
    iVar3 = fn_0063a54c(0xffffd8f0,29999);
    return iVar3;
  }
  sVar7 = 0;
  iVar5 = fn_00145adc(param_3 + 0xe8);
  if (iVar5 == 0) {
    iVar6 = fn_006f4044(iVar9);
    iVar5 = fn_0063a510(0x4b,100,param_4);
    iVar6 = iVar6 * iVar5;
  }
  else {
    iVar6 = fn_006f4044(iVar9);
    iVar5 = fn_0063a510(0x32,100,param_4);
    iVar6 = iVar6 * iVar5;
  }
  iVar5 = fn_006f44fc(iVar9,0x1b4);
  if (iVar5 != 0) {
    sVar7 = 0x1b4;
    goto LAB_0062beb8;
  }
  iVar5 = fn_006f44fc(iVar9,0x88);
  if (iVar5 == 0) {
    iVar5 = fn_006f44fc(iVar9,0x87);
    if (iVar5 != 0) {
LAB_0062be8c:
      sVar7 = 0x87;
      goto LAB_0062beb8;
    }
    iVar5 = fn_006f44fc(iVar9,0x86);
    if (iVar5 == 0) {
      iVar5 = fn_006f44fc(iVar9,0x89);
      if (iVar5 == 0) {
        iVar4 = fn_006f44fc(iVar9,0x46);
        if (iVar4 != 0) {
          sVar7 = 0x46;
        }
        goto LAB_0062beb8;
      }
      uVar8 = (uint)*(char *)(iVar4 + -0x4024);
      if (2 < (int)uVar8) goto LAB_0062be7c;
      if (0 < (int)uVar8) goto LAB_0062be8c;
      if (uVar8 < 0x80000000) goto LAB_0062beb8;
    }
    sVar7 = 0x86;
  }
  else {
LAB_0062be7c:
    sVar7 = 0x88;
  }
LAB_0062beb8:
  uVar8 = 0;
  if (*(char *)(param_3 + 1) != '\x01') {
    iVar3 = 0;
  }
  do {
    if ((&DAT_007f0614)[uVar8 * 6] == sVar7) {
      if (*(char *)(param_3 + 1) == '\x01') {
        sVar7 = (short)(&DAT_007f061c)[uVar8 * 3];
      }
      else {
        sVar7 = (short)(&DAT_007f0618)[uVar8 * 3];
      }
      iVar3 = (int)sVar7;
      break;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 5);
  return iVar6 / 100 + iVar3;
}



int fn_0062bc78(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  
  sVar8 = *(short *)(param_3 + 0xc);
  cVar2 = *(char *)(param_3 + 5);
  uVar9 = 0;
  while( true ) {
    cVar1 = (&DAT_007f0650)[uVar9 * 0xc];
    piVar3 = &DAT_007f0658 + uVar9 * 3;
    iVar4 = fn_00691994((int)sVar8);
    if (iVar4 == cVar1) break;
    uVar9 = uVar9 + 1;
    if (8 < uVar9) {
      return 0;
    }
  }
  iVar4 = fn_00691994((int)sVar8);
  iVar5 = param_2 + cVar2 * 0x418;
  iVar10 = iVar5 + -0x4080;
  if (iVar4 != 0) {
    iVar4 = fn_00145adc(param_2 + 0xe8);
    if (iVar4 == 0) {
      iVar5 = fn_006f4044(iVar10);
      iVar4 = fn_0063a510(0x4b,100,0);
      iVar5 = iVar5 * iVar4;
    }
    else {
      iVar5 = fn_006f4044(iVar10);
      iVar4 = fn_0063a510(0x32,100,0);
      iVar5 = iVar5 * iVar4;
    }
    if (*(char *)(param_2 + 1) != '\x01') {
      piVar3 = &DAT_007f0654 + uVar9 * 3;
    }
    return iVar5 / 100 + *piVar3;
  }
  iVar4 = -10000;
  if ((*(char *)(param_2 + 1) == '\x02') && (iVar6 = fn_006f44fc(iVar10,0x1b4), iVar6 == 0)) {
    iVar4 = fn_0063a54c(0xffffd8f0,29999);
    return iVar4;
  }
  sVar8 = 0;
  iVar6 = fn_00145adc(param_2 + 0xe8);
  if (iVar6 == 0) {
    iVar7 = fn_006f4044(iVar10);
    iVar6 = fn_0063a510(0x4b,100,0);
    iVar7 = iVar7 * iVar6;
  }
  else {
    iVar7 = fn_006f4044(iVar10);
    iVar6 = fn_0063a510(0x32,100,0);
    iVar7 = iVar7 * iVar6;
  }
  iVar6 = fn_006f44fc(iVar10,0x1b4);
  if (iVar6 != 0) {
    sVar8 = 0x1b4;
    goto LAB_0062beb8;
  }
  iVar6 = fn_006f44fc(iVar10,0x88);
  if (iVar6 == 0) {
    iVar6 = fn_006f44fc(iVar10,0x87);
    if (iVar6 != 0) {
LAB_0062be8c:
      sVar8 = 0x87;
      goto LAB_0062beb8;
    }
    iVar6 = fn_006f44fc(iVar10,0x86);
    if (iVar6 == 0) {
      iVar6 = fn_006f44fc(iVar10,0x89);
      if (iVar6 == 0) {
        iVar5 = fn_006f44fc(iVar10,0x46);
        if (iVar5 != 0) {
          sVar8 = 0x46;
        }
        goto LAB_0062beb8;
      }
      uVar9 = (uint)*(char *)(iVar5 + -0x4024);
      if (2 < (int)uVar9) goto LAB_0062be7c;
      if (0 < (int)uVar9) goto LAB_0062be8c;
      if (uVar9 < 0x80000000) goto LAB_0062beb8;
    }
    sVar8 = 0x86;
  }
  else {
LAB_0062be7c:
    sVar8 = 0x88;
  }
LAB_0062beb8:
  uVar9 = 0;
  if (*(char *)(param_2 + 1) != '\x01') {
    iVar4 = 0;
  }
  do {
    if ((&DAT_007f0614)[uVar9 * 6] == sVar8) {
      if (*(char *)(param_2 + 1) == '\x01') {
        sVar8 = (short)(&DAT_007f061c)[uVar9 * 3];
      }
      else {
        sVar8 = (short)(&DAT_007f0618)[uVar9 * 3];
      }
      iVar4 = (int)sVar8;
      break;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 5);
  return iVar7 / 100 + iVar4;
}


