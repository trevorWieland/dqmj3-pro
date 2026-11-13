#include "004deec4_004df554a.h"

static void svc_0x28(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x28 }
#endif
}


void fn_004df308(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  *puVar1 = &DAT_008563f0;
  return;
}



undefined4 fn_004df2c8(int param_1)

{
  *(char **)(param_1 + 0x2c) = "LocalEventJob::WatchUpdateEvent";
  *(code **)(param_1 + 0x24) = fn_004df24c;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return 0;
}



uint fn_004df24c(void)

{
  int iVar1;
  uint unaff_r5;
  
  if (*(char *)(*(int *)(DAT_008bf504 + 0x14) + 0x1f14) != '\0') {
    iVar1 = *(int *)(DAT_008bf504 + 0x14) + 0x1f08;
    fn_004edc34(iVar1);
    (**(code **)(**(int **)(DAT_008bf504 + 0x14) + 0x18))();
    *(undefined1 *)(*(int *)(DAT_008bf504 + 0x14) + 0x1f14) = 0;
    fn_004edc70(iVar1);
  }
  return unaff_r5 & 0xff00 | 5;
}



int fn_004df22c(void)

{
  return (int)DAT_008bf4fb;
}



int fn_004df0fc(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  *param_1 = &DAT_008563dc;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  iVar1 = fn_004edc74(param_1 + 0x14,0xffffffff);
  *(undefined1 *)(iVar1 + 0xc) = 0;
  iVar1 = fn_004ed164(iVar1 + 0x10);
  *(undefined1 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined1 *)(iVar1 + 0x20) = 0;
  *(undefined1 *)(iVar1 + 0x21) = 0;
  uVar2 = fn_0044fa38();
  *(char *)(iVar1 + 0x22) = (char)uVar2;
  svc_0x28();
  *(undefined8 *)(iVar1 + 0x28) = uVar2;
  uVar3 = fn_00169c20(0,0xffb0ff0,1000);
  *(ulonglong *)(iVar1 + 0x30) = (uVar3 >> 0x20) * 2 + (uVar3 >> 0x1f & 1);
  *(undefined1 *)(iVar1 + 0x38) = 0;
  *(undefined1 *)(iVar1 + 0x39) = 0;
  return iVar1 + -0x60;
}



void fn_004def40(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  fn_004dc130();
  if (*(int *)(param_1 + 8) - 0x100000U < 0x3ff00000) {
    if (*(char *)(*(int *)(param_1 + 8) + 5) != '\0') {
      if (*(int *)(param_1 + 0x1c) - 0x100000U < 0x3ff00000) {
        fn_004eac20();
      }
    }
    if (*(char *)(*(int *)(param_1 + 8) + 4) != '\0') {
      if (*(int *)(param_1 + 0x18) - 0x100000U < 0x3ff00000) {
        fn_004e4e24();
      }
    }
  }
  if (*(int *)(param_1 + 0x14) - 0x100000U < 0x3ff00000) {
    fn_004e2270();
  }
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  fn_004dc250(param_1);
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0xc))();
    puVar1 = *(undefined4 **)(param_1 + 0x14);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1);
      fn_00656b7c(puVar1);
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    fn_004e4f6c();
    puVar1 = *(undefined4 **)(param_1 + 0x18);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1);
      fn_00656b7c(puVar1);
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1c) + 0xc))();
    puVar1 = *(undefined4 **)(param_1 + 0x1c);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1);
      fn_00656b7c(puVar1);
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    fn_00656b0c(iVar2);
    fn_00656b7c(iVar2);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    fn_00656b7c();
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    fn_00656b7c();
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    if (*(char *)(param_1 + 0x44) == '\0') {
      fn_00656b7c();
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  DAT_008bf500 = 0;
  return;
}



int fn_004deec4(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0x99) = 0;
  iVar1 = fn_004e23bc(*(undefined4 *)(param_1 + 0x14));
  if (-1 < iVar1) {
    if ((*(char *)(*(int *)(param_1 + 8) + 4) != '\0') &&
       (iVar1 = fn_004e4e74(*(undefined4 *)(param_1 + 0x18)), iVar1 < 0)) {
      return iVar1;
    }
    if ((*(char *)(*(int *)(param_1 + 8) + 5) == '\0') ||
       (iVar1 = fn_004eaca0(*(undefined4 *)(param_1 + 0x1c)), -1 < iVar1)) {
      iVar1 = 0;
    }
  }
  return iVar1;
}


