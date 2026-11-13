#include "005208a0_00520bfc.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


int fn_00520bfc(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x30000;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00520bb4(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar5 + 0x80) = 0x130040;
  *(undefined4 *)(iVar5 + 0x84) = param_2;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    uVar2 = *(undefined4 *)(iVar5 + 0x88);
    uVar3 = *(undefined4 *)(iVar5 + 0x8c);
    uVar4 = *(undefined4 *)(iVar5 + 0x90);
    param_3[3] = *(undefined4 *)(iVar5 + 0x94);
    *param_3 = uVar2;
    param_3[1] = uVar3;
    param_3[2] = uVar4;
    iVar1 = *(int *)(iVar5 + 0x84);
  }
  return iVar1;
}



int fn_00520b40(int *param_1,undefined4 param_2,undefined2 param_3,undefined1 param_4,
                undefined4 param_5,int param_6,undefined4 param_7,undefined1 param_8)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x170182;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(undefined2 *)(iVar2 + 0x88) = param_3;
  *(undefined1 *)(iVar2 + 0x8c) = param_4;
  *(int *)(iVar2 + 0x90) = param_6;
  *(undefined4 *)(iVar2 + 0x94) = param_7;
  *(undefined1 *)(iVar2 + 0x98) = param_8;
  *(uint *)(iVar2 + 0x9c) = param_6 << 0x10 | 0x1402;
  *(undefined4 *)(iVar2 + 0xa0) = param_5;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00520af4(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                undefined1 param_5,undefined2 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 **)(iVar2 + 0x80) = &DAT_00120100;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = param_4;
  *(undefined1 *)(iVar2 + 0x8c) = param_5;
  *(undefined2 *)(iVar2 + 0x90) = param_6;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar2 + 0x8c);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00520a80(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(char **)(iVar3 + 0x80) = "eckTrophy_";
  *(undefined4 *)(iVar3 + 0x88) = param_3;
  *(undefined4 *)(iVar3 + 0x84) = 0x420402;
  *(undefined4 *)(iVar3 + 0x8c) = 0x3f8802;
  *(undefined4 *)(iVar3 + 0x90) = param_4;
  *(undefined4 *)(iVar3 + 0x94) = 0x3f8c02;
  *(undefined4 *)(iVar3 + 0x98) = param_5;
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar4 = (undefined4 *)(iVar2 + 0x180);
  uVar5 = *puVar4;
  uVar6 = *(undefined4 *)(iVar2 + 0x184);
  *(undefined4 *)(iVar2 + 0x184) = param_2;
  *puVar4 = 0xa00002;
  iVar1 = *param_1;
  svc_0x32();
  *puVar4 = uVar5;
  *(undefined4 *)(iVar2 + 0x184) = uVar6;
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar3 + 0x84);
  }
  return iVar1;
}



int fn_00520a40(int *param_1,undefined2 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x70080;
  *(undefined2 *)(iVar2 + 0x84) = param_2;
  *(undefined1 *)(iVar2 + 0x88) = param_3;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_005209f8(int *param_1,undefined2 *param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x210080;
  *(undefined2 *)(iVar2 + 0x84) = *param_2;
  *(undefined1 *)(iVar2 + 0x86) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)(iVar2 + 0x88) = param_3;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00520984(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 *param_5,undefined2 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x1b0302;
  *(undefined4 *)(iVar2 + 0x84) = param_4;
  uVar3 = param_5[1];
  uVar4 = param_5[2];
  uVar5 = param_5[3];
  uVar6 = param_5[4];
  uVar7 = param_5[5];
  uVar8 = param_5[6];
  uVar9 = param_5[7];
  *(undefined4 *)(iVar2 + 0x88) = *param_5;
  *(undefined4 *)(iVar2 + 0x8c) = uVar3;
  *(undefined4 *)(iVar2 + 0x90) = uVar4;
  *(undefined4 *)(iVar2 + 0x94) = uVar5;
  *(undefined4 *)(iVar2 + 0x98) = uVar6;
  *(undefined4 *)(iVar2 + 0x9c) = uVar7;
  *(undefined4 *)(iVar2 + 0xa0) = uVar8;
  *(undefined4 *)(iVar2 + 0xa4) = uVar9;
  uVar3 = param_5[9];
  *(undefined4 *)(iVar2 + 0xa8) = param_5[8];
  *(undefined4 *)(iVar2 + 0xac) = uVar3;
  *(undefined2 *)(iVar2 + 0xb0) = param_6;
  *(undefined4 *)(iVar2 + 0xb8) = param_3;
  *(undefined4 *)(iVar2 + 0xb4) = 0;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_2 = *(undefined4 *)(iVar2 + 0x8c);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00520934(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar4 + 0x80) = 0xb0000;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    uVar2 = *(undefined4 *)(iVar4 + 0x8c);
    uVar3 = *(undefined4 *)(iVar4 + 0x90);
    uVar5 = *(undefined4 *)(iVar4 + 0x94);
    uVar6 = *(undefined4 *)(iVar4 + 0x98);
    uVar7 = *(undefined4 *)(iVar4 + 0x9c);
    uVar8 = *(undefined4 *)(iVar4 + 0xa0);
    uVar9 = *(undefined4 *)(iVar4 + 0xa4);
    *param_2 = *(undefined4 *)(iVar4 + 0x88);
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar5;
    param_2[4] = uVar6;
    param_2[5] = uVar7;
    param_2[6] = uVar8;
    param_2[7] = uVar9;
    uVar2 = *(undefined4 *)(iVar4 + 0xa8);
    uVar3 = *(undefined4 *)(iVar4 + 0xac);
    uVar5 = *(undefined4 *)(iVar4 + 0xb0);
    param_2[0xb] = *(undefined4 *)(iVar4 + 0xb4);
    param_2[8] = uVar2;
    param_2[9] = uVar3;
    param_2[10] = uVar5;
    iVar1 = *(int *)(iVar4 + 0x84);
  }
  return iVar1;
}



int fn_005208f0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x100042;
  *(int *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x8c) = param_2;
  *(uint *)(iVar2 + 0x88) = param_3 << 0xe | 0x1002;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_005208a0(int *param_1,undefined4 *param_2,undefined2 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar4 + 0x80) = 0xd0040;
  *(undefined2 *)(iVar4 + 0x84) = param_3;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    uVar2 = *(undefined4 *)(iVar4 + 0x8c);
    uVar3 = *(undefined4 *)(iVar4 + 0x90);
    uVar5 = *(undefined4 *)(iVar4 + 0x94);
    uVar6 = *(undefined4 *)(iVar4 + 0x98);
    uVar7 = *(undefined4 *)(iVar4 + 0x9c);
    uVar8 = *(undefined4 *)(iVar4 + 0xa0);
    uVar9 = *(undefined4 *)(iVar4 + 0xa4);
    *param_2 = *(undefined4 *)(iVar4 + 0x88);
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar5;
    param_2[4] = uVar6;
    param_2[5] = uVar7;
    param_2[6] = uVar8;
    param_2[7] = uVar9;
    uVar2 = *(undefined4 *)(iVar4 + 0xac);
    param_2[8] = *(undefined4 *)(iVar4 + 0xa8);
    param_2[9] = uVar2;
    iVar1 = *(int *)(iVar4 + 0x84);
  }
  return iVar1;
}


