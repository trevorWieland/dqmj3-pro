#include "0052d414_0052d868.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


int fn_0052d868(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                undefined1 param_5,undefined1 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x2a0204;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(undefined4 *)(iVar2 + 0x88) = *param_3;
  *(undefined4 *)(iVar2 + 0x8c) = param_3[1];
  *(undefined1 *)(iVar2 + 0x90) = *(undefined1 *)(param_3 + 2);
  fn_00176fb0(iVar2 + 0x94,param_4);
  *(undefined1 *)(iVar2 + 0x9c) = param_5;
  *(undefined1 *)(iVar2 + 0xa0) = param_6;
  *(undefined4 *)(iVar2 + 0xa4) = 0x20;
  *(undefined4 *)(iVar2 + 0xb0) = param_1;
  *(undefined4 *)(iVar2 + 0xac) = 0;
  svc_0x32();
  iVar1 = DAT_008bfbd4;
  if (-1 < DAT_008bfbd4) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0052d818(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar4 + 0x80) = 0x2b0000;
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar3 = (undefined4 *)(iVar2 + 0x180);
  uVar5 = *puVar3;
  uVar6 = *(undefined4 *)(iVar2 + 0x184);
  *(undefined4 *)(iVar2 + 0x184) = param_1;
  *puVar3 = 0x660002;
  iVar1 = DAT_008bfbd4;
  svc_0x32();
  bVar7 = -1 < DAT_008bfbd4;
  *puVar3 = uVar5;
  *(undefined4 *)(iVar2 + 0x184) = uVar6;
  if (bVar7) {
    iVar1 = *(int *)(iVar4 + 0x84);
  }
  return iVar1;
}



int fn_0052d7ac(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 **)(iVar2 + 0x80) = &DAT_00230000;
  svc_0x32();
  iVar1 = DAT_008bfbd4;
  if (-1 < DAT_008bfbd4) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0052d734(undefined4 param_1,int param_2,undefined1 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(char **)(iVar3 + 0x80) = "2d";
  *(int *)(iVar3 + 0x84) = param_2;
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  uVar4 = *(undefined4 *)(iVar2 + 0x180);
  uVar5 = *(undefined4 *)(iVar2 + 0x184);
  *(uint *)(iVar2 + 0x180) = param_2 * 0x60000 | 2;
  *(undefined4 *)(iVar2 + 0x184) = param_1;
  iVar1 = DAT_008bfbd4;
  svc_0x32();
  bVar6 = -1 < DAT_008bfbd4;
  *(undefined4 *)(iVar2 + 0x180) = uVar4;
  *(undefined4 *)(iVar2 + 0x184) = uVar5;
  if (bVar6) {
    *param_3 = *(undefined1 *)(iVar3 + 0x88);
    *param_4 = *(undefined4 *)(iVar3 + 0x8c);
    iVar1 = *(int *)(iVar3 + 0x84);
  }
  return iVar1;
}



int fn_0052d6fc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x210040;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  svc_0x32();
  iVar1 = DAT_008bfbd4;
  if (-1 < DAT_008bfbd4) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0052d6bc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x320042;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  *(undefined4 *)(iVar2 + 0x88) = 0x20;
  svc_0x32();
  iVar1 = DAT_008bfbd4;
  if (-1 < DAT_008bfbd4) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0052d624(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                int param_6,undefined1 param_7,undefined1 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined **)(iVar3 + 0x80) = &DAT_00130142;
  *(int *)(iVar3 + 0x8c) = param_6;
  *(int *)(iVar3 + 0x84) = param_4;
  *(int *)(iVar3 + 0x88) = param_5;
  *(undefined1 *)(iVar3 + 0x90) = param_7;
  *(undefined1 *)(iVar3 + 0x94) = param_8;
  *(undefined4 *)(iVar3 + 0x9c) = param_3;
  *(uint *)(iVar3 + 0x98) = param_6 << 0x12 | 2;
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar4 = (uint *)(iVar2 + 0x180);
  uVar5 = *puVar4;
  uVar6 = *(undefined4 *)(iVar2 + 0x184);
  uVar7 = *(undefined4 *)(iVar2 + 0x188);
  uVar8 = *(undefined4 *)(iVar2 + 0x18c);
  *(undefined4 *)(iVar2 + 0x184) = param_1;
  *puVar4 = param_4 << 0xf | 2;
  *(uint *)(iVar2 + 0x188) = param_5 << 0xe | 2;
  *(undefined4 *)(iVar2 + 0x18c) = param_2;
  iVar1 = DAT_008bfbd4;
  svc_0x32();
  *puVar4 = uVar5;
  *(undefined4 *)(iVar2 + 0x184) = uVar6;
  *(undefined4 *)(iVar2 + 0x188) = uVar7;
  *(undefined4 *)(iVar2 + 0x18c) = uVar8;
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar3 + 0x84);
  }
  return iVar1;
}



int fn_0052d5e0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x270040;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  svc_0x32();
  iVar1 = DAT_008bfbd4;
  if (-1 < DAT_008bfbd4) {
    *param_1 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0052d570(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = 0x120042;
  *(undefined4 *)(iVar3 + 0x8c) = param_2;
  *(int *)(iVar3 + 0x84) = param_3;
  *(uint *)(iVar3 + 0x88) = param_3 << 0x12 | 2;
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar4 = (uint *)(iVar2 + 0x180);
  uVar5 = *puVar4;
  uVar6 = *(undefined4 *)(iVar2 + 0x184);
  *(undefined4 *)(iVar2 + 0x184) = param_1;
  *puVar4 = param_3 * 0xc0000 | 2;
  iVar1 = DAT_008bfbd4;
  svc_0x32();
  bVar7 = -1 < DAT_008bfbd4;
  *puVar4 = uVar5;
  *(undefined4 *)(iVar2 + 0x184) = uVar6;
  if (bVar7) {
    iVar1 = *(int *)(iVar3 + 0x84);
  }
  return iVar1;
}



int fn_0052d4ac(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = 0x1e02c2;
  uVar2 = param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  uVar6 = param_1[4];
  uVar7 = param_1[5];
  uVar8 = param_1[6];
  uVar9 = param_1[7];
  *(undefined4 *)(iVar3 + 0x84) = *param_1;
  *(undefined4 *)(iVar3 + 0x88) = uVar2;
  *(undefined4 *)(iVar3 + 0x8c) = uVar4;
  *(undefined4 *)(iVar3 + 0x90) = uVar5;
  *(undefined4 *)(iVar3 + 0x94) = uVar6;
  *(undefined4 *)(iVar3 + 0x98) = uVar7;
  *(undefined4 *)(iVar3 + 0x9c) = uVar8;
  *(undefined4 *)(iVar3 + 0xa0) = uVar9;
  uVar2 = param_1[8];
  uVar4 = param_1[9];
  *(undefined4 *)(iVar3 + 0xac) = param_1[10];
  *(undefined4 *)(iVar3 + 0xb0) = 0x400802;
  *(undefined4 *)(iVar3 + 0xb4) = param_2;
  *(undefined4 *)(iVar3 + 0xa4) = uVar2;
  *(undefined4 *)(iVar3 + 0xa8) = uVar4;
  svc_0x32();
  iVar1 = DAT_008bfbd4;
  if (-1 < DAT_008bfbd4) {
    iVar1 = *(int *)(iVar3 + 0x84);
  }
  return iVar1;
}



int fn_0052d464(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar5 + 0x80) = 0x50000;
  svc_0x32();
  iVar1 = DAT_008bfbd4;
  if (-1 < DAT_008bfbd4) {
    uVar2 = *(undefined4 *)(iVar5 + 0x88);
    uVar3 = *(undefined4 *)(iVar5 + 0x8c);
    uVar4 = *(undefined4 *)(iVar5 + 0x90);
    param_1[3] = *(undefined4 *)(iVar5 + 0x94);
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    iVar1 = *(int *)(iVar5 + 0x84);
  }
  return iVar1;
}



int fn_0052d414(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar4 + 0x80) = 0x80000;
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar3 = (undefined4 *)(iVar2 + 0x180);
  uVar5 = *puVar3;
  uVar6 = *(undefined4 *)(iVar2 + 0x184);
  *(undefined4 *)(iVar2 + 0x184) = param_1;
  *puVar3 = 0x4b0002;
  iVar1 = DAT_008bfbd4;
  svc_0x32();
  bVar7 = -1 < DAT_008bfbd4;
  *puVar3 = uVar5;
  *(undefined4 *)(iVar2 + 0x184) = uVar6;
  if (bVar7) {
    iVar1 = *(int *)(iVar4 + 0x84);
  }
  return iVar1;
}


