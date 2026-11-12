#include "005f9128_005f9a08bab.h"



void fn_005f96e4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[0x21] == 0) {
    iVar1 = fn_002f55f0();
    if (iVar1 != 0) {
      uVar2 = fn_0022f584((char *)&DAT_005f9780,0);
      fn_0068974c(param_1,uVar2,0,1);
      uVar2 = fn_0022f584((char *)&DAT_005f979c,0);
      fn_0036c13c(param_1[0x17],uVar2);
      return;
    }
  }
  else if (*(char *)(param_1[0x17] + 0x31) != '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005f9724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1,0,0);
  return;
}



void fn_005f9670(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0043f144();
  *puVar1 = &DAT_0084e068;
  *(undefined1 *)(puVar1 + 4) = 2;
  puVar1[5] = 0;
  return;
}


