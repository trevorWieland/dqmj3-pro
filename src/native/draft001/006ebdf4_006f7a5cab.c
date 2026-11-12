/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 006ef0e8 .. 006f60ec.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


undefined4 fn_006ef0e8(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 2;
  }
  else if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



bool fn_006f0a88(int param_1,int param_2)

{
  return ((uint)*(ushort *)(param_1 + 4) & 1 << (param_2 - (uint)*(byte *)(param_1 + 6) & 0xff)) !=
         0;
}



bool fn_006f0b40(undefined4 param_1,int param_2)

{
  return param_2 == 3 || param_2 == 4;
}



byte fn_006f2f70(int param_1,uint param_2)

{
  return *(byte *)(param_1 + ((int)param_2 >> 3) + 0x98) >> (param_2 & 7) & 1;
}



byte fn_006f2f88(int param_1,uint param_2)

{
  return *(byte *)(param_1 + ((int)param_2 >> 3) + 0xdc) >> (param_2 & 7) & 1;
}



byte fn_006f4888(byte *param_1,uint param_2)

{
  return *param_1 >> (param_2 & 7) & 1;
}



int fn_006f4c08(int param_1)

{
  return param_1 + *(int *)(param_1 + 0x6c) * 3 + 0x50;
}



int fn_006f608c(int param_1)

{
  return **(int **)(param_1 + 0x90) + *(int *)(param_1 + 0x78) * 0xc;
}



bool fn_006f60ec(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x78) == *(int *)(param_2 + 0x78);
}

