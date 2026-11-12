#include "003e6b8c_003e783ca.h"



void fn_003e6fc0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *local_10;
  
  local_10 = param_4;
  uVar1 = fn_002ea524((int)*(short *)(param_2 + 0xa72));
  fn_002317d8(&local_10,uVar1,0);
  fn_0015b0dc(local_10);
  uVar1 = fn_0022f584((char *)&DAT_003e7060,0);
  fn_0068974c(param_1,uVar1,0,1);
  if (local_10 != &DAT_008f9cf4) {
    piVar2 = local_10 + -3;
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_10 + -3,local_10[-2] + 8,0);
    }
  }
  return;
}



void fn_003e6f38(int *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  (**(code **)(*param_1 + 0x150))(param_1);
  fn_0015b0dc();
  iVar1 = (**(code **)(*param_1 + 0x154))(param_1);
  if (iVar1 == 0) {
    pcVar2 = (char *)&DAT_003e6fa8;
  }
  else {
    pcVar2 = (char *)&DAT_003e6f90;
  }
  uVar3 = fn_0022f584(pcVar2,0);
  fn_0068974c(param_1,uVar3,0,1);
  return;
}



void fn_003e6e84(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_8ec;
  undefined1 auStack_8e8 [2268];
  
  *(undefined1 *)(param_1[0x3e] + 8) = 2;
  fn_00290734(auStack_8e8);
  fn_005db3a4(param_1[0x3e],auStack_8e8);
  iVar1 = (**(code **)(*param_1 + 0x14c))(param_1);
  fn_005db3d0(param_1[0x3e],iVar1 + 4);
  uVar2 = fn_002473c0(*(undefined4 *)(param_1[0x3c] + 0xa9c));
  *(undefined4 *)(param_1[0x3e] + 0x11c0) = uVar2;
  fn_00689824(param_1,0);
  fn_00689930(param_1,0xe2,0);
  uStack_8ec = 0;
  fn_0068aa48(param_1,&uStack_8ec,1,0,1);
  return;
}



void fn_003e6de8(int *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  param_1[0x39] = 3;
  param_1[0x3a] = 0;
  uVar2 = (**(code **)(*param_1 + 0x14c))(param_1);
  fn_0044aa54(param_1[0x3c],uVar2);
  uVar1 = fn_0029272c(uVar2);
  *(undefined1 *)(param_1[0x3c] + 0x903) = uVar1;
  fn_00689824(param_1,0);
  *(byte *)(param_1[0x1c] + 0x44) = *(byte *)(param_1[0x1c] + 0x44) & 0xfe;
  iVar3 = (**(code **)(*param_1 + 0x154))(param_1);
  if (iVar3 == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1[0x3f] + 8) = uVar1;
  fn_00689930(param_1,0x7e,0);
  return;
}



void fn_003e6db0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  fn_0068974c();
  if (*(int *)(param_1 + 0xec) != param_4) {
    fn_002feef8();
    *(int *)(param_1 + 0xec) = param_4;
  }
  *(undefined4 *)(param_1 + 0xe4) = 1;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  return;
}



void fn_003e6cc0(int *param_1,int param_2)

{
  undefined4 uVar1;
  bool bVar2;
  short local_e28 [2];
  short local_e24 [2];
  undefined1 auStack_e20 [8];
  undefined1 auStack_e18 [512];
  undefined1 auStack_c18 [2560];
  undefined1 auStack_218 [512];
  
  fn_0012a2d8(auStack_e20);
  fn_00158f6c(auStack_e18,0x200);
  fn_00158f6c(auStack_c18,0xa00);
  fn_00158f6c(auStack_218,0x200);
  uVar1 = (**(code **)(*param_1 + 0x14c))(param_1);
  bVar2 = *(char *)(param_2 + 10) != '\0';
  if (bVar2) {
    fn_0029331c(local_e24,local_e28);
    local_e28[0] = *(char *)(param_2 + 10) * local_e28[0];
    fn_00292f70((int)local_e24[0],(int)local_e28[0],auStack_c18,0x100);
  }
  fn_00291a64(uVar1,auStack_e20);
  fn_002924b0(param_2,auStack_c18 + (uint)bVar2 * 0x200,0x100);
  fn_00301a9c(param_1[0x3d] + 8,auStack_e20,0xe08);
  fn_00689930(param_1,0x5b,0);
  return;
}



void fn_003e6b8c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xe7);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00896a84) goto LAB_003e6bd4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003e6bd4:
  *(undefined4 **)(param_1 + 0xf0) = puVar1;
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x5b);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894aac) goto LAB_003e6c18;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003e6c18:
  *(undefined4 **)(param_1 + 0xf4) = puVar1;
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xe2);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00896444) goto LAB_003e6c5c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003e6c5c:
  *(undefined4 **)(param_1 + 0xf8) = puVar1;
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x7e);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894a9c) {
        puVar3 = puVar1;
        break;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  *(undefined4 **)(param_1 + 0xfc) = puVar3;
  return;
}


