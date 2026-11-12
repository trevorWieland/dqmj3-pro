#include "004548bc_00454da8a.h"

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


int fn_00454ad0(uint param_1)

{
  int iVar1;
  int iVar2;
  
  if (3 < param_1) {
    return -0x271f9413;
  }
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x60040;
  *(int *)(iVar2 + 0x84) = 1 << (param_1 & 0xff);
  svc_0x32();
  iVar1 = DAT_008c07ec;
  if (-1 < DAT_008c07ec) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00454ab0(uint param_1)

{
  int iVar1;
  int iVar2;
  
  if (3 < param_1) {
    return -0x271f9413;
  }
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x70040;
  *(int *)(iVar2 + 0x84) = 1 << (param_1 & 0xff);
  svc_0x32();
  iVar1 = DAT_008c07ec;
  if (-1 < DAT_008c07ec) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00454a70(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x20002;
  *(undefined4 *)(iVar2 + 0x84) = 0x20;
  svc_0x32();
  iVar1 = DAT_008c07ec;
  if (-1 < DAT_008c07ec) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00454a2c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x10042;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  *(undefined4 *)(iVar2 + 0x88) = 0x20;
  svc_0x32();
  iVar1 = DAT_008c07ec;
  if (-1 < DAT_008c07ec) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int * fn_004549cc(int *param_1)

{
  if (*param_1 != 0) {
    svc_0x23();
    *param_1 = 0;
  }
  return param_1;
}



int * fn_00454924(int *param_1)

{
  fn_0015e144(param_1 + 0xb);
  if (param_1[0x10] != 0) {
    svc_0x23();
    param_1[0x10] = 0;
  }
  if (param_1[9] != 0) {
    svc_0x23();
    param_1[9] = 0;
  }
  if (param_1[7] != 0) {
    svc_0x23();
    param_1[7] = 0;
  }
  if (param_1[4] != 0) {
    svc_0x23();
    param_1[4] = 0;
  }
  if (param_1[2] != 0) {
    svc_0x23();
    param_1[2] = 0;
  }
  if (*param_1 != 0) {
    svc_0x23();
    *param_1 = 0;
  }
  return param_1;
}



undefined4 fn_004548bc(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_r3;
  int in_stack_00000000;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar1 = fn_004546a0();
  if ((((((iVar1 == 0) || (in_r3 < 0)) || (0x17 < in_r3)) ||
       ((in_stack_00000000 < 0 || (0x3b < in_stack_00000000)))) ||
      ((in_stack_00000004 < 0 || ((0x3b < in_stack_00000004 || (in_stack_00000008 < 0)))))) ||
     (999 < in_stack_00000008)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


