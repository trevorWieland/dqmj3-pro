#include "003e7870_003e8074bb.h"



void fn_003e8074(int param_1)

{
  fn_002c4100();
  *(undefined4 *)(param_1 + 0xb0) = 0;
  return;
}



void fn_003e8044(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0044aa1c();
  puVar1[0x59] = 0;
  *puVar1 = &DAT_0083360c;
  return;
}



void fn_003e7fd8(int *param_1)

{
  int iVar1;
  
  fn_002c4304();
  if (param_1[0x57] == 0) {
    iVar1 = fn_006f6a6c(param_1);
    if (iVar1 == 1) {
      fn_0044a864(param_1,2);
      return;
    }
  }
  else if ((param_1[0x57] == 1) && (iVar1 = fn_006f6a6c(param_1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x003e8018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x110))(param_1);
    return;
  }
  return;
}


