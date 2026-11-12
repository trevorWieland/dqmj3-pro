#include "00575bac_005769c0.h"



void fn_005769c0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0066eb80(DAT_00898840,2);
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  fn_0066f2f0(uVar1,param_1 + 0x1cc,0x14);
  if (*(int **)(param_1 + 0x1c4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1c4) + 4))();
    *(undefined4 *)(param_1 + 0x1c4) = 0;
  }
  if (*(int *)(param_1 + 0x1bc) != 0) {
    fn_00251ec8();
    fn_002feef8();
    *(undefined4 *)(param_1 + 0x1bc) = 0;
  }
  if (*(int *)(param_1 + 0x1c0) != 0) {
    fn_00673934();
  }
  if (*(char *)(*(int *)(param_1 + 0x1ac) + 8) == '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0x1b8) + 0xc) = 1;
  }
  if (*(int **)(param_1 + 0x1c0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1c0) + 4))();
    *(undefined4 *)(param_1 + 0x1c0) = 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_00747ef8(param_1);
}



void fn_00576598(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = *(undefined4 *)(DAT_00897804 + 0xc);
  uVar1 = fn_001287d4((*(int *)(param_1 + 0x110) - *(int *)(param_1 + 0x10c) >> 2) * 0xf0,
                       &DAT_00812c8c);
  *(undefined4 *)(param_1 + 0x124) = uVar1;
  puVar2 = *(undefined4 **)(param_1 + 0x10c);
  iVar4 = 0;
  if (*(undefined4 **)(param_1 + 0x110) != puVar2) {
    do {
      fn_00301f50(*(int *)(param_1 + 0x124) + iVar4 * 0xf0,0xf0);
      uVar1 = fn_0028aad0(uVar5,*puVar2);
      fn_0017821c(*(int *)(param_1 + 0x124) + iVar4 * 0xf0,uVar1,0xf0);
      puVar2 = puVar2 + 1;
      iVar4 = iVar4 + 1;
    } while (*(undefined4 **)(param_1 + 0x110) != puVar2);
  }
  fn_001221d4(uVar5,*(undefined4 *)(param_1 + 0x11c),0);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x110) - *(int *)(param_1 + 0x10c) >> 2 != 0) {
    do {
      uVar1 = fn_0028a284(*(undefined4 *)(DAT_00897804 + 0xc),
                           *(int *)(param_1 + 0x124) + uVar3 * 0xf0);
      uVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),uVar1);
      fn_0024f108(uVar1,0);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x110) - *(int *)(param_1 + 0x10c) >> 2));
  }
  fn_00311198(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x2c));
  *(undefined1 *)(param_1 + 0x118) = 2;
  uVar1 = fn_00689b18(param_1);
  fn_0026a494(DAT_00897818,uVar1,1);
  return;
}



void fn_00576338(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *local_a4;
  undefined1 auStack_a0 [132];
  
  if (*(int *)(param_2 + 0xc) == 0) {
    fn_0068ab44(param_1,0x100094d);
    return;
  }
  iVar2 = fn_005828a4(param_1);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_2 + 4);
  uVar3 = (**(code **)(**(int **)(param_1 + 0xe0) + 0x5c))();
  *(undefined4 *)(iVar2 + 0x14) = uVar3;
  *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(param_1 + 0xfc);
  iVar2 = fn_002e3e9c(*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(param_2 + 4),
                       *(undefined4 *)(param_2 + 8));
  piVar4 = *(int **)(param_1 + 0x10c);
  bVar1 = false;
  while (*(int **)(param_1 + 0x110) != piVar4) {
    iVar6 = *piVar4;
    piVar4 = piVar4 + 1;
    if (iVar6 == iVar2) {
      bVar1 = true;
    }
  }
  iVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
  fn_002317d8(&local_a4,(int)*(short *)(iVar2 + 0x1c),0);
  uVar3 = fn_0022f584(DAT_00898ac8,0);
  fn_00301f50(auStack_a0,0x80);
  *(int *)(param_1 + 0x128) = iVar2 + 4;
  *(undefined1 *)(param_1 + 0x118) = 1;
  if (bVar1) {
    *(undefined1 *)(param_1 + 0x119) = 3;
    uVar5 = fn_0022f584(DAT_00898acc,0);
  }
  else {
    *(undefined1 *)(param_1 + 0x119) = 4;
    uVar5 = fn_0022f584(DAT_00898ad0,0);
    *(undefined4 *)(param_1 + 0x1c0) = 0x1000955;
  }
  fn_00101a50(auStack_a0,0x80,L"%ls%ls\n%ls%ls",local_a4,uVar3,*(undefined4 *)(param_1 + 0x128),
               uVar5);
  fn_0068974c(param_1,auStack_a0,1,1);
  iVar2 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined1 *)(iVar2 + 0x5f) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x118) = 1;
  fn_0068ab44(param_1,0x100094b);
  if (local_a4 != &DAT_008f9cf4) {
    piVar4 = local_a4 + -3;
    iVar2 = *piVar4;
    if ((iVar2 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_a4 + -3,local_a4[-2] + 8,0);
    }
  }
  return;
}



void fn_005762c4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x118) = 1;
  *(undefined1 *)(param_1 + 0x119) = 0xb;
  uVar1 = fn_0022f584(DAT_00898af0,0);
  fn_0068974c(param_1,uVar1,1,1);
  iVar2 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined1 *)(iVar2 + 0x5f) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x118) = 1;
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_00576070(int param_1,undefined4 param_2)

{
  fn_00689efc(param_1,0x2d,0);
  fn_0025f354(*(undefined4 *)(param_1 + 0xf0),param_2);
  return;
}



void fn_00575f7c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18;
  
  local_18 = param_4;
  if (*(int *)(param_1 + 0x110) - *(int *)(param_1 + 0x10c) >> 2 == 0) {
    fn_001221d4(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_1 + 0x11c),0);
    fn_00575bac(param_1);
    local_18 = 0xff000000;
    fn_00163988(DAT_00897808,&local_18,10);
    local_18 = 0xff000000;
    fn_00163988(DAT_0089780c,&local_18,10);
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  *(undefined1 *)(param_1 + 0x119) = 0xd;
  uVar1 = fn_0022f584(DAT_00898af8,0);
  fn_0068974c(param_1,uVar1,0,1);
  iVar2 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(iVar2 + 0x38) = param_2;
  *(undefined1 *)(iVar2 + 0x5f) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x118) = 1;
  return;
}



void fn_00575bac(int param_1)

{
  undefined4 local_10;
  
  local_10 = 0xff000000;
  fn_00163988(DAT_00897808,&local_10,10);
  local_10 = 0xff000000;
  fn_00163988(DAT_0089780c,&local_10,10);
  *(undefined1 *)(param_1 + 0x118) = 3;
  return;
}


