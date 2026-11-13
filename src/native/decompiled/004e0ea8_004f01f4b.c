#include "004e0ea8_004f01f4b.h"

static void svc_0x28(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x28 }
#endif
}


void fn_004f01f4(int param_1,undefined4 param_2)

{
  svc_0x28();
  *(int *)param_1 = param_1;
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}



void fn_004f01e8(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}



void fn_004f0010(int *param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint auStack_58 [17];
  
  if (param_2 == (undefined4 *)0x0 || param_4 == 0) {
    *param_1 = 0;
  }
  else {
    *param_1 = (int)param_2;
    if (param_4 < 0x41) {
      fn_001694e4(auStack_58,param_3,param_4);
    }
    else {
      (**(code **)*param_2)();
      (**(code **)(*(int *)*param_1 + 4))((int *)*param_1,param_3,param_4);
      (**(code **)(*(int *)*param_1 + 0x10))((int *)*param_1,auStack_58);
      param_4 = (**(code **)(*(int *)*param_1 + 8))();
    }
    if (0 < (int)(0x40 - param_4)) {
      fn_00158f6c((int)auStack_58 + param_4);
    }
    iVar3 = 0x10;
    puVar1 = auStack_58;
    iVar2 = 0;
    do {
      uVar4 = *puVar1;
      iVar3 = iVar3 + -1;
      param_1[iVar2 + 1] = uVar4 ^ 0x36363636;
      param_1[iVar2 + 0x11] = uVar4 ^ 0x5c5c5c5c;
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar3 != 0);
  }
  return;
}



undefined1 * fn_004ef014(void)

{
  int iVar1;
  
  iVar1 = fn_004ed5b0();
  if (iVar1 == 0) {
    return &DAT_e0a1482b;
  }
  iVar1 = fn_004ed5a0();
  if (iVar1 == 0) {
    return &DAT_e0a14827;
  }
  if (DAT_008c0634 != (undefined4 *)0x0) {
    return &DAT_d8a1482e;
  }
  DAT_008c0634 = (undefined4 *)fn_004ecfe0(0xc);
  if (DAT_008c0634 != (undefined4 *)0x0) {
    *DAT_008c0634 = &DAT_00856d20;
    DAT_008c0634[1] = 0x5b6;
    DAT_008c0634[2] = 0;
  }
  return (undefined1 *)0x0;
}



void fn_004eee38(int param_1)

{
  fn_00733bac();
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}



void fn_004eed1c(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = DAT_008bf4a0;
  if (DAT_008bf4a0 != (undefined4 *)0x0) {
    puVar2 = DAT_008bf4a0 + 2;
    *DAT_008bf4a0 = &DAT_00856d14;
    fn_00100414(puVar2,&DAT_004f167c,0x68,10);
    fn_004ecfd0(puVar1);
    DAT_008bf4a0 = (undefined4 *)0x0;
  }
  return;
}



void fn_004edc70(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[2];
  param_1[2] = iVar2 + -1;
  if (iVar2 + -1 != 0) {
    return;
  }
  param_1[1] = 0;
  do {
    iVar3 = *param_1;
    iVar2 = -iVar3;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2;
  if (iVar3 != -1 && 0 < iVar2) {
    fn_00147e54(DAT_008c0334,param_1,0,1,0,0);
  }
  return;
}


