#include "005a51a0_005a6058bab.h"



undefined4 * fn_005a566c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_00846d78;
  puVar1[0x19] = &DAT_00859170;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  return puVar1;
}



void fn_005a55bc(int param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    pcVar1 = *(code **)(param_1 + 0x68);
    if ((*(uint *)(param_1 + 0x6c) & 1) != 0) {
      pcVar1 = *(code **)(pcVar1 + *(int *)(param_1 + ((int)*(uint *)(param_1 + 0x6c) >> 1)));
    }
    (*pcVar1)();
    uVar2 = *(uint *)(param_1 + 0x7c);
    iVar4 = *(int *)(param_1 + 0x68);
    uVar3 = *(uint *)(param_1 + 0x6c);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x78);
    *(int *)(param_1 + 0x70) = iVar4;
    *(uint *)(param_1 + 0x6c) = uVar2;
    *(uint *)(param_1 + 0x74) = uVar3;
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
    if ((iVar4 == *(int *)(param_1 + 0x68)) &&
       (((iVar4 == 0 && (((*(byte *)(param_1 + 0x74) | uVar2) & 1) == 0)) || (uVar3 == uVar2)))) {
      iVar4 = *(int *)(param_1 + 0x84) + 1;
    }
    else {
      iVar4 = 0;
    }
    *(int *)(param_1 + 0x84) = iVar4;
  }
  return;
}


