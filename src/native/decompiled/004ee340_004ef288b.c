#include "004ee340_004ef288b.h"



void fn_004ef288(void)

{
  if (DAT_008c0634 != 0) {
    fn_004ecfd0();
    DAT_008c0634 = 0;
  }
  return;
}



undefined1 * fn_004eeef4(int *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  
  if ((0x3fefffff < param_2 - 0x100000U) || (param_3 == 0)) {
    return (undefined1 *)0xe0e14826;
  }
  if (param_1[0xe] - 0x100000U < 0x3ff00000) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[8] = (int)&LAB_004eefa4;
    param_1[9] = (int)&LAB_004eee24;
    param_1[10] = (int)param_1;
    iVar2 = fn_00733d64(param_1,(char *)&DAT_004eef80,0x38);
    puVar1 = (undefined1 *)0x0;
    if (iVar2 != 0) {
      if (iVar2 == -4) {
        puVar1 = (undefined1 *)0xe0614820;
      }
      else {
        puVar1 = (undefined1 *)0xe161482a;
      }
    }
  }
  else {
    puVar1 = &DAT_e0a14827;
  }
  return puVar1;
}



undefined4 fn_004eee50(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0xd1614828;
  }
  else {
    piVar3 = (int *)(param_2 + -0x100000);
    uVar1 = 0xe0e14826;
    if (piVar3 < (int *)0x3ff00000) {
      piVar3 = param_3 + -0x40000;
    }
    if ((piVar3 < (int *)0x3ff00000) && (*param_3 != 0)) {
      *(int *)(param_1 + 0xc) = param_2;
      *(int *)(param_1 + 0x10) = *param_3;
      iVar4 = *(int *)(param_1 + 0x14);
      uVar2 = fn_007321e0(param_1,2);
      if (uVar2 < 2) {
        *param_3 = *(int *)(param_1 + 0x14) - iVar4;
        return 0;
      }
      if (uVar2 == 0xfffffffd) {
        uVar1 = 0xd9614822;
      }
      else {
        uVar1 = 0xe161482a;
      }
    }
  }
  return uVar1;
}



undefined1 * fn_004eedb8(int param_1,uint param_2,uint param_3)

{
  undefined1 *puVar1;
  
  if (((0x3fefffff < param_2 - 0x100000) || ((param_2 & 3) != 0)) || (param_3 < 0x1bcc)) {
    return (undefined1 *)0xe0e14826;
  }
  if (*(int *)(param_1 + 0x38) - 0x100000U < 0x3ff00000) {
    puVar1 = &DAT_e0a14821;
  }
  else {
    *(uint *)(param_1 + 0x38) = param_2;
    *(uint *)(param_1 + 0x3c) = param_3;
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



void fn_004eed6c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    iVar3 = iVar2 + 1;
    *(undefined1 *)(param_1 + iVar2 * 0x68 + 0x28) = 1;
    iVar1 = iVar1 + 2;
    iVar2 = iVar2 + 2;
    *(undefined1 *)(param_1 + iVar3 * 0x68 + 0x28) = 1;
  } while (iVar1 < 10);
  return;
}



undefined1 * fn_004eeaa4(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = fn_004ed5b0();
  if (iVar1 == 0) {
    return &DAT_e0a1482b;
  }
  iVar1 = fn_004ed5a0();
  if (iVar1 == 0) {
    return &DAT_e0a14827;
  }
  if (DAT_008bf4a0 != 0) {
    return &DAT_d8a1482e;
  }
  puVar2 = (undefined4 *)fn_004ecfe0(0x418);
  iVar1 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &DAT_00856d14;
    iVar1 = fn_00101a1c(puVar2 + 2,fn_004f1628,0x68,10);
    iVar1 = iVar1 + -8;
  }
  DAT_008bf4a0 = iVar1;
  return (undefined1 *)0x0;
}


