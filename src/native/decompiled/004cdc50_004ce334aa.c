#include "004cdc50_004ce334aa.h"



undefined4 * fn_004cdc50(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  
  puVar1 = (undefined4 *)fn_004ef7f0();
  *puVar1 = &DAT_00856220;
  uVar2 = fn_004ed2e8();
  iVar3 = fn_00656e58(0x8b0,uVar2,0x20);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    uVar4 = 0;
    do {
      puVar5 = (undefined1 *)(iVar3 + uVar4);
      uVar4 = uVar4 + 1;
      if (puVar5 != (undefined1 *)0x0) {
        *puVar5 = 0;
      }
    } while (uVar4 < 0x8b0);
  }
  puVar1[2] = iVar3;
  uVar2 = fn_004ed2e8();
  iVar3 = fn_00656e58(0x8f0,uVar2,0x20);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    uVar4 = 0;
    do {
      puVar5 = (undefined1 *)(iVar3 + uVar4);
      uVar4 = uVar4 + 1;
      if (puVar5 != (undefined1 *)0x0) {
        *puVar5 = 0;
      }
    } while (uVar4 < 0x8f0);
  }
  puVar1[3] = iVar3;
  uVar2 = fn_004ed2e8();
  iVar3 = fn_00656e58(0x26c4,uVar2,0x20);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    uVar4 = 0;
    do {
      puVar5 = (undefined1 *)(iVar3 + uVar4);
      uVar4 = uVar4 + 1;
      if (puVar5 != (undefined1 *)0x0) {
        *puVar5 = 0;
      }
    } while (uVar4 < 0x26c4);
  }
  puVar1[4] = iVar3;
  return puVar1;
}


