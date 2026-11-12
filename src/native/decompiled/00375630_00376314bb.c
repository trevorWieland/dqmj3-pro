#include "00375630_00376314bb.h"



void fn_00376314(int param_1)

{
  undefined4 in_s0;
  
  *(undefined4 *)(param_1 + 0x7c) = in_s0;
                    /* WARNING: Could not recover jumptable at 0x00376334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x6c) + 0x58))(*(int **)(param_1 + 0x6c),0);
  return;
}



void fn_003762d4(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = fn_001827b0(*(undefined4 *)(param_1 + 100),(&DAT_007bb534)[uVar2]);
    fn_00190d50(uVar1,&DAT_00376310);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xe);
  return;
}



void fn_00376298(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = &DAT_008287b8;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return;
}



void fn_00376280(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


