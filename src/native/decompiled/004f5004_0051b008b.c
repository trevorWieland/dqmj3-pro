#include "004f5004_0051b008b.h"



undefined8 fn_0051b008(int param_1,int param_2,undefined4 *param_3,undefined1 param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = &DAT_008c0630;
  if ((param_2 < 1) || (puVar1 = (undefined4 *)0xf4240, 1000000 < param_2)) {
    if (DAT_008c0630 != 0) {
      puVar1 = (undefined4 *)0x8;
    }
  }
  else if (((uint)param_3 & 3) == 0) {
    if ((undefined4 *)(DAT_008c0634[1] + 0x1c) < param_3) {
      puVar1 = DAT_008c0634;
      if (DAT_008c0630 != 0) {
        puVar1 = (undefined4 *)0x8;
      }
    }
    else {
      puVar1 = (undefined4 *)(DAT_008c0634[2] + 0x4c);
      if (param_3 < puVar1) {
        if (DAT_008c0630 != 0) {
          puVar1 = (undefined4 *)0x8;
        }
      }
      else {
        if (0 < param_5) {
          if (*(char *)(param_1 + 0x14) != '\0') {
            *(int *)(param_1 + 0x1c) = param_2;
            DAT_008edb2c = param_2;
            *(undefined4 **)(param_1 + 0x20) = param_3;
            DAT_008edb26 = SUB42(param_3,0);
            *(int *)(param_1 + 0x28) = param_5;
            *(int *)(param_1 + 0x24) = param_5 + 0xfa;
            *(undefined1 *)(param_1 + 0x16) = param_4;
            *(undefined1 *)(param_1 + 0x15) = 1;
            return 0x100000000;
          }
          uVar2 = 0;
          if (DAT_008c0630 != 0) {
            uVar2 = 8;
          }
          return CONCAT44(uVar2,&DAT_e0a1482b);
        }
        if (DAT_008c0630 != 0) {
          puVar1 = (undefined4 *)0x8;
        }
      }
    }
  }
  else if (DAT_008c0630 != 0) {
    puVar1 = (undefined4 *)0x8;
  }
  return CONCAT44(puVar1,0xe0e14826);
}



undefined1 * fn_00519720(void)

{
  undefined1 *puVar1;
  
  if (DAT_008c0690 == (undefined4 *)0x0) {
    DAT_008c0690 = (undefined4 *)fn_004ecfe0(0x5c8);
    if (DAT_008c0690 != (undefined4 *)0x0) {
      DAT_008c0690[10] = 0;
      DAT_008c0690[1] = 0;
      DAT_008c0690[2] = 0;
      *DAT_008c0690 = &DAT_00857260;
      DAT_008c0690[3] = 0;
      DAT_008c0690[4] = 0;
      DAT_008c0690[5] = 0;
      DAT_008c0690[6] = 0;
      DAT_008c0690[7] = 0;
      DAT_008c0690[8] = 0;
      DAT_008c0690[0x171] = 0;
    }
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = &DAT_d8a1482e;
  }
  return puVar1;
}


