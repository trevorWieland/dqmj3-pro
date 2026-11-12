#include "00376338_00376c18bb.h"



void fn_00376c18(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  puVar1[0x19] = 0;
  *puVar1 = &DAT_008287cc;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *(undefined1 *)(puVar1 + 0x1e) = 0;
  puVar1[0x1f] = 0x3f800000;
  puVar1[0x20] = 0x3f800000;
  puVar1[0x21] = 0;
  return;
}



void fn_00376bec(int param_1)

{
  *(undefined4 *)(param_1 + 0x80) = 0xbf800000;
                    /* WARNING: Could not recover jumptable at 0x00376c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x6c) + 0x58))(*(int **)(param_1 + 0x6c),0);
  return;
}



void fn_00376814(int param_1)

{
  *(undefined4 *)(param_1 + 0x80) = 0x3f800000;
                    /* WARNING: Could not recover jumptable at 0x00376838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x6c) + 0x58))(*(int **)(param_1 + 0x6c),0);
  return;
}


