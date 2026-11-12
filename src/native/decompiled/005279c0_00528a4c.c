#include "005279c0_00528a4c.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


void fn_00528a4c(int param_1)

{
  int *piVar1;
  
  fn_00170704();
  *(undefined1 *)(param_1 + 0x42) = 1;
  fn_0044f450(param_1 + 0x1c);
  while (piVar1 = *(int **)(param_1 + 8), piVar1 != (int *)0x0) {
    if ((int *)*piVar1 == piVar1) {
      *(int *)(param_1 + 8) = 0;
    }
    else {
      *(int *)(param_1 + 8) = piVar1[1];
      *(int *)piVar1[1] = *piVar1;
      *(int *)(*piVar1 + 4) = piVar1[1];
    }
    piVar1[1] = 0;
    *piVar1 = 0;
    if (piVar1[2] != 0) {
      svc_0x23();
      piVar1[2] = 0;
    }
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
  }
  while (piVar1 = *(int **)(param_1 + 0xc), piVar1 != (int *)0x0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    if ((int *)*piVar1 == piVar1) {
      *(int *)(param_1 + 0xc) = 0;
    }
    else {
      *(int *)(param_1 + 0xc) = piVar1[1];
      *(int *)piVar1[1] = *piVar1;
      *(int *)(*piVar1 + 4) = piVar1[1];
    }
    piVar1[1] = 0;
    *piVar1 = 0;
    if (piVar1[2] != 0) {
      svc_0x23();
      piVar1[2] = 0;
    }
  }
  fn_001707b4(param_1 + 0x10);
  return;
}



int fn_0052853c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_c;
  
  if (DAT_008c0360 == '\0') {
    iVar1 = -0x375f8c08;
  }
  else {
    local_c = DAT_008c0364;
    iVar1 = fn_0052a900(&local_c,param_1,param_2,param_3,param_4);
    if (-1 < iVar1) {
      iVar1 = 0;
    }
  }
  return iVar1;
}



int fn_00528038(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 local_14;
  
  if (DAT_008c0360 == '\0') {
    iVar1 = -0x375f8c08;
  }
  else {
    local_14 = DAT_008c0364;
    iVar1 = fn_0052a7d0(&local_14,param_1,param_2,param_3,param_4,param_5,param_6);
    if (-1 < iVar1) {
      iVar1 = 0;
    }
  }
  return iVar1;
}



int fn_00528018(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_0052a300(param_2);
  return iVar1 + param_1 + 0x3f94;
}



int fn_00527f9c(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_24;
  undefined4 local_20;
  int local_18 [3];
  
  local_18[1] = 0xc;
  local_18[0] = 0;
  iVar1 = fn_00529008(local_18,0xfffe,0x4003,&local_24,local_18 + 1);
  if (iVar1 < 0) {
    local_18[0] = fn_00529b0c();
  }
  if (-1 < local_18[0]) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = local_24;
    }
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = local_20;
    }
    local_18[0] = 0;
  }
  return local_18[0];
}



void fn_00527f7c(int param_1)

{
  int iVar1;
  
  if (DAT_008c035c == 0) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  do {
    if (*(int *)(param_1 + 0x14) != 0) {
      fn_0052a79c();
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      fn_0052a79c();
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    iVar1 = *(int *)(param_1 + 0x1c);
    fn_0052a79c(param_1);
    param_1 = iVar1;
  } while (iVar1 != 0);
  return;
}



int fn_00527f0c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x60000;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



uint fn_00527cf0(int *param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0x14))(param_1,param_8,param_6,param_7,param_4);
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3,param_4,param_5);
  if (uVar1 <= param_3) {
    iVar2 = (**(code **)(*param_1 + 0x1c))(param_1,param_2 + uVar1,param_3 - uVar1);
    uVar1 = uVar1 + iVar2;
  }
  (**(code **)(*param_1 + 8))(param_1);
  return uVar1;
}



uint fn_00527c04(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auStack_38 [20];
  
  puVar1 = param_1 + 2;
  uVar3 = (uint)*(char *)(param_1 + 1);
  uVar2 = *param_1;
  if (uVar3 != 0) {
    fn_00158f6c((int)puVar1 + uVar3,0x10 - uVar3);
    fn_00527570(param_1 + 6,puVar1,1,uVar2);
    fn_00756208(auStack_38,param_1 + 10,puVar1,1,uVar2);
    if (uVar3 < param_3) {
      param_3 = uVar3;
    }
    fn_00301a9c(param_2,auStack_38,param_3);
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return uVar3;
}



uint fn_00527b64(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auStack_30 [16];
  
  pcVar1 = (char *)(param_1 + 1);
  uVar3 = (uint)*pcVar1;
  uVar2 = *param_1;
  if (uVar3 != 0) {
    fn_00756208(auStack_30,param_1 + 10,param_1 + 2,1,uVar2);
    fn_00158f6c(auStack_30 + *pcVar1,0x10 - *pcVar1);
    fn_00527570(param_1 + 6,auStack_30,1,uVar2);
    if (uVar3 < param_3) {
      param_3 = uVar3;
    }
    fn_00301a9c(param_2,auStack_30,param_3);
    *pcVar1 = '\0';
  }
  return uVar3;
}



void fn_00527b14(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = (int)*(char *)(param_1 + 1);
  if (0 < iVar1) {
    fn_00158f6c((int)param_1 + iVar1 + 8,0x10 - iVar1);
    fn_00527570(param_1 + 6,param_1 + 2,1,*param_1);
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}



int fn_005279c0(undefined4 *param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 uVar6;
  int local_2c;
  
  puVar3 = param_1 + 2;
  uVar6 = *param_1;
  pbVar4 = (byte *)(param_1 + 1);
  iVar2 = (int)*(char *)(param_1 + 1);
  local_2c = 0;
  if (0 < iVar2) {
    uVar5 = 0x10U - iVar2;
    if (param_5 < 0x10U - iVar2) {
      uVar5 = param_5;
    }
    fn_00301a9c(iVar2 + (int)puVar3,param_4,uVar5);
    param_4 = param_4 + uVar5;
    param_5 = param_5 - uVar5;
    bVar1 = *pbVar4 + (char)uVar5;
    *pbVar4 = bVar1;
    if (bVar1 < 0x10) {
      return 0;
    }
    if (param_3 < 0x10) {
      return 0x10;
    }
    fn_00527570(param_1 + 6,puVar3,1,uVar6);
    fn_00756208(param_2,param_1 + 10,puVar3,1,uVar6);
    local_2c = (int)(char)*pbVar4;
    *pbVar4 = 0;
    param_2 = param_2 + local_2c;
    param_3 = param_3 - local_2c;
  }
  uVar5 = param_5 >> 4;
  if (param_3 >> 4 < uVar5) {
    local_2c = uVar5 << 4;
  }
  else {
    fn_00527570(param_1 + 6,param_4,uVar5,uVar6);
    fn_00756208(param_2,param_1 + 10,param_4,uVar5,uVar6);
    iVar2 = param_5 + uVar5 * -0x10;
    local_2c = local_2c + uVar5 * 0x10;
    if (iVar2 != 0) {
      fn_00301a9c(puVar3,param_4 + uVar5 * 0x10,iVar2);
    }
    *pbVar4 = (byte)iVar2;
  }
  return local_2c;
}


