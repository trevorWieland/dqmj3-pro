#include "003e93d0_003ebc7cbba.h"



undefined4 fn_003ea05c(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  uVar1 = fn_001481c8(*(undefined4 *)(param_1 + 0x7c),
                       L"rom:/data/Layout/menu/wifi_ranking_battle/upper/connect.arc",&DAT_003ea154,
                       1,1);
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  uVar1 = fn_001481c8(*(undefined4 *)(param_1 + 0x7c),
                       L"rom:/data/Layout/menu/wifi_ranking_gcup/upper/gcup_download.arc",
                       &DAT_003ea154,1,1);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  puVar2 = (undefined4 *)fn_001f74ec(param_1,0xb1);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00895c98) goto LAB_003ea0e8;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_003ea0e8:
  iVar4 = puVar2[2];
  if (iVar4 == 0) {
    uVar1 = fn_001480d0(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x88),
                         (char *)&DAT_003ea168,&DAT_003ea164,0,1,0);
    *(undefined4 *)(param_1 + 0x90) = uVar1;
  }
  else {
    *(int *)(param_1 + 0x70) = iVar4;
    *(int *)(param_1 + 0x6c) = iVar4;
    *(int *)(param_1 + 0x68) = iVar4;
    *(undefined4 *)(param_1 + 0x78) = 0;
    puVar2[2] = 0;
    fn_00689930(param_1,0,0);
  }
  return 1;
}


