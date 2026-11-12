/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 005b73f8 .. 005d9ae4.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_005b73f8(int param_1)

{
  *(undefined4 *)(param_1 + 0x100) = 0;
  memory_zero_aligned(param_1 + 0x10,0xf0);
  *(undefined1 *)(param_1 + 0x104) = 0;
  return;
}



undefined4 fn_005b85a0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < param_1) {
      uVar1 = 0xffffffff;
    }
    if (param_1 < param_2) {
      uVar1 = 1;
    }
  }
  return uVar1;
}



undefined4 fn_005baef4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_005bc9e4();
  iVar2 = fn_0023c2a8();
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(iVar2 + 0x2c);
  iVar2 = fn_0023c2a8();
  *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(iVar2 + 0x24);
  return uVar1;
}



void fn_005c19c4(int param_1,undefined4 param_2,undefined1 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined1 *)(param_1 + 0x10) = param_3;
  return;
}



void fn_005c4284(int param_1)

{
  fn_002c3d68();
  fn_006083b8(*(undefined4 *)(param_1 + 0xb0));
  fn_00689824(param_1,0);
  *(undefined1 *)(param_1 + 0xbc) = 1;
  return;
}



void fn_005c6074(int param_1)

{
  fn_00689828(param_1,1);
  fn_00327a7c(*(undefined4 *)(param_1 + 0x114));
  *(undefined1 *)(param_1 + 0x118) = 0;
  return;
}



void fn_005cef64(int param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xb4);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_2;
  }
  iVar1 = *(int *)(param_1 + 0xb8);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x44) = param_2 | *(byte *)(iVar1 + 0x44) & 0xfe;
  }
  return;
}



void fn_005cefa0(int param_1,int param_2)

{
  fn_00689824(param_1,param_2 == 0);
  *(int *)(param_1 + 0xe8) = param_2;
  return;
}



undefined4 fn_005d2154(int *param_1)

{
  int iVar1;
  
  fn_004484ac();
  fn_005d2254(param_1);
  iVar1 = (**(code **)(*param_1 + 0x11c))(param_1);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1[0x26] + 0x25) = 0;
  }
  fn_0022cdb4(param_1,1);
  return 1;
}



void fn_005d2950(int param_1)

{
  fn_003956e0();
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



void fn_005d2adc(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_00242984(param_2);
  *(undefined4 *)(param_1 + 0x544) = *(undefined4 *)(iVar1 + 8);
  return;
}



void fn_005d430c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_002f68a4();
  if (iVar1 == 1) {
    fn_002c3d68(param_1);
    fn_003ca138(param_1);
    return;
  }
  return;
}



void fn_005d4a3c(undefined4 param_1)

{
  fn_002c3d68();
  fn_003ca138(param_1);
  return;
}



void fn_005d6658(int param_1)

{
  fn_0074876c();
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  return;
}



void fn_005d9ae4(int param_1,int param_2)

{
  fn_00689824(param_1,param_2 == 0);
  *(int *)(param_1 + 0xd8) = param_2;
  return;
}

