/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 006a7610 .. 006aab48.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_006a7610(undefined4 *param_1)

{
  (**(code **)*param_1)(param_1);
  fn_0019d680(param_1,0x40);
  return;
}



uint fn_006a7cec(int param_1)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  cVar1 = *(char *)(uVar2 + 9);
  bVar3 = cVar1 == '\0';
  if (bVar3) {
    cVar1 = *(char *)(uVar2 + 10);
  }
  if (bVar3 && cVar1 == '\0') {
    bVar3 = *(char *)(uVar2 + 0xb) == '\0';
    if (bVar3) {
      uVar2 = (uint)*(byte *)(uVar2 + 0xc);
    }
    if (bVar3 && uVar2 == 0) {
      return uVar2;
    }
  }
  return 1;
}



int fn_006a7e28(int param_1)

{
  return (int)*(float *)(*(int *)(param_1 + 0x10) + 0x54);
}



int fn_006a7e3c(int param_1)

{
  return (int)*(float *)(*(int *)(param_1 + 0x10) + 0x58);
}



bool fn_006a7f8c(int *param_1)

{
  return *param_1 != -1;
}



undefined4 fn_006a89a8(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(*param_1 + 0x23);
  if ((cVar1 == '\x06' || cVar1 == '\a') || (cVar1 == '\b')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void fn_006a9dcc(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    return;
  }
  uVar1 = fn_0017fde4();
  fn_006ebdf4(uVar1,1);
  return;
}



undefined4 fn_006aab48(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0x22d) == '\v') && (*(int *)(param_1 + 0x438) != 5)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

