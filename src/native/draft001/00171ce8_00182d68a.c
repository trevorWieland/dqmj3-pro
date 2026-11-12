/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 00171ce8 .. 00175be4.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_00171ce8(int param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined1 *)(param_1 + 0x20) = 0;
    *(undefined1 *)(param_1 + 0x21) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}



int fn_00172bb8(void)

{
  int iVar1;
  
  iVar1 = fn_0017d8f8();
  iVar1 = fn_0017d8f8(iVar1 + 4);
  iVar1 = fn_0017d8f8(iVar1 + 4);
  iVar1 = fn_0017d8f8(iVar1 + 4);
  return iVar1 + -0xc;
}



int fn_001735bc(void)

{
  int iVar1;
  
  iVar1 = fn_00127a60();
  return iVar1 + 0x48;
}



int fn_00173d4c(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x18) + (param_2 + *(int *)(param_1 + 0x30)) * 8;
}



undefined4 fn_001743e8(undefined4 param_1)

{
  fn_001802bc(param_1,0);
  fn_001801a4(param_1,0);
  return 1;
}



void fn_001754f0(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  if (iVar1 == 0) {
    return;
  }
  fn_001667e0(iVar1 + 10,2);
  return;
}



void fn_0017591c(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  if (iVar1 == 0) {
    return;
  }
  fn_001667e0(iVar1 + 10,0x10);
  return;
}



undefined2 fn_00175944(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = fn_00182d34(*(undefined4 *)(param_1 + 8));
  if ((iVar2 < 0) || (iVar2 = fn_001793c4(param_2), iVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined2 *)(iVar2 + 4);
  }
  return uVar1;
}



undefined4 fn_001759f8(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 4) == '\x18') {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



char * fn_00175a48(int param_1)

{
  char *pcVar1;
  
  if (((*(char *)(param_1 + 4) == '\0') && (pcVar1 = *(char **)(param_1 + 8), pcVar1 != (char *)0x0)
      ) && (*pcVar1 == '\f')) {
    pcVar1 = pcVar1 + 4;
  }
  else {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



undefined4 fn_00175a90(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 4) == '\x19') {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



char * fn_00175be4(int param_1)

{
  char *pcVar1;
  
  if (((*(char *)(param_1 + 4) == '\0') && (pcVar1 = *(char **)(param_1 + 8), pcVar1 != (char *)0x0)
      ) && (*pcVar1 == '\x02')) {
    pcVar1 = pcVar1 + 4;
  }
  else {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}

