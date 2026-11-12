/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 00166258 .. 001666c4.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


int fn_00166258(int param_1)

{
  return param_1 + *(int *)(param_1 + 0x3c);
}



int fn_00166264(int param_1)

{
  return param_1 + *(int *)(param_1 + 0x2c);
}



int fn_00166470(int param_1)

{
  return param_1 + *(int *)(param_1 + 0x10);
}



int fn_001664a4(int param_1)

{
  return param_1 + *(int *)(param_1 + 0x10);
}



undefined4 fn_001664b0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 0xc + 0xc);
  }
  return uVar1;
}



bool fn_0016658c(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)fn_00176b44(*(undefined4 *)(param_1 + 0x3c));
  if (puVar1 != (undefined4 *)0x0) {
    *param_3 = *puVar1;
    uVar2 = fn_00176b8c(puVar1);
    param_3[1] = uVar2;
    *(undefined1 *)(param_3 + 2) = *(undefined1 *)(puVar1 + 1);
  }
  return puVar1 != (undefined4 *)0x0;
}



int fn_001666c4(int param_1)

{
  return param_1 + *(int *)(param_1 + 4);
}

