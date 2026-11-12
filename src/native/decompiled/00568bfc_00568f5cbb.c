#include "00568bfc_00568f5cbb.h"



void fn_00568f5c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0039b1e0();
  *puVar1 = &DAT_008400fc;
  return;
}



void fn_00568efc(undefined4 param_1,short *param_2,int param_3,undefined4 param_4)

{
  short *psVar1;
  uint uVar2;
  short *psVar3;
  bool bVar4;
  
  psVar1 = (short *)fn_0016a7c4(param_4);
  uVar2 = 0;
  psVar3 = param_2;
  if (param_3 != 1) {
    do {
      uVar2 = uVar2 + 1;
      param_2 = psVar3 + 1;
      *psVar3 = *psVar1;
      bVar4 = psVar1[1] == 0;
      psVar1 = psVar1 + 1;
      psVar3 = param_2;
    } while ((bVar4 || uVar2 <= param_3 - 1U) && (!bVar4 && param_3 - 1U != uVar2));
  }
  *param_2 = 0;
  return;
}


