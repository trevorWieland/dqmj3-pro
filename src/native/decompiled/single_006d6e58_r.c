#include "single_006d6e58_r.h"


extern undefined4 SupervisorCall;

longlong fn_006d6e58(int param_1,int param_2,undefined4 *param_3,uint param_4)

{
  undefined4 *puVar1;
  uint extraout_r1;
  uint uVar2;
  int local_28;
  
  puVar1 = &DAT_008c0630;
  uVar2 = 0xe0e14826;
  if (param_2 - 0x100000U < 0x3ff00000) {
    puVar1 = param_3 + -0x40000;
    if (puVar1 < (undefined4 *)0x3ff00000) {
      if (param_4 < 8) {
        if (DAT_008c0630 != 0) {
          puVar1 = (undefined4 *)&SupervisorCall;
        }
      }
      else {
        uVar2 = fn_006d6dc8(param_1 + 4,param_2,&local_28,param_4 - 2);
        puVar1 = (undefined4 *)(uVar2 & 0x80000000);
        if (-1 < (int)puVar1) {
          fn_004ed504(local_28 + param_2,*(undefined2 *)(param_1 + 0xc));
          *param_3 = 8;
          return (ulonglong)extraout_r1 << 0x20;
        }
      }
    }
    else if (DAT_008c0630 != 0) {
      puVar1 = (undefined4 *)&SupervisorCall;
    }
  }
  else if (DAT_008c0630 != 0) {
    puVar1 = (undefined4 *)&SupervisorCall;
  }
  return CONCAT44(puVar1,uVar2);
}


