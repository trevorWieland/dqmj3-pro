#include "004d52e0_004d5ca0b.h"



undefined1 * fn_004d5ca0(void)

{
  int iVar1;
  undefined *local_18;
  char *local_14;
  
  iVar1 = fn_004ed5b0(0,0x4000175);
  if (iVar1 == 0) {
    return &DAT_e0a14827;
  }
  local_14 = "pia sync heap";
  local_18 = &DAT_00859700;
  fn_004ed230(5,0,&local_18);
  DAT_008bf4f8 = 1;
  return (undefined1 *)0x0;
}



longlong fn_004d5b8c(void)

{
  undefined1 *puVar1;
  uint uVar2;
  uint extraout_r1;
  
  if (DAT_008bf4f8 == '\0') {
    puVar1 = &DAT_e0a1482b;
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)DAT_008bf4f9;
    if (uVar2 == 0) {
      DAT_008bf4f9 = 1;
      fn_004ed204(5);
      return (ulonglong)extraout_r1 << 0x20;
    }
    if (DAT_008c0630 != 0) {
      uVar2 = 8;
    }
    puVar1 = &DAT_e0a14827;
  }
  return CONCAT44(uVar2,puVar1);
}



void fn_004d5ae0(int param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x20) + 4))();
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    fn_004d49d0();
    fn_004ecfd0();
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}



undefined4 fn_004d5aac(int param_1)

{
  undefined4 uVar1;
  
  if (((*(byte *)(param_1 + 0x25) & 2) == 0) || ((*(byte *)(param_1 + 0x25) & 1) != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



void fn_004d58d4(int param_1,int param_2)

{
  int *piVar1;
  int extraout_r1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    *(undefined1 *)(param_1 + 0x30) = 0;
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x18) + 0x10))();
      iVar2 = *(int *)(param_1 + 0x18);
      piVar1 = *(int **)(iVar2 + 0x10);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc))();
        *(undefined4 *)(iVar2 + 0x10) = 0;
      }
      (**(code **)**(undefined4 **)(param_1 + 0x18))();
      *(undefined4 *)(param_1 + 0x18) = 0;
      fn_004ceb10(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0xa0));
      param_2 = extraout_r1;
    }
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      param_2 = *(int *)(param_1 + 0x3c);
    }
    if (piVar1 != (int *)0x0 && param_2 != 0) {
      (**(code **)(*piVar1 + 0x14))();
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}



longlong fn_004d5774(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint extraout_r1;
  int *piVar5;
  
  if (*(int *)(param_1 + 0x14) == 1 || *(int *)(param_1 + 0x14) == 2) {
    piVar5 = (int *)**(undefined4 **)(param_1 + 0x10);
    fn_004d540c(piVar5 + 2,param_2 + 4);
    pcVar3 = *(code **)(*(int *)(param_2 + 4) + 0x14);
    (*pcVar3)(param_2 + 4,pcVar3,0x400,0);
    iVar2 = *piVar5;
    iVar4 = *(int *)(param_1 + 0x10);
    if (iVar2 != iVar4) {
      fn_004d540c(iVar2 + 8,param_2 + 0x2c);
      pcVar3 = *(code **)(*(int *)(param_2 + 0x2c) + 0x14);
      (*pcVar3)(param_2 + 0x2c,pcVar3,0x400,0);
      return (ulonglong)extraout_r1 << 0x20;
    }
    uVar1 = 0;
  }
  else {
    if (DAT_008c0630 != 0) {
      param_2 = 4;
    }
    uVar1 = 0xe0e14826;
    iVar4 = param_2;
  }
  return CONCAT44(iVar4,uVar1);
}


