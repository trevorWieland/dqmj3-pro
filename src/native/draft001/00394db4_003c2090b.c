/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 003a745c .. 003c2090.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_003a745c(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x7d) = 0x10;
  iVar1 = fn_00353250(*(undefined4 *)(param_1 + 0x70),param_1 + 0x7d);
  if (iVar1 == 0) {
    fn_003a6d3c(param_1,param_1 + 0x7d,0x10,*(undefined1 *)(param_1 + 0x83),1,1);
  }
  return;
}



void fn_003a8cd4(undefined4 param_1,undefined4 param_2)

{
  fn_003a7964(param_1,0x10,1,0,param_2);
  return;
}



void fn_003a8da4(undefined4 param_1)

{
  fn_003a7964(param_1,0x14,0,0,1);
  return;
}



void fn_003a8dd0(int param_1)

{
  fn_0017f464(*(undefined4 *)(param_1 + 0x74),param_1 + 0x7d);
  return;
}



void fn_003ae894(int param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = -1;
  }
  *(int *)(param_1 + 0x19c) = param_2;
  return;
}



void fn_003ae8a4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1a8) = param_2;
  *(undefined4 *)(param_1 + 0x1a4) = param_2;
  return;
}



void fn_003af024(int param_1)

{
  float in_s0;
  
  *(float *)(param_1 + 0x1a0) = in_s0 * in_s0;
  return;
}



void fn_003b6738(int param_1)

{
  if (0 < *(int *)(param_1 + 0x30)) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  }
  return;
}



void fn_003b703c(int param_1,undefined1 *param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 0x1c) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



void fn_003b7584(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_001287b0();
  uVar1 = fn_0012d6b0(*(undefined4 *)(param_1 + 8),uVar1,0x80,5);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = fn_001287b0();
  uVar1 = fn_0012d6b0(*(undefined4 *)(param_1 + 0x18),uVar1,0x80,5);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return;
}



void fn_003b7d40(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_001287b0();
  uVar1 = fn_0012d6b0(*(undefined4 *)(param_1 + 8),uVar1,0x80,5);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = fn_001287b0();
  uVar1 = fn_0012d6b0(*(undefined4 *)(param_1 + 0x18),uVar1,0x80,5);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return;
}



undefined4 fn_003b80c8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = fn_003b7f00(param_1,param_2,param_4);
  if (param_3 != 0) {
    fn_003b7e40(param_1,uVar1);
  }
  return uVar1;
}



void fn_003b81f4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_001287b0();
  uVar1 = fn_0012d6b0(*(undefined4 *)(param_1 + 8),uVar1,0x80,5);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}



void fn_003b8220(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_00145ac0(*(undefined4 *)(param_1 + 0xc));
  fn_00173a34(*(undefined4 *)(param_1 + 0x14),uVar1);
  iVar2 = fn_00191228(*(undefined4 *)(param_1 + 0x14));
  if (iVar2 != 0) {
    fn_00185320(*(undefined4 *)(param_1 + 0x14));
  }
  iVar2 = fn_00191218(*(undefined4 *)(param_1 + 0x14));
  if (iVar2 == 0) {
    return;
  }
  fn_001852ac(*(undefined4 *)(param_1 + 0x14));
  return;
}



void fn_003c2090(undefined4 param_1)

{
  fn_0039ec68();
  fn_0039e774(param_1);
  fn_0039e5ac(param_1);
  fn_002c4100(param_1);
  return;
}

