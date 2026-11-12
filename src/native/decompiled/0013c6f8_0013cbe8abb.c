#include "0013c6f8_0013cbe8abb.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


int fn_0013c8e8(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x10800;
  fn_0017821c(iVar2 + 0x84,param_2,0x80);
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



void fn_0013c868(void)

{
  int iVar1;
  
  DAT_008bfbac = 0;
  if (DAT_008bfbae != '\0') {
    iVar1 = fn_0013c6f8(DAT_008bfbc8,DAT_008bfbcc,DAT_008bfbb0,DAT_008bfbb2);
    if (iVar1 < 0) {
      fn_00123b08(iVar1,0x13c89c);
    }
    iVar1 = 0;
    do {
      if ((code *)(&DAT_008ebd3c)[iVar1] != (code *)0x0) {
        (*(code *)(&DAT_008ebd3c)[iVar1])();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 8);
    DAT_008bfbae = '\0';
    if (DAT_008bfbb4 != 0) {
      fn_0013c830(DAT_008bfbb4,(int)DAT_008bfbaf);
      return;
    }
  }
  return;
}


