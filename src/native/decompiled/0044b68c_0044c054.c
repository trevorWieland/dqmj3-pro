#include "0044b68c_0044c054.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}

static void svc_0x24(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x24 }
#endif
}

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


undefined1 * fn_0044bf48(void)

{
  int iVar1;
  undefined1 *puVar2;
  int local_10;
  
  local_10 = 0;
  iVar1 = fn_0044fc98(&local_10,0);
  if (iVar1 < 0) {
    puVar2 = (undefined1 *)0xf9609ff3;
  }
  else {
    if (local_10 == 0) {
      puVar2 = &DAT_e0409fff;
    }
    else {
      puVar2 = (undefined1 *)fn_0044c00c();
    }
    if ((-1 < (int)puVar2) && (svc_0x24(), local_10 < 0)) {
      fn_0015e294();
    }
    if (local_10 != 0) {
      svc_0x23();
      local_10 = 0;
    }
    if ((int)puVar2 < 0) {
      return puVar2;
    }
    puVar2 = (undefined1 *)fn_0044c158();
  }
  if (local_10 != 0) {
    svc_0x23();
  }
  return puVar2;
}



int fn_0044c00c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x80004;
  *(undefined4 *)(iVar2 + 0x90) = param_1;
  *(undefined4 *)(iVar2 + 0x8c) = 0;
  *(undefined4 *)(iVar2 + 0x84) = 0x20;
  svc_0x32();
  iVar1 = DAT_008bfae8;
  if (-1 < DAT_008bfae8) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



void fn_0044beb4(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
  }
  if (param_1 != (int *)0x0 && iVar1 != 0) {
    fn_0044c3f8(iVar1);
    return;
  }
  return;
}



undefined1 * fn_0044bd80(undefined4 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    return &DAT_e0409fff;
  }
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xd0000;
  svc_0x32();
  puVar1 = DAT_008bfae8;
  if (-1 < (int)DAT_008bfae8) {
    *param_1 = *(undefined4 *)(iVar2 + 0x88);
    puVar1 = *(undefined1 **)(iVar2 + 0x84);
  }
  return puVar1;
}



void fn_0044bd68(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  fn_0044c29c(param_1);
  return;
}



undefined1 * fn_0044bd50(undefined4 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    return &DAT_e0409fff;
  }
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xa0000;
  svc_0x32();
  puVar1 = DAT_008bfae8;
  if (-1 < (int)DAT_008bfae8) {
    *param_1 = *(undefined4 *)(iVar2 + 0x88);
    puVar1 = *(undefined1 **)(iVar2 + 0x84);
  }
  return puVar1;
}



int fn_0044bd28(void)

{
  int iVar1;
  
  iVar1 = fn_0044c194();
  if (iVar1 != -0x1edf63ba) {
    fn_0044bed4();
  }
  return iVar1;
}



int fn_0044bed4(void)

{
  int iVar1;
  int iVar2;
  
  fn_00170704(&DAT_008e31e8);
  iVar1 = 0;
  if (DAT_0089a538 != '\0') {
    iVar1 = fn_00454a70();
    DAT_0089a538 = '\0';
    iVar2 = fn_00454af0();
    if (iVar2 < 0) {
      iVar1 = iVar2;
    }
  }
  fn_001707b4(&DAT_008e31e8);
  return iVar1;
}



bool fn_0044bcec(void)

{
  bool bVar1;
  
  fn_00170704(&DAT_008e31e8);
  bVar1 = DAT_0089a53c != 0;
  fn_001707b4(&DAT_008e31e8);
  return bVar1;
}



undefined1 * fn_0044bc9c(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined1 *puVar2;
  uint local_20 [4];
  
  if (param_2 == (undefined4 *)0x0) {
    return &DAT_e0409fff;
  }
  fn_001237bc();
  iVar1 = fn_00453d0c();
  fn_0013c674();
  if (iVar1 == 0) {
    return (undefined1 *)0xc9209f84;
  }
  local_20[0] = param_4;
  puVar2 = (undefined1 *)fn_0044c1d0(param_1,local_20);
  if (-1 < (int)puVar2) {
    if ((local_20[0] & 0xff) == 0) {
      fn_00170704(&DAT_008e31e8);
      puVar2 = (undefined1 *)0x0;
      if ((DAT_0089a538 == '\0') && (puVar2 = (undefined1 *)fn_0010b500(), -1 < (int)puVar2)) {
        puVar2 = (undefined1 *)fn_00454a2c(1);
        if ((int)puVar2 < 0) {
          fn_00454af0();
        }
        else {
          DAT_0089a538 = '\x01';
        }
      }
      fn_001707b4(&DAT_008e31e8);
      if ((int)puVar2 < 0) {
        return puVar2;
      }
      fn_0044c388(param_1,param_1,0);
    }
    else {
      fn_0044c0f8(param_1,param_1);
    }
    puVar2 = (undefined1 *)fn_0044c0a0(param_1,*param_2);
  }
  return puVar2;
}



int fn_0044bc3c(void)

{
  int iVar1;
  uint in_r3;
  bool bVar2;
  uint local_10;
  
  local_10 = in_r3;
  fn_00170704(&DAT_008e31e8);
  bVar2 = DAT_0089a53c == 0;
  fn_001707b4(&DAT_008e31e8);
  if ((bVar2) && (iVar1 = fn_0044bd98(), iVar1 == 0)) {
    return 0;
  }
  local_10 = local_10 & 0xffffff00;
  fn_0044c054(0,&local_10);
  return (int)(char)local_10;
}



int fn_0044c054(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x3e0042;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  *(undefined4 *)(iVar2 + 0x88) = 0x20;
  svc_0x32();
  iVar1 = DAT_008bfae8;
  if (-1 < DAT_008bfae8) {
    *param_2 = *(undefined1 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0044bb24(void)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  fn_00170704(&DAT_008e31e8);
  iVar1 = fn_0044bd98();
  if (iVar1 != 0) {
    fn_001707b4(&DAT_008e31e8);
    return -0x275f6007;
  }
  fn_00170704(&DAT_008e31e8);
  bVar3 = DAT_0089a53c != 0;
  fn_001707b4(&DAT_008e31e8);
  if (bVar3) {
    DAT_0089a53c = DAT_0089a53c + 1;
    fn_001707b4(&DAT_008e31e8);
    return 0x209ff9;
  }
  iVar1 = fn_0013db70();
  if (-1 < iVar1) {
    uVar2 = fn_002febd8(&DAT_007d6400);
    iVar1 = fn_0014fe94(&DAT_008bfae8,&DAT_007d6400,uVar2,0);
    if (-1 < iVar1) {
      DAT_0089a53c = DAT_0089a53c + 1;
      fn_0044c25c(0xb0501c8);
      fn_001707b4(&DAT_008e31e8);
      return 0;
    }
  }
  fn_001707b4(&DAT_008e31e8);
  return iVar1;
}



bool fn_0044bd98(void)

{
  bool bVar1;
  
  fn_00170704(&DAT_008e31e8);
  bVar1 = DAT_008bfaec != 0;
  fn_001707b4(&DAT_008e31e8);
  return bVar1;
}



void fn_0044badc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0016a50c();
  puVar1[2] = param_3;
  *puVar1 = &DAT_0083f440;
  puVar1[1] = param_2;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  puVar1[5] = param_4;
  return;
}



undefined4 fn_0044b68c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_005a56e4(param_1,L"rom:/data/Layout/menu/wifi_ranking_battle/upper/gp_result_list.arc",
               (char *)&DAT_0044b6d8);
  fn_005a5dc0(param_1);
  iVar1 = fn_002f68a4(param_1);
  fn_005a58d4(param_1,iVar1 + -1);
  uVar2 = fn_00178f90(param_1);
  fn_006889d8(uVar2,(char *)&DAT_0044b6f4,0);
  return 1;
}


