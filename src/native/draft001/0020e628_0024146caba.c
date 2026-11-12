/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 0021b1b8 .. 00221620.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_0021b1b8(int param_1,byte param_2)

{
  *(byte *)(param_1 + 0x134) = param_2;
  *(byte *)(*(int *)(param_1 + 0x70) + 0x44) =
       param_2 | *(byte *)(*(int *)(param_1 + 0x70) + 0x44) & 0xfe;
  return;
}



void fn_0021c488(int param_1,byte param_2)

{
  *(byte *)(param_1 + 0x135) = param_2;
  *(byte *)(*(int *)(param_1 + 0x74) + 0x44) =
       param_2 | *(byte *)(*(int *)(param_1 + 0x74) + 0x44) & 0xfe;
  return;
}



void fn_0021c4a4(int param_1,byte param_2)

{
  *(byte *)(param_1 + 0x68f) = param_2;
  *(byte *)(*(int *)(param_1 + 0x84) + 0x44) =
       param_2 | *(byte *)(*(int *)(param_1 + 0x84) + 0x44) & 0xfe;
  return;
}



undefined4 fn_00221620(int *param_1)

{
  fn_00224908(param_1,1);
  (**(code **)(*param_1 + 0x44))(param_1,0,0,1);
  return 1;
}

