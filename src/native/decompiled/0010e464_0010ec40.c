#include "0010e464_0010ec40.h"



undefined4 * fn_0010ec40(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_00145b00(0x34c,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0xffffffff;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    *(undefined1 *)(puVar1 + 0xad) = 0x5a;
    *(undefined1 *)((int)puVar1 + 0x2b5) = 0xff;
    *(undefined1 *)((int)puVar1 + 0x2b6) = 1;
    *(undefined1 *)((int)puVar1 + 0x2b7) = 1;
    iVar2 = 0;
    do {
      fn_001003e0(puVar1 + iVar2 * 6 + 0x91,&DAT_008c7328);
      *(undefined1 *)((int)puVar1 + iVar2 + 699) = 0;
      puVar1[iVar2 * 0x18 + 0x31] = 0;
      *(undefined1 *)(puVar1 + iVar2 * 0x18 + 0x32) = 0;
      iVar3 = iVar2 + 1;
      iVar2 = iVar2 * 0x12;
      *(undefined1 *)((int)puVar1 + iVar2 + 0x78) = 0;
      *(undefined1 *)((int)puVar1 + iVar2 + 0x7e) = 0;
      *(undefined1 *)((int)puVar1 + iVar2 + 0x84) = 0;
      iVar2 = iVar3;
    } while (iVar3 < 4);
    fn_0011a604((int)puVar1 + 0x2a6);
    *(undefined1 *)((int)puVar1 + 0x2ba) = 0;
    puVar1[0x30] = 0;
    *(undefined1 *)((int)puVar1 + 0x2bf) = 0;
    *(undefined1 *)(puVar1 + 0xae) = 1;
    *(undefined1 *)((int)puVar1 + 0x2b9) = 0;
    puVar1[0xb3] = 0;
    puVar1[0xb4] = 0;
    puVar1[0xb5] = 0;
    puVar1[0xb6] = 0;
    puVar1[0xb7] = 0;
    puVar1[0xb8] = 0;
    puVar1[0xb9] = 0;
    puVar1[0xba] = 0;
    puVar1[0xbb] = 0;
    puVar1[0xbc] = 0;
    puVar1[0xbd] = 0;
    puVar1[0xbe] = 0;
    puVar1[0xbf] = 0;
    puVar1[0xc0] = 0;
    puVar1[0xc1] = 0;
    puVar1[0xc2] = 0;
    puVar1[0xc3] = 0;
    puVar1[0xc4] = 0;
    puVar1[0xc5] = 0;
    puVar1[0xc6] = 0;
    *(undefined1 *)(puVar1 + 199) = 0;
    *(undefined1 *)((int)puVar1 + 0x31d) = 0;
    *(undefined1 *)((int)puVar1 + 0x31e) = 0;
    puVar1[200] = 0;
    puVar1[0xc9] = 0;
    puVar1[0xca] = 0;
    *(undefined1 *)(puVar1 + 0xcb) = 0;
    puVar1[0xcc] = 0;
    *(undefined1 *)(puVar1 + 0xcd) = 0;
    puVar1[0xce] = 0;
    puVar1[0xcf] = 0;
    puVar1[0xd0] = 0;
    puVar1[0xd1] = 0;
    fn_0014ddb8(puVar1 + 0xd0,1);
    *(undefined1 *)(puVar1 + 0xd2) = 0;
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0xffffffff;
    puVar1[4] = 0xffffffff;
    puVar1[5] = 0xffffffff;
    puVar1[6] = 0xffffffff;
  }
  *param_1 = puVar1;
  return param_1;
}



void fn_0010e464(int param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint local_90;
  uint local_8c;
  undefined4 local_70;
  undefined4 uStack_6c;
  int local_68;
  int local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined1 auStack_48 [36];
  
  uVar3 = fn_00145b00(0x37af0,&DAT_00812c8c);
  *(undefined4 *)(param_1 + 4) = uVar3;
  fn_00301f50(uVar3,0x37af0);
  iVar4 = fn_00145b00(0xc,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar4 != 0) {
    uVar3 = fn_00112e7c(iVar4,*(int *)(param_1 + 4) + 8);
  }
  *(undefined4 *)(param_1 + 8) = uVar3;
  iVar4 = fn_00145b00(8,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar4 != 0) {
    uVar3 = fn_00112f6c(iVar4,*(int *)(param_1 + 4) + 0x2c8);
  }
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  iVar4 = fn_00145b00(8,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar4 != 0) {
    uVar3 = fn_00113304(iVar4,*(int *)(param_1 + 4) + 0x1de44);
  }
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  iVar4 = fn_00145b00(8,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar4 != 0) {
    uVar3 = fn_00111f48(iVar4,*(int *)(param_1 + 4) + 0x1e04c);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  iVar4 = fn_00145b00(8,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar4 != 0) {
    uVar3 = fn_00112de4(iVar4,*(int *)(param_1 + 4) + 0x1e97c);
  }
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  iVar4 = fn_00145b00(0xc,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar4 != 0) {
    uVar3 = fn_00112df8(iVar4,*(int *)(param_1 + 4) + 0x1f604);
  }
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  iVar4 = fn_00145b00(8,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar4 != 0) {
    uVar3 = fn_001133d4(iVar4,*(int *)(param_1 + 4) + 0x1fb20);
  }
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  iVar4 = fn_00145b00(8,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar4 != 0) {
    uVar3 = fn_00112ea0(iVar4,*(int *)(param_1 + 4) + 0x1fb88);
  }
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  piVar5 = (int *)fn_00145b00(8,&DAT_00812c8c);
  if (piVar5 != (int *)0x0) {
    *piVar5 = *(int *)(param_1 + 4) + 0x20418;
  }
  *(int **)(param_1 + 0x28) = piVar5;
  iVar4 = fn_00145b00(8,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar4 != 0) {
    uVar3 = fn_001133c0(iVar4,*(int *)(param_1 + 4) + 0x20f38);
  }
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  iVar4 = fn_00145b00(8,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar4 != 0) {
    uVar3 = fn_00112f8c(iVar4,*(int *)(param_1 + 4) + 0x20f58);
  }
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  piVar5 = (int *)fn_00145b00(4,&DAT_00812c8c);
  if (piVar5 != (int *)0x0) {
    *piVar5 = *(int *)(param_1 + 4) + 0x20fbc;
  }
  *(int **)(param_1 + 0x34) = piVar5;
  iVar4 = fn_00145b00(8,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar4 != 0) {
    uVar3 = fn_00112fa0(iVar4,*(int *)(param_1 + 4) + 0x20fe0);
  }
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  piVar5 = (int *)fn_00145b00(4,&DAT_00812c8c);
  if (piVar5 != (int *)0x0) {
    *piVar5 = *(int *)(param_1 + 4) + 0x34be8;
  }
  *(int **)(param_1 + 0x3c) = piVar5;
  piVar5 = (int *)fn_00145b00(4,&DAT_00812c8c);
  if (piVar5 != (int *)0x0) {
    *piVar5 = *(int *)(param_1 + 4) + 0x36a4c;
  }
  *(int **)(param_1 + 0x40) = piVar5;
  piVar5 = (int *)fn_00145b00(4,&DAT_00812c8c);
  if (piVar5 != (int *)0x0) {
    *piVar5 = *(int *)(param_1 + 4) + 0x36a98;
  }
  *(int **)(param_1 + 0x44) = piVar5;
  piVar5 = (int *)fn_00145b00(4,&DAT_00812c8c);
  if (piVar5 != (int *)0x0) {
    *piVar5 = *(int *)(param_1 + 4) + 0x36afc;
  }
  *(int **)(param_1 + 0x48) = piVar5;
  iVar4 = fn_00145b00(8,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar4 != 0) {
    uVar3 = fn_00113960(iVar4,*(int *)(param_1 + 4) + 0x36da0);
  }
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  iVar4 = fn_00145b00(8,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar4 != 0) {
    uVar3 = fn_0011394c(iVar4,*(int *)(param_1 + 4) + 0x36db8);
  }
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  iVar4 = fn_00145b00(8,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar4 != 0) {
    uVar3 = fn_0011332c(iVar4,*(int *)(param_1 + 4) + 0x377f0);
  }
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  iVar4 = fn_00145b00(8,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar4 != 0) {
    uVar3 = fn_001133ac(iVar4,*(int *)(param_1 + 4) + 0x37808);
  }
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  iVar4 = fn_00145b00(8,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar4 != 0) {
    uVar3 = fn_00113460(iVar4,*(int *)(param_1 + 4) + 0x37aa0);
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  iVar4 = fn_00145b00(8,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar4 != 0) {
    uVar3 = fn_00113b80(iVar4,*(int *)(param_1 + 4) + 0x36a2c);
  }
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  iVar4 = fn_00145b00(8,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar4 != 0) {
    uVar3 = fn_00113318(iVar4,*(int *)(param_1 + 4) + 0x37ab0);
  }
  *(undefined4 *)(param_1 + 100) = uVar3;
  iVar4 = fn_00145b00(8,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar4 != 0) {
    uVar3 = fn_00113d20(iVar4,*(int *)(param_1 + 4) + 0x37adc);
  }
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  fn_00144834(0x1f5);
  fn_00144834(0x1f7,1);
  fn_00144834(0x1f,1);
  fn_00144834(0x29e,1);
  fn_00144834(0x29f,1);
  fn_00111e94(*(undefined4 *)(param_1 + 0x28));
  fn_00111e44(*(undefined4 *)(param_1 + 0x28));
  fn_00111e0c(*(undefined4 *)(param_1 + 0x28),100);
  fn_00112e70(*(undefined4 *)(param_1 + 8),0xae);
  fn_001237e4(&local_90);
  iVar4 = (int)local_8c >> 0x1f;
  lVar1 = (ulonglong)local_8c * 0x26d694b3 +
          CONCAT44(iVar4 * 0x26d694b3,(int)((ulonglong)local_90 * 0x26d694b3 >> 0x20));
  uVar10 = (uint)((ulonglong)local_8c * 0x112e0be8);
  uVar11 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar6 = (int)((ulonglong)local_90 * 0x112e0be8 >> 0x20) +
          (uint)CARRY4((uint)lVar1,(uint)((ulonglong)local_90 * 0x112e0be8));
  uVar7 = uVar6 + uVar11;
  iVar8 = ((int)uVar11 >> 0x1f) + (uint)CARRY4(uVar6,uVar11) +
          iVar4 * 0x112e0be8 + (int)((ulonglong)local_8c * 0x112e0be8 >> 0x20) +
          (uint)CARRY4(uVar7,uVar10);
  uVar6 = uVar7 + uVar10 >> 0x1a | iVar8 * 0x40;
  iVar8 = iVar8 >> 0x1a;
  fn_00112e2c(*(undefined4 *)(param_1 + 8),iVar8,-iVar4 + uVar6,iVar8 + (uint)CARRY4(-iVar4,uVar6))
  ;
  iVar4 = DAT_00897804;
  if (DAT_00897804 != 0) {
    fn_00301a9c(&local_90,&DAT_0088fcb8,0x20);
    local_70 = **(undefined4 **)(*(int *)(iVar4 + 0xc) + 4);
    uStack_6c = 0;
    local_68 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 0x14) + 4) + 0x60);
    local_64 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 0x14) + 4) + 0x86);
    uStack_60 = 0;
    local_5c = 0;
    local_58 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x26c);
    local_54 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x26e);
    local_50 = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x270);
    local_4c = (int)*(short *)(*(int *)(*(int *)(DAT_00897804 + 8) + 4) + 0x272);
    fn_0013ef80(auStack_48,&local_90,0x48);
    fn_00122c48(*(undefined4 *)(DAT_00897804 + 0x60),auStack_48);
  }
  fn_001003cc(*(undefined4 *)(param_1 + 8),DAT_00892598);
  bVar2 = 0;
  do {
    fn_00112e48(*(undefined4 *)(param_1 + 8),bVar2,0);
    bVar2 = bVar2 + 1;
  } while (bVar2 < 5);
  fn_00112e3c(*(undefined4 *)(param_1 + 8),0xf1);
  fn_00112e58(*(undefined4 *)(param_1 + 8),1);
  fn_00112e64(*(undefined4 *)(param_1 + 8),1);
  fn_00113340(*(undefined4 *)(param_1 + 0x48));
  fn_00112f80(*(undefined4 *)(param_1 + 0x30),0);
  fn_00113bac(*(undefined4 *)(param_1 + 0x44),&DAT_0010ebdc);
  fn_00113ba0(*(undefined4 *)(param_1 + 0x44),0);
  fn_00113b94(*(undefined4 *)(param_1 + 0x44),0xf1);
  fn_001139b4(*(undefined4 *)(param_1 + 0x40),0);
  fn_001139c0(*(undefined4 *)(param_1 + 0x40),0);
  fn_00113980(*(undefined4 *)(param_1 + 0x40),0);
  fn_0011399c(*(undefined4 *)(param_1 + 0x40),0);
  fn_001139a8(*(undefined4 *)(param_1 + 0x40),0);
  fn_00113974(*(undefined4 *)(param_1 + 0x40),0);
  fn_0011398c(*(undefined4 *)(param_1 + 0x40));
  uVar3 = *(undefined4 *)(param_1 + 0x5c);
  iVar4 = 0;
  while( true ) {
    iVar8 = 0;
    uVar6 = (uint)(char)iVar4;
    if ((-1 < (int)uVar6) && (uVar6 < 7)) {
      iVar8 = *(int *)(&DAT_007c44f4 + uVar6 * 4);
    }
    iVar9 = 0;
    if (0 < iVar8) {
      do {
        fn_001223cc(uVar3,(int)(char)iVar4,iVar9,1);
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar8);
    }
    iVar4 = iVar4 + 1;
    if (6 < iVar4) break;
    if (iVar4 == 1) {
      iVar4 = 2;
    }
  }
  return;
}


