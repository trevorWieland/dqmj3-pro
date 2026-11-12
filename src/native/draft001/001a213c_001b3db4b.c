/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 001ac040 .. 001b3db4.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_001ac040(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xe0) + *(int *)(param_1 + 0xe4) * 4 + -4);
  fn_001ac354(uVar1);
  fn_0019d680(uVar1,0xf4);
  *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + -1;
  return;
}



void fn_001acefc(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x40) != 1) && (iVar2 = 0, 0 < *(int *)(param_1 + 8))) {
    do {
      iVar1 = *(int *)(param_1 + iVar2 * 4);
      if (iVar1 != 0) {
        fn_001ac8ac(iVar1,*(undefined4 *)(param_1 + 0x40));
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  return;
}



int fn_001adef4(void)

{
  int iVar1;
  
  iVar1 = fn_001af8ec();
  return (iVar1 * 0x34 + 0x1fU & 0xffffffe0) + 0x780;
}



int fn_001adf18(int param_1,int param_2)

{
  return (param_2 * 0x60 + 0x18) * (param_1 + -1);
}



int fn_001adf30(int param_1)

{
  return param_1 * 0x70 + 0x18;
}



undefined4 fn_001ae614(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (*(int *)(param_1 + param_2 * 4 + 0x70) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 fn_001ae638(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((param_1 < 100) && (iVar1 = fn_001b84b8(param_1,1), iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_001aff00(byte *param_1)

{
  undefined4 uVar1;
  
  if (((*param_1 & 0x10) == 0) && ((*param_1 & 0x40) != 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void fn_001b1104(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00192114();
  *(undefined4 *)(iVar1 + 0xd8) = param_1;
  return;
}



void fn_001b14a4(undefined1 param_1)

{
  int iVar1;
  
  iVar1 = fn_00192114();
  *(undefined1 *)(iVar1 + 0xc0) = param_1;
  return;
}



void fn_001b1e58(undefined4 param_1,undefined4 param_2)

{
  fn_00526a38(param_1,param_2,0x70,0xc,10);
  return;
}



void fn_001b1e74(undefined4 param_1,undefined4 param_2)

{
  fn_00526a84(param_1,param_2,0x70,0xc,10);
  return;
}



void fn_001b21dc(undefined4 param_1,undefined4 param_2)

{
  fn_00526720(param_1,param_2,0x60,0xc,10);
  return;
}



void fn_001b21f8(undefined4 param_1,undefined4 param_2)

{
  fn_0052676c(param_1,param_2,0x60,0xc,10);
  return;
}



undefined4 fn_001b3db4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_0074236c(param_1,1);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

