#include "0062c1c8_0062c7b0.h"



void fn_0062c7b0(undefined1 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 == 0) {
    iVar5 = 0x14;
    iVar1 = 0x18;
    iVar3 = 0x1c;
    iVar4 = 0x20;
  }
  else {
    iVar5 = 0x10;
    iVar1 = 0x14;
    iVar3 = 0x18;
    iVar4 = 0x1c;
  }
  iVar1 = iVar1 - iVar5;
  *param_1 = 0;
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      iVar1 = (int)(char)((char)iVar1 + -1);
      param_1[iVar2 + 4] = (char)iVar5 + (char)iVar2;
      iVar2 = iVar2 + 1;
    } while (iVar1 != 0);
  }
  iVar4 = iVar4 - iVar3;
  if (0 < iVar4) {
    iVar1 = 0;
    do {
      iVar4 = (int)(char)((char)iVar4 + -1);
      param_1[iVar1 + 8] = (char)iVar3 + (char)iVar1;
      iVar1 = iVar1 + 1;
    } while (iVar4 != 0);
  }
  return;
}



int fn_0062c774(int param_1,int param_2)

{
  return (*(short *)(param_2 + param_1 * 0x418 + -0x4064) * 0x50) / 100 + 1;
}



void fn_0062c528(undefined4 param_1,int param_2,char *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  bool bVar7;
  
  if (param_2 - 0x10U < 8) {
    pcVar6 = param_3 + param_2 * 0x418 + -0x4080;
  }
  else {
    pcVar6 = (char *)0x0;
  }
  iVar4 = 0;
  iVar5 = 100;
  iVar1 = fn_00692320();
  if (pcVar6 == (char *)0x0) {
    if (iVar1 != 0) {
      return;
    }
    goto LAB_0062c758;
  }
  iVar2 = fn_006f44fc(pcVar6,0x1b6);
  if (iVar2 != 0) {
    if (iVar1 != 0) {
      iVar4 = 1;
      iVar5 = 1;
    }
    goto LAB_0062c758;
  }
  if (iVar1 == 0) goto LAB_0062c758;
  iVar1 = fn_006f3f7c(pcVar6);
  iVar2 = 0;
  do {
    if ((int)(&DAT_007f0524)[iVar2 * 3] <= iVar1) {
      iVar4 = (&DAT_007f0528)[iVar2 * 3];
      iVar5 = (&DAT_007f052c)[iVar2 * 3];
      break;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x14);
  iVar4 = iVar4 * 100;
  iVar5 = iVar5 * 100;
  iVar1 = fn_0061be08(param_2);
  if ((iVar1 == 0) && (iVar1 = fn_00145adc(param_3 + 0xe8), iVar1 != 0)) {
    iVar4 = iVar4 / 2;
  }
  iVar1 = fn_006f33f0(pcVar6,0x18d);
  iVar2 = fn_006f33f0(pcVar6,0x18e);
  iVar3 = fn_006f33f0(pcVar6,399);
  iVar4 = iVar4 + iVar1 * 100 + iVar2 * 200 + iVar3 * 400;
  iVar1 = fn_006f44fc(pcVar6,0x8e);
  if (iVar1 != 0) {
    iVar4 = iVar4 * 2;
  }
  iVar1 = fn_006f44fc(pcVar6,0x8f);
  if (iVar1 != 0) {
    iVar1 = fn_00176dc0(pcVar6);
    if ((int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1d)) >> 3 < (int)*(short *)(pcVar6 + 0x1c)) {
      iVar1 = fn_00176dc0(pcVar6);
      if ((int)*(short *)(pcVar6 + 0x1c) <= (int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1e)) >> 2) {
        iVar4 = iVar4 << 3;
      }
    }
    else {
      iVar4 = iVar4 << 4;
    }
  }
  iVar1 = fn_006f4850(param_3 + 0xe8);
  if (iVar1 == 0) {
    iVar1 = (int)*param_3;
    if (iVar1 < 0x13) {
      if (8 < iVar1) goto LAB_0062c6f8;
    }
    else {
      iVar4 = iVar4 << 2;
    }
  }
  else {
LAB_0062c6f8:
    iVar4 = iVar4 << 1;
  }
  if (iVar4 < 1) {
LAB_0062c71c:
    bVar7 = iVar5 == iVar4;
    if (iVar4 < iVar5) {
      iVar1 = (int)pcVar6[0x9c];
    }
    iVar2 = iVar5 - iVar4;
    if (iVar5 > iVar4) {
      bVar7 = iVar1 == 0;
      iVar2 = iVar1;
    }
    if (bVar7 || iVar2 < 0 != (iVar5 <= iVar4 && SBORROW4(iVar5,iVar4))) goto LAB_0062c758;
    iVar4 = 0;
  }
  else {
    iVar1 = (int)pcVar6[0x9a];
    if (iVar1 < 1) {
      iVar1 = (int)pcVar6[0x9b];
    }
    if (iVar1 < 1) goto LAB_0062c71c;
    iVar4 = 1;
  }
  iVar5 = 1;
LAB_0062c758:
  *param_4 = iVar4;
  param_4[1] = iVar5;
  return;
}



int fn_0062c448(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int local_18;
  int local_14 [3];
  
  piVar1 = &local_18;
  local_14[0] = fn_00691af0(param_2,1);
  local_14[0] = local_14[0] * param_1;
  local_18 = 9999;
  if (local_14[0] < -9999) {
    piVar2 = local_14 + 1;
  }
  else {
    piVar2 = local_14;
  }
  local_14[1] = 0xffffd8f1;
  if (*piVar2 < 10000) {
    if (local_14[0] < -9999) {
      piVar1 = local_14 + 1;
    }
    else {
      piVar1 = local_14;
    }
  }
  return *piVar1;
}



int fn_0062c3fc(undefined4 param_1,int param_2,int param_3)

{
  short sVar1;
  
  sVar1 = fn_00691af0(param_1,1);
  return ((int)*(short *)(param_3 + param_2 * 0x418 + -0x4064) * (int)sVar1) / 100 + 1;
}



void fn_0062c2ec(char *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  
  iVar7 = param_6 + param_4 * 8;
  iVar8 = param_6 + param_5 * 8;
  cVar3 = *(char *)(iVar7 + 0x4182);
  cVar6 = *(char *)(iVar8 + 0x4182);
  if (cVar3 == '\0' && cVar6 == '\0') {
    return;
  }
  bVar2 = false;
  bVar1 = false;
  pcVar9 = param_1;
  if (0 < param_2) {
    do {
      if (*pcVar9 == cVar3) {
        bVar2 = true;
      }
      if (*pcVar9 == cVar6) {
        bVar1 = true;
      }
      param_2 = param_2 + -1;
      pcVar9 = pcVar9 + 1;
    } while (param_2 != 0);
  }
  if (!(bool)(bVar2 | bVar1)) {
    return;
  }
  cVar3 = *param_1;
  if (param_1[1] < cVar3) {
    cVar3 = cVar3 + -1;
  }
  cVar6 = '\0';
  cVar4 = '\0';
  if (param_3 < 2) {
    cVar5 = cVar3;
    if (!bVar2) {
      if (bVar1) {
        cVar4 = cVar3;
      }
      goto LAB_0062c3a4;
    }
  }
  else {
    if (bVar2) {
      cVar6 = cVar3;
    }
    if (bVar1) {
      cVar4 = cVar3;
    }
    cVar5 = cVar6;
    if (!bVar2) goto LAB_0062c3a4;
  }
  *(char *)(iVar7 + 0x4182) = cVar5;
  cVar6 = cVar5;
LAB_0062c3a4:
  if (bVar1) {
    *(char *)(iVar8 + 0x4182) = cVar4;
  }
  param_6 = param_6 + cVar3 * 0x418;
  *(bool *)(param_6 + -0x3fd7) = cVar6 != '\0';
  *(bool *)(param_6 + -0x3fd6) = cVar4 != '\0';
  return;
}



undefined4 fn_0062c1c8(int param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*param_2 == '\0') {
    if (param_2[1] == '\0') {
      return 0;
    }
  }
  else {
    iVar1 = 0x18;
    uVar3 = 1;
    do {
      if (*(char *)(param_1 + iVar1 * 0x418 + -0x3c6c) != '\0') {
        uVar3 = 0;
        uVar2 = 0x18;
        goto LAB_0062c24c;
      }
      iVar1 = (int)(char)((char)iVar1 + '\x01');
    } while (iVar1 < 0x1c);
    uVar2 = 0x10;
LAB_0062c24c:
    fn_00654efc(param_1,0x20,0x22,uVar2,1,uVar3,param_3);
    if (param_2[1] == '\0') {
      return 1;
    }
  }
  iVar1 = 0x1c;
  uVar3 = 1;
  do {
    if (*(char *)(param_1 + iVar1 * 0x418 + -0x3c6c) != '\0') {
      uVar3 = 0;
      uVar2 = 0x1c;
      goto LAB_0062c2c4;
    }
    iVar1 = (int)(char)((char)iVar1 + '\x01');
  } while (iVar1 < 0x20);
  uVar2 = 0x14;
LAB_0062c2c4:
  fn_00654efc(param_1,0x21,0x23,uVar2,0,uVar3,param_3);
  return 1;
}


