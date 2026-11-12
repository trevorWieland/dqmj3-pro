#include "single_0050ab60_r.h"


extern undefined4 SupervisorCall;

longlong fn_0050ab60(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *extraout_r1;
  undefined4 *puVar5;
  uint uVar6;
  
  if (param_2 == 0) {
    uVar1 = 0;
    if (DAT_008c0630 != 0) {
      uVar1 = 8;
    }
    return CONCAT44(uVar1,0xe0e14826);
  }
  if (*(int *)(param_1 + 0x30) - 0x100000U < 0x3ff00000) {
    if (DAT_008c0630 != 0) {
      param_2 = 8;
    }
    return CONCAT44(param_2,&DAT_e0a14821);
  }
  uVar6 = param_2 * 0x18 + 7 >> 3;
  uVar1 = fn_004ed2e8();
  iVar2 = fn_00656e14(uVar6 << 3,uVar1);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    uVar3 = 0;
    if (uVar6 != 0) {
      do {
        puVar5 = (undefined4 *)(iVar2 + uVar3 * 8);
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 0;
          puVar5[1] = 0;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar6);
    }
  }
  piVar4 = (int *)(iVar2 + -0x100000);
  *(int *)(param_1 + 0x30) = iVar2;
  if ((int *)0x3fefffff < piVar4) {
    if (DAT_008c0630 != 0) {
      piVar4 = (int *)&SupervisorCall;
    }
    return CONCAT44(piVar4,0xe0614820);
  }
  if (param_2 != 0 && iVar2 != 0) {
    piVar4 = (int *)(param_1 + 0x28);
    *piVar4 = iVar2;
    *(uint *)(param_1 + 0x2c) = param_2;
    uVar6 = 0;
    if (param_2 != 0) {
      do {
        puVar5 = (undefined4 *)(*(int *)(param_1 + 0x28) + uVar6 * 0x18);
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 0;
          puVar5[1] = 0;
        }
        fn_004f0b78(param_1 + 0x14,param_1 + 0x18,
                     *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x28) + uVar6 * 0x18);
        uVar6 = uVar6 + 1;
        piVar4 = extraout_r1;
      } while (uVar6 < param_2);
    }
  }
  *(uint *)(param_1 + 0x34) = param_2;
  return ZEXT48(piVar4) << 0x20;
}


