/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 003c3168 .. 003f8160.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_003c3168(int param_1)

{
  fn_003979d0();
  fn_003e6b44(param_1);
  *(undefined4 *)(param_1 + 0x100) = 0;
  return;
}



void fn_003ca418(int param_1,undefined1 param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 0x5c) = param_2;
  *(undefined4 *)(param_1 + 0x58) = 1;
  *(undefined4 *)(param_1 + 0x60) = param_3;
  return;
}



void fn_003d0ae8(int param_1,byte param_2,int param_3)

{
  int iVar1;
  
  *(byte *)(*(int *)(param_1 + 0x10) + 0x44) =
       *(byte *)(*(int *)(param_1 + 0x10) + 0x44) & 0xfe | param_2;
  *(byte *)(*(int *)(param_1 + 0x18) + 0x44) =
       *(byte *)(*(int *)(param_1 + 0x18) + 0x44) & 0xfe | param_2;
  *(byte *)(*(int *)(param_1 + 0x1c) + 0x44) =
       *(byte *)(*(int *)(param_1 + 0x1c) + 0x44) & 0xfe | param_2;
  if (*(char *)(param_1 + 0x2c) == '\x01') {
    *(byte *)(*(int *)(param_1 + 0x20) + 0x44) =
         param_2 | *(byte *)(*(int *)(param_1 + 0x20) + 0x44) & 0xfe;
  }
  else {
    *(byte *)(*(int *)(param_1 + 0x20) + 0x44) = *(byte *)(*(int *)(param_1 + 0x20) + 0x44) & 0xfe;
  }
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_1 + 0x30);
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  }
  return;
}



void fn_003d0b80(int param_1,byte param_2)

{
  *(byte *)(*(int *)(param_1 + 8) + 0x44) = *(byte *)(*(int *)(param_1 + 8) + 0x44) & 0xfe | param_2
  ;
  *(byte *)(*(int *)(param_1 + 0xc) + 0x44) =
       param_2 | *(byte *)(*(int *)(param_1 + 0xc) + 0x44) & 0xfe;
  return;
}



bool fn_003d2290(int param_1)

{
  return 0 < (short)(*(int *)(*(int *)(param_1 + 0x40) + 8) - *(int *)(*(int *)(param_1 + 0x40) + 4)
                    >> 1);
}



void fn_003d46b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  fn_003d46d4(param_1,param_1,param_2,param_3,param_4);
  return;
}



void fn_003d4df8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  fn_003d46d4(param_1,param_1 + 0xc,param_2,param_3,param_4);
  return;
}



void fn_003d5ddc(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_005f65ec();
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  fn_00107aac(*(undefined4 *)(*(int *)(param_1 + 8) + 0x10));
  return;
}



void fn_003d7ba8(void)

{
  fn_001dc088();
  fn_002feef8();
  return;
}



void fn_003db960(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != -1) {
    iVar1 = param_1 + param_2 * 4;
    *(undefined4 *)(iVar1 + 0xd0) = 0;
    *(undefined4 *)(iVar1 + 0xd8) = 0;
    memory_zero_aligned(param_1 + param_2 * 0x60 + 0xc,0x60);
    return;
  }
  iVar1 = 0;
  do {
    fn_003db960(param_1,iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}



void fn_003dcc90(int param_1)

{
  memory_zero_aligned(param_1 + 0x10,0x8c);
  memory_zero_aligned(param_1 + 0x9c,0x460);
  return;
}



void fn_003dcccc(int param_1,undefined1 *param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 0x1c) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



void fn_003dcce4(int param_1,undefined1 *param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 0x1c) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = 1;
  return;
}



void fn_003dce58(int param_1,undefined4 param_2,undefined4 param_3)

{
  fn_00176fb0(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = 6;
  return;
}



void fn_003dcecc(int param_1,undefined2 *param_2,undefined4 param_3)

{
  *(undefined2 *)(param_1 + 0x1c) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = 7;
  return;
}



void fn_003dd770(int param_1,int *param_2,int param_3)

{
  if (param_2 != (int *)0x0) {
    param_3 = *param_2;
  }
  if (param_2 != (int *)0x0 && param_3 != 0) {
    *(int **)(param_1 + 0x1c) = param_2;
    *(undefined1 *)(param_1 + 0x20) = 1;
    *(undefined1 *)(param_1 + 0x21) = 1;
  }
  return;
}



void fn_003e1454(int *param_1)

{
  (**(code **)(*param_1 + 0x124))(param_1);
  fn_003e1abc(param_1);
  fn_0039be60(param_1);
  fn_0022ccb4(param_1);
  fn_0039bcdc(param_1);
  return;
}



void fn_003e6b34(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xe4) = param_2;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  return;
}



void fn_003e78a0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_006ba274();
  fn_0039e5e0(param_1);
  fn_0039e7c4(param_1,uVar1);
  fn_0039f458(param_1,uVar1);
  return;
}



void fn_003e8074(int param_1)

{
  fn_002c4100();
  *(undefined4 *)(param_1 + 0xb0) = 0;
  return;
}



void fn_003ef3e8(int param_1,int param_2,int param_3,byte param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + param_2 * 8 + param_3 * 4 + 0x78);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_4;
  return;
}



void fn_003f23ac(int param_1)

{
  uint uVar1;
  
  uVar1 = fn_006f6ab4();
  if ((*(int *)(param_1 + 0xb4) != 0) && ((uVar1 & 0x200000) == 0)) {
    *(undefined1 *)(*(int *)(param_1 + 0xb4) + 0x18) = 1;
  }
  return;
}



void fn_003f23d4(int param_1)

{
  uint uVar1;
  
  uVar1 = fn_006f6ab4();
  if ((*(int *)(param_1 + 0xb4) != 0) && ((uVar1 & 0x100000) == 0)) {
    *(undefined1 *)(*(int *)(param_1 + 0xb4) + 0x18) = 2;
  }
  return;
}



undefined4 fn_003f2e60(int param_1)

{
  fn_0034329c();
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 1;
}



undefined4 fn_003f4fe0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_006b4f58(*(undefined4 *)(param_1 + 0x14));
  fn_00257c9c(*(undefined4 *)(param_1 + 0x14));
  return uVar1;
}



void fn_003f70d8(int param_1,int param_2,undefined4 *param_3)

{
  param_1 = param_1 + param_2 * 0x12;
  *(undefined4 *)(param_1 + 0x70) = *param_3;
  *(undefined4 *)(param_1 + 0x74) = param_3[1];
  *(undefined4 *)(param_1 + 0x78) = param_3[2];
  *(undefined4 *)(param_1 + 0x7c) = param_3[3];
  *(undefined2 *)(param_1 + 0x80) = *(undefined2 *)(param_3 + 4);
  return;
}



void fn_003f7120(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  memory_zero_aligned(param_1 + 0xc,100);
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  return;
}



void fn_003f8160(void)

{
  int iVar1;
  
  iVar1 = fn_003f8258();
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined1 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  return;
}

