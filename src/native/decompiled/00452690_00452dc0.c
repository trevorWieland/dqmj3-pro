#include "00452690_00452dc0.h"

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


int fn_00452dc0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xa00c4;
  *(int *)(iVar2 + 0x84) = param_2;
  *(undefined4 *)(iVar2 + 0x88) = param_3;
  *(int *)(iVar2 + 0x8c) = param_5;
  *(uint *)(iVar2 + 0x90) = param_5 << 4 | 10;
  *(undefined4 *)(iVar2 + 0x94) = param_4;
  *(undefined4 *)(iVar2 + 0x9c) = param_1;
  *(uint *)(iVar2 + 0x98) = param_2 << 4 | 0xc;
  svc_0x32();
  iVar1 = DAT_008c071c;
  if (-1 < DAT_008c071c) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00452d1c(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                int param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x80102;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  *(undefined4 *)(iVar2 + 0x88) = param_2;
  *(undefined1 *)(iVar2 + 0x8c) = param_3;
  *(int *)(iVar2 + 0x90) = param_5;
  *(uint *)(iVar2 + 0x94) = param_5 << 4 | 10;
  *(undefined4 *)(iVar2 + 0x98) = param_4;
  svc_0x32();
  iVar1 = DAT_008c071c;
  if (-1 < DAT_008c071c) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00452b64(undefined4 param_1,undefined1 param_2,undefined4 param_3,int param_4,
                undefined4 param_5,int param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x70106;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  *(undefined1 *)(iVar2 + 0x88) = param_2;
  *(int *)(iVar2 + 0x8c) = param_4;
  *(int *)(iVar2 + 0x90) = param_6;
  *(uint *)(iVar2 + 0x94) = param_6 << 4 | 10;
  *(undefined4 *)(iVar2 + 0x98) = param_5;
  *(undefined4 *)(iVar2 + 0x9c) = 0x20a;
  *(undefined4 *)(iVar2 + 0xa0) = param_7;
  *(uint *)(iVar2 + 0xa4) = param_4 << 4 | 0xe;
  *(undefined4 *)(iVar2 + 0xa8) = param_3;
  svc_0x32();
  iVar1 = DAT_008c071c;
  if (-1 < DAT_008c071c) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_004529e0(undefined4 param_1,undefined1 param_2,undefined4 param_3,int param_4,
                undefined4 *param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x30104;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  *(undefined1 *)(iVar2 + 0x88) = param_2;
  *(int *)(iVar2 + 0x8c) = param_4;
  *(int *)(iVar2 + 0x90) = param_7;
  *(uint *)(iVar2 + 0x94) = param_4 << 4 | 10;
  *(undefined4 *)(iVar2 + 0x98) = param_3;
  *(uint *)(iVar2 + 0x9c) = param_7 << 4 | 0xc;
  *(undefined4 *)(iVar2 + 0xa0) = param_6;
  svc_0x32();
  iVar1 = DAT_008c071c;
  if (-1 < DAT_008c071c) {
    *param_5 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



undefined1 * fn_004529a4(undefined4 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  if (DAT_008c0720 != (undefined1 *)0x0) {
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(iVar2 + 0x80) = 0x100000;
    svc_0x32();
    puVar1 = DAT_008c0720;
    if (-1 < (int)DAT_008c0720) {
      *param_1 = *(undefined4 *)(iVar2 + 0x8c);
      puVar1 = *(undefined1 **)(iVar2 + 0x84);
    }
    return puVar1;
  }
  if (DAT_008c071c == (undefined1 *)0x0) {
    return &DAT_e0810bf8;
  }
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x100000;
  svc_0x32();
  puVar1 = DAT_008c071c;
  if (-1 < (int)DAT_008c071c) {
    *param_1 = *(undefined4 *)(iVar2 + 0x8c);
    puVar1 = *(undefined1 **)(iVar2 + 0x84);
  }
  return puVar1;
}



undefined1 * fn_00452968(undefined4 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  if (DAT_008c0720 != (undefined1 *)0x0) {
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(iVar2 + 0x80) = 0x4020002;
    *(undefined4 *)(iVar2 + 0x84) = 0x20;
    svc_0x32();
    puVar1 = DAT_008c0720;
    if (-1 < (int)DAT_008c0720) {
      *param_1 = *(undefined4 *)(iVar2 + 0x8c);
      puVar1 = *(undefined1 **)(iVar2 + 0x84);
    }
    return puVar1;
  }
  if (DAT_008c071c == (undefined1 *)0x0) {
    return &DAT_e0810bf8;
  }
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xf0000;
  svc_0x32();
  puVar1 = DAT_008c071c;
  if (-1 < (int)DAT_008c071c) {
    *param_1 = *(undefined4 *)(iVar2 + 0x8c);
    puVar1 = *(undefined1 **)(iVar2 + 0x84);
  }
  return puVar1;
}



undefined4 fn_00452888(void)

{
  while (DAT_008c071c == 0) {
    fn_0012d6a4(10000000,0);
  }
  return 0;
}



undefined1 * fn_00452864(void)

{
  if (DAT_008c071c == (undefined1 *)0x0) {
    return &DAT_e0810bf8;
  }
  svc_0x23();
  return DAT_008c071c;
}



void fn_00452818(undefined4 param_1)

{
  if (DAT_008c0720 != 0) {
    fn_00452ffc();
    return;
  }
  if (DAT_008c071c != 0) {
    fn_00452b0c(param_1);
  }
  return;
}



int fn_00452b0c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined1 **)(iVar2 + 0x80) = &LAB_00110104;
  *(int *)(iVar2 + 0x84) = param_2;
  *(undefined4 *)(iVar2 + 0x88) = param_3;
  *(undefined4 *)(iVar2 + 0x8c) = param_4;
  *(undefined4 *)(iVar2 + 0x90) = param_5;
  *(undefined4 *)(iVar2 + 0x94) = 0x20;
  *(undefined4 *)(iVar2 + 0xa0) = param_1;
  *(uint *)(iVar2 + 0x9c) = param_2 << 4 | 10;
  svc_0x32();
  iVar1 = DAT_008c071c;
  if (-1 < DAT_008c071c) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



void fn_004527b0(undefined4 param_1)

{
  if (DAT_008c0720 == 0) {
    if (DAT_008c071c != 0) {
      fn_00452a9c(param_1);
      return;
    }
  }
  else {
    fn_00452f8c();
  }
  return;
}



int fn_00452a9c(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(char **)(iVar2 + 0x80) = "CreateScoutGauge_";
  *(undefined4 *)(iVar2 + 0x8c) = param_5;
  *(undefined4 *)(iVar2 + 0x90) = param_6;
  *(undefined4 *)(iVar2 + 0x94) = 0x20;
  *(int *)(iVar2 + 0x84) = param_2;
  *(undefined4 *)(iVar2 + 0x88) = param_4;
  *(undefined4 *)(iVar2 + 0xa0) = param_1;
  *(uint *)(iVar2 + 0x9c) = param_2 << 4 | 0xc;
  svc_0x32();
  iVar1 = DAT_008c071c;
  if (-1 < DAT_008c071c) {
    *param_3 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



undefined1 * fn_00452774(undefined4 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  if (DAT_008c0720 != (undefined1 *)0x0) {
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(iVar2 + 0x80) = 0xe0000;
    svc_0x32();
    puVar1 = DAT_008c0720;
    if (-1 < (int)DAT_008c0720) {
      *param_1 = *(undefined4 *)(iVar2 + 0x88);
      puVar1 = *(undefined1 **)(iVar2 + 0x84);
    }
    return puVar1;
  }
  if (DAT_008c071c == (undefined1 *)0x0) {
    return &DAT_e0810bf8;
  }
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xe0000;
  svc_0x32();
  puVar1 = DAT_008c071c;
  if (-1 < (int)DAT_008c071c) {
    *param_1 = *(undefined4 *)(iVar2 + 0x88);
    puVar1 = *(undefined1 **)(iVar2 + 0x84);
  }
  return puVar1;
}



int fn_00452690(undefined4 *param_1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  undefined4 local_4;
  
  pbVar2 = (byte *)&local_10;
  local_4 = 0;
  local_10 = *param_1;
  local_10 = (local_10 & ~((unsigned int)0xff << 0)) | ((unsigned int)((byte)*param_1) & 0xff);
  local_c = param_1[1];
  local_8 = (uint)*(byte *)(param_1 + 2);
  iVar1 = 0;
  while ((byte)local_10 != 0) {
    uVar3 = (uint)*pbVar2;
    iVar1 = iVar1 * 0x10;
    if (uVar3 - 0x30 < 10) {
      iVar4 = uVar3 - 0x30;
    }
    else {
      iVar4 = uVar3 - 0x57;
    }
    if (iVar4 - 1U < 0xf) {
      iVar1 = iVar1 + iVar4;
    }
    pbVar2 = pbVar2 + 1;
    local_10 = (local_10 & ~((unsigned int)0xff << 0)) | ((unsigned int)(*pbVar2) & 0xff);
  }
  return iVar1;
}


