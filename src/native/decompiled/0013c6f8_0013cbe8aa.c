#include "0013c6f8_0013cbe8aa.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


int fn_0013c808(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(char **)(iVar2 + 0x80) = "AndSupportAnim_";
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



undefined4 fn_0013c7b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((&DAT_008ebd1c)[iVar1] == 0) {
      (&DAT_008ebd1c)[iVar1] = param_1;
      (&DAT_008ebd3c)[iVar1] = param_2;
      (&DAT_008ebd5c)[iVar1] = param_3;
      return 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  return 0;
}



undefined4 fn_0013c6f8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((DAT_008bfbb4 == 0) || (DAT_008bfbad != '\0')) {
    return 0xc8a0a7fc;
  }
  while (iVar1 = fn_0013c568(&DAT_008bfbbc), iVar1 == 0) {
    fn_0012d6a4(1000000,0);
  }
  uVar2 = fn_0014e650(DAT_008bfbb4,param_1,param_2,param_3,param_4,&DAT_008bfbad);
  fn_0013c51c(&DAT_008bfbbc);
  return uVar2;
}


