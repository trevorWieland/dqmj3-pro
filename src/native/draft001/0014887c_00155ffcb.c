/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 00154a48 .. 00155ffc.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_00154a48(int param_1,undefined1 param_2)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0xc) + 200) = param_2;
  }
  return;
}



void fn_00154c7c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  if (iVar1 == 0) {
    return;
  }
  fn_001667b8(iVar1 + 0xd,param_4);
  return;
}



void fn_00154ca8(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  if (iVar1 == 0) {
    return;
  }
  fn_001667e0(iVar1 + 10,0x20);
  return;
}



void fn_00154e38(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  if (iVar1 == 0) {
    return;
  }
  fn_001667b8(iVar1 + 0x58,param_4);
  return;
}



void fn_00154e64(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  if (iVar1 == 0) {
    return;
  }
  fn_001667e0(iVar1 + 10,0x80);
  return;
}



void fn_00154f28(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  if (iVar1 == 0) {
    return;
  }
  fn_001667e0(iVar1 + 10,0x800);
  return;
}



void fn_00155348(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  if (iVar1 == 0) {
    return;
  }
  fn_001667e0(iVar1 + 10,0x1000);
  return;
}



void fn_00155a74(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  if (iVar1 == 0) {
    return;
  }
  fn_001667b8(iVar1 + 0xc,param_4);
  return;
}



void fn_00155aa0(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  if (iVar1 == 0) {
    return;
  }
  fn_001667e0(iVar1 + 10,0x40);
  return;
}



void fn_00155ac8(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  if (iVar1 == 0) {
    return;
  }
  fn_001667e0(iVar1 + 10,1);
  return;
}



void fn_00155c70(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  if (iVar1 == 0) {
    return;
  }
  fn_001667e0(iVar1 + 10,8);
  return;
}



void fn_00155f2c(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  if (iVar1 == 0) {
    return;
  }
  fn_001667e0(iVar1 + 10,0x2000);
  return;
}



void fn_00155ffc(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  if (iVar1 == 0) {
    return;
  }
  fn_001667e0(iVar1 + 10,4);
  return;
}

