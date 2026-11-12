/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 004ede5c .. 00505c40.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_004ede5c(int param_1,undefined1 param_2)

{
  if (*(char *)(param_1 + 0x908) == '\0') {
    *(undefined1 *)(param_1 + 0x909) = param_2;
    *(undefined1 *)(param_1 + 0x908) = 1;
    return;
  }
  if (*(char *)(param_1 + 0x908) == '\x01') {
    *(undefined1 *)(param_1 + 0x909) = param_2;
  }
  return;
}



int fn_004eea84(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 10) {
    iVar1 = param_1 + param_2 * 0x68 + 8;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



int fn_004ef7ac(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0xb4) = 1;
  fn_00657410(param_1 + 0xa0);
  fn_00657904(param_1 + 0x10);
  iVar1 = fn_00657488(param_1 + 0xa0);
  iVar1 = fn_00657b88(iVar1 + -0x90);
  return iVar1 + -0x10;
}



void fn_004f0ab4(int param_1,int param_2,int *param_3)

{
  *param_3 = param_2;
  param_3[1] = *(int *)(param_2 + 4);
  **(undefined4 **)(param_2 + 4) = param_3;
  *(int **)(param_2 + 4) = param_3;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}



void fn_004f0b78(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_2;
  param_3[1] = (int)param_2;
  *param_3 = iVar1;
  *(int **)(*param_2 + 4) = param_3;
  *param_2 = (int)param_3;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}



void fn_004f0c04(int param_1)

{
  *(int *)(param_1 + 4) = param_1 + 4;
  *(int *)(param_1 + 8) = param_1 + 4;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



void fn_004f161c(int param_1,undefined4 param_2)

{
  fn_001782b8(param_1 + 0x21,param_2,0x3f);
  return;
}



undefined4 fn_004f74e4(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  return 0;
}



void fn_004fca08(int param_1,uint param_2)

{
  if ((param_2 < 0xc) && ((uint)*(byte *)(param_2 + param_1 + 0x60) < *(uint *)(param_1 + 0x6c))) {
    *(undefined1 *)(param_2 + param_1 + 0x60) = 0xff;
  }
  return;
}



void fn_00500560(int param_1,uint param_2)

{
  if (*(byte *)(param_1 + 0x78) == param_2) {
    *(undefined1 *)(param_1 + 0x7b) = 1;
  }
  return;
}



void fn_005059c0(int param_1)

{
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  fn_004f2a00();
  return;
}



undefined1 fn_005059d4(int param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x9c) == '\x04') &&
     (cVar1 = *(char *)(param_1 + 0x88), (cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04')) {
    return 1;
  }
  return 0;
}



void fn_00505a04(undefined4 param_1,undefined4 param_2)

{
  fn_00505734(param_1,param_2,1);
  return;
}



undefined1 fn_00505aec(int param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x9c) == '\x05') &&
     (cVar1 = *(char *)(param_1 + 0x88), (cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04')) {
    return 1;
  }
  return 0;
}



undefined1 fn_00505c40(int param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x9c) == '\x01') &&
     (cVar1 = *(char *)(param_1 + 0x88), (cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04')) {
    return 1;
  }
  return 0;
}

