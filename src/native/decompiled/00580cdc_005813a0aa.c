#include "00580cdc_005813a0aa.h"



void fn_00580e78(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x2c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00580f08(iVar1,param_1);
  return;
}



void fn_00580d1c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 **ppuVar6;
  undefined4 *local_24 [2];
  
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  uVar5 = *(undefined4 *)(param_2 + 0x10);
  ppuVar6 = (undefined4 **)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  fn_0023097c(local_24,(int)*(short *)(param_1 + 0x1c),0);
  piVar4 = local_24[0] + -3;
  if (*piVar4 + 1 == 0) {
    if (ppuVar6 != local_24) {
      fn_00177c88(ppuVar6,0,(*ppuVar6)[-1],local_24[0],local_24[0][-1],0,local_24[0][-1]);
    }
  }
  else {
    if (piVar4 != &DAT_008f9ce8) {
      *piVar4 = *piVar4 + 1;
    }
    if (*ppuVar6 != &DAT_008f9cf4) {
      piVar4 = *ppuVar6 + -3;
      iVar1 = *piVar4;
      if ((iVar1 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar1 + -1, iVar1 == 0)))) {
        fn_001008c4(*ppuVar6 + -3,(*ppuVar6)[-2] + 8,0);
      }
    }
    *ppuVar6 = local_24[0];
  }
  if (local_24[0] != &DAT_008f9cf4) {
    piVar4 = local_24[0] + -3;
    iVar1 = *piVar4;
    if ((iVar1 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_24[0] + -3,local_24[0][-2] + 8,0);
    }
  }
  *(undefined4 *)(param_1 + 8) = 0x76;
  fn_003f822c(param_1,param_2);
  return;
}



void fn_00580ce0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00394af0();
  *puVar1 = &DAT_00842458;
  return;
}



void fn_00580cdc(int param_1,int param_2,undefined4 param_3)

{
  fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0x18) + param_2 * 4),param_3);
  return;
}


