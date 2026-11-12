#include "004456a0_00445fc8ab.h"



void fn_004458c4(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(short *)(param_1 + 0x30 + iVar1 * 0xf0 + 0x1c) == 0) {
      fn_0017821c(param_1 + 0x30 + iVar1 * 0xf0,param_2,0xf0);
      return;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}



void fn_00445884(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(short *)(param_1 + 0x3f8 + iVar1 * 0xf0 + 0x1c) == 0) {
      fn_0017821c(param_1 + 0x3f8 + iVar1 * 0xf0,param_2,0xf0);
      return;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}



undefined4 * fn_00445780(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  puVar1[2] = 0x95;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  puVar1[0xd] = 0x95;
  *puVar1 = &DAT_0083e60c;
  puVar1[0xc] = 0xffffffff;
  *(undefined1 *)(puVar1 + 0xe) = 0;
  puVar1[0xf] = 0;
  *(undefined1 *)(puVar1 + 0x10) = 1;
  puVar1[0x11] = 0xffffffff;
  fn_00301f50(puVar1 + 0x12,0x8d8);
  puVar1[0x27c] = 0;
  puVar1[0x27b] = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x27d) = 0;
  *(undefined1 *)((int)puVar1 + 0x9f5) = 0;
  *(undefined1 *)((int)puVar1 + 0x9f6) = 0;
  *(undefined1 *)((int)puVar1 + 0x9f7) = 1;
  puVar1[0x27e] = 0;
  puVar1[0x27f] = 0;
  puVar1[0x280] = 0;
  *(undefined1 *)(puVar1 + 0x281) = 0;
  fn_00301f50(puVar1 + 0x12,0x8d8);
  return puVar1;
}


