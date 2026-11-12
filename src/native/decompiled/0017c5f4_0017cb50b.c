#include "0017c5f4_0017cb50b.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


void fn_0017cb50(int param_1)

{
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    fn_00170bb4(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}



undefined4 fn_0017cad8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (DAT_008bfbb4 == 0) {
    return 0xc8a0a7f8;
  }
  uVar1 = fn_0017cb14(DAT_008bfbb4,0xffff8001,param_1,param_2);
  return uVar1;
}



undefined4 fn_0017cad4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (DAT_008bfbb4 == 0) {
    return 0xc8a0a7f8;
  }
  uVar1 = fn_0017cb14(DAT_008bfbb4,0xffff8001,param_1,param_2);
  return uVar1;
}



int fn_0017cb14(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(char **)(iVar2 + 0x80) = "ScriptFunc.cpp";
  *(undefined4 *)(iVar2 + 0x90) = param_2;
  *(undefined4 *)(iVar2 + 0x84) = param_3;
  *(undefined4 *)(iVar2 + 0x88) = param_4;
  *(undefined4 *)(iVar2 + 0x8c) = 0;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int * fn_0017ca80(int *param_1)

{
  int iVar1;
  int local_10;
  
  *param_1 = 0;
  local_10 = 0;
  if (*param_1 == 0) {
    iVar1 = fn_00158ef8(&local_10);
    if (-1 < iVar1) {
      iVar1 = 0;
      *param_1 = local_10;
    }
  }
  else {
    iVar1 = -0x1f5fe7c5;
  }
  if (iVar1 < 0) {
    fn_0015e294();
  }
  return param_1;
}


