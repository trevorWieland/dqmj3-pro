/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 00175c14 .. 0017cec8.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


char * fn_00175c14(int param_1)

{
  char *pcVar1;
  
  if (((*(char *)(param_1 + 4) == '\0') && (pcVar1 = *(char **)(param_1 + 8), pcVar1 != (char *)0x0)
      ) && (*pcVar1 == '\x10')) {
    pcVar1 = pcVar1 + 4;
  }
  else {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



int fn_00176b80(int param_1)

{
  return param_1 + *(int *)(param_1 + 0xc);
}



int fn_00176bac(ushort *param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)*param_1;
  bVar3 = uVar2 == 0;
  if (!bVar3) {
    uVar2 = uVar2 - 0x220c;
    bVar3 = uVar2 == 0;
  }
  if ((bVar3) || (uVar2 != 1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)param_1 + *(int *)(param_1 + 2);
  }
  return iVar1;
}



undefined4 fn_00178f9c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_00183970(param_1,*(undefined4 *)(param_1 + 0x38),param_1 + 0x38,param_2);
  return *(undefined4 *)(iVar1 + 0x10);
}



undefined4 fn_0017ce54(int param_1,int param_2,int param_3)

{
  *(undefined1 *)(param_1 + param_2 * 2 + param_3) = 0;
  return 1;
}



void fn_0017cec8(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  param_1 = param_1 + param_2 * 4;
  *param_3 = *(undefined4 *)(param_1 + 0x14);
  *param_4 = *(undefined4 *)(param_1 + 0x1c);
  return;
}

