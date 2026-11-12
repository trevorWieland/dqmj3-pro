#include "00452e1c_004533a0.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


void fn_004533a0(undefined4 param_1)

{
  if (DAT_008c0720 != 0) {
    fn_004532bc();
    return;
  }
  if (DAT_008c071c != 0) {
    fn_00452dc0(param_1);
  }
  return;
}



undefined1 * fn_00453364(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  
  if (DAT_008c0720 != 0) {
    puVar1 = (undefined1 *)fn_00453274();
    return puVar1;
  }
  if (DAT_008c071c == (undefined1 *)0x0) {
    return &DAT_e0810bf8;
  }
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x900c2;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  *(int *)(iVar2 + 0x88) = param_3;
  *(undefined4 *)(iVar2 + 0x8c) = param_4;
  *(uint *)(iVar2 + 0x90) = param_3 << 4 | 10;
  *(undefined4 *)(iVar2 + 0x94) = param_2;
  svc_0x32();
  puVar1 = DAT_008c071c;
  if (-1 < (int)DAT_008c071c) {
    puVar1 = *(undefined1 **)(iVar2 + 0x84);
  }
  return puVar1;
}



int fn_004532bc(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

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
  iVar1 = DAT_008c0720;
  if (-1 < DAT_008c0720) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00453274(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x900c2;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  *(int *)(iVar2 + 0x88) = param_3;
  *(undefined4 *)(iVar2 + 0x8c) = param_4;
  *(uint *)(iVar2 + 0x90) = param_3 << 4 | 10;
  *(undefined4 *)(iVar2 + 0x94) = param_2;
  svc_0x32();
  iVar1 = DAT_008c0720;
  if (-1 < DAT_008c0720) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00453218(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
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
  iVar1 = DAT_008c0720;
  if (-1 < DAT_008c0720) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00453054(undefined4 param_1,undefined1 param_2,undefined4 param_3,int param_4,
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
  iVar1 = DAT_008c0720;
  if (-1 < DAT_008c0720) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00452ffc(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
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
  iVar1 = DAT_008c0720;
  if (-1 < DAT_008c0720) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00452f8c(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4,
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
  iVar1 = DAT_008c0720;
  if (-1 < DAT_008c0720) {
    *param_3 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00452ed0(undefined4 param_1,undefined1 param_2,undefined4 param_3,int param_4,
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
  iVar1 = DAT_008c0720;
  if (-1 < DAT_008c0720) {
    *param_5 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



undefined1 * fn_00452e94(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  if (DAT_008c0720 != 0) {
    puVar1 = (undefined1 *)fn_004531e0();
    return puVar1;
  }
  if (DAT_008c071c == (undefined1 *)0x0) {
    return &DAT_e0810bf8;
  }
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xb0040;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  svc_0x32();
  puVar1 = DAT_008c071c;
  if (-1 < (int)DAT_008c071c) {
    puVar1 = *(undefined1 **)(iVar2 + 0x84);
  }
  return puVar1;
}



int fn_004531e0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xb0040;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  svc_0x32();
  iVar1 = DAT_008c0720;
  if (-1 < DAT_008c0720) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



undefined1 * fn_00452e58(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  if (DAT_008c0720 != 0) {
    puVar1 = (undefined1 *)fn_004531a8();
    return puVar1;
  }
  if (DAT_008c071c == (undefined1 *)0x0) {
    return &DAT_e0810bf8;
  }
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xc0040;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  svc_0x32();
  puVar1 = DAT_008c071c;
  if (-1 < (int)DAT_008c071c) {
    puVar1 = *(undefined1 **)(iVar2 + 0x84);
  }
  return puVar1;
}



int fn_004531a8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xc0040;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  svc_0x32();
  iVar1 = DAT_008c0720;
  if (-1 < DAT_008c0720) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



undefined1 *
fn_00452e1c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  
  if (DAT_008c0720 != (undefined1 *)0x0) {
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(iVar2 + 0x80) = 0x100c2;
    *(undefined4 *)(iVar2 + 0x84) = param_1;
    *(undefined4 *)(iVar2 + 0x88) = param_2;
    *(undefined4 *)(iVar2 + 0x8c) = param_3;
    *(undefined4 *)(iVar2 + 0x90) = 0x20;
    svc_0x32();
    puVar1 = DAT_008c0720;
    if (-1 < (int)DAT_008c0720) {
      *param_4 = *(undefined4 *)(iVar2 + 0x88);
      puVar1 = *(undefined1 **)(iVar2 + 0x84);
    }
    return puVar1;
  }
  if (DAT_008c071c == (undefined1 *)0x0) {
    return &DAT_e0810bf8;
  }
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x100c2;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  *(undefined4 *)(iVar2 + 0x88) = param_2;
  *(undefined4 *)(iVar2 + 0x8c) = param_3;
  *(undefined4 *)(iVar2 + 0x90) = 0x20;
  svc_0x32();
  puVar1 = DAT_008c071c;
  if (-1 < (int)DAT_008c071c) {
    *param_4 = *(undefined4 *)(iVar2 + 0x88);
    puVar1 = *(undefined1 **)(iVar2 + 0x84);
  }
  return puVar1;
}


