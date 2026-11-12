#include "0073557c_00735640.h"

static void svc_0xa(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0xa }
#endif
}


void fn_00735640(void)

{
  svc_0xa();
  return;
}



void fn_0073557c(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  iVar1 = fn_0044fbdc();
  if (((iVar1 == 0) || (param_1[2] != 0)) ||
     (iVar1 = fn_0044fc64(param_1,param_2 + 0xfffU & 0xfffff000), iVar1 != 0)) {
    return;
  }
  fn_0015e294(0xd8601837);
  return;
}


