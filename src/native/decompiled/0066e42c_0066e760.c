#include "0066e42c_0066e760.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}


void fn_0066e760(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  if (*(int **)(param_1 + 0x54) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x54) + 0x20))();
  }
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  do {
    piVar4 = (int *)(param_1 + uVar3 * 4 + 0x10);
    piVar1 = (int *)*piVar4;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    uVar3 = uVar3 + 1;
    *piVar4 = 0;
  } while (uVar3 < 2);
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    iVar2 = (*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 2) + -1;
    if (-1 < iVar2) {
      do {
        piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 4) + 4) + iVar2 * 4);
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x20))();
        }
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
      if (*(int *)(param_1 + 4) == 0) goto LAB_0066e81c;
    }
    (**(code **)(**(int **)(param_1 + 4) + 4))();
  }
LAB_0066e81c:
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 8) + 4))();
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 4))();
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    svc_0x23();
    *(int *)(param_1 + 0x5c) = 0;
  }
  return;
}



void fn_0066e744(void)

{
  fn_00675554(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x2c));
  return;
}



undefined4 fn_0066e728(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 local_10;
  
  local_10 = 0;
  uVar1 = fn_006d59a0(DAT_008bf504,param_2,&local_10,param_3);
  if ((uVar1 & 0x80000000) != 0) {
    puVar2 = (undefined4 *)fn_0013d4ec();
    *param_2 = *puVar2;
    param_2[1] = 0;
  }
  return local_10;
}



void fn_0066e70c(void)

{
  fn_006729c8(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x20));
  return;
}



void fn_0066e6f0(void)

{
  fn_00674f58(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x2c));
  return;
}



void fn_0066e6b8(int param_1)

{
  fn_0066ade0(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0xc));
  *(undefined1 *)(param_1 + 0x4c) = 1;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  return;
}



void fn_0066e680(void)

{
  fn_006729ac(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x20));
  return;
}



void fn_0066e660(undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x28) + 0x7c) = param_2;
  return;
}



void fn_0066e640(undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x28) + 0x74) = param_2;
  return;
}



void fn_0066e620(undefined4 param_1,undefined1 param_2)

{
  *(undefined1 *)(*(int *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x2c) + 0x79) = param_2;
  return;
}



void fn_0066e5f0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return;
}



void fn_0066e5d0(undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x28) + 0x78) = param_2;
  return;
}



uint fn_0066e58c(void)

{
  return (*(byte *)(*(int *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x2c) + 0x4c) & 0x3f) >> 5;
}



void fn_0066e55c(int param_1)

{
  fn_00669e78(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0xc));
  *(undefined1 *)(param_1 + 0x4c) = 0;
  return;
}



bool fn_0066e510(undefined4 param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)fn_0013d4ec();
  return *piVar1 != param_2;
}



uint fn_0066e4e8(void)

{
  return (*(byte *)(*(int *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x2c) + 0x4c) & 0xf) >> 3;
}



uint fn_0066e4c0(void)

{
  return (*(byte *)(*(int *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x14) + 0x4c) & 7) >> 2;
}



void fn_0066e4a4(void)

{
  fn_00670f84(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x28));
  return;
}



void fn_0066e464(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = DAT_00898840;
  *(undefined4 *)(*(int *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x28) + 0x74) = param_2;
  *(undefined4 *)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 4) + 0x28) + 0x78) = param_3;
  *(undefined4 *)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 4) + 0x28) + 0x7c) = param_4;
  return;
}



void fn_0066e458(int param_1,undefined4 param_2,undefined1 param_3)

{
  *(undefined4 *)(param_1 + 0x34) = param_2;
  *(undefined1 *)(param_1 + 0x4d) = param_3;
  return;
}



undefined4 fn_0066e42c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x18) == 1 || *(int *)(param_1 + 0x18) == 2) ||
     (iVar1 = fn_005f3a9c(), iVar1 != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


