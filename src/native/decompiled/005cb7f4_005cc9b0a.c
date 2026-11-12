#include "005cb7f4_005cc9b0a.h"



undefined4 * fn_005cbe7c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_0084b634;
  puVar1[0x19] = &DAT_008591d0;
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



void fn_005cbdbc(int param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  
  if ((*(char *)(param_1 + 0xc) == '\x03') && (iVar1 = fn_002f8974(), iVar1 != 0)) {
    pcVar2 = *(code **)(param_1 + 0x68);
    if ((*(uint *)(param_1 + 0x6c) & 1) != 0) {
      pcVar2 = *(code **)(pcVar2 + *(int *)(param_1 + ((int)*(uint *)(param_1 + 0x6c) >> 1)));
    }
    (*pcVar2)();
    uVar3 = *(uint *)(param_1 + 0x7c);
    iVar1 = *(int *)(param_1 + 0x68);
    uVar4 = *(uint *)(param_1 + 0x6c);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x78);
    *(int *)(param_1 + 0x70) = iVar1;
    *(uint *)(param_1 + 0x6c) = uVar3;
    *(uint *)(param_1 + 0x74) = uVar4;
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
    if ((iVar1 == *(int *)(param_1 + 0x68)) &&
       (((iVar1 == 0 && (((*(byte *)(param_1 + 0x74) | uVar3) & 1) == 0)) || (uVar4 == uVar3)))) {
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
      return;
    }
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  return;
}



void fn_005cba18(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x84) == 0) {
    uVar1 = fn_0022f584((char *)&DAT_005cba78,0);
    fn_0068974c(param_1,uVar1,0,1);
    return;
  }
  if (*(char *)(*(int *)(param_1 + 0x5c) + 0x31) == '\x01') {
    *(code **)(param_1 + 0x78) = fn_005cba98;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return;
}



void fn_005cba98(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x84) == 0) {
    uVar1 = fn_0022f584((char *)&DAT_005cbb14,0);
    fn_0068974c(param_1,uVar1,0,1);
    fn_00689930(param_1,0xf1,1,0);
                    /* WARNING: Subroutine does not return */
    fn_001638a0(0x1000194);
  }
  if (*(char *)(*(int *)(param_1 + 0x5c) + 0x31) == '\x01') {
    *(code **)(param_1 + 0x78) = fn_005cbb38;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return;
}



void fn_005cbb38(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x84) == 0) {
    fn_00203440(0x1000029);
    fn_0015b0f8(2);
    uVar2 = fn_0022f584((char *)&DAT_005cbbd4,0);
    fn_0068974c(param_1,uVar2,0,1);
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 0;
  }
  else {
    iVar1 = fn_006adb80();
    if (iVar1 == 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 1;
    }
    if (*(char *)(*(int *)(param_1 + 0x5c) + 0x31) == '\x01') {
      *(code **)(param_1 + 0x78) = fn_005cbbfc;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      return;
    }
  }
  return;
}



void fn_005cbbfc(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  short local_e28 [4];
  undefined1 auStack_e20 [512];
  undefined1 auStack_c20 [2560];
  undefined1 auStack_220 [520];
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x5b);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894aac) goto LAB_005cbc48;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005cbc48:
  uVar3 = fn_006f6a38(param_1);
  if ((uVar3 & 0x400000) != 0) {
    *(undefined1 *)((int)puVar1 + 0xe11) = 1;
  }
  if (*(int *)(param_1 + 0x84) == 0) {
    fn_0012a2d8(local_e28);
    fn_00158f6c(auStack_e20,0x200);
    fn_00158f6c(auStack_c20,0xa00);
    fn_00158f6c(auStack_220,0x200);
    fn_00166824(local_e28,&DAT_007c9e88);
    fn_0015b0f8((int)local_e28[0]);
    uVar4 = fn_0022f584((char *)&DAT_005cbd60,0);
    fn_001003e0(auStack_e20,uVar4);
    fn_00158f6c(auStack_c20,0xa00);
    fn_00158f6c(auStack_220,0x200);
    fn_00301a9c(puVar1 + 2,local_e28,0xe08);
    *(undefined1 *)(puVar1 + 900) = 0;
    fn_00689930(param_1,0x5b,0,0);
  }
  else if (*(char *)(puVar1 + 900) != '\0') {
    fn_00689930(param_1,0,0);
    fn_006899f4(param_1,0xde,0);
    return;
  }
  return;
}



void fn_005cb7f4(int param_1)

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


