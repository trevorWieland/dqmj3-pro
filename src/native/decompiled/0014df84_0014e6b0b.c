#include "0014df84_0014e6b0b.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


int fn_0014e6b0(undefined2 param_1,undefined2 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = DAT_008bfbb4;
  if (DAT_008bfbb4 == (int *)0x0) {
    return -0x375f5808;
  }
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = 0x10040;
  *(undefined2 *)(iVar3 + 0x84) = param_1;
  iVar2 = *piVar1;
  svc_0x32();
  if (-1 < iVar2) {
    *param_2 = *(undefined2 *)(iVar3 + 0x88);
    iVar2 = *(int *)(iVar3 + 0x84);
  }
  return iVar2;
}



int fn_0014e650(int *param_1,undefined4 param_2,int param_3,undefined2 param_4,undefined2 param_5,
                undefined1 *param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined **)(iVar2 + 0x80) = &DAT_001100c2;
  *(int *)(iVar2 + 0x84) = param_3;
  *(undefined2 *)(iVar2 + 0x88) = param_4;
  *(undefined2 *)(iVar2 + 0x8c) = param_5;
  *(undefined4 *)(iVar2 + 0x94) = param_2;
  *(uint *)(iVar2 + 0x90) = param_3 << 4 | 10;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    *param_6 = *(undefined1 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



undefined4 fn_0014e5b8(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0xc8a0a7f8;
  if (DAT_008bfbb4 != 0) {
    uVar1 = 1 << (param_2 + param_3 & 0xffU);
    if (param_1 == 0) {
      if ((DAT_008bfbb8 & uVar1) == 0) {
        return 0xc8a0a7f8;
      }
      uVar2 = fn_0015e510(DAT_008bfbb4,0,param_2,param_3);
      DAT_008bfbb8 = DAT_008bfbb8 & ~uVar1;
    }
    else {
      if ((DAT_008bfbb8 & uVar1) != 0) {
        return 0xc8a0a7f8;
      }
      uVar2 = fn_0015e510(DAT_008bfbb4,param_1,param_2,param_3);
      DAT_008bfbb8 = DAT_008bfbb8 | uVar1;
    }
  }
  return uVar2;
}



int fn_0014e58c(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = DAT_008bfbb4;
  if (DAT_008bfbb4 == (int *)0x0) {
    return -0x375f5808;
  }
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined **)(iVar3 + 0x80) = &DAT_00160000;
  iVar2 = *piVar1;
  svc_0x32();
  if (-1 < iVar2) {
    *param_1 = *(undefined4 *)(iVar3 + 0x8c);
    iVar2 = *(int *)(iVar3 + 0x84);
  }
  return iVar2;
}



undefined4 fn_0014e560(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (DAT_008bfbb4 == 0) {
    return 0xc8a0a7f8;
  }
  uVar1 = fn_0015e45c(DAT_008bfbb4,param_1);
  return uVar1;
}



undefined4 fn_0014e518(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (DAT_008bfbb4 == 0) {
    return 0xc8a0a7f8;
  }
  uVar1 = fn_0015e494(DAT_008bfbb4,param_1,param_2,param_3);
  return uVar1;
}



int fn_0014e4e4(undefined2 param_1,undefined1 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = DAT_008bfbb4;
  if (DAT_008bfbb4 == (int *)0x0) {
    return -0x375f5808;
  }
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = 0x20040;
  *(undefined2 *)(iVar3 + 0x84) = param_1;
  iVar2 = *piVar1;
  svc_0x32();
  if (-1 < iVar2) {
    *param_2 = *(undefined1 *)(iVar3 + 0x88);
    iVar2 = *(int *)(iVar3 + 0x84);
  }
  return iVar2;
}


