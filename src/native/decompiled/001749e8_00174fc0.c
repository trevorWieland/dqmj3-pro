#include "001749e8_00174fc0.h"



void fn_00174fc0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_10 [4];
  
  iVar1 = fn_00164a34(param_1,param_2,param_1);
  if (iVar1 != 0) {
    local_10[0] = param_2;
    iVar1 = fn_00164a34(param_1,param_2);
    if (((iVar1 != 0) && (iVar1 = fn_0017484c(DAT_008977e4), iVar1 != 0)) &&
       (iVar1 = fn_00165bb4(iVar1,local_10), iVar1 != 0)) {
      fn_001747e0();
      return;
    }
  }
  return;
}



int fn_00174f10(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  uint uVar4;
  undefined4 unaff_r6;
  undefined4 in_lr;
  
  uVar4 = param_3 + 2U & 0xff;
  iVar1 = fn_001642a8();
  if (iVar1 - 1U < 699) {
    iVar1 = fn_00165cec(*(undefined4 *)(param_1 + 0xec),iVar1,uVar4);
    return iVar1;
  }
  iVar1 = fn_00165098(param_1,param_2);
  if (iVar1 - 1U < 0x21f) {
    piVar2 = *(int **)(param_1 + 0xf0);
  }
  else {
    iVar1 = fn_00165190(param_1,param_2);
    iVar3 = fn_00163940();
    if (iVar3 == 0) {
      return 0;
    }
    piVar2 = *(int **)(param_1 + 0xf4);
  }
  iVar1 = (**(code **)(*piVar2 + 8))
                    (piVar2,iVar1,*(code **)(*piVar2 + 8),param_4,unaff_r4,unaff_r5,unaff_r6,in_lr);
  return (int)*(short *)(piVar2[4] + iVar1 * 0x28 + uVar4 * 8 + 8);
}



undefined4 fn_00174d68(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  sVar1 = fn_00165020();
  if ((int)sVar1 - 1U < 699) {
    uVar2 = fn_00163a00();
    return uVar2;
  }
  iVar3 = fn_00165998(*(undefined4 *)(param_1 + 0x84));
  if ((iVar3 != 0) || (iVar3 = fn_001659ac(*(undefined4 *)(param_1 + 0x84)), iVar3 != 0)) {
    uVar2 = fn_00163a00(1);
    return uVar2;
  }
  iVar3 = fn_00165b0c(*(undefined4 *)(param_1 + 0x84));
  if ((iVar3 == 0) && (iVar3 = fn_00165b34(*(undefined4 *)(param_1 + 0x84)), iVar3 == 0)) {
    pcVar4 = (char *)fn_00175a0c(*(undefined4 *)(param_1 + 0x84),0);
    if (pcVar4 != (char *)0x0) {
      if (*pcVar4 == '\x01') {
        uVar2 = fn_00163a00((int)*(short *)(pcVar4 + 2));
        return uVar2;
      }
      if (*pcVar4 == '\x04') {
        switch(*(undefined2 *)(pcVar4 + 2)) {
        case 1:
        case 2:
        case 3:
        case 6:
        case 7:
        case 10:
        case 0xd:
        case 0xe:
        case 0xf:
          goto switchD_00174e28_caseD_1;
        }
      }
    }
    iVar3 = fn_00165af8(*(undefined4 *)(param_1 + 0x84));
    if ((((iVar3 != 0) || (iVar3 = fn_00165b20(*(undefined4 *)(param_1 + 0x84)), iVar3 != 0)) ||
        (iVar3 = fn_00175bd0(*(undefined4 *)(param_1 + 0x84)), iVar3 != 0)) ||
       ((iVar3 = fn_00165984(*(undefined4 *)(param_1 + 0x84)), iVar3 != 0 ||
        (iVar3 = fn_00165b48(*(undefined4 *)(param_1 + 0x84)), iVar3 != 0)))) {
switchD_00174e28_caseD_1:
      return 8;
    }
    iVar3 = fn_00165328(*(undefined4 *)(param_1 + 0x84));
    if (iVar3 == 0) {
      iVar3 = fn_00165b5c(*(undefined4 *)(param_1 + 0x84));
      uVar2 = 0;
      if (iVar3 != 0) {
        uVar2 = 5;
      }
      return uVar2;
    }
    uVar2 = 7;
  }
  else {
    uVar2 = 6;
  }
  return uVar2;
}



int fn_00174c80(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  uint uVar5;
  undefined4 unaff_r6;
  undefined4 in_lr;
  
  uVar5 = param_3 + 2U & 0xff;
  iVar2 = fn_001642a8();
  if (iVar2 - 1U < 699) {
    iVar2 = fn_00165cb0(*(undefined4 *)(param_1 + 0xec),iVar2,uVar5);
    return iVar2;
  }
  iVar2 = fn_00165098(param_1,param_2);
  if (iVar2 - 1U < 0x21f) {
    piVar3 = *(int **)(param_1 + 0xf0);
  }
  else {
    iVar2 = fn_00165190(param_1,param_2);
    iVar1 = fn_00163940();
    if (iVar1 == 0) {
      return 0;
    }
    piVar3 = *(int **)(param_1 + 0xf4);
  }
  iVar2 = (**(code **)(*piVar3 + 8))(piVar3,iVar2);
  iVar4 = piVar3[3] + *(int *)(piVar3[4] + iVar2 * 0x28 + uVar5 * 8 + 4) * 0x20;
  iVar1 = fn_003035b0(iVar4,&DAT_00165c44,iVar2 * 5,piVar3[3],unaff_r4,unaff_r5,unaff_r6,in_lr);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = iVar4;
  }
  return iVar2;
}



void fn_00174c60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_c;
  
  local_c = param_2;
  iVar1 = fn_00164a34(param_1,param_2,param_3,param_4,param_1);
  if (iVar1 != 0) {
    fn_001599b0(&local_c);
  }
  return;
}



int fn_00174c34(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84),param_3,param_4);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = (int)*(char *)(iVar1 + param_2 + 0x59);
  }
  return iVar2;
}



int fn_00174bf8(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00174828(DAT_008977e4);
  if (param_2 == 0) {
    iVar2 = 0x23;
  }
  else {
    iVar2 = 0x22;
  }
  return (int)*(char *)(iVar1 + iVar2 * 8 + 0x4180);
}



int fn_00174bac(undefined4 param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  if ((int)param_2 - 0x10U < 8) {
    iVar2 = fn_00174828(DAT_008977e4);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = (int)*(char *)(iVar2 + param_2 * 0x418 + -0x4027);
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



void fn_00174b78(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_00174828(DAT_008977e4);
  fn_001667f0(iVar1 + param_2 * 0x418 + -0x4080);
  return;
}



int fn_00174b04(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00174828(DAT_008977e4);
  if (param_2 == 0) {
    iVar2 = 0x21;
  }
  else {
    iVar2 = 0x20;
  }
  return (int)*(char *)(iVar1 + iVar2 * 8 + 0x4180);
}



undefined1 fn_00174aec(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = *(undefined1 *)(iVar2 + 6);
  }
  return uVar1;
}



bool fn_00174a8c(int param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if (*(char *)(param_1 + uVar2 * 2 + 0xd1) == param_2) {
      iVar1 = fn_00164a34(param_1);
      if (iVar1 == 0) {
        return (bool)2;
      }
      return *(char *)(param_1 + uVar2 * 2 + 0xd2) == '\0';
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 8);
  return (bool)2;
}



int fn_00174a74(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = (int)*(short *)(iVar1 + 8);
  }
  return iVar2;
}



void fn_001749e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 local_18;
  
  local_18 = param_4;
  iVar1 = fn_00164a34();
  if (iVar1 != 0) {
    local_18 = param_2;
    iVar1 = fn_00164a34(param_1,param_2);
    if ((((iVar1 != 0) && (iVar1 = fn_0017484c(DAT_008977e4), iVar1 != 0)) &&
        (piVar2 = (int *)fn_00165bb4(iVar1,&local_18), piVar2 != (int *)0x0)) &&
       ((**(code **)(*piVar2 + 0x14))(piVar2,param_3), (int)(char)param_2 - 0x10U < 8)) {
      fn_00164b0c(param_1);
      return;
    }
  }
  return;
}


