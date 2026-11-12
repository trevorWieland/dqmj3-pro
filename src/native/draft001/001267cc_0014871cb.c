/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 00140e3c .. 0014871c.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_00140e3c(int param_1,undefined4 param_2,uint param_3)

{
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined1 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x17c) = param_2;
  *(uint *)(param_1 + 0x180) = param_3 >> 2;
  fn_00158514(param_1,param_1 + 0x34,0x20);
  fn_00158514(param_1 + 0xb4,param_1 + 0xe8,0x21);
  *(undefined1 *)(param_1 + 0x18d) = 1;
  return;
}



undefined4 fn_001411b8(int param_1,undefined4 *param_2)

{
  if (*(undefined4 **)(param_1 + 0x170) == (undefined4 *)0x0) {
    *(undefined4 **)(param_1 + 0x16c) = param_2;
  }
  else {
    **(undefined4 **)(param_1 + 0x170) = param_2;
  }
  *(undefined4 **)(param_1 + 0x170) = param_2;
  *param_2 = 0;
  return *(undefined4 *)(param_1 + 0x174);
}



int fn_00141340(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) != 0) {
      fn_0018a33c();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return param_1;
}



void fn_0014136c(int param_1)

{
  fn_0013c500(param_1 + 0x1c4);
  return;
}



int fn_00141544(undefined4 param_1,int param_2)

{
  return (param_2 + 1) * 0x1b8;
}



int fn_001416fc(undefined4 param_1,int param_2)

{
  return param_2 * 0x60;
}



void fn_0014224c(undefined4 *param_1)

{
  if (*(char *)(param_1 + 10) != '\0') {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 10) = 0;
  }
  return;
}



void fn_001432a0(int param_1)

{
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  *(undefined1 *)(param_1 + 10) = 3;
  *(undefined1 *)(param_1 + 0xb) = 5;
  *(undefined1 *)(param_1 + 0x12) = 0x19;
  *(undefined1 *)(param_1 + 0x13) = 0x54;
  return;
}



bool fn_00143de8(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00154184(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  return iVar1 != 0;
}



bool fn_00143e04(int param_1)

{
  int iVar1;
  
  iVar1 = fn_001541ec(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  return iVar1 != 0;
}



bool fn_00143e20(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0015427c(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  return iVar1 != 0;
}



void fn_00145b00(undefined4 param_1)

{
  fn_001287dc(param_1,4);
  return;
}



void fn_00146df8(int param_1,int param_2)

{
  *(uint *)(*(int *)(param_1 + 0x34) + 8) =
       ((*(int *)(param_2 + 4) + *(int *)(param_2 + 8)) - *(int *)(param_1 + 0x34)) - 0x18U >> 3;
  fn_00157bfc(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 4;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



void fn_00148700(undefined4 param_1,undefined4 param_2)

{
  fn_0015b054();
  fn_0015b064(param_2);
  fn_0015b0dc();
  return;
}



void fn_0014871c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x70) = param_2;
  *(undefined1 *)(param_1 + 0x6c) = 1;
  return;
}

