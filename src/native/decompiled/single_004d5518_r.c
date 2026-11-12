#include "single_004d5518_r.h"


extern undefined4 SupervisorCall;

longlong fn_004d5518(undefined4 *param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  puVar3 = (undefined1 *)0x3ff00000;
  if (param_2 - 0x100000U < 0x3ff00000) {
    puVar3 = *(undefined1 **)(param_2 + 8);
    if (puVar3 == (undefined1 *)0x0) {
      if (DAT_008c0630 != 0) {
        puVar3 = &SupervisorCall;
      }
    }
    else {
      puVar1 = (undefined1 *)*param_1;
      if ((uint)((int)param_1[1] - (int)puVar1) <= *(uint *)(param_2 + 0xc)) {
        puVar4 = puVar3;
        if ((undefined1 *)param_1[1] != puVar1) {
          do {
            puVar2 = puVar1 + 1;
            puVar3 = puVar4 + 1;
            *puVar4 = *puVar1;
            puVar1 = puVar2;
            puVar4 = puVar3;
          } while ((undefined1 *)param_1[1] != puVar2);
        }
        return ZEXT48(puVar3) << 0x20;
      }
      if (DAT_008c0630 != 0) {
        puVar3 = &SupervisorCall;
      }
    }
  }
  else if (DAT_008c0630 != 0) {
    puVar3 = &SupervisorCall;
  }
  return CONCAT44(puVar3,0xe0e14826);
}


