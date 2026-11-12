#include "0014df84_0014e6b0abbb.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


int fn_0014e494(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x10082;
  *(int *)(iVar2 + 0x84) = param_2;
  *(undefined4 *)(iVar2 + 0x88) = param_3;
  *(undefined4 *)(iVar2 + 0x90) = param_1;
  *(uint *)(iVar2 + 0x8c) = param_2 << 4 | 0xc;
  svc_0x32();
  iVar1 = DAT_008bfb54;
  if (-1 < DAT_008bfb54) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}


