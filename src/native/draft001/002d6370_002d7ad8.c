/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 002d6370 .. 002d7ad8.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_002d6370(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined1 *)(param_1 + 4) = 6;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  return;
}



void fn_002d6388(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



void fn_002d6398(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined1 *)(param_1 + 4) = 0x11;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  return;
}



void fn_002d63b0(int param_1,undefined2 *param_2)

{
  *(undefined1 *)(param_1 + 4) = 0x10;
  *(undefined2 *)(param_1 + 8) = *param_2;
  return;
}



void fn_002d63c4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined1 *)(param_1 + 4) = 0x19;
  return;
}



void fn_002d63d4(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined1 *)(param_1 + 4) = 4;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  return;
}



void fn_002d63ec(int param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 4) = 8;
  fn_0017821c(param_1 + 8,param_2,0x58);
  return;
}



void fn_002d6400(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined1 *)(param_1 + 4) = 0x1a;
  return;
}



void fn_002d6460(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined1 *)(param_1 + 4) = 5;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  return;
}



void fn_002d6478(int param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 4) = 1;
  fn_0017821c(param_1 + 8,param_2,0x48);
  return;
}



void fn_002d648c(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 4) = 3;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}



void fn_002d64b0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined1 *)(param_1 + 4) = 3;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  return;
}



void fn_002d64c8(int param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 4) = 9;
  fn_0017821c(param_1 + 8,param_2,0x58);
  return;
}



void fn_002d64dc(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined1 *)(param_1 + 4) = 0x16;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  return;
}



void fn_002d64f4(int param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 4) = 10;
  fn_0017821c(param_1 + 8,param_2,0x58);
  return;
}



void fn_002d6508(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined1 *)(param_1 + 4) = 0xc;
  return;
}



void fn_002d6518(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined1 *)(param_1 + 4) = 0x23;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  return;
}



void fn_002d6530(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined1 *)(param_1 + 4) = 0x17;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  return;
}



void fn_002d6548(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined1 *)(param_1 + 4) = 0xb;
  return;
}



void fn_002d6558(int param_1,undefined2 *param_2)

{
  *(undefined1 *)(param_1 + 4) = 0x12;
  *(undefined2 *)(param_1 + 8) = *param_2;
  return;
}



void fn_002d656c(int param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 4) = 0x15;
  fn_0017821c(param_1 + 8,param_2,0x4c);
  return;
}



void fn_002d6580(int param_1,undefined4 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 4) = param_3;
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}



void fn_002d658c(int param_1,undefined2 *param_2)

{
  *(undefined2 *)(param_1 + 8) = *param_2;
  return;
}



bool fn_002d6e84(int param_1)

{
  return param_1 == 0x18b;
}



void fn_002d7ac8(void)

{
  fn_006c4288();
  fn_0022f750();
  return;
}



void fn_002d7ad8(void)

{
  fn_006c4304();
  fn_0022f750();
  return;
}

